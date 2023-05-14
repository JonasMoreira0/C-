#include<iostream>
using namespace std;

int main() {
    int num1;
    cout << "digite o seu número ";
    cin >> num1;
    if (num1 > 0){
        cout << "o número é positivo \n"<<num1;
    }
    else if (num1 < 0){
        cout << "o número é negativo \n"<<num1;
    }
    else {
        cout << "o número é igual a 0";
    }
    return 0;
}