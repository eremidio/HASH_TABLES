//PROGRAMA PARA DEFINIR A CLASSE DE HASH TABLES QUE ALOCAM TEXTO
//COMPILAR COM O COMANDO : g++ -o database_int_test database_int_test.cpp

/*CABEÇALHO*/
#include<iostream>
#include"database_int.hpp"
using namespace std;

int main(){
//VARIÁVEIS LOCAIS
long long int my_size=100;
//CRIANDO UM OBJETO DA CLASSE
int_db my_int;
my_int.create_int(my_size);
cout<<"Int hash table criada com sucesso!\n";
//INSERINDO CHAVES
my_int.insert_int("Elias",1321321);
my_int.insert_int("Beatriz", 9421234);
//OBTENDO O VALOR ASSOCIADO A UMA CHAVE
cout<<"Valor associado a 'Elias': "<<my_int.get_int("Elias")<<"\n";
cout<<"Valor associado a 'Beatriz': "<<my_int.get_int("Beatriz")<<"\n";
cout<<"\nEXIBINDO CHAVES COMPLETAS\n";
my_int.show_int("Elias");
my_int.show_int("Beatriz");
my_int.show_int("Fabiano");

//REMOVENDO CHAVES

my_int.remove_int("Beatriz");
my_int.show_int("Beatriz");
cout<<"Chave removida com sucesso.\n";
//REDIMENSIONANDO A HASH TABLE DE DATA E HORAS
my_int.resize_int();
cout<<"Hash table de entradas de números inteiro redimensionada com sucesso!\n";
//LIMPANDO O CACHÊ DE MÉMÓRIA
my_int.clear_int();
cout<<"Int hash table destruida com sucesso!\n";
//FINALIZANDO O PROGRAMA
cout<<"\nETAPA 3.3 TESTADA COM SUCESSO!!!!.\n";
return 0;
          }
