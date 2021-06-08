class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
        return 0;
        int alpha_idx[129];
        for(int i=0;i<129;i++){
            alpha_idx[i]=-1;
        }
        int length=0,begin_idx=0,maxlen=0;
        for(int i=0;i<s.size();i++){
            if(alpha_idx[s[i]]==-1||begin_idx>alpha_idx[s[i]])
            {
                length++;
                alpha_idx[s[i]]=i;
            }  
            else
            {
                maxlen=max(maxlen,length);
                length=i-alpha_idx[s[i]];
                begin_idx=alpha_idx[s[i]]+1;
                alpha_idx[s[i]]=i;
                
            }
        }
        maxlen=max(maxlen,length);
        return maxlen;
    }
};
