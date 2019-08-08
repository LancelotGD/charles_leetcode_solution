class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length=digits.size();
        int index=0;
        digits[length-1]++;
        for(index=length-1;index>0&&digits[index]==10;index--){
            digits[index-1]++;
            digits[index]=0;
        }
        if(digits[0]==10)
        { 
            digits[0]=0;
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};