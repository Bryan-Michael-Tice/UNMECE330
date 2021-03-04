// more pointers
#include <iostream>

int main() {

	int firstValue =5, secondValue=15;
	int *p1,*p2;

	p1=&firstValue;
	p2=&secondValue;
	*p1=10;
	*p2=*p1;
	p1=p2;
	*p1=20;

	std::cout<<"firstValue is" << firstValue<<std::endl;
	std::cout<<"secondValue is" << secondValue<<std::endl;
	return 0;
	
}
