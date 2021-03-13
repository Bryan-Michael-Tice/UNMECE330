#include <iostream>

template <class Value>
void swap(Obj &value1, Obj &value2){
	
	Value hold = value1;
	value1=value2;
	value2 = hold;
}
template <class T>
void selSort(T array[],int arraySize){
	int smallest;

	for ( int i = 0; i <arraySize - 1; ++i ){
		smallest = i;
		
		for ( int index = i + 1; index < arraySize; ++index )
			if ( array[ index ] < array[ smallest ] )
				
				smallest = index;
				swap (array[i], array[smallest]);
	}
}


