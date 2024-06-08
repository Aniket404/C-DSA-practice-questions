// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void print (vector<int> v){
    int size= v.size();
    
    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;
    }
}

int main() {
    // Write C++ code here
    vector<int> v;
    
    // calculate the capacity and size of array while storing
    while(1){
        int d;
        cin>>d;
        v.push_back(d);
        cout<<"Capacity " <<v.capacity()<<" size "<< v.size()<<endl;
    }
    print(v);
    return 0;
}
