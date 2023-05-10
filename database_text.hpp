//VAMOS CRIAR UMA CLASSE DE HASH TABLES QUE REGISTRA ENTRADAS DE TEXTO ASSOCIADAS A CHAVES

/*CABEÇALHO*/
#pragma once
#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>
#include"hash_table_project.hpp"

//****************************************************************************************************************************
//CLASSE DE HASH TABLES QUE ALOCAM ENTRADAS DE TEXTO

struct text_db{
//MEMBROS DA CLASSE
hash_table<std::string> text_table;//HASH TABLE PARA ALOCAR ENTRADAS DE TEXTO
std::string null_text="";//VALOR PADRÃO PARA UMA CHAVE REMOVIDA
//MÉTODOS DA CLASSE
void create_text(long long int);//FUNÇÃO QUE CRIA UMA HASH TABLE PARA ALOCAR ENTRADAS DE TEXTO
void clear_text();//FUNÇÃO QUE LIMPA O CACHÊ DE MEMÓRIA
void resize_text();//FUNÇÃO QUE REAJUSTA A DATA E A HORA EM QUE UMA ENTRADA FOI REGISTRADA
void insert_text(std::string, std::string);//FUNÇÃO QUE INSERE UMA ENTRADA DE TEXTO
void remove_text(std::string);//FUNÇÃO QUE REMOVE UMA ENTRADA NA HASH TABLE DE NOMES E DATAS
std::string get_text(std::string);//FUNÇÃO QUE RETORNA UMA ENTRADA DE TEXTO ASSOCIADA A UMA CHAVE
void show_text(std::string);//FUNÇÃO QUE EXIBE UMA ENTRADA COMPLETA DA HASH TABLE CONTENDO ENTRADAS DE TEXTO 

                  };

//****************************************************************************************************************************
//MÉTODOS DA CLASSE
//CONSTRUTOR E DETRUIDOR
void text_db::create_text(long long int a){
text_table.create(a);
text_table.set_null_value(null_text);
                                          };

void text_db::clear_text(){
text_table.clear();
                          };

//FUNÇÃO QUE INSERE UMA ENTRADA NA HASH TABLE
void text_db::insert_text(std::string key, std::string value){
text_table.insert(key, value);
                                                             };

//FUNÇÃO QUE REMOVE UMA ENTRADA DA HASH TABLE DE TEXTO
void text_db::remove_text(std::string key){
text_table.remove(key);
                                     };

//FUNÇÃO QUE REAJUSTA O TAMANHO DA HASH TABLE QUE ALOCA TEXTO
void text_db::resize_text(){
text_table.resize();
                           };

//FUNÇÃO QUE RETORNAM OS VALORES ASSOCIADOS UMA DADA CHAVE
std::string text_db::get_text(std::string key){
return text_table.get(key);
                                              };

void text_db::show_text(std::string key){
text_table.show(key);
                                        };
