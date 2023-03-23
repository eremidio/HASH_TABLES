//UM ARQUIVO CONTENDO UMA CLASSE DE HASH_TABLE DE TAMANHO FIXO

/*CABEÇALHO*/
#pragma once
#include<cmath>
#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
#include<exception>
#include"hash_function.hpp"
#include"hash_global_variables.hpp"

//*****************************************************************************************************************************
//CLASSE DOS NÓS
template<typename T>
struct hash_node{
std::string key;
T value;
                };


//CLASSE DE HASH TABLES
template<typename T>
struct hash_table{
T null_value;//VALOR PADRÃO PARA INDICAR QUE UMA ENTRADA PODE SER SOBRESCRITA
long long int size;//TAMANHO
long long int entries;//NÚMERO DE ENTRADAS
long double load_factor;//FATOR DE OCUPAÇÃO
long long int bucket;//INDEX
hash_node<T>* table;//HASH_TABLE
std::string *key_array;//ARRAY DE CHAVES

void create(long long int);//CRIAR UMA HASH TABLE
void set_null_value(T);//
void recalculate_index();//FUNÇÃO PARA REMOVER COLISÃO
void insert(std::string, T);
void remove (std::string);
T    get(std::string);
void show(std::string);
void clear();//LIMPAR  O CACHÊ DE MEMÓRIA
                 };

//INSTANCIANDO UMA HASH TABLE
template<typename T>
void hash_table<T>::create(long long int a){
entries = 0;
bucket=0;
size=a;
//CHECANDO A ALOCAÇÃO DE MEMÓRIA PARA A HASH TABLE
try{
table =(hash_node<T>*)malloc(size*sizeof(hash_node<T>));
key_array =(std::string*)malloc(size*sizeof(std::string));
   }
catch(std::exception& e){
std::cout<<e.what()<<"\n";
                        };
                                           };

//LIMPANDO O CACHÊ DE MEMÓRIA
template<typename T>
void hash_table<T>::clear(){
free(table);
free(key_array);
                           };

//FUNÇÃO QUE DEFINE UM VALOR PADRÃO PARA INDICAR QUE UMA ENTRADA PODE SER SOBRESCRITA
template<typename T>
void hash_table<T>::set_null_value(T a){
null_value=a;
                                       };

//FUNÇÃO QUE RECALCULA INDEXES PARA AS HASH TABLES EM CASO DE COLISÃO
template<typename T>
void hash_table<T>::recalculate_index(){
bucket = pow(bucket, 2)+pow(bucket, 3);
bucket = bucket%size;
                                       };

//INSERÇÃO DE DADOS NA HASH TABLE
template<typename T>
void hash_table<T>::insert(std::string input_key, T data){
bucket=hash_function(input_key)%size;

//CHECANDO SE O INDEX ESTÁ VAZIO
insert:
if(key_array[bucket].empty()){
key_array[bucket]=input_key;
table[bucket].key=input_key;
table[bucket].value=data;
entries++;
                             }
else{
recalculate_index();
goto insert;
    };

//CALCULADO O FATOR DE OCUPAÇÃO
load_factor=entries/size;
if(load_factor>0.8)
std::cout<<"Fator de ocupação crítica atingido!!!\n"; 
                                                         };


//FUNÇÃO QUE RETORNA O VALOR ASSOCIADO A UMA CHAVE
template<typename T>
T hash_table<T>::get(std::string input_key){
bucket=hash_function(input_key)%size;
return table[bucket].value;
                                           };

//FUNÇÃO QUE EXIBE UMA ENTRADA DA HASH TABLE
template<typename T>
void hash_table<T>::show(std::string input_key){
bucket=hash_function(input_key)%size;

// CASO A ENTRADA NÃO EXISTA
if(key_array[bucket]!=input_key){
std::cout<<"Entrada não encontrada.\n";
return;
                                  };

//EXIBINDO UMA ENTRADA COMPLETA DA HASH TABLE
std::cout<<"Chave: "<<input_key<<", Valor: "<<table[bucket].value<<"\n";
                                               };

//FUNÇÃO PARA REMOVER UM ELEMENTO DA HASH TABLE
template<typename T>
void hash_table<T>::remove(std::string input_key){
bucket=hash_function(input_key)%size;
key_array[bucket].clear();
table[bucket].key.clear();
table[bucket].value=null_value;

                                                 };

//*****************************************************************************************************************************
//FUNÇÃO PARA CONVERTER VARIÁVEIS DE TIPOS ALEATÓRIOS EM STRINGS (CHAVES PARA AS HASH TABLES)
template<typename T>
std::string generate_key(T data){
std::string hash_key;
hash_key=std::to_string(data);
return hash_key;
                                };
