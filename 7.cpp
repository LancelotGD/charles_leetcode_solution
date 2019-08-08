class Solution {
public:
    int reverse(int x) {
        if(x==0||x==-2147483648)
            return 0;
        queue <int> str;
        int flag=x/abs(x);
        long px=0;
        x=abs(x);
        while(x!=0){
            str.push(x%10);
            x/=10;
        }
        do{
        px=px*10+str.front();
        str.pop();
        }while(!str.empty());
        if(px>=INT_MIN&&px<=INT_MAX)
            return flag*px;
        return 0;
    }
};