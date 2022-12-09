# Codes

# smallest positive number that is evenly divisible by all of the numbers from 1 to n
    Ans for this would be lcm of all the numbers from 1 to n
    
    T.C : O(nlogn) 
    S.C : O(1) 
    
    Code to find lcm of fist n numbers: 
    
            ll GCD ( ll a , ll b) {
             if(b == 0) return a;
              return GCD(b,a%b);
                }

                ll fn(ll a, ll b) {
                    if(b == 1) return a;
                    a = (a*b)/ GCD(a,b);
                    b-=1;
                    return fn(a,b);
                }
                
               protperty:  lcm(a,b,c) = lcm(lcm(a,b),c)
         
               
                
                in fn initial values for a,b would be n,n-1 respectively 


#           Largest Prime Factor for a given number 

             for(ll i=1; i*i<=n ;i++) {
                    if(n%i == 0 and n!=i)   {
                       n/=i;
                    }
                    
 #              Pythogaran Triplets
 
 
                              ll n; cin>>n;
                            ll p = 1;
                           for(ll i=1;i<=n/3;i++) {
                            for(ll j=i+1;j<= n/2; j++) {
                                ll k = n-i-j;
                                if(i*i + j*j == k*k) {
                                    p = i*j*k;
                                    break;
                                } 
                            }
                           }
                           cout << p << endl;
                          }

#               Seive Method to find prime numbers upto N

                    vector<bool> primes(n+1,true);
                        primes[0] = false;
                        primes[1] = false;
                        for(int i=2;i*i<=n; i++) {
                            if(primes[i]) {
                                for(int j=i*i;j<=n;j+=i) {
                                    primes[j] = false;
                                }
                            }
                        }
                        vector<int>v;
                        for(int i=0;i<size(primes);i++) {
                            if(primes[i]) {
                                cout << i << " ";
                            }
                        }
