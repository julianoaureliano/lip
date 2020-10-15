#include <iostream>
#include <cstring>
#include <cctype>
#define MAX_FRASE 100

using namespace std;

int main(){
char x[MAX_FRASE];
int opa=0;
cin.getline(x,MAX_FRASE);
    for(int i=0;i<strlen(x);i++){
        if(i==0){
            x[i]=toupper(x[i]);
        }
            if(isblank(x[i])){               
                x[i+1]=toupper(x[i+1]);
                opa++;
            }
    }   
cout<<x;
return 0;
}