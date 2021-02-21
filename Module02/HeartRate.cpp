#include <iostream>
#include <sstream>
#include <string>
#include "HeartRate.h"

HeartRates::HeartRates(const std::string &FullName,const std::string &DateOfBirth){

	SeperateName(this->FirstName,this->LastName,FullName);

	this->DOB=ReadDOB(DateOfBirth);

}


std::string HeartRates::ReadDOB(std::string DOBsupplied){

	for(int j=0;j<DOBsupplied.length();j++){
		
		
		if(DOBsupplied[j]==' '|| DOBsupplied[j]==','){
		
			DOBsupplied[j] = '/';
		}	

	}

	return DOBsupplied;
}


void HeartRates::SeperateName(std::string &NameFirst,std::string &NameLast,std::string FullName){

	int j=0;

	for(j=0;j<FullName.length();j++){
	
		if(FullName[j]==' '||FullName[j]==',')
			break;
	}

        
	NameFirst = FullName.substr(0,j);
	NameLast = FullName.substr(j+1);
}

std::string HeartRates::FirstNameEntry(){

	return FirstName;
}
std::string HeartRates::LastNameEntry(){

	return LastName;
}
std::string HeartRates::DateOfBirthEntry(){

	return DOB;
}

int HeartRates::getAge(){

	int count=0,j;
	int YearToday,YearBirth;
	int SPC;
	std::string BirthD=this->DOB;
	std::string TodayDate;

	std::cout<<"\x1B[31m Enter the date today \033[0m"<<std::endl;
	getline(std::cin,TodayDate);
	for(j=0;j<TodayDate.length();j++){
	
		if (TodayDate[j]==' '||TodayDate[j]==','){
		
			count++;
		}
	
		if(count==2){
		
			break;
		}
	}
	
	std::stringstream FixYear(TodayDate.substr(j+1));
	count =0;
	FixYear>>YearToday;
	
	for (j=0;j<BirthD.length();j++){
		
	
		if(BirthD[j]=='/'){
		count++;
		
		}
		if(count==2){
		
			break;
		}
	}

	std::stringstream GetYear(BirthD.substr(j+1));
	GetYear>>YearBirth;
	return YearToday-YearBirth;
}

int HeartRates::getMaximumHeartRate(int Age){

	return (220-Age);

}

std::string HeartRates::getTargetHeartRate(int MaximumHR){

        int low,high;

	std::stringstream LowRate,HighRate;
	
        low=0.50*(MaximumHR);
	high=0.85*(MaximumHR);

        LowRate<<low;
        HighRate<<high;

	std::string lowerHR = LowRate.str();
	std::string higherHR = HighRate.str();
       	
	return "\x1B[93mRange is: \033[0m "+higherHR+"\x1B[93m to \033[0m "+lowerHR ;


}
