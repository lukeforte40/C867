#include <string>
#include <vector>
#include "degree.h"
#include "student.h"
#include "roster.h"
using namespace std;

// Class roster linked list setup

// Accessors
    void classRosterArrayNode::printAll() const {
        // FIX ME
    };
    void classRosterArrayNode::printAverageDaysInCourse(string studentID) const {
        // FIX ME
    };
    void classRosterArrayNode::printInvalidEmails() const {
        // FIX ME
    };
    void classRosterArrayNode::printByDegreeProgram(DegreeProgram DegreeProgram) const {
        // FIX ME
    };
//Mutators
    void classRosterArrayNode::add(string studentID, string firstName, string lastName, string emailAddress
    , int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram){
       // FIX ME
    };
    void classRosterArrayNode::remove(string studentID){
        // FIX ME
    };
// Other
    classRosterArrayNode* classRosterArrayNode::getNextNode() const{
        return nextNode;
    };
