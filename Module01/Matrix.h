#include <stdlib.h>
#include <stdio.h>

typedef double _MatNum; //create a floating point keyword

typedef struct{

	int Rows, Cols;
	_MatNum** element;
	
}matrix;

//typedef struct _Matrix matrix;



void displayMatrix();

matrix GetMatrix(int Row,int Col,_MatNum* ValueZero);

//struct _Matrix InitialValues(int Rows, int Cols, _MatNum* Value);


matrix create_empty(int Rows, int Cols);

matrix add(matrix *newMatrix,matrix *newMatrix1);

