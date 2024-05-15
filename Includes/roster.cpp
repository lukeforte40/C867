#include <string>
#include <vector>
#include "degree.h"
#include "student.h"
#include "roster.h"
using namespace std;

// Class roster linked list setup

// Accessors
    void classRosterArray::printAll() const {
        // FIX ME
    };
    void classRosterArray::printAverageDaysInCourse(string studentID) const {
        // FIX ME
    };
    void classRosterArray::printInvalidEmails() const {
        // FIX ME
    };
    void classRosterArray::printByDegreeProgram(DegreeProgram DegreeProgram) const {
        // FIX ME
    };
//Mutators
    void classRosterArray::add(string studentID, string firstName, string lastName, string emailAddress
    , int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram){
        // Making the student object and linking a pointer to it
            this->studentPtr = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
        // 

        // Deleting the student pointer
            delete studentPtr;
    };
    void classRosterArray::remove(string studentID){
        // FIX ME
    };
// Other
    classRosterArray* classRosterArray::getNextNode() const{
        return nextNode;
    };
// Constructor
    classRosterArray::classRosterArray(string studentID, string firstName, string lastName, string emailAddress
        , int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram){
        this->studentPtr = new Student(studentID, firstName, lastName, emailAddress
        , age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
        this->nextNode = nullptr;
    };
// Destructor
    classRosterArray::~classRosterArray(){
        delete this-> studentPtr;
        while (this->nextNode != nullptr){
            this->getNextNode();
            delete this-> studentPtr;
        }
    };