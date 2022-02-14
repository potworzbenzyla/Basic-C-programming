#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	int columns, rows;
	printf("Insert amonth of columns ");
	scanf("%i", &columns);
	printf("Insert amonth of rows ");
	scanf("%i", &rows);
	
	int arrayA[columns][rows];
	int arrayB[columns][rows];
	int sum[columns][rows];
	int difference[columns][rows];
	int i,j;
	
	for(i=0; i<columns; i++){
		for(j=0; j<rows; j++){
			system("cls");
			printf("Podaj kolejny element pierwszej macierzy ", i);
			scanf("%i", &arrayA[i][j]);
		}
	}
	
	for(i=0; i<columns; i++){
		for(j=0; j<rows; j++){
			system("cls");
			printf("Podaj kolejny element drugiej macierzy ", j);
			scanf("%i", &arrayB[i][j]);
		}
	}
	
	for(i=0; i<columns; i++){
		for(j=0; j<rows; j++){
			sum[i][j] = arrayA[i][j] + arrayB[i][j];
			difference[i][j] = arrayA[i][j] - arrayB[i][j];
		}
	}
	
	printf("\n Array A \n\n");
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%3d\t", arrayA[i][j]);
		}
		printf("%\n");
	}
	
	printf("\n Array B \n\n");
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%3d\t", arrayB[i][j]);
		}
		printf("%\n");
	}
	
	printf("\n Sum \n\n");
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%3d\t", sum[i][j]);
		}
		printf("%\n");
	}
	
	printf("\n Differnece \n\n");
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%3d\t", difference[i][j]);
		}
		printf("%\n");
	}
	return 0;
}
