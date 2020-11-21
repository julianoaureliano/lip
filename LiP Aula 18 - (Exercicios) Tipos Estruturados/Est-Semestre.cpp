#include <iostream>
#include <iomanip>
using namespace std;
struct Resultado{
    float media;
    string situacao;
};
float mediaDele(float a, float b, float c, Resultado *opa);

int main(){
    Resultado opa;
    float a,b,c;
    float olo;
    cin>>a>>b>>c;

    
olo=mediaDele(a,b,c,&opa);
if(olo>=3.0&&olo<5.0){
    opa.situacao="Em Recuperação";
}else if(olo>=5.0){
    opa.situacao="Aprovado";
}else{
    opa.situacao="Reprovado";
}

cout<<"Aluno \""<<opa.situacao<<"\""; 
cout << fixed << setprecision(2);
cout<<", Média = "<<olo;
return 0;
}
float mediaDele(float a, float b, float c, Resultado *opa){
opa->media=(a+b+c)/3;
return opa->media;
    
}