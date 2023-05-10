//PROGRAMA PARA DEFINIR A CLASSE DE HASH TABLES QUE ALOCAM DATA E HORA
//COMPILAR COM O COMANDO : g++ -o database_datetime_test database_datetime_test.cpp

/*CABEÇALHO*/
#include<iostream>
#include"database_datetime.hpp"
using namespace std;

int main(){
//VARIÁVEIS LOCAIS
long long int my_size=100;
//CRIANDO UM OBJETO DA CLASSE
datetime_db my_datetime;
my_datetime.create_datetime(my_size);
cout<<"Datetime hash table criada com sucesso!\n";
//FUNÇÃO QUE CRIA UMA STRING COM A DATA E HORA ATUAIS
my_datetime.set_current_datetime();
cout<<my_datetime.current_datetime<<"\n";
cout<<"Geração de data e hora atual realizada com sucesso!!!\n";
//INSERINDO CHAVES
my_datetime.insert_datetime("Elias");
my_datetime.insert_datetime("Fernanda");
//OBTENDO O VALOR ASSODCIADO A UMA CHAVE
cout<<"Data e hora da inserção da chave 'Elias': "<<my_datetime.get_datetime("Elias")<<"\n";
cout<<"Data e hora da inserção da chave 'Fernanda': "<<my_datetime.get_datetime("Fernanda")<<"\n";
cout<<"\nEXIBINDO CHAVES COMPLETAS\n";
my_datetime.show_datetime("Elias");
my_datetime.show_datetime("Fernanda");

//REMOVENDO CHAVES

my_datetime.remove_datetime("Fernanda");
my_datetime.show_datetime("Fernanda");
cout<<"Chave removida com sucesso.\n";
//REDIMENSIONANDO A HASH TABLE DE DATA E HORAS
my_datetime.resize_datetime();
cout<<"Hash table de data e horas redimensionado com sucesso!\n";
//LIMPANDO O CACHÊ DE MÉMÓRIA
my_datetime.clear_datetime();
cout<<"Datetime hash table destruida com sucesso!\n";
//FINALIZANDO O PROGRAMA
cout<<"\nETAPA 3.1 TESTADA COM SUCESSO!!!!.\n";

          }
