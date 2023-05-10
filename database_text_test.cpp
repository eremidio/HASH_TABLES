//PROGRAMA PARA DEFINIR A CLASSE DE HASH TABLES QUE ALOCAM TEXTO
//COMPILAR COM O COMANDO : g++ -o database_text_test database_text_test.cpp

/*CABEÇALHO*/
#include<iostream>
#include"database_text.hpp"
using namespace std;

int main(){
//VARIÁVEIS LOCAIS
long long int my_size=100;
//CRIANDO UM OBJETO DA CLASSE
text_db my_text;
my_text.create_text(my_size);
cout<<"Text hash table criada com sucesso!\n";
//INSERINDO CHAVES
my_text.insert_text("Machado de Assis","Dom Casmurro");
my_text.insert_text("José de Alencar", "O Guarani");
//OBTENDO O VALOR ASSOCIADO A UMA CHAVE
cout<<"Valor associado a 'Machado de Assis': "<<my_text.get_text("Machado de Assis")<<"\n";
cout<<"Valor associado a 'José de Alencar': "<<my_text.get_text("José de Alencar")<<"\n";
cout<<"\nEXIBINDO CHAVES COMPLETAS\n";
my_text.show_text("Machado de Assis");
my_text.show_text("José de Alencar");

//REMOVENDO CHAVES

my_text.remove_text("José de Alencar");
my_text.show_text("José de Alencar");
cout<<"Chave removida com sucesso.\n";
//REDIMENSIONANDO A HASH TABLE DE DATA E HORAS
my_text.resize_text();
cout<<"Hash table de entradas de texto redimensionado com sucesso!\n";
//LIMPANDO O CACHÊ DE MÉMÓRIA
my_text.clear_text();
cout<<"Text hash table destruida com sucesso!\n";
//FINALIZANDO O PROGRAMA
cout<<"\nETAPA 3.2 TESTADA COM SUCESSO!!!!.\n";
return 0;
          }
