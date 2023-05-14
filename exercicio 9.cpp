#include<iostream>
using namespace std;

int main()
{
    float
    desenvolvimento, desenvolvedores, servidores, infraestrutura, gerente;
     
    
    cout<<"Informe o custo para desenvolvimento: R$";
    cin>>desenvolvimento;
    cout<<"Informe aquantidade de desenvolvedores: ";
    cin>>desenvolvedores; 
    cout<<"Informe os custos com servidores R$";
    cin>>servidores;
    cout<<"Informe os custos com infraestrutura R$";
    cin>>infraestrutura; 
    cout<<"**********"<<endl;
    cout<<"-Custo total do desenvolvimento: R$"<<desenvolvimento*desenvolvedores<<endl;
    cout<<"-Custo com servidores: R$";
    cin>>servidores;
   
    cout<<"-Custo com infraestrutura: R$";
    cin>>infraestrutura;
   
    cout<<"-Comissao para o gerente(12%): R$"<<(desenvolvimento*desenvolvedores+servidores+infraestrutura)*12/100<<endl;
    gerente=(desenvolvimento*desenvolvedores+servidores+infraestrutura)*12/100;
   
    cout<<"-Total do projeto: R$"<<gerente+desenvolvimento*desenvolvedores+servidores+infraestrutura<<endl;
    cout<<"***********"<<endl;
    return 0;
}