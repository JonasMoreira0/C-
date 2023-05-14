#include<iostream>
using namespace std;

int main() {
    int idade;
    cout << "digite a sua idade: ";
    cin >> idade;
    cout<<"************************* \n";
    if (idade <= 5){
        cout<<"imposibilitado de competir: ";
    }
    else if(idade <=10) {
        cout<< "Você é um competidor mirim: ";
    }
    else if(idade <=20){
        cout<< "Você é um competidor juvenil ";
    }   
    else {
        cout<< "Você é um competidor 'MASTER' ";
    }
    return 0;
}