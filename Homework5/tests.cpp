#include <iostream>
#include "SelSort.hpp"


int main(){
	
	int integerArray[5000];
	int arraySizeInt,arraySizeFloat;
	float floatArray[5000];

	std::cout<<"\033[1;31m Integer array size?\033[0m"<<std::endl;
	std::cin>>arraySizeInt;
	std::cout<<std::endl;
	std::cout<<"\033[1;31m Enter integer element values:\033[0m"<<std::endl;
	
	for(int i=0;i<arraySizeInt;i++){
		std::cout<<std::endl;
		std::cout<<"\033[1;36m Element \033[0m "<<i+1<<std::endl;
		std::cin>>integerArray[i];
	}

	selSort(integerArray,arraySizeInt);
	
	std::cout<<std::endl;
	std::cout<<"\033[1;31m Float array size? \033[0m"<<std::endl;
	std::cin>>arraySizeFloat;
	std::cout<<std::endl;
	std::cout<<"\033[1;31m Enter float array element values: \033[0m"<<std::endl;

	for(int i=0;i<arraySizeFloat;i++){
		std::cout<<std::endl;
		std::cout<<"\033[1;36m Element \033[0m"<<i+1<<std::endl;
		std::cin>>floatArray[i];
	}
	
	selSort(floatArray,arraySizeFloat);
	
	
	std::cout<<std::endl;
	std::cout<<"\033[1;35m Your Sorted integers Sir/Ma'am...\033[0m"<<std::endl;
	
	for(int i=0;i<arraySizeInt;i++){
		std::cout<<integerArray[i]<<"  ";
	}
	std::cout<<std::endl;
	std::cout<<"\033[1;35m Your sorted floating point numbers Sir/Ma'am...:\033[0m"<<std::endl;
	for(int i=0;i<arraySizeFloat;i++){
		std::cout<<floatArray[i]<<"  ";
	}
	std::cout<<std::endl;
return 0;
}
