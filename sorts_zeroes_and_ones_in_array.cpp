#include <iostream>
using namespace std;

void sortzeroone(int arr[],int n){
    int zerocount=0;
    int onecount=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zerocount++;  //counts the number of zeroes in arrays
        }
        if(arr[i]==1){
            onecount++;  //counts no of ones
        }
    }
    for (int i=0;i<zerocount;i++){
        arr[i]=0;                       //the till the number of zeroes found it adds zeroes in the array
    }
    for (int i=zerocount;i<n;i++){
        arr[i]=1;                       // when the zero count finishes it adds ones to the ends of arrays
    }
}
int main() {
    int arr[]={0,1,1,1,0,0,1};
    int size=7;
    
    sortzeroone(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i];                 //prints the array
    }
        
    
}

op====0001111
