#include<iostream>
using namespace std;

int main() {
    float salario;
    cout << "Digite o seu salário: ";
    cin >> salario;

    if (salario < 1000){
        salario= 0.1 * 1000;
        cout<<"Você resebera um aulmento de 10% de bonificação.\n"; 
        cout<< "Bonificação $"<<salario;
    }
    else if(salario <= 2000){
        salario= 0.05 * 2000; 
        cout<< "Você resebera um aulmento de 5% de bonificação.\n"; 
        cout<< "Bonificação $"<<salario;
    }   
    else if (salario <= 5000){
        salario= 0.35 * 5000; 
        cout<< "Você resebera um aulmento de 3.5% de bonificação.\n"; 
        cout<< "Bonificação $"<<salario;
    }
    else {
        cout<<"Você não resebera almento $"<<salario;
    }
    return 0;
}