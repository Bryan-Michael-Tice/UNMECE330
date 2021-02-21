#include <string>
#include "HeartRate.cpp"

int main(){

	int MaximumHeartRateVal,AgeVal;
	std::string BirthDateEntry,TargetHeartRate,NameEntry;
	std::cout<<std::endl;
	
	std::cout<<"\x1B[44m WELCOME TO THE TARGET HEART RATE CALCULATOR\033[0m"<<std::endl;
	std::cout<<"\x1B[44m ALL DATES MUST BE ENTERED WITH THE FORMAT: MM,DD,YYYY or MM DD YYYY\033[0m"<<std::endl;
	std::cout<<"\x1B[31m Enter First then Last name\033[0m"<<std::endl;
	getline(std::cin,NameEntry);

	std::cout<<"\x1B[31m Enter Date of Birth \033[0m"<<std::endl;
	getline(std::cin,BirthDateEntry);

        HeartRates EntryFormat(NameEntry,BirthDateEntry);

	std::cout<<"\x1B[35m First Name is \033[0m"<<EntryFormat.FirstNameEntry()<<std::endl;
	std::cout<<"\x1B[35m Last Name is \033[0m"<<EntryFormat.LastNameEntry()<<std::endl;
        std::cout<<"\x1B[35m DOB is \033[0m"<<EntryFormat.DateOfBirthEntry()<<std::endl;

	AgeVal = EntryFormat.getAge();

	MaximumHeartRateVal = EntryFormat.getMaximumHeartRate(AgeVal);

        std::cout<<"\x1B[93m The Maximum Heart Rate is \033[0m "<<MaximumHeartRateVal<<std::endl;

	TargetHeartRate = EntryFormat.getTargetHeartRate(MaximumHeartRateVal);

        std::cout<<"\x1B[93m The Target Heart Rate\033[0m "<<TargetHeartRate<<std::endl; 

return 0;

}
