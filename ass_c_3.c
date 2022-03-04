#include<stdio.h>

int main(){
	int a[10]={1,5,4,8,9,2,0,6,11,7},n,flag=0;

	printf("Enter any element for search in the array: ");
	scanf("%d",&n);

	for(int i=0;i<10;i++){
		if(n==a[i])
			flag=1;
	}

	if(flag==1)
		printf("YES\n");
	else
		printf("NO\n");

	printf("Numbers of array is: ");
	for(int i=0;i<10;i++){
		printf("%d",a[i]);
	}
}
