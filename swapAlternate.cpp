#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size ;i++){
        cout << arr[i] << " ";

    }
    cout<<endl;

}

void swapAlternate(int arr[], int size){
    for(int i = 0; i < size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }

}

int main(){
    int even[8]={2,5,3,7,88,55,45,67};
    int odd[5]={44,22,11,34,52};

    swapAlternate(even,8);
    printArray(even,8);

    swapAlternate(odd,5);
    printArray(odd,5);
}
