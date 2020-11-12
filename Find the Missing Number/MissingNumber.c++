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
int getMissingNo(int a[]) 
{ 
    int i;
    int n =(int) sizeof(a);
    int x1 = a[0]; /* For xor of all the elements in array */
    int x2 = 1; /* For xor of all the elements from 1 to n+1 */
  
    for (i = 1; i < n; i++) 
        x1 = x1 ^ a[i]; 
  
    for (i = 2; i <= n + 1; i++) 
        x2 = x2 ^ i; 
    return (x1 ^ x2); 
} 
int main(){
    
    int array[8] = { 1, 2, 3, 4, 6, 7, 8, 9};
    printf("%d\n",getMissingNumber(array));
    printf("%d",getMissingNo(array));
    return 1;
}