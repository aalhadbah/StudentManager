#include "student.h"

//default constructor
student::student(){
}

//set name
void student::setName(string fName, string lName){
        firstName = fName;
        lastName = lName;
}

//get full name
string student::fullName() const{

        string fullName;

        //append first, space, last to full name
        fullName.append(firstName);
        fullName.append(" ");
        fullName.append(lastName);

        return fullName;
}

