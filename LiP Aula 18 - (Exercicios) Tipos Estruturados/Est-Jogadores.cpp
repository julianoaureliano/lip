#include <iostream>
#include <string>
#define MAX 30
using namespace std;
struct Jogador{
    char nome[200];
    int idade;
    int chutes;
    int gol;
};
int main() {
    Jogador v[MAX];
   float pontaria1,pontaria2; 
cin.getline(v[0].nome,200)>>v[0].idade>>v[0].chutes>>v[0].gol;
cin.ignore();
cin.getline(v[1].nome,200)>>v[1].idade>>v[1].chutes>>v[1].gol;
pontaria1=v[0].chutes/v[0].gol;
pontaria2=v[1].chutes/v[1].gol;
if(pontaria1>pontaria2){
cout<<v[1].nome<<" ("<<v[1].idade<<")"<<endl;
}else{
    cout<<v[0].nome<<" ("<<v[0].idade<<")"<<endl;
}
return 0;
}