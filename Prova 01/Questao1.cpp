#include <iostream>
using namespace std;
int maiorDigito(int x, int y);
int main() {
    int x,y, opa;
    cin>>x>>y;
    opa= maiorDigito(x,y);
    if(opa==0){
        cout<<"iguais";
    }else if(opa>0){
        cout<<"primeiro";
    }else{
        cout<<"segundo";
    }

return 0;
}

int maiorDigito(int x, int y){
    int rest, rest2, cont1, cont2;
    cont1=0;
    cont2=0;
    
    if(x>=0){
        do{
            rest=x%10;
            
            if(x!=0){
                x /=10;
                 cont1++;
            }
            
          
        }while(x !=0);
      
    }

    if(y>=0){
        do{
            rest2=y%10;
            
            if(y!=0){
                y /=10;
                 cont2++;
            }
            
          
        }while(y !=0);
      
    }

if(cont1==cont2){
   return 0; 
}else if(cont1>cont2){
    return (1);
}else{
return (-1);
}

}