//Inclui a classe GradeBook a partir  do arquivo GradeBook.h

#include <iostream>
using namespace std;

#include "GradeBook.h"

int main (){

    //Cria objetos GradeBook

    GradeBook gradeBook1("CPP Programação ");
    GradeBook gradeBook2("CPP classes e objetos");

    //exibe valor inicial  de courseName para a GradeBook
    cout << "gradeBook1 criada para curso: " << gradeBook1.getCourseName() << 
    "\ngradeBook2 criada para curso: " << gradeBook2.getCourseName() << endl; 
    
    return 0;
}

