#include <iostream>
using namespace std;
int main(){
    int n=10;

    int a=0;
    int b=1;
    cout<<a<<endl<<b<<endl;
    for(int i=1;i<=n;i++){
        int nextNumber=a+b;
        cout<<nextNumber<<endl<<endl;
        a=b;
        b=nextNumber;

    }

}