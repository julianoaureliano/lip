#include <iostream>
#include <cstring>
#define MAX_Palavra 50
using namespace std;
int main(){
char palavra[MAX_Palavra];
char palindromo[strlen(palavra)-1];
int j=0;
cin>>palavra;
    for(int i=strlen(palavra)-1,j=0; i>=0; i--,j++){
        palindromo[j]=palavra[i];
    }
        for(int i=0;i<strlen(palavra);i++){
            if(palindromo[i]==palavra[i]){
                j++;
            }
        }
if(j == strlen(palavra)){
   cout<<palavra<<" é um palíndromo";
}else{
    cout<<palavra<<" não é um palíndromo";
}
return 0;
}