//Definição de classe GradeBook em um arquivo separado

#include <iostream>
#include <string>

using namespace std;

//Definição da class
class GradeBook{
    
    public:
        //o construtor inicializa courseName com a string  fornecida  como argumento
        GradeBook(string name){
            setCourseName(name); //chama a função set para inicializar courseName
        } 

        //função para confugurar  o nome  do curso
        void setCourseName( string name){
            courseName = name; //armazena  o nome  do curso objeto
        }    

        //função para obter o nome do curso
        string getCourseName(){
            return courseName;
        }

        //exibe um mensagem ao usuario
        void displayMessage(){
            //chama getCourseName para obter o nome
            cout << "Bem vindo ao curso\n" << getCourseName() << "!" << endl;
        }
    private:
        string courseName;
};
