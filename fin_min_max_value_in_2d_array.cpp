// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <climits>

// int findminin2Darray(int arr[][4],int rowSize,int colSize){
//     int minValue=INT_MAX;
//     for(int i=0;i<rowSize;i++){
//         for(int j=0;j<colSize;j++){
//             minValue= min(arr[i][j],minValue);
//         }
//     }
//     return minValue;
// }
// method to find maximunm
int findmaxin2Darray(int arr[][4],int rowSize,int colSize){
    int maxValue=INT_MIN;
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            maxValue= max(arr[i][j],maxValue);
        }
    }
    return maxValue;
}

int main() {
    // Write C++ code here
    int arr[3][4]={
        {10,11,12,13},
        {20,21,22,23},
        {30,32,44,55}
    };
    int rowSize=3;
    int colSize=4;
    
    // int ans=findminin2Darray(arr,rowSize,colSize);
    // cout<<ans<<endl;
    
    int ans=findmaxin2Darray(arr,rowSize,colSize);
    cout<<ans<<endl;

    return 0;
}
