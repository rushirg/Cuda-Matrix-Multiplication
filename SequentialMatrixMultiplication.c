

#include<stdio.h>
#include<time.h>
int main()
{

        int count=0;
//        int  a[100][100],b[100][100],c[100][100]; previous static input
        printf("\nEnter the value of matrix size\n");
        scanf("%d",&count);
        int  a[count][count],b[count][count],c[count][count];
        int  i,j,k;
        clock_t start, end;
        double cpu_time;
        
        
        for(i=0;i<count;i++){
	       
	        for(j=0;j<count;j++){
	                b[i][j]=rand()%50;
	                a[i][j]=rand()%50;
	                c[i][j]=rand()%50;
	        }
        }
	
	start = clock();
        for(i=0;i<count;i++){
        
		for(j=0;j<count;j++){
			 for(k=0;k<count;k++){
		                c[i][j]+=a[i][k]*b[k][j];
			}
		 }
        }

        for(i=0;i<count;i++){
		
		for(j=0;j<count;j++){
			printf("%d ",c[i][j]);
		}
      	        printf("\n");
        }
        end = clock();

        cpu_time= ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("\nCPU time=%f sec",cpu_time);
	return 0;
}
