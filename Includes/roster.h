#ifndef roster_h
#define roster_h
 
#include "student.h"
using namespace std;


    class Roster
    {
private:
    Student* classRosterArray[5] = {nullptr, nullptr, nullptr, nullptr, nullptr};
public:
    // Variables
        int classRosterArrayIndex = 0;
        int classRosterArraySize = 0;
    // Accessors
        Student** getClassRosterArray();
        void printAll() const;
        void printAverageDaysInCourse(string studentID) const;
        void printInvalidEmails() const;
        void printByDegreeProgram(DegreeProgram DegreeProgram) const;
    // Mutators
         void add(const string StudentData[]);
        void remove(string studentID);
    // Constructor
        Roster();
    // Destructor
        ~Roster();
    };    

#endif
