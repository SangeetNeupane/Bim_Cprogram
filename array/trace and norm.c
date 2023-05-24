#include<stdio.h>
#include<math.h>  
#include<conio.h>
void main()
{

    int i, j, n, M[10][10], sum = 0, sum1 = 0, a = 0;
	float normal;

    printf("\nEnter the number of rows (columns) of the matrix: \n\n");
    scanf("%d", &n);

    printf("\nEnter the %d elements of the first matrix: \n\n", n*n);

    for(i = 0; i < n; i++)   
    {
        for(j = 0; j < n; j++)   
        {
            scanf("%d", &M[i][j]);
            a = M[i][j]*M[i][j];  // finding square of each element
            sum1=sum1+a;  
        }
    }
    normal = sqrt(sum1);    

    printf("\n\nThe normal of the given matrix is: %.2f", normal);
    for(i = 0; i < n; i++)
    {
        sum = sum + M[i][i];   
    }
    printf("\n\nThe Trace of the given matrix is: %d", sum);
    
    getch();
}
