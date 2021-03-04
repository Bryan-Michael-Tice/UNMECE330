// pointer arithmetic
#include <iostream>

int main(){

	char shahnaz,mahnaz;
	char *p=&shahnaz;
	char *q=&mahnaz;
	*p='h';
	*q=*(++p);
	std::cout<<"p="<<*p<<std::endl;
	std::cout<<"shahnaz="<<shahnaz<<std::endl;
	std::cout<<"q="<<*q<<std::endl;

     	std::cout<<" red text part"<<std::endl<<std::endl;

	int i,j,k;
	i=10;
	j=++i;
	k=i++;
	std::cout<<"i="<<i<<std::endl;
	std::cout<<"j="<<j<<std::endl;
	std::cout<<"k="<<k<<std::endl;
	return 0;

}
