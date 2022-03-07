//Programa de adição que exibe dois números

#include <iostream>

int main(){

    //declaração de variáveis
    int firstnumber;
    int secondnumber;
    int sum;

    std::cout << "Digite o primeiro número inteiro: "; //solicita um imput de dados ao usuario
    std::cin >> firstnumber; // lê o dado imputado
    
    std::cout << "Digite o segundo número interio: "; 
    std::cin >> secondnumber;

    sum = firstnumber + secondnumber;

    std:: cout << "Sua soma é " << sum << std::endl; // exibe o resultado e termina a linha

    return 0;

}