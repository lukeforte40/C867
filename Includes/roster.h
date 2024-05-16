#ifndef roster_h
#define roster_h
 
#include <vector>
#include "student.h"
using namespace std;


    class Roster
    {
private:
    vector<Student*> classRosterArray;
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
    // Constructor
        Roster();
    // Destructor
        ~Roster();
    };    

#endif
