#include <iostream>
using namespace std;

void reverseArray(int arr[],int n){
  int start =0;
  int end=n-1;
  for(start; start<=end;start++){
    // int temp= arr[start];
    // arr[start]=arr[end];
    // arr[end]=temp;
    
    //  Or We Can Use built-in function of c++ (swap())   
    swap(arr[start],arr[end]);
    end--;
  }
  
}

void printArray(int arr[], int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int main() {
  int arr[6]={1,2,3,4,5,6};
  reverseArray(arr,6);
  printArray(arr,6);
  
  
}
