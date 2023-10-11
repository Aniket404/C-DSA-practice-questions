#include <iostream>
using namespace std;
#include<vector>
int main()
{
    /*int n;
    cin>>n;
    for(int i = 0; i <=n; i++) {
      cout<<i<<endl<<endl;
    }*/
    vector<int> v1(3,1);
    v1[1] = 2;
    v1[2] = 3;
    cout<<v1[0]<<endl;
    cout<<"Size = "<<v1.size()<<endl;
    cout<<"Capacity = "<<v1.capacity()<<endl;
    cout<<v1[1]<<endl;
    cout<<"Size = "<<v1.size()<<endl;
    cout<<"Capacity = "<<v1.capacity()<<endl;
    cout<<v1[2]<<endl;
    cout<<"Size = "<<v1.size()<<endl;
    cout<<"Capacity = "<<v1.capacity()<<endl;

}