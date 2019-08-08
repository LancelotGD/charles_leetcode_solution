class Solution {
public:
    int lengthOfLastWord(string s) {
        int const max_index=s.size();
        if(max_index==0)
            return 0;
        int count=0;
        int i=0;
        for(i=max_index-1;i>=0&&s[i]==' ';i--);
        if (i==-1)
            return 0;
        while(s[i]!=' '&&i>=0){
            count++;
            i--;
        }
        return count;
    }
};