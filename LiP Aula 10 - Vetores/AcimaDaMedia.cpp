#include <iostream>
#define MAX 100
using namespace std;
int main()
{
    float n,soma=0,media;
    int cont=0;
    cin>>n;
    float x[MAX];
        for(int i=0;i<n;i++){
        cin>>x[i];
    soma=soma+x[i];
    }
    media=(soma/n);
    for(int i=0;i<n;i++){
        if(x[i]>media){
            cont++;
        }
    }
    cout<<"Media: "<<media<<"\nValores acima da media: "<<cont;

return 0;
}