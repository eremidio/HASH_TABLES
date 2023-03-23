//FUNÇÃO PARA TESTAR A CLASSE DE HASH TABLE DE TAMANHO FIXO
//COMPILAR COM O COMANDO:  g++ -o hash_table_test hash_table_test.cpp

/*CABEÇALHO*/
#include<iostream>
#include<string>
#include"hash_global_variables.hpp"
#include"hash_table.hpp"
using namespace std;

int main(){
//TESTANDO A CRIAÇÃO DE UMA HASH TABLE
hash_table<long long int> my_hash;
my_hash.create(HASH_MAX0);

//TESTANDO O VALOR PADRÃO PARA SOBRESCREVER UMA ENTRADA NA LISTA
my_hash.set_null_value(0);

//INSERINDO ELEMENTOS NA HASH TABLE
my_hash.insert("Elias", 12345);
my_hash.insert("Beatriz", 132465432641);
my_hash.insert("Coração", 3245);
my_hash.insert("Código", 154);
my_hash.insert("hash_tables", 121);
my_hash.insert("luz", 1);
my_hash.insert("gás", 11);
my_hash.insert("onde",232);
my_hash.insert("lilás",1524212);
my_hash.insert("preto", 1231);
my_hash.insert("cinza", 32132);
my_hash.insert("amarelo", 564654);
my_hash.insert("beagle", 123415);
my_hash.insert("coco", 49874);
my_hash.insert("sabonete", 6574512);
my_hash.insert("bigorna", 984131);
my_hash.insert("elefante", 9798751);
my_hash.insert("gato", 74987454);
my_hash.insert("gata", 1231564);
my_hash.insert("gatos", 124874);
my_hash.insert("gatas", 1231654);
my_hash.insert("otorrinolaringologista", 200);
my_hash.insert(generate_key<int>(12), 12);

//TESTANDO FUNÇÃO QUE EXIBE ENTRADAS NA HASH TABLE
cout<<"Valor associado a chave 'Elias': "<<my_hash.get("Elias")<<" \n";
cout<<"Valor associado a chave 'Beatriz': "<<my_hash.get("Beatriz")<<" \n";

cout<<"\nEXIBINDO CHAVES COMPLETAS.\n";
my_hash.show("Elias");
my_hash.show("Beatriz");
my_hash.show("Coração");
my_hash.show("Código");
my_hash.show("hash_tables");
my_hash.show("luz");
my_hash.show("gás");
my_hash.show("onde");
my_hash.show("lilás");
my_hash.show("preto");
my_hash.show("cinza");
my_hash.show("amarelo");
my_hash.show("beagle");
my_hash.show("coco");
my_hash.show("sabonete");
my_hash.show("bigorna");
my_hash.show("elefante");
my_hash.show("gato");
my_hash.show("gata");
my_hash.show("gatos");
my_hash.show("gatas");
my_hash.show("otorrinolaringologista");
my_hash.show(generate_key<int>(12));
my_hash.show("Ágata");//ENTRADA NÃO INSERIDA

//REMOVENDO UMA ENTRADA
cout<<"\nREMOVENDO UMA ENTRADA.\n";
my_hash.remove("gatos");
my_hash.show("gatos");//ENTRADA REMOVIDA

//CAPACIDADE DE ALOCAÇÃO E NÚMERO DE ENTRADAS
cout<<"\nCONTABILIZANDO O TAMANHO E O NÚMERO DE ENTRADAS DA HASH TABLE\n";
cout<<"Tamanho: "<<my_hash.size<<".\n";
cout<<"Número de entradas já inseridas: "<<my_hash.entries<<".\n";

//TESTANDO A LIMPEZA DO CACHÊ DE MEMÓRIA
my_hash.clear();

cout<<"\nETAPA 2 CONCLUÍDA COM SUCESSO!!!.\n";
return 0;
          }
