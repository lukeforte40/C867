#include <iostream>
#include <vector>
#include "student.h"
using namespace std;

// Accessors
    string Student::getStudentID() const {
        return studentID;
    };
    string Student::getFirstName() const {
        return firstName;
    }
    string Student::getLastName() const {
        return lastName;
    }
    string Student::getStudentEmail() const {
        return studentEmail;
    }
    int Student::getStudentAge() const {
        return studentAge;
    }
    int Student::getDaysToCompletion(int i) const {
        return daysToCompletion[i];
    }    
    string Student::getCurrentStudentDegree() const {
        switch (currentStudentDegree)
        {
        case 0:
            return "Network";
            break;
        
        case 1:
            return "Security";
            break;
        case 2:
            return "Software";
        default:
            return "Unknown";
            break;
        };
    }
// Mutators
    void Student::setStudentID(string newStudentID) {
        Student::studentID = newStudentID;
    }
    void Student::setFirstName(string newFirstName) {
        Student::firstName = newFirstName;
    }
    void Student::setLastName(string newLastName) {
        Student::lastName = newLastName;
    }
    void Student::setStudentEmail(string newStudentEmail) {
        Student::studentEmail = newStudentEmail;
    }
    void Student::setStudentAge(int newStudentAge) {
        Student::studentAge = newStudentAge;
    }
    void Student::setDaysToCompletion(int x,int y,int z) {
        Student::daysToCompletion[0] = x;
        Student::daysToCompletion[1] = y;
        Student::daysToCompletion[2] = z;
    }
    void Student::setCurrentStudentDegree(DegreeProgram newCurrentStudentDegree) {
        Student::currentStudentDegree = newCurrentStudentDegree;
    }
// Other
    void Student::print() const {
        cout << Student::getStudentID() << "\t" << "First Name: " << Student::getFirstName() << "\t";
        cout << "Last Name: " << Student::getLastName() << "\t" << "Age: " << Student::getStudentAge() << "\t";
        cout << "Email: " << Student::getStudentEmail() << "\t" << "Degree Program: ";
        cout << Student::getCurrentStudentDegree() << "\t Days in course: {";
        for (int i = 0; i < 3; i++)
        {
            if (i == 2){
                cout << Student::getDaysToCompletion(i) << "}";
            }
            else{
                cout << Student::getDaysToCompletion(i) << ", ";
            }
        }
        cout << endl;
    };
// Constructor
    Student::Student(string cstudentID = "--", string cfirstName = "noName", string clastName = "noName", string cstudentEmail = "noEmail", int cstudentAge = -1 
        , int cdaysToCompletion1 = -1, int cdaysToCompletion2 = -1, int cdaysToCompletion3 = -1, DegreeProgram ccurrentDegree = SOFTWARE){
        this->studentID = cstudentID;
        this->firstName = cfirstName;
        this->lastName = clastName;
        this->studentEmail = cstudentEmail;
        this->studentAge = cstudentAge;
        this->daysToCompletion = {cdaysToCompletion1, cdaysToCompletion2, cdaysToCompletion3};
        this->currentStudentDegree = ccurrentDegree;
};
