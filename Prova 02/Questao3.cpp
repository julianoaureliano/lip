#include <iostream>
#include <cstring>
#include <cctype>
#define MAX_FRASE 100

using namespace std;
int letraMaiuscula(char x[MAX_FRASE],char c[MAX_FRASE]);

int main(){
char x[MAX_FRASE],c[MAX_FRASE];

cin.getline(x,MAX_FRASE);
cin.getline(c,MAX_FRASE);
letraMaiuscula(x,c);
return 0;
}
int letraMaiuscula(char x[MAX_FRASE],char c[MAX_FRASE]){
int opa=0;
for(int i=0;i<strlen(x);i++){
        if(x[i]==c[0]){
            x[i]=toupper(x[i]);
            opa++;
        }
            
    }   
cout<<x<<" - "<<opa<<" ocorrências.";
  return opa;

}