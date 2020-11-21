#include <iostream>
#include <cstring>
#define MAX_FRASE 50
using namespace std;
int main(){
char s[MAX_FRASE];
char p[MAX_FRASE];
char k[strlen(s)+strlen(p)];
cin.getline(s,MAX_FRASE);
cin.getline(p,MAX_FRASE);
cout<<s<<" + "<<p<<" = ";
int j=0;
for(int i=0;i<=strlen(s)+strlen(p) &&j<50;i+=2){

    k[i]=s[j];
    k[i+1]=p[j];
j++;
}
cout<<k;


return 0;
}