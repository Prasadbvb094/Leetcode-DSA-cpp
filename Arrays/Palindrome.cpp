class Solution {
public:
    bool isPalindrome(int x) {
        int y=0,t=x;
        
        if (x<0) return false;
        while(t!=0){
            if (y>(INT_MAX-(t%10))/10){
                return false;
            } 
            y=10*y+(t%10);
            t=t/10;
        }
        if(y==x)
        return true;
        else 
        return false;
    }
};