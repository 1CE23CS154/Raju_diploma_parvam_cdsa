#include<stdio.h>
int main(){
int a []={1,2,1,7,8};
int n=sizeof(a)/sizeof(a[0]);
int target;
printf("Enter key value to be searched");
scanf("%d", &target);
for(int i=0; i<n; i++){
if(target==a[i]){
    printf("The element is present at index %d \n");
    return 0;
}   
}
printf("The element is not present !");
return 0;
}