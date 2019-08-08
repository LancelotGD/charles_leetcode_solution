
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_length=0;
        queue<char> substr;
        int length=s.size();
        if(s.size()==0)
            return 0;
        int flag[128]={0};
        for(int i=0;i<length;i++){
            if(flag[int(s[i])]==0){
                flag[int(s[i])]=1;
                substr.push(s[i]);
                if (max_length<substr.size())
                    max_length=substr.size();
            }
            else{
                while(substr.front()!=s[i])
                {
                    flag[int(substr.front())]=0;
                    substr.pop();
                }
                substr.pop();
                substr.push(s[i]);
            }
        }
         return max_length;
    }
};