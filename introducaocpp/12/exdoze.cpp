/*
Exiba o seguinte padrão de tabuleiro com oito instruções de saída e, em seguida, exiba o mesmo padrão utilizando o menor número de
instruções possível.
* * * * * * *
* * * * * * *
* * * * * * *
* * * * * * *
* * * * * * *
* * * * * * *
* * * * * * *
* * * * * * *
*/

#include <iostream>

using namespace std;

int main () {

    char white = ' ';
    char black = '*';
    int index;

    for (index = 0; index < 4; index++){
        cout << black << white << black << white << black << white << black << white << black << white << black << white << black << white << black << white << endl;
        cout << white << black << white << black << white << black << white << black << white << black << white << black << white << black << white << black << endl;
    }

    return 0;



}
