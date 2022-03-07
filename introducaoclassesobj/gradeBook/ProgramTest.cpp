/*
Modificando a classe GradeBook. Modifique a classe GradeBook (figuras 3.11–3.12) como mostrado a seguir:
a) Inclua um segundo membro de dados string que representa o nome do instrutor de curso.
b) Forneça uma função set para alterar o nome do instrutor e uma função get para recuperá-lo.
c) Modifique o construtor para especificar dois parâmetros — um para o nome do curso e um para o nome do instrutor.
d) Modifique a função-membro displayMessage de tal maneira que ele primeiro gere a saída da mensagem de boas-vindas e o nome
do curso, depois gere a saída de “This course is presented by: ” seguido pelo nome do instrutor.
Utilize sua classe modificada em um programa de teste que demonstra as novas capacidades da classe.
*/

#include<iostream>

using namespace std;

#include "GradeBook.cpp"

int main (){

    GradeBook gradeBook1 ("Cpp Programação orientada a objetos");
   
    gradeBook1.setCourseName("CPP");
    gradeBook1.setInstructorName("Livro");
    gradeBook1.setStudentName("Julio");
    gradeBook1.displayMessage();


    gradeBook1.determineClassAverage(); // calcula a média das 10 notas
    cout << "Este é o curso " << gradeBook1.getCourseName() << " ministrado pelo " << gradeBook1.getInstructorName()
    << " que possúi " << gradeBook1.getStudentName() << " como aluno" << endl;


    return 0;
}