#include "Includes/roster.h"
#include <iostream>

using namespace std;

int main(){
    // final submission requirements
        cout << "Class Title: Scripting and Programming - Applications - C867 \t" << "Language Used: C++" << endl;
        cout << "Student ID: 010398679 \t" << "Student Name: Luke Forte" << endl;
        Roster testroster{};

    //Testing
        testroster.add("A1","Luke","Forte", "test@email.com", 25, 10, 30, 15, SOFTWARE);
        //testroster.printAll();
     
        return 0;
};