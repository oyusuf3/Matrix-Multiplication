/*Program #2, cssc4864, Omar Yusuf */
#include "p2.h"

void read_matrices(int **A, int **B, int **C ,  int *m, int *n, int *p, char *matrixInfo){
	int i;
	int j;

	FILE *fp;
	fp=fopen(matrixInfo, "r");
	fscanf(fp, "%d %d %d", m,n,p);
	*A = (int *)malloc((*m) * (*n) * sizeof(int));
	*B = (int *)malloc((*n) * (*p) * sizeof(int));
	*C = (int *)malloc((*m) * (*p) * sizeof(int));

	for(i = 0; i < *m ; i++){
		for(j=0; j <*n ; j++){
			fscanf(fp,"%d", (*A + (i * *n + j))); 
		}
	}
	for(i = 0; i < *n ; i++){
		for(j=0; j <*p ; j++){
 			fscanf(fp,"%d", (*B + (i * *p + j)));
		}
	}

	fclose(fp);

}
void print_matrix(int *matrix, int x, int y){
	int i;
	int j;
	for(i = 0; i < x; i++) {
      		for(j = 0; j < y; j++) {
        		printf("%3d ", *(matrix + (i* y + j)));
      		}
      		printf("\n");
 	}
}




void mult_matrices(int *A, int *B, int *C, int m, int n, int p){
	int i;
	int j;
	int k;
	for(i=0; i < m; i++){
    		for(j=0; j < p; j++) {
      			*(C + (i * p + j)) = 0;
        		for(k=0; k < n; k++){
            			*(C + i * p + j) += *(A + i * n + k)  *  *(B + k * p + j);
                        }
         	}
    	}
}

int main( int argc, char **argv){
	int *A, *B, *C, m, n, p;
	read_matrices(&A,&B,&C,&m,&n,&p,*(argv + 1));
	printf("Matrix A contents: \n");
	print_matrix(A,m,n);
	printf("Matrix B contents: \n");
	print_matrix(B,n,p);
	printf("Matrix A * B is: \n");
	mult_matrices(A,B,C,m,n,p);
	print_matrix(C,m,p);
	return 0;
}