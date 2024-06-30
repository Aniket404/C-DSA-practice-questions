class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
      //s<e kyuki ek he box pe ghumta reh jayega equal pe
        while(s<e){
            if(arr[mid]<arr[mid+1]){   //kyuki peak element ko consider nahi karega ye aur increasing order wali line a pe rahega
                s=mid+1;
            }
            else{
                e=mid;                // e= mid-1 nahi liya kyuli agar peak element he mid ho gya toh iterator peak element k pehele line pe ayega which will make it wrong
            }
            mid=s+(e-s)/2;
        }
        return s;
        
    }
};
