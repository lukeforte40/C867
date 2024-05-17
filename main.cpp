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
        vector<Student*> tempArray = classRoster->getClassRosterArray(); 
        for (int i = 0; i < tempArray.size(); i++)
        {
            classRoster->printAverageDaysInCourse(tempArray.at(i)->getStudentID());
        }
        classRoster->printByDegreeProgram(SOFTWARE);
        classRoster->remove("A3");
        classRoster->printAll();
        classRoster->remove("A3");
        // Testing
            cout << "Testing:" << endl;
            classRoster->add("A1", "Luke", "Forte", "test@email.com", 25, 10, 30, 15, SOFTWARE);
        delete classRoster;
        return 0;
};