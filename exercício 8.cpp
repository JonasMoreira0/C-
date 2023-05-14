#include<iostream>
using namespace std;

int main()
{
    float aluguel, quantidade, atraso;
    aluguel=5;
    quantidade=1;
    atraso=0.50;
    
    cout << "Informe o valor do aluguel dos dois DVDS:     R$";
    cin>>aluguel;
    cout << "Informe a quantidade de DVDs sendo devolvida:   ";
    cin>>quantidade;
    cout << "informe o numero de dias em atraso:             ";
    cin>>atraso;
    
    aluguel=5;     
    cout<<"*******************************************************"<<endl; 
    
    cout<< "-Valor do aluguel:                             R$"<<aluguel*quantidade<<endl;
    cout<< "-Quantidade de DVDs:                             "; 
    cin>>quantidade;
    cout<< "-Total de dias de atraso:                        ";
    cin>>atraso;
   
    atraso=0.50;
    cout<< "-Total da multa(R$0.50/dia por DVD):           R$"<<aluguel*atraso*quantidade<<endl;
    
    cout<<"*******************************************************"<<endl;
    
    cout<< "-Total a pagar:                                R$"<<(aluguel*quantidade)+(aluguel*atraso*quantidade);
    return 0;
}