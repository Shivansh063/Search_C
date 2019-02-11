#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arraysize,arr[10],element,i;
    int beg,pos,end;
    int upper,lower;
    printf("Enter Size of array : ");
    scanf("%d",&arraysize);
    for(i=0;i<arraysize;i++){
        printf("Enter Array Element %d : ",i+1);
        scanf("%d",&arr[i]);}
    printf("Enter element want to search : ");
    scanf("%d",&element);
    beg=0;
    end=arraysize-1;
    while(beg<end){
        upper = (element-arr[beg])*(end-beg);
        lower= arr[end]-arr[beg];
        pos = beg + (int)upper/lower;
        if(arr[pos] > element){
            end = pos-1;}
        else if(arr[pos] < element){
            beg = pos+1;}
        else{
            printf("Element found at location %d",pos+1);
            break;}}
    if(beg>end)
        printf("Element not found");

    return 0;
}
