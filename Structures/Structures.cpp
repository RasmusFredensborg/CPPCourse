// Structures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int main()
{
	struct STUDENTS {
		string name = "Test Testesen";
		float time = 3.4;
		int recentChapter = 3;
	};

	const int numberOfStudents = 10;
	STUDENTS structTest[numberOfStudents];

	for (int i = 0; i < numberOfStudents; i++)
	{
	    cout << "Student name: " << structTest[i].name << "\nStudent time: " << structTest[i].time << "\nStudent recent chapter: " << structTest[i].recentChapter << "\n";
	}
    return 0;
}

