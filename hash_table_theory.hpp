//NESTE HEADER FILE VAMOS CRIAR UMA FUNÇÃO QUE EXIBE A TEORIA MATEMÁTICA ASSOCIADA COM HASH TABLES E HASH FUNCTIONS

/*CABEÇALHO*/
#pragma once
#include <cstdlib>
#include <cstdio>



//VAMOS CRIAR UM NAMESPACE GLOBAL hash_table_help PARA ALOCAR FUNÇÕES DE AJUDA E TEORIA DA BIBLIOTECA DESENVOLVIDA

namespace hash_table_help{

//FUNÇÃO QUE DESCREVE A TEORIA MATEMÁTICA DE HASH TABLES AN HASH FUNCTIONS
void what_is_hash_table(){
using namespace std;

printf("SOBRE HASH TABLES (HASH MAPS).\n\n");

printf("Hash tables são uma estrutura de dados onde cada elemento é associado a uma chave.\nMuitas linguagens de programação como C++ e Python possuem sua própria implementação de hash tables.\nEm C++ temos as estruturas de dados 'unordered_set' e 'unordered_map', já em Python temos a estrutura de dados 'dictionary'.\n\n");
printf("Estruturas de dados mais simples como arrays usam índices para referenciar elementos alocados nesta estrutura de dados.\nPor exemplo em C/C++ arrays são indexados por inteiros começando a partir do zero.\nValendo-se do mecanismo chave--> valor_associado teríamos:\n 0--> 1º elemento no array, 1--> 2º elementos no array e assim sucessivamente.\n\n");
printf("Hash tables tem a vantagem de permitir usar uma gama maior de elementos como chaves durante a implementação de estruturas de dados e não apenas números inteiros (como no caso de arrays).\nUma vantagem de hash tables é que elas usam funções hash para retornar o dado a associado com uma dada chave.\nPor esta razão o tempo médio de acesso ao valor associado a uma dada chave independe da quantidade de elementos alocados na hash_table.\n\nEm um array, por exemplo, o tempo médio de acesso a um dado elemento usando um loop simples é da ordem de O(n).\nUma estrutura de dados que insere elementos em ordem usando um mecanismo BST (binary search tree), possui eficiência da ordem de O(log(n)) na busca de elementos associados com uma dada chave.\nAmbos dos casos se tornam inviáveis quando o número de elementos presentes se torna elevado.\n\n");
printf("Uma hash table contém buckets uma sequência de containers (data structures) usadas para alocar dados (variáveis, objetos, etc).\nEsse buckets usam os índices gerados por uma hash function para ir alocando elementos.\nOperações para definir e redefinir a capacidade de alocação de conteúdo dos buckets devem ser providenciadas em sua implementação.\nAlém disso se faz necessário se criar mecanismos para se iterar os elementos alocados em um bucket,\ncaso mais de uma chave gere o mesmo índice em uma função hash, fazendo com que mais de um elemento seja estocado no mesmo bucket.\nEm caso de estocar apenas uma entrada por bucket, um mecanismo para alocar entradas em outro bucket deve ser providenciado em caso de colisões com hash functions.\n\n");
printf("As seguintes operações são de interesse para se operar com hash tables e devem implementadas:\nCriação de hash tables;\nLiberação de recursos quando se deleta uma entrada em uma hash table;\nobtenção do valor associado a uma chave;\nchecagem se uma chave existe em uma hash table;\nadição de entradas (chave, valor) em uma hash table;\nexibir conteúdos de uma hash table\ndeterminar o número de colisões e resolver potenciais colisões de entradas na hash_table.\nOutras operações podem ser definidas pelo usuário na implementação de estruturas de dados mais complexas como banco de dados.\n\n");
printf("Para maiores informações consulte os links:\nhttps://www.andreinc.net/2021/10/02/implementing-hash-tables-in-c-part-1#hash-functions.\nhttps://en.wikipedia.org/wiki/Hash_table\n\n");


                         };//what_is_hash_table

void what_is_hash_function(){
using namespace std;
printf("SOBRE FUNÇÕES HASH.\n\n");

printf("Uma função hash é uma função do tipo f: X -> [0, M), f(x)=m.\nOnde 'X' é um conjunto de elementos qualquer que pode ser finito ou não, 'M' e 'm' com m ∈ [0, M) e 0 < m < ∞ representa um número inteiro.\nUma função hash mapeia um dado elemento de um conjunto X em um número inteiro positivo,\ndesta forma associando um dado elemento a uma chave que será usada para localizá-lo em uma hash table.\n\n");
printf("Funções hash podem experimentar problemas de colisão de resultados, isto é, dados x, y ∈ X, com x ≠ y, pode-se ter que f(x)=f(y).\nExemplo típico consiste na mais básica das funções hash f(x)=c, com c constante,\nonde todos os elementos são mapeados no mesmo valor.\nUma função hash ideal é aquela que proporciona o menor número de colisões possível.\n\n");
printf("Funções hash ideais não devem ser computacionalmente complexas, tal fato pode ser uma fator que torna operações em hash tables lentas.\nIsto é especialmente verdade quando se trabalha com um número elevado de dados.\n\n");
printf("Funções hash ideais também devem proporcionar uma distribuição uniforme de resultados no intervalo [0, M).\n\n");
printf("Vários mecanismos podem ser usados para implementação de funções hash.\nO termo família se refere a grupos de funções que usam o mesmo algoritmo para gerar índices de entradas em hash tables.\n\n");
printf("Valores de variáveis podem ser interpretados como uma sequência de bits,\nportanto o mais natural é usar uma variável tipo 'string', 'character', etc, performar operações com os bits associados ao seu valor ASCII para determinar o valor do índice associado com uma dada chave.\nVários mecanismos envolvendo operações aritméticas com os bits de chaves são usados, os mais comuns sendo:\no algoritmo de divisão neste algoritmo uma hash string é convertida em inteiros positivos via os valores ASCII associados com os caractéres desta string,\nposteriormente operações de aritmética modular são usadas para se definir um intervalo de valores (M, o limite máximo);\no chamado algoritmo da multiplicação usa um mecanismo parecido, porém a conversão em inteiros positivos de uma chave usa uma fórmula do tipo f(x) = c.p(1)^(n(1)).p(2)(n(2)).(...),\nno qual c é uma constante, e p(1), p(2), ... é uma sequência de números primos e n(1), n(2), ... é uma sequência de inteiros positivos.\nEsta sequência de inteiros pode ser obtida usando-se operações elementares que convertem os caractéres de uma string em números inteiros.\nOperações adicionais podem ser definidas no escopo da definição das funções hash para evitar colisões e garantir que haja uma distribuição mais uniforme de chaves no intervalo [0, M),\nporém, isto aumenta a complexidade computacional das funções hash, o que não é adequado para base dados de tamanho apreciável.\nOperações tipo bitwise como >> (shift-right), << (shift-left), XOR, entre outras também são amplamente empregadas.\nDe fato em muitas arquiteturas operações bitwise são relativamente mais rápidas que multiplicação e divisão\n\n");
printf("As chamadas funções de hash criptográficas possuem um alto de complexidade computacional sendo úteis no contexto em que a segurança na manipulação de dados é requerida.\nPara uso comum, funções has computacionalmente menos complexas são perfeitamente válidas.\n\n");
printf("Para maiores informações consulte os links:\nhttps://www.andreinc.net/2021/10/02/implementing-hash-tables-in-c-part-1#hash-functions.\nhttps://en.wikipedia.org/wiki/Hash_table\n\n");
                            };//what_is_hash_function

//FUNÇÃO QUE DESCREVE COMO USAR ESTA BIBLIOTECA
void on_how_to_use(){
using namespace std;
printf("COMO USAR ESTA BIBLIOTECA:\n\n");
printf("Esta biblioteca contém uma implementação de hash tables feita em C++.\nOptou-se por manter a simplicidade no projeto, por esta razão foram usados um array simples para alocar entradas da hash table.\nA operação de redimensionar e realocar hash tables é operacionalmente desvantajosa do ponto de vista computacional.\nPor esta razão o mais comum é o uso de um array linked-list para alocar entradas da hash table,\numa vez que estas são automaticamente redimensionadas.\nUma função de redimensionamento foi implementada, porém esta função não é muito eficiente do ponto vista computacional.\nCaso o fator crítico de ocupação seja atingido a melhor abordagem é implementar uma nova hash_table para ir alocando novas entradas.\nA escolha de uma capacidade inicial adequada a necessidade do usuário ao instanciar uma hash table,\ntambém evita problemas com fatores de ocupação elevados.\n\n");
printf("Esta biblioteca contém os seguintes arquivos:\n1. 'hash_table_project' que inclui todos os arquivos desta biblioteca.\n2.'hash_function' que contém uma implementação de uma hash_function.\n3. 'hash_table_theory' que contém uma estrutura detalhada da biblioteca e da teoria matemática relacionada com hash tables.\n4. 'hash_table.hpp' que contém a implementação da classe de hash tables.\n5. 'hash_global_variables.hpp' que contém constantes usadas e testadas nesta biblioteca.\n6. A biblioteca ainda disponibiliza arquivos com a extensão '.cpp' que ilustra a implementação de funções hash e hash tables usando esta biblioteca.\n\n");
printf("A implementação de funções hash é relativamente basta salvar o arquivo 'hash_function.hpp' na mesma pasta que o arquivo do programa principal,\ninserir a linha de comando '#include'hash_function.hpp' e para implementar uma função hash use o comando:\n 'long long int variable= hash_function(string-variable/string-value);'.\nComo sugerido esta função retorna um valor do tipo 'long long int' que pode ser alocado em uma variável definida pelo usuário.\nA implementação da função hash empregada aqui usa a periodicidade funções trigonométricas e do tamanho da string usada como chave para gerar valores da ordem de 10^12.\nPosterior aplicação de aritmética modular pode ser usada para ajustar o valor hash gerado adequando-o ao tamanho da hash table implementada.\nEsta implementação se deu em um arquivo separado, permitindo assim uma maior flexibilidade no seu uso em outros contextos se o usuário assim o desejar.\n\n");

printf("A classe de hash tables foi implementadas em duas etapas.\nUma classe de hash_nodes foi criada para se alocar uma chave em uma variável tipo string e um valor associado de tipo selecionado pelo usuário como parâmetro tipo template,\n a fim de proporcionar flexibilidade do usuário.\nO arquivo 'hash_table.hpp' ainda disponibiliza um template de função para gerar strings que podem ser usadas como chaves das hash table criadas.\n\n");
printf("Para implementar uma hash table basta usar o comando: 'hash_table<template-parameter>(size) hash-table-name',\nonde o size corresponde a uma variável do tipo 'long long int'.\nO espaço alocado na criação da hash table é liberado com o uso do método '.clear()'.\n\n");
printf("Elementos são inseridos na hash table com o método '.insert(std::string key, template-parameter value)' e são removidos com o método '.remove(std::string key)'.\nO número de entradas inseridas e a capacidade de alocação da hash table criada são referenciadas pelos atributos da classe '.entries' e '.size'.\nQuando o fator de ocupação da hash table for maior que 0.8 um alerta é emitido informando o usuário da situação.\n(Nestas situações a chance de colisão de entradas é maior).\nO método '.resize()' redimensiona a hash table aumentando sua capacidade de alocação de entradas por um fator de 10.\nUma função polinomial do terceiro grau é usada para se recalcular os indexes em caso de colisão na inserção de novas entradas.\nO método '.set_null_value(template-parameter default-value)' permite ao usuário especificar um valor padrão para entradas (chaves) removidas da hash table.\n\n");
printf("Duas funções permitem ao usuário acessar elementos da hash table:\n o método '.get(std::string key)' retorna o valor associado a uma chave,\n ao passo que o método '.show(std::string key)'exibe uma entrada completa da hash table com a chave e o valor associado aparecendo na tela,\ncaso uma entrada não esteja inserida na hash table um alerta é emitido informando o usuário da situação.\n\n");
printf("Esta implementação de hash table e funções hash permite seu uso em diversos contextos, por exemplo, em criação de bancos de dados.\nPara tal fim é possível implementar tabelas usando-se uma coleção hash tables para os diferentes parâmetros relevantes para o banco de dados em questão,\nprovendo-se alguns métodos adicionais para gerenciar dados manipulando-se arquivos,\ntanto para salvar entradas de hash tables em arquivos quanto para carregar entradas das hash tables salva em aqruivos.\nMétodos adicionais para otimizar a manipulação de dados pode ser providenciada pelo usuário.\n\n");

                    };//on_how_to_use

//CRÉDITOS
void credits(){
printf("CRÉDITOS:\nCriado por Elias Rodrigues Emídio.\nContato: e.r.emidio@yandex.com.\n\n");
              };

                         }//FIM DO NAMESPACE GLOBAL hash_table_help
