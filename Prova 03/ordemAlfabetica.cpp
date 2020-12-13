#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;
void ordenarAlfabetica(char nome[20][50],int n);
int main(){
int n;

cin>>n;
char nome[20][50];

cin.ignore();
for(int i=0;i<n;i++){
    system("cls");
    cin.getline(nome[i],50);
    
}


ordenarAlfabetica(nome,n);

return 0;
}
void ordenarAlfabetica(char nome[20][50],int n){
char aux[50];

for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        if(strcmp(nome[i],nome[j])>0){
            strcpy(aux,nome[i]);
            strcpy(nome[i],nome[j]);
            strcpy(nome[j],aux);
        }
    }
}
for(int i=0;i<n;i++){   
    cout<<nome[i]<<endl;   
}
}