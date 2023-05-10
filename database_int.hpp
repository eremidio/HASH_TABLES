//VAMOS CRIAR UMA CLASSE DE HASH TABLES QUE REGISTRA ENTRADAS DE NÚMEROS INTEIROS ASSOCIADAS A CHAVES

/*CABEÇALHO*/
#pragma once
#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>
#include"hash_table_project.hpp"

//****************************************************************************************************************************
//CLASSE DE HASH TABLES QUE ALOCAM ENTRADAS DE NÚMEROS INTEIROS

struct int_db{
//MEMBROS DA CLASSE
hash_table<long long int> int_table;//HASH TABLE PARA ALOCAR NÚMEROS
long long int null_int=0;//VALOR PADRÃO PARA UMA CHAVE REMOVIDA
//MÉTODOS DA CLASSE
void create_int(long long int);//FUNÇÃO QUE CRIA UMA HASH TABLE PARA ALOCAR NÚMEROS INTEIROS
void clear_int();//FUNÇÃO QUE LIMPA O CACHÊ DE MEMÓRIA
void resize_int();//FUNÇÃO QUE REAJUSTA TABELA DE NÚMEROS INTEIROS
void insert_int(std::string, long long int);//FUNÇÃO QUE INSERE UMA ENTRADA DE NÚMERO INTEIRO
void remove_int(std::string);//FUNÇÃO QUE REMOVE UMA ENTRADA NA HASH TABLE DE NÚMEROS INTEIROS
long long int get_int(std::string);//FUNÇÃO QUE RETORNA O NÚMERO INTEIRO ASSOCIADA A UMA CHAVE
void show_int(std::string);//FUNÇÃO QUE EXIBE UMA ENTRADA COMPLETA DA HASH TABLE CONTENDO NÚMEROS INTEIROS
                  };

//****************************************************************************************************************************
//MÉTODOS DA CLASSE
//CONSTRUTOR E DETRUIDOR
void int_db::create_int(long long int a){
int_table.create(a);
int_table.set_null_value(null_int);
                                          };

void int_db::clear_int(){
int_table.clear();
                          };

//FUNÇÃO QUE INSERE UMA ENTRADA NA HASH TABLE
void int_db::insert_int(std::string key, long long int value){
int_table.insert(key, value);
                                                             };

//FUNÇÃO QUE REMOVE UMA ENTRADA DA HASH TABLE DE TEXTO
void int_db::remove_int(std::string key){
int_table.remove(key);
                                     };

//FUNÇÃO QUE REAJUSTA O TAMANHO DA HASH TABLE QUE ALOCA TEXTO
void int_db::resize_int(){
int_table.resize();
                         };

//FUNÇÃO QUE RETORNAM OS VALORES ASSOCIADOS UMA DADA CHAVE
long long int int_db::get_int(std::string key){
return int_table.get(key);
                                              };

void int_db::show_int(std::string key){
int_table.show(key);
                                      };
