class Solution {
public:
    int expandaroundcentre(string s,int i,int j){
        int count=0;
        while(i>=0 && j<s.length()&&s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
      
    int countSubstrings(string s) {
        int totalcount=0;
        for(int centre=0;centre<s.length();centre++){
            //odd
            int i=centre;
            int j=centre;
            int oddPalsubstringkacount=expandaroundcentre(s,i,j);
            //even
            i=centre;
            j=centre+1;
            int evenPalsubstringkacount=expandaroundcentre(s,i,j);

            totalcount+=oddPalsubstringkacount+evenPalsubstringkacount;
        }
        return totalcount;
    }
};
