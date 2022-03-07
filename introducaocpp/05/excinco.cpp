/*
Escreva um programa que solicita ao usuário inserir dois números, 
obtém os dois números do usuário e imprime a soma, produto, diferença
e quociente dos dois números.
*/

#include <iostream>

using namespace std;

int main (){

    int primeroNum;
    int segundoNum;
    int soma;
    int produto;
    int diferenca;
    int quociente;

    cout << "Digite dois números: " << endl;
    cin >> primeroNum>> segundoNum;

    soma = primeroNum + segundoNum;
    produto = primeroNum * segundoNum;
    diferenca = primeroNum - segundoNum;
    quociente = primeroNum / segundoNum;

    cout << "A soma é: " << soma << ".\n\nO produto é: " << produto << ".\n\nA diferença é: " << diferenca << ".\n\nO quociente é: " << quociente << "." << endl;

    return 0;
}