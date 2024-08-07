//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to find minimum number of pages.
    bool isPossiblesolution(int n,int arr[],int m,int solution){
        int Pagesum=0;
        int c=1;
        for(int i=0;i<n;i++){
            if(arr[i]>solution){
                return false;
            }
            if(Pagesum+arr[i]>solution){
                c++;
                Pagesum=arr[i];
                if(c>m){
                    return false;
                }
            }
            else{
                Pagesum+=arr[i];
            }
        }
        return true;
        
        
    }
    
    
    long long findPages(int n, int arr[], int m) {
        // code here
        if(m>n) return -1;
        int s=0;
        int e=accumulate(arr,arr+n,0);
        int ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(isPossiblesolution(n,arr,m,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int m;
        cin >> m;
        Solution ob;
        cout << ob.findPages(n, A, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
