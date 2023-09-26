#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end = size-1;

    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        if(key>arr[mid]){
            start=mid+1;
        }

        else{
            end=mid-1;
        }
        mid=start+(end-start)/2; 
    }
    return -1;

}
int main(){
    int even[6]={2,6,4,3,5,1};
    int odd[5]={2,6,3,5,1};

    int evenIndex=binarySearch(even,6,5);
    int oddIndex=binarySearch(odd,5,3);

    cout<< evenIndex<< endl;
    cout<< oddIndex<< endl;



}