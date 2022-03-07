#include <iostream>

using namespace std;

#include "Account.h"


Account::Account(int id, string name, float balance, float credit, float debit){
    setIdAccount (id);
    setCustomerName (name);
    setBalance (balance);
    setCredit(credit);
    setDebit(debit);
   
}

void Account::setIdAccount(int id){
    idAccount = id;
}

void Account::setCustomerName(string name){
    customerName = name;
}

void Account::setBalance (float balance){
    balance = balance;
}

void Account::setDebit (float debit){
    if (debit > 0 && debit <= balance){
        balance -= debit;
    }
    if (debit > balance){
        cout << "Debit amount exceeded account balance." << endl;
    }
}

void Account::setCredit(float credit){
    if (credit > 0 ){
        balance += credit; 
    }
}

int Account::getIdAccount(){
    return idAccount;
}

string Account::getCustomerName(){
    return customerName;
}

float Account::getBalance(){
    return balance;
}

void Account::displayMessage(){
    cout << "Bem vindo a sua conta " << getCustomerName() << "!" << endl;
    cout << "Seu saldo atual é R$" << getBalance() << "!" << endl;
}