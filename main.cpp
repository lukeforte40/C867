#include "Includes/roster.h"
#include <iostream>

using namespace std;

int main(){
    // final submission requirements
        cout << "Class Title: Scripting and Programming - Applications - C867 \t" << "Language Used: C++" << endl;
        cout << "Student ID: 010398679 \t" << "Student Name: Luke Forte" << endl;
        Roster* classRoster = new Roster;
        // Add student objects
        classRoster->printAll();
        // classRoster->printInvalidEmails();
        // loop through classRosterArray and for each element:
        //classRoster.printAverageDaysInCourse(/*current_object's student id*/);
        // classRoster->printByDegreeProgram(SOFTWARE);
        classRoster->remove("A3");
        classRoster->printAll();
        classRoster->remove("A3");
        // Testing
            // classRoster->add("A1", "Luke", "Forte", "test@email.com", 25, 10, 30, 15, SOFTWARE);
        delete classRoster;
        return 0;
};