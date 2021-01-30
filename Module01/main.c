#include <stdio.h>
#include "Matrix.h"
#include <string.h>

int main(){

//	int choice=100;
        int m,n;

        matrix newMatrix,newMatrix1,newMatrix2;
       	_MatNum *Values;
   //     newMatrix = malloc(sizeof(_MatNum));


        
    		displayMatrix();
       
	
//
				printf("number of rows?");
				scanf("%d",&newMatrix.Rows);
				printf("number of columns?");
				scanf("%d",&newMatrix.Cols);

			m=newMatrix.Rows;
			n=newMatrix.Cols;
//printf("%d%d",m,n);

     		newMatrix  = GetMatrix(m,n,Values);
                
			for(int i=0;i<m;i++){
					
				for(int j=0;j<n;j++){
					
			//	a->element[i][j]  = 0;
					printf("  %.2lf   ",newMatrix.element[i][j]);
		       		 }
			printf("\n");
		
			}
			

     		newMatrix1  = create_empty(m,n);
                
			for(int i=0;i<m;i++){
					
				for(int j=0;j<n;j++){
					
			//	a->element[i][j]  = 0;
					printf("  \033[1;31m %.3lf\033[0m   ",newMatrix1.element[i][j]);
		       		 }
			printf("\n");
		
			}

     		newMatrix2  = add(&newMatrix1,&newMatrix);
                
			for(int i=0;i<m;i++){
					
				for(int j=0;j<n;j++){
					
			//	a->element[i][j]  = 0;
					printf("  \033[1;31m %.3lf\033[0m   ",newMatrix2.element[i][j]);
		       		 }
			printf("\n");
		
			}
	printf("\n WELCOME TO THE\033[1;31m MATRIX\033[0m ADT\n ");
//	free(newMatrix);
//	free(newMatrix1);
return 0;
}


