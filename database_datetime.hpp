//VAMOS CRIAR UMA CLASSE DE HASH TABLES QUE REGISTRA ENTRADAS DE DATAS E HORAS

/*CABEÇALHO*/
#pragma once
#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>
#include"hash_table_project.hpp"

//****************************************************************************************************************************
//CLASSE DE HASH TABLES QUE ALOCAM ENTRADAS DE DATAS E HORAS

struct datetime_db{
//MEMBROS DA CLASSE
hash_table<std::string> dt_table;//HASH TABLE PARA ALOCAR ENTRADAS DE DATA E HORA
std::string current_datetime;//STRING PARA ALOCAR DATA E CHAVE
std::string null_datetime="00:00:00, 00/00/0000";
//MÉTODOS DA CLASSE
void create_datetime(long long int);//FUNÇÃO QUE CRIA UMA HASH TABLE PARA ALOCAR DATA E HORA
void clear_datetime();//FUNÇÃO QUE LIIMPA O CACHÊ DE MEMÓRIA
void resize_datetime();//FUNÇÃO QUE REAJUSTA A DATA E A HORA EM QUE UMA ENTRADA FOI REGISTRADA
void insert_datetime(std::string);//FUNÇÃO QUE INSERE
void remove_datetime(std::string);//FUNÇÃO QUE REMOVE UMA ENTRADA NA HASH TABLE DE NOMES E DATAS
void set_null_datetime();//FUNÇÃO QUE AJUSTA  O VALOR PADRÃO DE UMA ENTRADA REMOVIDA DA HASH TABLE
std::string get_datetime(std::string);//FUNÇÃO QUE RETORNA A DATA E A HORA EM QUE UMA FUNÇÃO FOI INSERIDA 
void show_datetime(std::string);//FUNÇÃO QUE EXIBE UMA ENTRADA COMPLETA DA HASH TABLE
void set_current_datetime();//FUNÇÃO QUE GERA UM STRING COM A DATA E A HORA ATUAIS

                  };

//****************************************************************************************************************************
//MÉTODOS DA CLASSE
//CONSTRUTOR E DETRUIDOR
void datetime_db::create_datetime(long long int a){
dt_table.create(a);
dt_table.set_null_value(null_datetime);
                                                  };

void datetime_db::clear_datetime(){
dt_table.clear();
                                  };

//FUNÇÃO QUE GERA UMA STRING COM A DATA E HORA ATUAIS
void datetime_db::set_current_datetime(){
//VARIÁVEIS LOCAIS
time_t now=std::time(0);
std::tm* datetime_pointer;
datetime_pointer=std::localtime(&now);
int sec, min, hour, day, month, year;
current_datetime="";

//PROCEDIMENTOS
//HORÁRIO
hour=datetime_pointer->tm_hour;
current_datetime+=std::to_string(hour);
current_datetime+=":";
min=datetime_pointer->tm_min;
current_datetime+=std::to_string(min);
current_datetime+=":";
sec=datetime_pointer->tm_sec;
current_datetime+=std::to_string(sec);
current_datetime+=", ";
//DATA
day=datetime_pointer->tm_mday;
current_datetime+=std::to_string(day);
current_datetime+="/";
month=datetime_pointer->tm_mon+1;
current_datetime+=std::to_string(month);
current_datetime+="/";
year=datetime_pointer->tm_year+1900;
current_datetime+=std::to_string(year);
current_datetime+=".";
                                        };

//FUNÇÃO QUE INSERE UMA ENTRADA NA HASH TABLE DE DATA E HORA
void datetime_db::insert_datetime(std::string key){
set_current_datetime();
dt_table.insert(key, current_datetime);
                                                  };

//FUNÇÃO QUE REMOVE UMA ENTRADA DA HASH TABLE DE DATA E HORA
void datetime_db::remove_datetime(std::string key){
dt_table.remove(key);
                                                  };

//FUNÇÃO QUE REAJUSTA O TAMANHO DA HASH TABLE DE DATA E HORA
void datetime_db::resize_datetime(){
dt_table.resize();
                                   };

//FUNÇÕES QUE RETORNA A DATA E A HORA EM QUE UMA ENTRADA FOI INSERIDA
std::string datetime_db::get_datetime(std::string key){
return dt_table.get(key);
                                                      };

void datetime_db::show_datetime(std::string key){
dt_table.show(key);
                                                };
