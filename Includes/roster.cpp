#include <string>
#include <iostream>
#include "degree.h"
#include "student.h"
#include "roster.h"
using namespace std;

// Accessors
    Student** Roster::getClassRosterArray() {
        return this->classRosterArray;
    };
    void Roster::printAll() const {
        if (this->classRosterArraySize == 0)
        {
            cout << "No students in the roster." << endl;
        }
        else
        {
            for (int i = 0; i < this->classRosterArraySize; i++)
            {
                Student* studentPtr = classRosterArray[i];
                if (studentPtr != nullptr)
                {
                    studentPtr->print();
                }                
            }

        }
    };
    void Roster::printAverageDaysInCourse(string studentID) const {
        cout << "Average days until Completion for ";
        for (int i = 0; i < this->classRosterArraySize; i++)
        {
            Student* studentPtr = classRosterArray[i];
            if (studentID == studentPtr->getStudentID())
            {
                cout << studentPtr->getFirstName() << " " << studentPtr->getLastName() << ": ";
                int totDays = 0;
                for (int d = 0; d < 2; d++)
                {
                    totDays += studentPtr->getDaysToCompletion(d);
                }
                cout << totDays/3 << endl;
            }
        }
    };
    void Roster::printInvalidEmails() const {
        cout << "Invalid Emails: " << endl;
        int atCount = 0;
        int periodCount = 0;
        if (0 == this->classRosterArraySize)
        {
            cout << "No emails to check." << endl;
        }
        else
        {
            string invalidEmails[this->classRosterArraySize];
            for (int i = 0; i < this->classRosterArraySize; i++)
            {
                int spaceCount = 0;
                Student* tempStudent = this->classRosterArray[i];
                string studentEmail = tempStudent->getStudentEmail();
                for ( char& c : studentEmail)
                {
                    switch (c)
                    {
                    case '@':
                        atCount++;
                        break;
                    case ' ':
                        spaceCount++;
                        break;
                    case '.':
                        periodCount++;
                        break;
                    default:
                        break;
                    } 
                }
                if (0 < spaceCount)
                {
                    cout << "Student Id: " << this->classRosterArray[i]->getStudentID() << " | Student Email: " << studentEmail << endl;
                }
                else
                {
                    if (0 == atCount || 0 == periodCount)
                    {
                        cout << "Student Id: " << this->classRosterArray[i]->getStudentID() << " | Student Email: " << studentEmail << endl;
                    }
                } 
            }
        }
    };
    void Roster::printByDegreeProgram(DegreeProgram DegreeProgram) const {
        if (0 == this->classRosterArraySize)
        {
            cout << "This roster shows no students in this program." << endl;
        }
        
        for (int i = 0; i < this->classRosterArraySize; i++)
        {
            Student* studentPtr = classRosterArray[i];
            if (studentPtr != nullptr)
            {
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
        }
    };
//Mutators
    // FIX ME (Roster::add), and (Roster::remove)
    void Roster::add(const string StudentData[]){        
        for (int i = 0; i < sizeof(*StudentData)/sizeof(string*) + 1; i++)
        {
            string studentID;
            string firstName;
            string lastName;
            string emailAddress;
            string age;
            string daysInCourse1;
            string daysInCourse2;
            string daysInCourse3;
            DegreeProgram degreeProgram;
            string degreeProgramString;
            int dataType = 0;
            int lastDataType = dataType;
            string student = StudentData[i];
            for (char& l : student)
            {
                if (l == ',')
                {
                    lastDataType = dataType;
                    dataType = -1;
                }
                switch (dataType)
                {
                case -1:
                    // Comma
                    dataType = lastDataType + 1;
                    break;
                case 0:
                    // Student Id
                    studentID += l;
                    break;
                case 1:
                    // First Name
                    firstName += l;
                    break;
                case 2:
                    // Last Name
                    lastName += l;
                    break;
                case 3:
                    // Email
                    emailAddress += l;
                    break;
                case 4:
                    // Age
                    age += l;
                    break;
                case 5:
                    // Days In Course 1
                    daysInCourse1 += l;
                    break;
                case 6:
                    // Days In Course 2
                    daysInCourse2 += l;
                    break;
                case 7:
                    // Days In Course 3
                    daysInCourse3 += l;
                    break;
                case 8:
                    // Degree Program
                    degreeProgramString += l;
                default:
                    break;
                }                    
            }
            if (degreeProgramString == "SOFTWARE")
            {
                degreeProgram = SOFTWARE;
            }
            else if (degreeProgramString == "NETWORK")
            {
                degreeProgram = NETWORK;
            }
            else if (degreeProgramString == "SECURITY")
            {
                degreeProgram = SECURITY;
            }
            Student* studentPtr = new Student(studentID, firstName, lastName, emailAddress, stoi(age), stoi(daysInCourse1), stoi(daysInCourse2), stoi(daysInCourse3), degreeProgram);
            classRosterArray[this->classRosterArrayIndex] = studentPtr;
            this->classRosterArrayIndex++;
            this->classRosterArraySize++;
        } 
    };
    void Roster::remove(string studentID){
        string output = "A student with this ID was not found";
        for (int i = 0; i < this->classRosterArraySize; i++)
        {
            Student* studentPtr = classRosterArray[i];
            if (studentPtr != nullptr)
            {
                if (studentID == studentPtr->getStudentID())
                {
                    delete classRosterArray[i];
                    classRosterArray[i] = nullptr;
                    output = "Success!";
                }
            }
        }
        cout << output << endl;
    };
// Constructor
    Roster::Roster(){
        NULL;
    }
// Destructor
    Roster::~Roster(){
        for (int i = 0; i < this->classRosterArraySize; i++)
        {
            delete classRosterArray[i];
        }
    };