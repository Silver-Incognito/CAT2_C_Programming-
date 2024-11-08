//2-D Arrays
//An Array data structure is a contiguous block of memory which stores elements of the same data type.
/*
NAME : OWAYA E AUGUSTINE
REG  : CT101/G/23524/24
*/

#include <stdio.h>

int main(){
	
	int i,j;
	int scores [4][2]= {{65,92},{84,72},{35,70},{59,67}};
	
	
	for (i=0;i<4;i++){
		for (j=0;j<2;j++){
			printf("scores[%d][%d]=%d\n",i,j,scores[i][j]);
		}
	}
	

	return 0;
}