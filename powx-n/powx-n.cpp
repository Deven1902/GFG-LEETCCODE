class Solution {
public:
    double powerOfX(double x, int n) {

        if(n==0){
            return 1.0;
        }
        double half = powerOfX(x,n/2);
        return n%2==0?half*half:half*half*x;
    }

    double myPow(double x, long long n) {
        if(n<0) {
            n=-n; // gives error -> cannot be represented in int.
                  // hence changing int to long long.   
            x=1/x;
        }

        return powerOfX(x,n);
    }
    // TC:0(logn)[n is being divided into half continously]
    // SC:0(logn) [recursion uses callstack]

    //  this solution can be still optimized to make on without taking any space. 
};