#include <stdio.h>
#include <conio.h>


int getMissingNumber(int array[]){
    
    int n =(int) sizeof(array);
    
    int totalArray = (n+1)*(n+2)/2;
    int totalToN_1 = 0;
   
    for (size_t i = 0; i <= n-1; i++)
    {
        totalToN_1+=array[i];   
    }
    
    return -totalToN_1+totalArray;
}

int main(){
    
    int array[] = { 1, 2, 3, 4, 6, 7, 8, 9};
    printf("%d",getMissingNumber(array));
    return 1;
}