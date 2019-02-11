#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void sortingfun(int *,int,int,int);

int main()
{
    int arraysize,arr[10],element,jumpvalue1;
    int i,j=0;
    printf("Enter Size of array :");
    scanf("%d",&arraysize);
    for(i=0;i<arraysize;i++){
        printf("Enter Array Element %d : ",i+1);
        scanf("%d",&arr[i]);}
    printf("Enter element want to search : ");
    scanf("%d",&element);
    jumpvalue1 = sqrt(arraysize);
    while((jumpvalue1-1) < arraysize ){
        if(arr[jumpvalue1-1] > element)
           sortingfun(arr,j,jumpvalue1-1,element);
            break;
        if(arr[jumpvalue1-1] < element){
            jumpvalue1 = jumpvalue1*2;}
        else{
            printf("Element found at location %d",jumpvalue1);
            break;}
             j= j+ jumpvalue1;}
    return 0;
}
void sortingfun(int a[],int location, int location1,int findelement){
    for(int h=location;h<location1;h++){
        if(a[h] == findelement){
            printf("Element Found");}
 }}
