class Solution {
    double myPow(double b, int e){
        if(e==0){
            return 1;
        }
        
        if(e%2==1){
            return b*myPow(b,e-1);
        }
        else{
            return myPow(b*b,e/2);
        }
    }
  public:
    double power(double b, int e) {
        // code here
        if(b==0) return 0.0;
        if(e==0) return 1.0;
        int signb=(b>0)?1:-1;
        int signe=(e>0)?1:-1;
        b=abs(b);
        e=abs(e);
        double res=myPow(b,e);
        if(signe<0){
            res=1.0/res;
        }
        if(e%2==0){
        return res;
        }
        return signb*res;
        
    }
};