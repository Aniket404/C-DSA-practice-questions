class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;                            //a[0] parr l hai 
        int m=0;                            //a[0] parr m hai 
        int h=nums.size()-1;                //a[n-1] parr h hai  
        while(m<=h){                        //m h se kamm ho tab takk loop
            if(nums[m]==0){                 // m=0 the swap with l
            swap(nums[l],nums[m]);
            l++;
            m++;
            }
            else if(nums[m]==1){           //m=1 toh increment
                m++;
            }
            else{
                swap(nums[m],nums[h]);     // m agar 1 ya zero dono nahi swap with h firr array k peeche se
                h--;
            }
        }
        
    }
};
