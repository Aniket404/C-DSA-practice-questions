#include <iostream>
using namespace std;

void printCounting(int num){
    for(int i=0; i<=num; i++){
        cout<< i <<" " ;
    }
}

int main(){
    int n;
    cin>>n;

    printCounting(n);
}