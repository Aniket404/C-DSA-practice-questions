// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    //use of swap function
    int a=5;
    int b=7;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;

    
    //arithmetic way
    int a=6;
    int b=7;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
    
    //xor way
    int a=8;
    int b=9;
    a=a^b;
    b=b^a;
    a=a^b;
    cout<< a<< endl;
    cout<<b<< endl;
}
