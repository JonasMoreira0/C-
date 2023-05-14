#include<iostream>
using namespace std;

int main() {
    int num1;
    cout << "digite  asua idade ";
    cin >> num1;
    if (num1 > 65){
        cout << "você é maior de 65 anos \n"<<num1;
    }
    else if (num1 < 18){
        cout << "você é menor de idade \n"<<num1;
    }
    else {
        cout << "você é maior de idade \n";
    }
    return 0;
}