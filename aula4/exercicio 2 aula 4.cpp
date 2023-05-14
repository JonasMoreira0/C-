#include<iostream>
using namespace std;

int main() 
{
int SalarioBruto, SalarioLiquido;

SalarioBruto = 2000.00;

SalarioLiquido = 20 * SalarioBruto / 100;

cout <<"Digite o seu salario $";
cin >> SalarioLiquido;

if ( SalarioLiquido > SalarioBruto )
//se o salario for maior vai aver desconto
{
    cout << "Ouve desconto no seu salario de 20%" << endl;
}
//se o salario for menor n vai aver desconto 
else {
    cout <<"Nao ouve desconto no seu salario " << endl;
} 

return 0;
}
