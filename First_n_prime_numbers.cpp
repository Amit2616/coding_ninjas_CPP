#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n){
      if(n==1||n==0) return false;
   
      for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
      }
      return true;
}
 
 
int main()
{
    int N;
    cin>>N;
      for(int i=1; i<=N; i++){
          if(isPrime(i)) {
            cout << i << endl;
          }
    }
 
    return 0;
}