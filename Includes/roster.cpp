#include <string>
#include <vector>
#include <iostream>
#include "degree.h"
#include "student.h"
#include "roster.h"
using namespace std;


// Accessors
    vector<Student*> Roster::getClassRosterArray() const {
        return this->classRosterArray;
    };
    void Roster::printAll() const {
        if (classRosterArray.size() == 0)
        {
            cout << "No students in the roster." << endl;
        }
        else
        {
            for (int i = 0; i < this->classRosterArray.size(); i++)
            {
                Student* studentPtr = classRosterArray.at(i);
                studentPtr->print();
            }

        }
    };
    void Roster::printAverageDaysInCourse(string studentID) const {
        cout << "Average days until Completion for ";
        for (int i = 0; i < this->classRosterArray.size(); i++)
        {
            Student* studentPtr = classRosterArray.at(i);
            if (studentID == studentPtr->getStudentID())
            {
                cout << studentPtr->getFirstName() << " " << studentPtr->getLastName() << ": ";
                int totDays = 0;
                for (int d = 0; d < 3; d++)
                {
                    totDays += studentPtr->getDaysToCompletion(d);
                }
                cout << totDays/3 << endl;
            }
        }
    };
    void Roster::printInvalidEmails() const {
        // FIX ME
    };
    void Roster::printByDegreeProgram(DegreeProgram DegreeProgram) const {
        if (0 == this->classRosterArray.size())
        {
            cout << "This roster shows no students in this program." << endl;
        }
        
        for (int i = 0; i < this->classRosterArray.size(); i++)
        {
            Student* studentPtr = classRosterArray.at(i);
            switch (DegreeProgram)
            {
            case 0:
                if ("Network" == studentPtr->getCurrentStudentDegree())
                {
                    studentPtr->print();
                }            
            case 1:
                if ("Securtiy" == studentPtr->getCurrentStudentDegree())
                {
                    studentPtr->print();
                }
            case 2:
                if ("Software" == studentPtr->getCurrentStudentDegree())
                {
                    studentPtr->print();
                }
            default:   
                break;
            };
        }
    };
//Mutators
    void Roster::add(string studentID, string firstName, string lastName, string emailAddress
    , int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram){
        Student* studentPtr = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
        classRosterArray.push_back(studentPtr);
    };
    void Roster::remove(string studentID){
        string output = "A student with this ID was not found";
        for (int i = 0; i < this->classRosterArray.size(); i++)
        {
            Student* studentPtr = classRosterArray.at(i);
            if (studentID == studentPtr->getStudentID())
            {
                classRosterArray.erase(classRosterArray.begin() + i);
                output = "Success!";
            }
        }
        cout << output << endl;
    };
// Constructor
    Roster::Roster(){
        // FIX ME
    }
// Destructor
    Roster::~Roster(){
        for (int i = 0; i < classRosterArray.size(); i++)
        {
            delete classRosterArray.at(i);
        }
    };