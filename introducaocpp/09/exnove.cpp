/*
Escreva um programa que lê o raio de um círculo como um inteiro e imprime o diâmetro, 
a circunferência e a área do círculo. Utilize o
valor constante 3,14159 para π. Faça todos os cálculos em instruções de saída. 
*/

#include <iostream>

using namespace std;

int main () {

    int raioCircunferencia;
    float areacircunferencia;
    float circunferencia;
    float diametro;
    float pi = 3.14159;


    cout << "Digite o raio da circunferencia" << endl;
    cin >> raioCircunferencia;

    diametro = 2*raioCircunferencia;
    areacircunferencia = pi*(raioCircunferencia*raioCircunferencia);
    circunferencia = pi*diametro;


    cout << "O diamentro é " << diametro << " a área da circunferencia " << areacircunferencia << " e a circunferencia é " << circunferencia << endl;

    return 0;

}