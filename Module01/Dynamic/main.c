/* File: test_dynamic.c */
#include "matrix_dynamic.h"

int main() 
{
	  static T data[] = {1,2,3,4};
          matrix  a,b,userDefined;
          a = create_initvals(2,2,data);
          b = create_empty(2,2);
	  equate(&a,&b);
          printf("\n Matrix a:");
          matrix_print(a);
          printf("\n Matrix b:");
          matrix_print(b);
	  printf("\n a+b:");
	  matrix_print(add(a,b));


          printf("\n\033[1;31m Transposed Matrix a \033[0m:");
   	  matrix_print_int(transpose(a));

	  printf("\n\033[1;31m Transposed Matrix b  \033[0m:");
	  matrix_print_int(transpose(b));

	  printf("\n\033[1;34m Enter Number of Rows  \033[0m:");
          scanf("%d",&userDefined.row_dim);

	  printf("\n\033[1;34m Enter number of Columns  \033[0m:");
	  scanf("%d",&userDefined.col_dim);
							    	    
	  userDefined = create_userDefined(userDefined.row_dim,userDefined.col_dim);
	   	 
	  printf("\n\033[1;31m Transposed Matrix Defined by user \033[0m:");
	  matrix_print_int(transpose(userDefined));


}

