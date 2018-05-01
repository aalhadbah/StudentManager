#ifndef _STUDENT_H //prevent to include .h file many times
#define _STUDENT_H

#include<string>

using namespace std;

//define student class
class student{

private://accesable only within the class
string firstName;
string lastName;

public: //accesable outside or inside the class

//default constructor
student();

//set name
void setName(string fName, string lName);

//get full name
string fullName() const;
};
#endif
