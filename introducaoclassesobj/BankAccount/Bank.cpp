/*
(Classe Account ) Crie uma classe chamada Account que um banco poderia utilizar para representar contas bancárias dos clientes. 
Sua classe deve incluir um membro de dados de tipo int para representar o saldo da conta. 
Sua classe deve fornecer um construtor que recebe um saldo inicial e o utiliza para inicializar o membro de dados. 
O construtor deve validar o saldo inicial para assegurar que ele seja maior que ou igual a 0. 
Se não, o saldo deve ser configurado como 0 e o construtor deve exibir uma mensagem de erro, 
indicando que o saldo inicial era inválido. A classe deve fornecer três funções-membro. 
A função-membro credit deve adicionar uma quantia ao saldo atual. 
A função-membro debit deve retirar o dinheiro de Account e assegurar que a quantia de débito não exceda o saldo de Account . 
Se exceder, o saldo deve permanecer inalterado e a função deve imprimir uma mensagem que indica 
“Debit amount exceeded account balance.” 
A função-membro getBalance deve retornar o saldo atual.
Crie um programa que cria dois objetos Account e testa as funções-membro da classe Account .
*/


#include<iostream>

using namespace std;

#include "Account.cpp"

int main (){


    Account account1 {1,"julio",0.0,5000.00,1000.00};
   
    account1.displayMessage();
    account1.setCredit(600.00);
    account1.setDebit(100.00);
    account1.displayMessage();

    Account account2 {2,"cesar",0.0,9000.00,2000.00};

    account2.displayMessage();
    account2.setCredit(900.00);
    account2.setDebit(1000.00);
    account2.displayMessage();

    return 0;
}

    