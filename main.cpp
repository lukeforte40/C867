#include "Includes/roster.h"
#include <iostream>

using namespace std;

int main(){
    // final submission requirements
        cout << "Class Title: Scripting and Programming - Applications - C867 \t" << "Language Used: C++" << endl;
        cout << "Student ID: 010398679 \t" << "Student Name: Luke Forte" << endl;
        Roster* classRoster = new Roster;
        classRoster->printAll();
        // Add code here
        delete classRoster;
        return 0;
};