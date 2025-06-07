class Solution {
public:
    int PowerOfTwo(double n){
        if( n==1 ) return true;
        else if( n<1) return false;
        else 
        return PowerOfTwo(n/2.0);
    }
};