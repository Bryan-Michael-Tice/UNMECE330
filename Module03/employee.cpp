#include <iostream>
#include <iomanip>
#include <string>
#include "employee.h"

using namespace std;

// constructor

 Employee::Employee(long id, const string &last, const string &first, const string &initial, int dept){
 
	 myIdNum = id;
 	 myLastName = last;
 	 myFirstName = first;
 	 myMiddleInitial = initial;
 	 myDeptCode = dept;
}
// Accessor function defintions
void Employee::setIdNum (const long  id){
	myIdNum = id;
}
// get id number
long Employee:: getIdNum () const{
	return myIdNum;
}
//set last name

void Employee:: setLastName (const string &last){
	myLastName = last;
}
//return last name
string Employee:: getLastName () const{
	return myLastName;
}
//set first name 		                      
void Employee:: setFirstName (const string &first){
	myFirstName = first;
}
//return first name
string Employee:: getFirstName () const{
 	return myFirstName;
}
//set middle name

void Employee:: setMiddleInitial (const string &last){
	myMiddleInitial = last;
}
//return middle name
string Employee:: getMiddleInitial () const{
	return myMiddleInitial;
}
//set department code
void Employee::setDeptCode (const int dc){
	myDeptCode = dc;
}
// get department code
int Employee:: getDeptCode () const{
	return myDeptCode;
}
//print employee information
void Employee:: printEmployee (){
	std::cout << endl;
	std::cout << "Employee ID Number: " << getIdNum() <<std::endl;
        std::cout << "Name: " << getLastName() <<", " << getFirstName() << " " <<getMiddleInitial() <<"." << std::endl;
	std::cout << "Dept Code: " << getDeptCode () << std::endl;  
}

