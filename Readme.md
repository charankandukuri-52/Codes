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
                }
