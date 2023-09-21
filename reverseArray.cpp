#include <iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" " <<endl;

    }

}

void reverse(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
      swap(arr[start],arr[end]);
      start++;
      end--;
    }
      

}
int main(){
    int arr[5]={2,33,-19,11,4};
    int brr[6]={4,9,88,14,-11,2};

    reverse(arr,5);
    reverse(brr,6);

    printArray(arr,5);
    printArray(brr,6);

}