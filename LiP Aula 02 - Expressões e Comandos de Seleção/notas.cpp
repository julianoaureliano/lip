#include <iostream>
using namespace std;
int main()
{
    float x,y,z,media;
    cin>>x;
    cin>>y;
    cin>>z;
    
    media=(x+y+z)/3;
    if(media >= 5 && x>=3 && y>=3 && z>=3){
     cout<<"Aprovado";
    
        
    }else if(media>=3){
        cout<<"Final";
       }else{
           cout<<"Reprovado";
       }  
        

    
return 0;
}