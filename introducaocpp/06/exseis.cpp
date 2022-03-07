/*
Escreva um programa que calcula os quadrados e cubos dos inteiros de 0 a 10 e
usa tabulações para imprimir as seguintes tabelas de valores
*/

#include <iostream>

using namespace std;

int main (){

    int numeros[11] = {0,1,2,3,4,5,6,7,8,9,10};
    int numerosquadrados;
    int numeroscubicos;
    int index;

    cout << "Inteiro   " << "Quadrado   " << "Cubo   "<< endl;

    for (index = 0; index < 11; index++){

        numerosquadrados = numeros[index] * numeros[index];
        numeroscubicos = numeros[index] * numeros[index] * numeros[index]; 
        cout << numeros[index] << "         " << numerosquadrados << "         " <<  numeroscubicos << "\n"; 
    } 
    return 0;
}