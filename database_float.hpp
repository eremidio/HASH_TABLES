//VAMOS CRIAR UMA CLASSE DE HASH TABLES QUE REGISTRA ENTRADAS DE FLOAT POINTING NUMBERS ASSOCIADAS A CHAVES

/*CABEÇALHO*/
#pragma once
#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<exception>
#include"hash_table_project.hpp"

//****************************************************************************************************************************
//CLASSE DE HASH TABLES QUE ALOCAM ENTRADAS DE FLOAT POINTING NUMBERS

struct float_db{
//MEMBROS DA CLASSE
hash_table<long double> float_table;//HASH TABLE PARA ALOCAR FLOAT POINTING NUMBERS
long double null_float=0.0;//VALOR PADRÃO PARA UMA CHAVE REMOVIDA
int decimal_precision;//PRECISÃO COM QUE VALORES ASSOCIADOS A CHAVES DECIMAIS SERÃO EXIBIDOS
//MÉTODOS DA CLASSE
void set_precision(int);//FUNÇÃO QUE AJUSTA A PRECISÃO DECIMAL COM A QUAL OS VALORES ASSOCIADOS A UMA CHAVE SERÃO EXIBIDOS
void create_float(long long int);//FUNÇÃO QUE CRIA UMA HASH TABLE PARA ALOCAR FLOAT POINTING NUMBERS
void clear_float();//FUNÇÃO QUE LIMPA O CACHÊ DE MEMÓRIA
void resize_float();//FUNÇÃO QUE REAJUSTA TABELA DE FLOAT POINTING NUMBERS
void insert_float(std::string, long double);//FUNÇÃO QUE INSERE UMA ENTRADA DE FLOAT POINTING NUMBERS
void remove_float(std::string);//FUNÇÃO QUE REMOVE UMA ENTRADA NA HASH TABLE DE FLOAT POINTING NUMBERS
long double get_float(std::string);//FUNÇÃO QUE RETORNA O FLOAT POINTING NUMBER ASSOCIADA A UMA CHAVE
void show_float(std::string);//FUNÇÃO QUE EXIBE UMA ENTRADA COMPLETA DA HASH TABLE CONTENDO FLOAT POINTING NUMBERs
                  };

//****************************************************************************************************************************
//MÉTODOS DA CLASSE
//CONSTRUTOR E DETRUIDOR
void float_db::create_float(long long int a){
float_table.create(a);
float_table.set_null_value(null_float);
                                          };

void float_db::clear_float(){
float_table.clear();
                          };

//FUNÇÃO QUE INSERE UMA ENTRADA NA HASH TABLE
void float_db::insert_float(std::string key, long double value){
float_table.insert(key, value);
                                                             };

//FUNÇÃO QUE REMOVE UMA ENTRADA DA HASH TABLE DE TEXTO
void float_db::remove_float(std::string key){
float_table.remove(key);
                                     };

//FUNÇÃO QUE REAJUSTA O TAMANHO DA HASH TABLE QUE ALOCA TEXTO
void float_db::resize_float(){
float_table.resize();
                             };

//FUNÇÕES QUE RETORNAM OS VALORES ASSOCIADOS UMA DADA CHAVE
long double float_db::get_float(std::string key){
return float_table.get(key);
                                                };

void float_db::set_precision(int a){
decimal_precision=a;
                                   };

void float_db::show_float(std::string key){
try{
std::cout<<"Chave: "<<key <<", Valor: "<<std::setprecision(decimal_precision)<<get_float(key)<<"\n";
   }
catch(std::exception& e){
std::cout<<"Entrada não encontrada!\n";
std::cout<<e.what()<<"\n";
                        };
                                          };
