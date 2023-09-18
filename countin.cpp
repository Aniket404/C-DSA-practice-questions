#include <iostream>
using namespace std;

//Function signature

void printCounting(int num){
    //function body
    for(int i=0; i<=num; i++){
        cout<< i <<" " ;
    }
}

int main(){
    int n;
    cin>>n;
    //function call

    printCounting(n);
}