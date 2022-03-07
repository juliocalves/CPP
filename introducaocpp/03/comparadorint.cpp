//programa para comparar inteiros utilizando instruções if

#include <iostream>

using namespace std;

int main (){

    int firstnumber;
    int secondnumber;

    cout << "Digite dois número para comparação: ";
    cin >> firstnumber >> secondnumber;

    if (firstnumber == secondnumber)
        cout << firstnumber << " é == " << secondnumber << endl;
    
    if (firstnumber != secondnumber)
        cout << firstnumber << " é != " << secondnumber << endl;
    
    if (firstnumber < secondnumber)
        cout << firstnumber << " é < " << secondnumber << endl;
    
    if (firstnumber > secondnumber)
        cout << firstnumber << " é > " << secondnumber << endl;
    
    if ( firstnumber <= secondnumber)
        cout << firstnumber << " é <= " << secondnumber << endl;

    if ( firstnumber >= secondnumber)
        cout << firstnumber << " é >= " << secondnumber << endl;
    
    return 0;
}