//UM PROGRAMA SIMPLES QUE GERA UMA CHAVE CRIPTOGRÁFICA USANDO A BIBLIOTECA DE HASH TABLES

/*CABEÇALHO*/
#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include"hash_function.hpp"
using namespace std;

//FUNÇÃO PARA GERAR UMA CÓDIGO NÚMERICO PARA AS PALAVRAS DISPONÍVEIS NA LINGUA PORTUGUESA

//FUNÇÃO PRINCIPAL
int main(){
//VARIÁVEIS LOCAIS
string line;
long long int numeric_key;
long long int criptographic_key;

//CRIANDO UM ARQUIVO PARA ALOCAR UMA CHAVE CRIPTOGRÁFICA E PARA ALOCAR AS PALAVRAS DO IDIOMA PORTUGUÊS JUNTAMENTE  COM A RESPECTIVA CHAVE NÚMERICA
ifstream arquivo1;
ifstream arquivo2;
ofstream arquivo3;
arquivo1.open("criptografia_chave.txt");
arquivo2.open("palavras_português.txt");
arquivo3.open("criptografia_tabela.txt", ios::out|ios::trunc);//ARQUIVO SERÁ SOBRESCRITO PARA DIFERENTES CHAVES

if(arquivo1.is_open())
cout<<"Arquivo com a chave aberto!.\n";
else
cout<<"Erro ao abrir arquivo 1!\n";
if(arquivo2.is_open())
cout<<"Arquivo com lista de palavras em português aberto!.\n";
else
cout<<"Erro ao abrir arquivo 2!\n";
if(arquivo3.is_open())
cout<<"Arquivo para registrar tabela critográfica aberto!.\n";
else
cout<<"Erro ao abrir arquivo 3!\n";
//SE NÃO FOR POSSÍVEL ABRIR UM DOS ARQUIVOS FINALIZAR A APLICAÇÃO
if(!arquivo3.is_open() || !arquivo2.is_open() || !arquivo1.is_open())
exit(0);

//SALVANDO A CHAVE
getline(arquivo1, line);
stringstream(line)>>numeric_key;

//GERANDO UMA TABELA CRIPTOGRÁFICA
while(!arquivo2.eof()){
//LENDO UMA PALAVRA POR VEZ
getline(arquivo2, line);
//GERANDO UMA CHAVE
criptographic_key=hash_function(line)%numeric_key;

//SALVANDO O PAR (PALAVRA, CHAVE NUMÉRICA EM UM ARQUIVO)
arquivo3<< line <<" " <<criptographic_key<<"\n";
                    };

//FINALIZANDO O PROGRAMA
arquivo1.close();
arquivo2.close();
arquivo3.close();
return 0;
          };
