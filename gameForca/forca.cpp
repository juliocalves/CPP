/* Desafio jogo da forca */
#include <iostream> 
#include <stdio.h> // biblioteca padrão


//Sobrenome para tipos, funções  e outros possíveis membros
using namespace std;

int main() {

    //declaração de variáveis
    char palavra[30],letra[1],palavraSecreta[30];
    int tamanho, index, chances, acertos;
    bool acerto=false;

    //iniação de variáveis
    chances=6;
    tamanho=0;
    acertos=0;

    //inicio do programa
    cout << "Jogador 1, digite a palavra secreta:";
    cin >> palavra;
    system("clear");

    //percorre array
    /* Enquanto palavra na posição index for diferente de \0, incremente index; ao encontrar o \0 defina o tamanho*/
    while(palavra [index] != '\0'){
        index++; //incremeneta index
        tamanho++;
    }

    //vetor vizual 
    /* Enquanto index for menor que 30 incremente index, e incremente - para o tamnho da palavra*/
    for(index=0;index<30;index++){
        palavraSecreta[index] = '-';
    }

    //começa rotina do jogo
    /*Enquanto chances for > 0 e enquanto acertos < tamanho da palavra; forneça opções para o jogador*/
    while((chances >0) && (acertos < tamanho)){
        cout << "Jogadas restantes: " << chances << "\n\n";
        cout << "Palavra secreta: ";
        
        /*Para index menor que tamanho  incremente index*/
        for(index=0; index < tamanho; index++){
            cout << palavraSecreta[index];
        }

        cout << "\n\nDigite um letra: ";
        cin >> letra[0];
        
        /*Enquanto index for menor que tamanho incremente index*/    
        for(index=0;index < tamanho; index++){
            /*Se letra digitada for igual a alguma letra da palavra; acerto recebe true*/
            if (palavra[index]==letra[0]){
                acerto=true;
                palavraSecreta[index]=palavra[index];
                acertos++;
            }
        }

        /*Se acerto for igual a false diminua o número de chances*/
        if(!acerto){
            chances--;
        }

        acerto=false;
        system("clear");
    }

    if (acertos==tamanho){
        cout << "Jogador 2 venceu";
    }else{
        cout << "Jogador 1 venceu";
    }

    return 0;

}