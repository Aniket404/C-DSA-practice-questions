// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void fun(int a[],int n){
    cout<<"Array elements are"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    // dynamic memory allocation of an array that is real time me arrays ki value
    int *arr=new int[n];
    for (int i=0;i<n;++i){
        int data;
        cin>>data;
        arr[i]=data;
    }
    fun(arr,n);
    return 0;
}
