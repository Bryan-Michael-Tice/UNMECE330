#include <stdio.h>
#include "Matrix.h"
#include <string.h>
#include <stdlib.h>

void displayMatrix(){


	int UserChoice; 

	printf("\n\n\n WELCOME TO THE\033[1;31m MATRIX\033[0m ADT\n\n\n ");
	printf("                                                      \n");
	printf("     ---               ---            ---              ---      \n");
	printf("     | a11 a12 ... a1m   |            | b11 b12 ... b1m  |  \n");
	printf("     | a21 a22           |            | b21 b22          |  \n");
	printf("     |  .                |            |  .               |  \n");
	printf(" M1= |  .     .          |    ?  M2 = |  .     .         | =M? \n");
	printf("     |  .       .        |            |  .       .       |   \n");
	printf("     |  .                |            |  .               |  \n");
	printf("     | an1 an2 ... anm   |            | bn1  bn2    bnm  |   \n");
	printf("     ---              ---             ---              ---       \n");

	

}





matrix GetMatrix(int Row,int Col,_MatNum* ValueZero){
			
				matrix resultant_Matrix;


				resultant_Matrix.element = (_MatNum**)malloc( Row* sizeof(_MatNum*));

				printf("Matrix a is now\n");
		       		for(int k = 0 ; k<Row; k++){
				
					resultant_Matrix.element[k] = (_MatNum*)malloc(Col * sizeof(_MatNum*));

				}
				for(int i=0;i<Row;i++){
					
					for(int j=0;j<Col;j++){
					
						//resultant_Matrix.element[i][j]  =*(ValueZero + (Row*i+j));
					//	scanf("%lf",&resultant_Matrix.element[i][j]);
					
						resultant_Matrix.element[i][j]  =175;
						printf(" %.2lf ",resultant_Matrix.element[i][j]);
			
	
				
				}
					printf("\n");	
					}

				return resultant_Matrix;
			//	free(resultant_Matrix);


	/*			printf("number of rows?");
				scanf("%d",&Row);
				printf("number of columns?");
				scanf("%d",&Col);
*/
			/*	newMatrix = create_empty(int Row,int Col);

				for(int i=0;i<sizeof(newMatrix.Rows);i++){
					
					for(int j=0;j<sizeof(newMatrix.Cols);j++){
					
						printf("%lf",newMatrix.element[i][j]);

					}
				}
				return newMatrix;
		//		free(AnotherMatrix);
		*/
			
				/*	printf("%d %d\n\n", a->Rows,a->Cols);
				printf("Matrix a is now\n");
			
	
				a->element = (_MatNum**)malloc(a->Rows* sizeof(_MatNum*));

				for(int i = 0 ; i<a->Rows; i++){
				
					a->element[i] = (_MatNum*)malloc(a->Cols * sizeof(_MatNum*));

				}
				for(int i=0;i<a->Rows;i++){
					
					for(int j=0;j<a->Cols;j++){
					
						a->element[i][j]  = 0;
						printf("  %.2lf   ",a->element[i][j]);
					}
				
				printf("\n");
				}

		
				printf("\n");
		}*/


}


matrix create_empty(int Rows, int Cols){


				matrix temp;
//
	/*			printf("number of rows?");
				scanf("%d",&a->Rows);
				printf("number of columns?");
				scanf("%d",&a->Cols);
			
			*/	printf("%d %d\n\n",Rows,Cols);
				printf("Matrix a is now\n");
			
	
				temp.element = (_MatNum**)malloc( Rows* sizeof(_MatNum*));

				printf("Matrix a is now\n");
		       		for(int k = 0 ; k<Rows; k++){
				
					temp.element[k] = (_MatNum*)malloc(Cols * sizeof(_MatNum*));

				}
				for(int i=0;i<Rows;i++){
					
					for(int j=0;j<Cols;j++){
					
						temp.element[i][j]  =0.00;
						printf("  %.2lf   ",temp.element[i][j]);
			
	
				
				}

					printf("\n");
				
					}
                               // return temp;
			        
				return temp;

				 
//				free(temp);
}

matrix add(matrix *newMatrix,matrix *newMatrix1){


	matrix temp;
		
	temp.element = (_MatNum**)malloc( newMatrix->Rows* sizeof(_MatNum*));
	for(int i=0;i<newMatrix->Rows;i++){
		
printf("\n%d\n",newMatrix->Rows);
		for(int j=0;j<newMatrix1->Cols;j++){
		
		temp.element[i][j]  = newMatrix->element[i][j]+newMatrix1->element[i][j];
		
//printf("matrix is\n");
			printf("  %.2lf   ",temp.element[i][j]);
	

		}
	}

	return temp;
}
