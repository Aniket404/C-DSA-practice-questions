#include <iostream>
using namespace std;
#include <climits>

int sumofrow(int arr[][4],int rowSize,int colSize){
    for(int i=0;i<rowSize;i++){
        int sum=0;
        for(int j=0;j<colSize;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
    return 0;
}


int main() {
    // Write C++ code here
    int arr[3][4]={
        {10,10,10,10},
        {20,21,22,23},
        {30,32,44,55}
    };
    int rowSize=3;
    int colSize=4;
    
    // int ans=findminin2Darray(arr,rowSize,colSize);
    // cout<<ans<<endl;
    sumofrow(arr,rowSize,colSize);
    // int ans=findmaxin2Darray(arr,rowSize,colSize);
    // cout<<ans<<endl;

    return 0;
}
