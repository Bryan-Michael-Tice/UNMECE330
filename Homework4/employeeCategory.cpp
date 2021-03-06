//function bodies her

#include <iostream>
#include <iomanip>
#include <string>
#include "employeeCategory.h"


HourlyEmployee::HourlyEmployee(long id, const std::string &last, const std::string &first, const std::string &initial,int dept, int WorkHr,int Pay){

	hoursOfWork=WorkHr;
	rateOfPay=Pay;
	ot=0;
	weeksEarnings=0.0;
	idNum = id;
	LastName = last;
	FirstName = first;
	MiddleInitial = initial;
	deptCode = dept;
}

void HourlyEmployee::printHourly(){

	 std::cout <<"\033[1;35m **************************************\033[0m"<< std::endl;
	 std::cout << "\033[1;31m Name \033[0m" << getLast() <<", " << getFirst() << " " <<getMiddle() <<"." << std::endl;
	 std::cout << "\033[1;31m Depo: \033[0m" << getDept() << std::endl;
	 std::cout << "\033[1;31m Employee ID: \033[0m" << getId() << std::endl;
	 std::cout << "\033[1;31m Hourly Rate : \033[0m" <<HourlyEmployee::hourlyRate () << std::endl;
	 std::cout << "\033[1;31m Hours Worked : \033[0m" <<HourlyEmployee::hoursWorked () << std::endl;    
	 std::cout << "\033[1;31m Payout : \033[0m" <<HourlyEmployee::payCalc() << std::endl;
	 std::cout << "\033[1;31m ot : \033[0m" << ot <<"Hrs"<< std::endl;
}

double HourlyEmployee::payCalc(){

	 size_t MaxWeekly=40;

	 if(hoursOfWork>MaxWeekly){
		ot=hoursOfWork-MaxWeekly; 
		weeksEarnings=(rateOfPay*MaxWeekly)+(rateOfPay*ot*MaxWeekly);
		return weeksEarnings;
	}
	else{
		weeksEarnings=(rateOfPay*hoursOfWork);
		return weeksEarnings;
	}
}
int HourlyEmployee::hoursWorked(){

 	 return hoursOfWork;
}
void HourlyEmployee::hoursWorked(int Work){
	
	 hoursOfWork=Work;
}
void HourlyEmployee::RateOfPay(int hWork){

	 rateOfPay=hWork;
}
int HourlyEmployee::hourlyRate(){

	 return rateOfPay;
}

SalariedEmployee::SalariedEmployee(long identity, const std::string &lastName, const std::string &firstName, const std::string &Middle,int depo, int pay,float fraction){

	
	LastName = lastName;
	deptCode = depo;
	idNum = identity;
	Sal=pay;
	FirstName = firstName;
	MiddleInitial = Middle;
	AmountWorked = fraction;
}

void SalariedEmployee::printSal(){

	std::cout <<"\033[1;35m **************************************\033[0m"<< std::endl;
	std::cout << "\033[1;31m ID: \033[0m" << getId()<< std::endl;
	std::cout << "\033[1;31m Name: \033[0m" << getLast() <<", " << getFirst() << " " <<getMiddle() <<"." << std::endl;
	std::cout << "\033[1;31m Dept: \033[0m" << getDept() << std::endl;
	std::cout << "\033[1;31m Base Salary: \033[0m" <<Sal << std::endl;
	std::cout << "\033[1;31m % Worked: \033[0m" <<AmountWorked*100 <<" % "<< std::endl;
	std::cout << "\033[1;31m Payout: \033[0m" <<SalariedEmployee::salCalc() << std::endl;
}

int SalariedEmployee::getSal(){

	return Sal;
}
double SalariedEmployee::salCalc(){

	Sal=Sal*AmountWorked;
	return Sal;
}

void SalariedEmployee::salBraket(int pay){

	 Sal=pay;
}
