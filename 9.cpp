class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        if(x<10)
            return true;
        vector <short> str;
        while(x!=0){
            str.push_back(x%10);
            x=x/10;
        }
        int length=str.size();
        int i,j;
        for(i=0,j=length-1;i<j;i++,j--){
            if(str[i]!=str[j])
                return false;
        }
        return true;
    }
};