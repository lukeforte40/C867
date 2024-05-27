#include "Includes/roster.h"
#include <iostream>

using namespace std;

int main(){
    const string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Luke,Forte,lfort11@wgu.edu,25,30,5,10,SOFTWARE"};
    Roster* classRoster = new Roster;
    cout << "Class Title: Scripting and Programming - Applications - C867 \t" << "Language Used: C++" << endl;
    cout << "Student ID: 010398679 \t" << "Student Name: Luke Forte" << endl;
    classRoster->add(studentData);
    // cout << sizeof(studentData)/ sizeof(string) << endl;
    classRoster->printAll();
    classRoster->printInvalidEmails();
    Student** tempArray = classRoster->getClassRosterArray(); 
    for (int i = 0; i < classRoster->classRosterArraySize; i++)
    {
        if (tempArray[i] != nullptr)
        {
            classRoster->printAverageDaysInCourse(tempArray[i]->getStudentID());
        }
    }
    classRoster->printByDegreeProgram(SOFTWARE);
    classRoster->remove("A3");
    classRoster->printAll();
    classRoster->remove("A3");

    delete classRoster;
    return 0;
};