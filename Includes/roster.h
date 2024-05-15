#ifndef roster_h
#define roster_h
 
#include <vector>
#include "student.h"
using namespace std;

    class classRosterArray
    {
private:
    Student* studentPtr = nullptr;
    classRosterArray* nextNode;
public:
    // Accessors
        void printAll() const;
        void printAverageDaysInCourse(string studentID) const;
        void printInvalidEmails() const;
        void printByDegreeProgram(DegreeProgram DegreeProgram) const;
    // Mutators
        void add(string studentID, string firstName, string lastName, string emailAddress
        , int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
        void remove(string studentID);
    // Other
        classRosterArray* getNextNode() const;
    // Constructor
        classRosterArray(string studentID, string firstName, string lastName, string emailAddress
        , int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    // Destructor
        ~classRosterArray();
    };    

#endif
