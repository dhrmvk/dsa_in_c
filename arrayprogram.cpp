#include<stdio.h>
#define MAX 10
void insertat(int a[],int pos,int val,int *size){
	for(int i = *size-1;i>=pos;i--)
	{
		a[i+1] = a[i];
	}
	a[pos] = val;
	*size = *size + 1;
}
void deleteat(int a[],int pos,int *size){
	for(int i = pos;i<*size;i++)
	{
		a[i] = a[i+1];
	}
	*size = *size - 1;	
}
int main(){
	int n;
	int a[MAX];
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++)
	printf("%d  ",a[i]);
	insertat(a,2,99,&n);
	insertat(a,3,199,&n);
	printf("\n after insertion at pos\n");
	for(int i=0;i<n;i++)
	printf("%d  ",a[i]);
	deleteat(a,3,&n);
	printf("\n after deletion at pos\n");
	for(int i=0;i<n;i++)
	printf("%d  ",a[i]);
	return 0;
}
