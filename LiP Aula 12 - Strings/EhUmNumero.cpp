#include <iostream>
#include <cstring>
#include <cctype>
#define MAX_PALAVRA 10
using namespace std;

int main(){
    char x[MAX_PALAVRA];
    
    cin>>x;
    
   
    int repre=0,nrepre=0;
    for(int i=0;i<strlen(x);i++){    
        
        if(isalpha (x[i])){
            nrepre++;
        }
        else if(isalnum(x[i])){   
        repre++;
        }else{
            nrepre++;
        }    
    }

if(repre==strlen(x)){
    cout<<x<<" representa um número";
}else{
    cout<<x<<" não representa um número";
}
return 0;
}