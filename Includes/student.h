#ifndef student_h
#define student_h

#include <string>
#include <vector>
#include "degree.h"
using namespace std;

    class Student {
private:
    string studentID;
    string firstName;
    string lastName;
    string studentEmail; 
    int studentAge;
    DegreeProgram currentStudentDegree;
    vector<int> daysToCompletion{-1,-1,-1};
public:
    // Accessor
        string getStudentID() const;
        string getFirstName() const;
        string getLastName() const;
        string getStudentEmail() const;
        int getStudentAge() const;
        int getDaysToCompletion(int i) const;
        string getCurrentStudentDegree() const;
        void print() const;
    // Mutators
        void setStudentID(string newStudentID);
        void setFirstName(string newFirstName);
        void setLastName(string newLastName);
        void setStudentEmail(string newStudentEmail);
        void setStudentAge(int newStudentAge);
        void setDaysToCompletion(int x, int y, int z);
        void setCurrentStudentDegree(DegreeProgram newCurrentStudentDegree);
    // Constructor
        Student();
};    
#endif