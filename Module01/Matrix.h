#include <stdlib.h>
#include <stdio.h>

typedef double _MatNum; //define a floating point 

typedef struct{

	int Rows, Cols;
	_MatNum** element;//give it a two pointers floating pint 
	
}matrix;

//typedef struct _Matrix matrix;

void displayMatrix();

matrix GetMatrix(int Row,int Col,_MatNum* ValueZero);

matrix create_empty(int Rows, int Cols);

matrix add(matrix FirstMatrix,matrix SecondMatrix);

