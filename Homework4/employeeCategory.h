//inherited classes here
#include <string>
#include "employee.h"


class HourlyEmployee : public Employee{
	
	public:
		HourlyEmployee(long = 0, const std::string & ="" , const std::string & ="", const std::string & = "", int =0, int=0,int=0);
	
		double payCalc();
		void printHourly();
		int hoursOfWork,rateOfPay,ot;
		void RateOfPay(int);
		void hoursWorked(int);
		int hoursWorked();
		int hourlyRate();
		double weeksEarnings;
};

class SalariedEmployee:public Employee
{
	public:
		SalariedEmployee(long =0, const std::string & ="", const std::string & = "", const std::string & = "", int =0, int =0,float=0);

                void salBraket(int);
                int Sal;
                void printSal();
                double salCalc();
                int getSal();
		float AmountWorked;
};
