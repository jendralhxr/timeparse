#include <stdio.h>
#include <string.h>

FILE *logfile;

int val_max[55][18];
float val_avg[55][18];
float width[55][18];
 
int main(int argc, char **argv){
	int n, m, i;
	logfile = fopen(argv[1], "r");
	for (n=0; n<55; n++){
		for (m=0; m<18; m++){
			fscanf(logfile, "%d;%d;%f;%f\n", &i, &(val_max[n][m]), &(val_avg[n][m]), &(width[n][m]));
			//printf("n %d i %d max %d\n",n, i, val_max[n][i]);
			}
		}
	for (n=0; n<55; n++){
		for (m=0; m<18; m++){
			printf("%.2f;",width[n][m]);
			}
			printf("\n");
		}	
	return(0);
	}
