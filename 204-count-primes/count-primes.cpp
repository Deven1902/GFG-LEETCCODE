// class Solution {
// public:

//     bool isPrime(int n) {
//         if(n<=1)
//             return false;

//         for(int i=2; i<n; i++) {
//             if(n%i==0)
//                 return false;
//             // else
//             //     return true; 
//         }

//         return true;
//     }

//     int countPrimes(int n) {
//         int cnt = 0;

//         for(int i=0; i<n; i++) {
//             if(isPrime(i)) 
//                 ++cnt;
//         }
        
//         return cnt;
//     }
// };

// class Solution {
// public:

//     bool isPrime(int n) {
//         if(n<=1)
//             return false;

//         int root = sqrt(n);
//         for(int i=2; i<=root; i++) {
//             if(n%i==0)
//                 return false;
//             // else
//             //     return true; 
//         }

//         return true;
//     }

//     int countPrimes(int n) {
//         int cnt = 0;

//         for(int i=0; i<n; i++) {
//             if(isPrime(i)) 
//                 ++cnt;
//         }
        
//         return cnt;
//     }
// };

class Solution {

private:
    vector<bool> sieveEratosthenes(int n) {
        vector<bool> isPrime(n, true);
        isPrime[0] = false;
        isPrime[1] = false;

        for (int i = 2; i * i < n; ++i)
            if (isPrime[i])
                for (int j = i * i; j < n; j += i)
                    isPrime[j] = false;

        return isPrime;
  }

public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;
        const vector<bool> isPrime = sieveEratosthenes(n);
        
        return ranges::count(isPrime, true);
    }
};