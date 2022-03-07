#include <iostream>

using namespace std;

#include "GradeBook.h"


//Construtor
GradeBook::GradeBook(string name){
    setCourseName (name);
    setInstructorName(name);
    setStudentName (name);
}

//função para configurar nomes
void GradeBook::setCourseName(string name){
    courseName = name;
}

void GradeBook::setInstructorName(string name){
    instructorName = name;
}

void GradeBook::setStudentName(string name){
    studentName = name;
}


//função para obter nomes
string GradeBook::getCourseName(){
    return courseName;
}

string GradeBook::getInstructorName(){
    return instructorName;
}

string GradeBook::getStudentName(){
    return studentName;
}

//função mensagens
void GradeBook::displayMessage(){
    cout << "Bem vindo a GradeBook do curso " << getCourseName() << "!" << endl;
    cout << "Este curso é ministrado por " << getInstructorName() << "!" << endl;
    cout << "E é um prazer ter você " << getStudentName() << " como nosso aluno!" << endl;
}

// determina a média da classe com base em 10 notas inseridas pelo usuário
void GradeBook::determineClassAverage(){
    int total; // soma das notas inseridas pelo usuário
    int gradeCounter; // número da nota a ser inserida a seguir
    int grade; // valor da nota inserida pelo usuário
    int average; // média das notas
    // fase de inicialização
    total = 0; // inicializa o total
    gradeCounter = 1; // inicializa o contador de loops
    // fase de processamento
    while ( gradeCounter <= 10 ) // faz o loop 10 vezes
{
    cout << "Enter grade: "; // solicita entrada
    cin >> grade; // insere a próxima nota
    total = total + grade; // adiciona grade a total
    gradeCounter = gradeCounter + 1; // incrementa o contador por 1
} // fim do while
// fase de término
average = total / 10; // divisão de inteiros produz um resultado inteiro
// exibe o total e a média das notas
    cout << "\nTotal of all 10 grades is " << total << endl;
    cout << "Class average is " << average << endl;
} // fim da função determineClassAverage