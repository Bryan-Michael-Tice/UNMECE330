#include <iostream>
#include <iomanip>
#include <string>
#include "employee.h"


// constructor

Employee::Employee(long id, const std::string &last, const std::string &first, const std::string &initial, int dept){
 
	 idNum = id;
 	 LastName = last;
 	 FirstName = first;
 	 MiddleInitial = initial;
 	 deptCode = dept;
}
// Accessor function defintions
void Employee::setId(const long  id){
	idNum = id;
}
// get id number
long Employee:: getId() const{
	return idNum;
}
//set last name

void Employee:: setLast(const std::string &last){
	LastName = last;
}
//return last name
std::string Employee:: getLast() const{
	return LastName;
}
//set first name 		                      
void Employee:: setFirst(const std::string &first){
	FirstName = first;
}
//return first name
std::string Employee:: getFirst() const{
 	return FirstName;
}
//set middle name

void Employee:: setMiddle(const std::string &last){
	MiddleInitial = last;
}
//return middle name
std::string Employee:: getMiddle() const{
	return MiddleInitial;
}
//set department code
void Employee::setDept(const int dc){
	deptCode = dc;
}
// get department code
int Employee:: getDept() const{
	return deptCode;
}
//print employee information
void Employee:: printEmployee (){
	std::cout << std::endl;
	std::cout << "Employee ID Number: " << getId() <<std::endl;
        std::cout << "Name: " << getLast()<<", " << getFirst() << " " <<getMiddle() <<"." << std::endl;
	std::cout << "Dept Code: " << getDept() << std::endl;  
}

