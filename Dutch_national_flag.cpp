// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int moveallnegtoleft(int a[],int n){
    // Dutch national flag
    int l=0, h=n-1;
    while(l<h){
        if(a[l]<0){
            l++;
        }
        else if(a[h]>0){
            h--;
        }
        else{
            swap(a[l],a[h]);
        }
    }
    return 0;
}
int main() {
    // Write C++ code here
    int a[]={-2,-3,4,3,9,3,2,-6,-8,-4};
    int n=sizeof(a)/sizeof(int);
    moveallnegtoleft(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
