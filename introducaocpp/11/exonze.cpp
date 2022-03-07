/*
Escreva um programa que lê cinco inteiros e determina e imprime o maior e o menor inteiro do grupo.
*/

# include <iostream>

using namespace std;

int main (){

    int index;
    int numeros[4];
    int maior;
    int menor;
    int auxiliar;
    int cont;

    cout << "Digite 5 número aleatórios:" << endl;
    
    for (index = 0; index < 5; index++){
        cin >> numeros[index];
    }

    for ( auxiliar = 1; auxiliar < 5; auxiliar++){
        for (index = 0; index < 5 - 1; index++){
            if (numeros[index] > numeros[index + 1]){
                cont = numeros[index];
                numeros[index] = numeros [index + 1];
                numeros[index + 1] = cont;
            }
        }
    }

    maior = numeros[4];
    menor = numeros[0];

    cout << "O maior é: " << maior << " o menor é: " << menor << endl;

    return 0;
}