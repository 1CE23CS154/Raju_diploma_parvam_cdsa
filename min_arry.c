#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the 5 elements");
    for(int i=0; i>n; i++){
       scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=0; i>n; i++){
        if(arr[i]<min){
         min=arr[i];
        }
    }
    printf("The min element is %d",min);
    return 0;
}