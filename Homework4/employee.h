#ifndef EMPLOYEE
#define EMPLOYEE

#include <string>

class Employee{
	public:
		//constructor
		Employee(long = 0, const std::string & ="" , const std::string & ="", const std::string & = "", int =0);
		    
		void setId(const long );			// set id number
		long getId() const;				// get id number
		void setLast(const std::string &);     	// set last name
		std::string getLast () const;		// return last name
		void setFirst(const std::string &);	// set first name
		std::string getFirst () const;		// return first name
		void setMiddle(const std::string &);	// set middle initial
		std::string getMiddle() const;		// return set middle initial
		void setDept(const int);			// set department code
		int getDept() const;			// get department code
		void printEmployee();				// print Employee information
					 
					  
					  
		long  idNum;			//Employee id number
		std::string LastName;		//Employee last name
		std::string FirstName;  	//Employee first name
		std::string MiddleInitial;	//Employee middle intial
		int deptCode;			//Department code
};
#endif
