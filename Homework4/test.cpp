#include <iostream>
#include <string>
#include "employee.h"
#include "employeeCategory.h"

int main(){

        HourlyEmployee Emp1 (001, "Fardin", "Mohammad", "A", 19,29,15);
	HourlyEmployee Emp2(002,"Sourian","Hamid","R",06,25,11);
	HourlyEmployee Emp3(003,"Sanderson","Cael","N",9,88,35);
	
	SalariedEmployee Emp4 (004, "Gable", "Dan", "M", 22,75000,1.0);
	SalariedEmployee Emp5 (005, "Karelin", "Alexander", "A", 23,60000,0.75);
	SalariedEmployee Emp6 (006, "Soleimani", "Alireza", "K", 20,145000,0.50);
    
        Emp1.printHourly();
	Emp2.printHourly();
	Emp3.printHourly();
	Emp4.printSal();
	Emp5.printSal();
	Emp6.printSal();

return 0;
}
