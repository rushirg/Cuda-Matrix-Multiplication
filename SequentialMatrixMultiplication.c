

#include<stdio.h>
#include<time.h>
int main()
{
        int  a[100][100],b[100][100],c[100][100];
        int  i,j,k;
        clock_t start, end;
        double cpu_time;
        for(i=0;i<100;i++){
	       
	        for(j=0;j<100;j++){
	                b[i][j]=5;
	                a[i][j]=5;
	                c[i][j]=0;
	        }
        }
	
	start = clock();
        for(i=0;i<100;i++){
        
		for(j=0;j<100;j++){
			 for(k=0;k<100;k++){
		                c[i][j]+=a[i][k]*b[k][j];
			}
		 }
        }

        for(i=0;i<100;i++){
		
		for(j=0;j<100;j++){
			printf("%d ",c[i][j]);
		}
      	        printf("\n");
        }
        end = clock();

        cpu_time= ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("\nCPU time=%f sec",cpu_time);
	return 0;
}
