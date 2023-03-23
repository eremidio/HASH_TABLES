//VAMOS CRIAR UM ARQUIVO MESTRES PARA TESTAR O HEADER FILE hash_function .hpp
//COMPILAR COM O COMANDO:  g++ -o hash_function_test hash_function_test.cpp

/*CABEÇALHO*/
#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
#include"hash_function.hpp"
using namespace std;

int main(){
//Variáveis locais
int i, index;
vector<string> word_vector;
string line;

cout<<"TESTE DA FUNÇÃO HASH.\n\n";
//ADICIONANDO ELEMENTOS AO VETOR DE STRINGS
word_vector.push_back("Coração");
word_vector.push_back("Elias");
word_vector.push_back("Beatriz");
word_vector.push_back("Código");
word_vector.push_back("hash_tables");
word_vector.push_back("luz");
word_vector.push_back("gás");
word_vector.push_back("onde");
word_vector.push_back("lilás");
word_vector.push_back("preto");
word_vector.push_back("cinza");
word_vector.push_back("amarelo");
word_vector.push_back("beagle");
word_vector.push_back("coco");
word_vector.push_back("sabonete");
word_vector.push_back("bigorna");
word_vector.push_back("elefante");
word_vector.push_back("gato");
word_vector.push_back("gata");
word_vector.push_back("gatos");
word_vector.push_back("gatas");
word_vector.push_back("gato preto");
//TESTANDO A FUNÇÃO HASH
cout<<"ETAPA 1: TESTE DA FUNÇÃO HASH.\n\n";

for(i=0; i<word_vector.size(); ++i){
cout<<"Chave: "<< word_vector[i]<< ", Bucket: "<<hash_function(word_vector[i])<<", Index na hash table:"<<hash_function(word_vector[i])%HASH_MAX <<".\n";
                   };

cout<<"ETAPA 1 CONCLUÍDA COM SUCESSO!.\n";

//LIMPANDO O CACHÊ E ENCERRANDO O PROGRAMA
word_vector.clear();
return 0;
          }; 
