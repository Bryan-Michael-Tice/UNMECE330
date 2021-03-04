// my first pointer
#include <iostream>

int main() {

	int firstValue,secondValue;
	int *mypointer;

	mypointer=&firstValue;
	*mypointer=10;
	mypointer = &secondValue;
	*mypointer=20;
	std::cout<<"firstValue is" << firstValue<<std::endl;
	std::cout<<"secondValue is" << secondValue<<std::endl;
return 0;


}
