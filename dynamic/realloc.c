#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{

	int *ptr;
	int n, i;

	printf("Enter number of elements:\n");
    scanf("%d",&n);
		// Dynamically allocate memory using calloc()
		ptr = (int*)malloc(n*sizeof(int));
		// Get the elements of the array
		for (i = 0; i < n; i++)
      {
			scanf("%d",ptr+i);
		}
     		// Print the elements of the array
		printf("The elements of the array are: ");
		for (i = 0; i < n; i++) {
			printf("%d\t", ptr[i]);
		}

		// Get the new size for the array
		printf("\n\nEnter the new size of the array: \n");
      scanf("%d",&n);
		// Dynamically re-allocate memory using realloc()
		ptr = (int*)realloc(ptr, n * sizeof(int));

		// Memory has been successfully allocated
		printf("Memory successfully re-allocated using realloc.\n");

		// Get the new elements of the array
		for (i = 0; i < n; i++) {
			scanf("%d",ptr+i);
		}

		// Print the elements of the array
		printf("The elements of the array are: ");
		for (i = 0; i < n; i++)
      {
			printf("%d\t ",ptr[i]);
		}

		free(ptr);
	getch();
}
