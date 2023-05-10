//PROGRAMA PARA DEFINIR A CLASSE DE HASH TABLES QUE ALOCAM TEXTO
//COMPILAR COM O COMANDO : g++ -o database_float_test database_float_test.cpp

/*CABEÇALHO*/
#include<iostream>
#include<cmath>
#include"database_float.hpp"
using namespace std;

int main(){
//VARIÁVEIS LOCAIS
long long int my_size=100;
//CRIANDO UM OBJETO DA CLASSE
float_db my_float;
my_float.create_float(my_size);
my_float.set_precision(8);

cout<<"Floar hash table criada com sucesso!\n";
//INSERINDO CHAVES
my_float.insert_float("Pi",4.0*atan(1.0));
my_float.insert_float("Euler", exp(1.0));
my_float.insert_float("Raíz de 2", sqrt(2.0));

//OBTENDO O VALOR ASSOCIADO A UMA CHAVE
cout<<"Valor associado a 'Pi': "<<my_float.get_float("Pi")<<"\n";
cout<<"Valor associado a 'Euler': "<<my_float.get_float("Euler")<<"\n";
cout<<"Valor associado a 'Raíz de 2': "<<my_float.get_float("Raíz de 2")<<"\n";
cout<<"\nEXIBINDO CHAVES COMPLETAS\n";
my_float.show_float("Pi");
my_float.show_float("Euler");
my_float.show_float("Raíz de 2");

//REMOVENDO CHAVES

my_float.remove_float("Raíz de 2");
my_float.show_float("Raíz de 2");
cout<<"Chave removida com sucesso.\n";
//REDIMENSIONANDO A HASH TABLE DE DATA E HORAS
my_float.resize_float();
cout<<"Hash table de entradas de float pointing numbers redimensionada com sucesso!\n";
//LIMPANDO O CACHÊ DE MÉMÓRIA
my_float.clear_float();
cout<<"Float hash table destruida com sucesso!\n";
//FINALIZANDO O PROGRAMA
cout<<"\nETAPA 3.4 TESTADA COM SUCESSO!!!!.\n";
return 0;
          }
