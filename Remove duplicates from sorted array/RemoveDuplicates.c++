#include <stdio.h>
#include <conio.h>
#include <iostream>
void removeDuplicates(int arr[],const int n){
   int temp[n];
   int j = 0;  
     printf("length: %d \n",n);

    for(int i = 0; i<=n-2;i++){
        if(arr[i]!=arr[i+1]){
            temp[j++] = arr[i];
        }
    }
    temp[j++]=arr[n-1]; 
    for (int i=0; i<j; i++) 
       printf("%d ",temp[i]); 
}

int main(){
    
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5, 6,7}; 
    int n =(int) sizeof(arr)/sizeof(arr[0]);
    int a = n;
    printf("length: %d \n",n);
    removeDuplicates(arr,n);
    return 1;
}