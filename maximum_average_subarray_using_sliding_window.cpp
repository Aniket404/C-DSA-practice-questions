class Solution {
public:
double slidingWindow(vector<int>& nums, int k){
   return findMaxAverage(nums,k);
}
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0 , j=k-1;                     //a[]={1,2,3,4,5,6,7} i=0==1, j=k-1==4 k is the size of array
        int sum=0;                           //init sum=0
        for(int y=i;y<=j;++y)                // for loop through the array
          sum+=nums[y];                      // add 1st 4 elements sum=10
        int maxSum=sum;                      //maxsum=10
        j++;                                 //j at 4th index //ye j++ wwhile loop execute karne bana hai taaki agar array khatam ho jaye ye aage he na badhe
        
        while(j<nums.size()){                //4<7            loop me phirse till 6
            sum-=nums[i++];                  // 10-1=9
            sum+=nums[j++];                  //9+5=14
            maxSum=max(maxSum,sum);          //10,14==14
        }
        double maxAvg=maxSum/(double)k;
        return maxAvg;
        
    }
};

