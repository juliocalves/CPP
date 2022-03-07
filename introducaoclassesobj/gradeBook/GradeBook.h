#include <string>   

using namespace std;

//Definição da class

class GradeBook {

    public: 
        GradeBook (string);
       
        void setCourseName (string);
        string getCourseName();
       
        void setInstructorName(string);
        string getInstructorName();
       
        void setStudentName(string);
        string getStudentName();

        void determineClassAverage();
       
        void displayMessage();
    private:
        string courseName;
        string instructorName;
        string studentName;
};

