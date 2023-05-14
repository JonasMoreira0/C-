#include<iostream>
using namespace std;

int main()
{
    float n1, n2, n3, n4, n5;
    cout << "Receitas: $";
    cin>>n1;
    cout<<"Custo dos Produtos Vendidos: $";
    cin>>n2;
    n3 = n1-n2;
    cout<<"Lucro bruto: $"<<n3<<endl;
    
    cout<<"Despesas Administrativas: $";
    cin>>n4;
    n5= n3-n4;
    cout<<"Lucro Operacional: $"<<n5;
    
    return 0;
}