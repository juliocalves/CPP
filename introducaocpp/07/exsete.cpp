/*
Escreva um programa que pede para o usuário inserir dois inteiros, obtém os números do usuário, 
e então imprime o maior número seguido
pelas palavras “é o maior” . Se os números forem iguais, imprime a mensagem “Estes números são iguais” .
*/

#include <iostream>

using namespace std;

int main (){

    int primeiroNum;
    int segundoNum;

    cout << "Digite dois inteiros: " << endl;
    cin >> primeiroNum >> segundoNum;

    if(primeiroNum > segundoNum){
        cout << "O número " << primeiroNum << " é o maior!" << endl;
    }
    if (segundoNum > primeiroNum){
        cout << "o número " << segundoNum << " é o maior!" << endl;
    }
    if (primeiroNum == segundoNum){
        cout <<"Estes números são iguais." << endl;
    }

    return 0;    

}