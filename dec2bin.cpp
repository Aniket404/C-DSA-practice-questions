// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<math.h>

int main() {
    // Write C++ code here
    int n, ans = 0, i = 0;
    cin >> n;

    int num = 0;
    if(n<0){        
        num = -n;
        
        while(num != 0 ) {

            int bit  = num & 1;
            ans = (bit * pow(10, i) ) + ans;
            num = num >> 1;
        i++;
        }
        
    cout<<" Answer is - "<< ans << endl;
}


else{       // For +ve decimal number.

    while(n != 0 ){

        int bit  = n & 1;
        ans = (bit * pow(10, i) ) + ans;
        n = n >> 1;
        i++;
    }
    cout<<" Answer is "<< ans << endl;
    
}


}