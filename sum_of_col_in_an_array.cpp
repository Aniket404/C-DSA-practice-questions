#include <iostream>
using namespace std;
#include <climits>

int sumofcol(int arr[][4],int rowSize,int colSize){
    for(int j=0;j<colSize;j++){
        int sum=0;
        for(int i=0;i<rowSize;i++){
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
    sumofcol(arr,rowSize,colSize);
    return 0;
}
