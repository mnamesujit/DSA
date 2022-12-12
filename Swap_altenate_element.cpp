
#include <iostream>
using namespace std;
int swapArray(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    return 0;
}

int printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main() {
    
    int arr[5]={1,2,3,4,5};
    int size=5;
    swapArray(arr,size);
    printArray(arr,size);
    return 0;
}
