#include<bits/stdc++.h>

using namespace std;

void print_Array(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}
void reverse_array(int arr[], int start, int end){
 
  int n = end +1;
  while(start < end){
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start+=1;
      end-=1;
  }
     print_Array(arr,n);
        
}

int main(){

   int arr[] = {1, 2, 3, 4, 5, 6};
   int n = sizeof(arr)/sizeof(arr[0]);
   print_Array(arr,n);
   reverse_array(arr,0,n-1);
   return 0;
}
