#include <string>

class HeartRates{


	private:
		std::string FirstName;
		std::string LastName;
		std::string DOB;

	public:
		HeartRates(const std::string &FullName,const std::string &DateOfBirth);
		
		void SeperateName(std::string &NameFirst,std::string &NameLast,std::string CompleteName);
		
		std::string ReadDOB(std::string DOBsupplied);

		int getAge();
		
		std::string DateOfBirthEntry();
		
		std::string FirstNameEntry();
		
		std::string LastNameEntry();
		
		std::string getTargetHeartRate(int MaximumHR);
		
		int getMaximumHeartRate(int Age);
		
};


