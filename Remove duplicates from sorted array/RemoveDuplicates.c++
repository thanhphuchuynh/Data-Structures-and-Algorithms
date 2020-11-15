#include <stdio.h>
#include <conio.h>
#include <iostream>
void removeDuplicates(int arr[]){
   const int n =(int) sizeof(arr);
   int temp[n];
   int j = 0;
//    printf("%d",n);

    for(int i = 0; i<=n-1;i++){
        if(arr[i]!=arr[i+1]){
            temp[j++] = arr[i];
        }
    }
    temp[j++]=arr[n-1]; 
    for (int i=0; i<j; i++) 
       printf("%d ",temp[i]); 
}

int main(){
    
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}; 
    
    removeDuplicates(arr);
    return 1;
}