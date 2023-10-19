#include <iostream>
using namespace std;
bool search(int arr[], int size, int key){
    for(int i=0; i<size;i++){

        if(arr[i]==key){
            return 1;

    }
    

}
return 0;
}
int main(){
    int arr[5]={2,4,6,8,10};
    cout<<"Enter the value to search"<< endl;
    int key;
    cin>>key;

    bool found= search(arr, 10 ,key) ;
    if(found){
        cout<<"Key is present"<< endl;
    }
    else{
        cout<<"Key is not present"<< endl<<endl;
    }
  return 0;   
}