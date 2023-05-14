#include<iostream>
using namespace std;
int main() {
    int lado_a, lado_b, lado_c;
    cout<<"informe o primeiro lado do triangulo: ";
    cin>>lado_a;
    cout<<"informe o segundo lado do triangulo: ";
    cin>>lado_b;
    cout<<"informe o terceiro lado do triangulo: ";
    cin>>lado_c;
    if (lado_a == lado_b && lado_a == lado_c) {
    cout<<"caso 1\n";
    }
    else if(lado_a == lado_b || lado_b == lado_c || lado_c == lado_a) {
            cout<<"caso 2\n";
        }
        else {
            cout<<"caso 3\n";
        }
    } 
    return o;
} 
