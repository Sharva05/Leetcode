class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int ans=0,size=s.length();
     for(int i=0;i<size;i++){
        for(int j=1;j<=size-i;j++){
           string word=s.substr(i,j);
           int a=count(word.begin(),word.end(),'1');
            int b=count(word.begin(),word.end(),'0');
            if(a<=k || b<=k)
                ans+=1;
            else
                break;
        }
     }
        return ans;   
    }
};