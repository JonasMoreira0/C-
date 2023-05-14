#include<iostream>
using namespace std;

int main() {
    float nota1, nota2, media;
     
    cout<<"Digite a sua primeira nota ";
    cin>>nota1;
    cout<<"Digite a sua segunda nota ";
    cin>>nota2;

    media = nota1 + nota2;
       if (media >= 5 ) {
       cout<<"Voce foi aprovado "<<media; 
    }
    else {
        cout<<"Voce foi reprovado "<<media;
    }
    

    return 0;
}


