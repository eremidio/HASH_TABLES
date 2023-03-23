//ESTE ARQUIVO CONTÉM A FUNÇÃO HASH USADA PARA IMPLEMENTAÇÃO DE HASH TABLES

/*CABEÇALHO*/
#pragma once
#include"hash_global_variables.hpp"
#include<cmath>
#include<string>
#include<iostream>


//FUNÇÃO HASH 
long long int hash_function(std::string key){

//VARIÁVEIS LOCAIS
long long int hash_index;
hash_index=0;

//ITERANDO OS ELEMENTOS DO CARACTÉRES DA STRING
for (std::string::iterator it=key.begin(); it!=key.end(); ++it)
hash_index+=int(*it);
hash_index=static_cast<long long int>(std::abs(std::cos(hash_index))*HASH_GENERATOR*std::sqrt(key.size()));
return hash_index;
                                            };

                      
