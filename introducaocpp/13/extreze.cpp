/*
Escreva um programa que lê dois inteiros e determina e imprime se o primeiro é um múltiplo do segundo.
E determina e imprime qual é ímpar ou par.
*/

#include <iostream>
using namespace std;

int main (){

    int primeiroNum;
    int segundoNum;

    cout << "Digite os inteiros: " << endl;
    cin >> primeiroNum >> segundoNum;

    if (primeiroNum % segundoNum == 0){
        cout << "O número: " << primeiroNum <<" é multiplo de " << segundoNum << endl; 
    } else {
        cout << "O número: " << primeiroNum <<" não é multiplo de " << segundoNum << endl; 
    }

    if (primeiroNum % 2 == 0 ){
        cout << "O número " << primeiroNum << " é par." << endl;
    } else {
        cout << "O número " << primeiroNum << " é impar." << endl;
    }


    if ( segundoNum % 2 == 0){
        cout << "O número " << segundoNum << " é par." << endl;
    } else {
        cout << "O número " << segundoNum << " é impar." << endl;
    }

    return 0;

}