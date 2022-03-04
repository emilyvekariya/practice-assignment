#include <stdio.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)	
	for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main()
{
	int x[] = {1,4,7,8,10};
	int y[]={2,3,9};
	int z[8];
	int k=0;
	int i;
	for(i=0;i<sizeof(x)/sizeof(x[0]);i++){
	    z[k]=x[i];
	    k++;
	}
for(i=0;i<sizeof(y)/sizeof(y[0]);i++){
	    z[k]=y[i];
	    k++;
	}

	bubbleSort(z,sizeof(z)/sizeof(z[0]));
	printf("Sorted array: \n");
	printArray(z,sizeof(z)/sizeof(z[0]));
	k=0;
	for(i=0;i<sizeof(x)/sizeof(x[0]);i++){
	    x[i]=z[k];
	    k++;
	}
for(i=0;i<sizeof(y)/sizeof(y[0]);i++){
	    y[i]=z[k];
	    k++;
	}
	printf("{ ");
	for(i=0;i<sizeof(x)/sizeof(x[0]);i++){
	    printf("%d ",x[i]);
	}
	printf("}");
	
	printf("\n");
	printf("{ ");
	for(i=0;i<sizeof(y)/sizeof(y[0]);i++){
	    printf("%d ",y[i]);
	}
	printf("}");
	return 0;
}