#include <iostream>
#include <cstring>
#define MAX_FRASE 50
using namespace std;
int main(){
    char s[MAX_FRASE],c1[5],c2[5];
    cin.getline(s,MAX_FRASE);
    cin>>c1;
    cin>>c2;
    int j=0;
cout<<s<<" =>"<<"\n";
    for(int i=0;i<strlen(s);i++){
       
       if(s[i]==c1[0]){
            s[i]=c2[0];                      
        }else if(s[i]==c2[0]){
            s[i]=c1[0];                      
        }

    }
    cout<<s;
   
return 0;
}