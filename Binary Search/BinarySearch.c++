#include <iostream>


int Binary_Search(int L, int R, int X, int arr[]){
    if(R>=L){
        int middle = ((R-L)/2)+L;
        if(arr[middle]==X) return middle;
        if (arr[middle] > X) return Binary_Search(L,middle-1,X,arr);
        else return Binary_Search(middle+1,R,X,arr);
    }
    return -1;
}

int main(){
    int arr[] = { 2, 3, 4, 10, 40, 50 };
    int n =(int) sizeof(arr)/sizeof(arr[0]);
    int index_X = Binary_Search(0,n-1,10,arr);
    printf("%d",index_X);
    return 0;
}