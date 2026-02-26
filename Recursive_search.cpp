#include<stdio.h>
#define MAX 7
int Rec_linearSerch(int a[],int key,int size){
	if(size == 0)
		return -1;
	else if(a[size-1] == key)
		return size-1;
	else Rec_linearSerch(a, key, size-1);
}
int Rec_BinarySerch(int a[],int key,int low,int high){
	if(low == high){
		if(a[low] == key)
			return low;
		else
			return -1; 
	}
	else{
		int mid = (low + high) / 2;
		if(key < a[mid])
			return Rec_BinarySerch(a, key, low, mid-1);
		else
			return Rec_BinarySerch(a, key, mid+1, high);
	}	
}
int main(){
	int a[] = {23,45,64,78,123};
	
	int lindex = Rec_linearSerch(a, 45, 5);
	if(lindex == -1){
		printf("Key not found!!!\n");
	}
	else{
		printf("found at %d\n", lindex);
	}
	
	int bindex = Rec_BinarySerch(a, 45, 0, 4);
	if(bindex == -1){
		printf("Key not found!!!\n");
	}
	else{
		printf("found at %d\n", bindex);
	}
	
	return 0;
}
