#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    
    int n1=5;
    float v1[n1];
    float v2[n1];


cout << fixed << setprecision(4);
    float t01[n1];
    cout<<"\nt01:\n";
    for(int i=0;i<n1;i++){
        cin>>t01[i];
    }
   
   
    float t12[n1];
    cout<<"\nt12:\n";
    for(int i=0;i<n1;i++){
        cin>>t12[i];
    }
    
        
    float t23[n1];
    cout<<"\nt23:\n";
    for(int i=0;i<n1;i++){
        cin>>t23[i];
    }
 cout<<"Velocidade v1:\n";
    for(int i=0;i<n1;i++){
        v1[i]=0.1/t01[i];
        cout<<v1[i]<<" ";
    }

cout<<"\nVelocidade v2:\n";
    for(int i=0;i<n1;i++){
        v2[i]=0.1/t23[i];
        cout<<v2[i]<<" ";
    }

    float tEstrela[n1];
   for(int i=0;i<n1;i++){
        tEstrela[i]=(t12[i]+(t01[i]/2)+(t23[i]/2));
    } 
cout<<"\ntEstrela:\n";
    for(int i=0;i<n1;i++){
        cout<<tEstrela[i]<<" ";
    }


cout<<"\nv1 negativo:\n";
     for(int i=0;i<n1;i++){
        v1[i]=(-1.0*v1[i]);
    }
    
    float aceler[n1];
    cout<<"\naceleracao:\n";
     for(int i=0;i<n1;i++){
         aceler[i]=(v2[i]-v1[i])/tEstrela[i];
        cout<<aceler[i]<<" ";
    }

   float total=0.0;
     for(int i=0;i<n1;i++){
         total= total + aceler[i];
    }
    cout<<"\nmedia:"<<total/5;












    
return 0;
}