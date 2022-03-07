/*
Escreva um programa que insere três inteiros a partir do teclado e imprime a soma, a média, o produto, o menor e o 
maior desses números.
O diálogo de tela deve se parecer com o seguinte:
Entre com três valores inteiros: 13 27 14
Soma: 54
Média: 18
Produto: 4914
O menor: 13
O maior: 27
*/

#include <iostream>

using namespace std;

int main (){

    int primeiroNum;
    int segundoNum;
    int terceiroNum;

    cout << "Digite seus números:" << endl;
    cin >> primeiroNum >> segundoNum >> terceiroNum;

    int soma;
    int media;
    int produto;
    int maior;
    int menor;

    soma = primeiroNum + segundoNum + terceiroNum;
    media = soma / 3;
    produto = primeiroNum * segundoNum * terceiroNum;

    if (primeiroNum > segundoNum && primeiroNum > terceiroNum){
        maior = primeiroNum;
    }
    if (segundoNum > primeiroNum && segundoNum > terceiroNum){
        maior = segundoNum;
    }
    if (terceiroNum > primeiroNum && terceiroNum > segundoNum){
        maior = terceiroNum;
    }
    if (primeiroNum < segundoNum && primeiroNum < terceiroNum){
        menor = primeiroNum;
    }
    if (segundoNum < primeiroNum && segundoNum < terceiroNum)
        menor = segundoNum;
    if ( terceiroNum < primeiroNum && terceiroNum < segundoNum){
        menor = terceiroNum;
    }

    cout << "seus valores inteiros: " << primeiroNum << " " << segundoNum << " " << terceiroNum << endl;
    cout << "Soma: " << soma << endl;
    cout << "Media: " << media << endl;
    cout << "Produto: " << produto << endl;
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;

    return 0;

}