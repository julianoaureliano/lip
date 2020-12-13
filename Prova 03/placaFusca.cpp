#include <iostream>
#include <cstring>

#define MAX_N 100
#define MAX_MODELO 50
#define MAX_PLACA 8

using namespace std;

struct Data
{
  int dia, mes, ano;
};

struct Veiculo
{
  char modelo[MAX_MODELO];
  Data fabricacao;
  char placa[MAX_PLACA];
};

struct Lista
{
  int n;
  Veiculo v[MAX_N];
};

//Esta função irá retornar true ou false para a afirmação:
//a placa dada como argumento termina em 4587
int termina4587(char placa[MAX_PLACA],Lista l);

//Esta função irá contar quantos veículos da lista tem o campo
//modelo igual ao conteúdo da variável modelo
int contar(Lista l, char modelo[MAX_MODELO]);

int main()
{
  Lista l;
  cin >> l.n;
  int qtdFuscas, qtdPlaca4587 = 0;
  char fusca[MAX_MODELO] = "Fusca";
  for(int i=0;i<l.n;i++)
  {
    cin >> l.v[i].modelo;
    cin >> l.v[i].fabricacao.dia >> l.v[i].fabricacao.mes >> l.v[i].fabricacao.ano;
    cin >> l.v[i].placa; 
  }
 
  /*
  	Algum código deverá ser inserido aqui
  */

qtdFuscas= contar(l,l.v->modelo);
qtdPlaca4587=termina4587(l.v->placa,l);

cout << "Fuscas: " << qtdFuscas << endl;
cout << "Final 4587: " << qtdPlaca4587 << endl;

  return 0;
}

//Completar as funções abaixo


//Esta função irá retornar true ou false para a afirmação:
//a placa dada como argumento termina em 4587
int termina4587(char placa[MAX_PLACA],Lista l){
int k=0;
int opa=0;
char oloko[MAX_PLACA] = "7854";
for(int i=0;i<l.n;i++){
            for(int j=strlen(l.v[i].placa);j>0;j--){
                if(j>strlen(l.v[i].placa)-6){
                    if(oloko[opa]==l.v[i].placa[j]){
                    k++;
                    opa++;
                    }
                }
            }

}
return (k/4);
}

//Esta função irá contar quantos veículos da lista tem o campo
//modelo igual ao conteúdo da variável modelo
int contar(Lista l, char modelo[MAX_MODELO])
{
int k=0;
char fusca[MAX_MODELO] = "Fusca";

for(int i=0;i<l.n;i++){
            for(int j=0;j<strlen(l.v[i].modelo);j++){
            if(fusca[j]==l.v[i].modelo[j]){
                k++;
            }
        }
}
return (k/5);

}