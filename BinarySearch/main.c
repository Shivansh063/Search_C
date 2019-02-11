#include<stdio.h>
#include<stdlib.h>

void binarysearch(int *,int, int);

int main(){
	int n,arr[10],i,k;
	printf("Enter size of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter Array element %d : ",i+1);
		scanf("%d",&arr[i]);}
	int sizearray = sizeof(arr)/sizeof(arr[0]);
	printf("Enter element Want to search : ");
	scanf("%d",&k);
	binarysearch(arr,k,sizearray);
	return 0;
	}

void binarysearch(int a[], int elefound, int sizea){
	int beg,mid,end;
	beg = 0;
	end = sizea-1;
    mid = (beg+end+1)/2;
    while(beg < end){
    	if(a[mid] == elefound){
    		printf("Element found at location %d",mid+1);
    		break;}
    	if(a[mid] > elefound){
    		end = mid-1;
    		mid = (beg+end+1)/2;}
    	else{
    		beg = mid+1;
    		mid = (beg + end+1)/2;}
    }}


