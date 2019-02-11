#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arraysize, arr[10],element;
    int i,j;
    int k=0;
    printf("Enter Array Size : ");
    scanf("%d",&arraysize);
    for(i=0;i<arraysize;i++){
        printf("Enter Array element %d : ",i+1);
        scanf("%d",&arr[i]);}
    printf("Enter element you want to search : ");
    scanf("%d",&element);
    for(j=0;j<arraysize;j++){
        if(arr[j] == element){
            printf("Element Found at location %d",j+1);
            k++;}}
    if(k !=1){
        printf("Element not found");}
    return 0;
}
