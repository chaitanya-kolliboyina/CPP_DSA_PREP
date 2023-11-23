#include<bits/stdc++.h>
using namespace std;

void print_divisors(int x){
    // for(int i = 1; i <x+1;i++){                   // TC : O(N)
    //  if(x%i == 0){
    //     cout<<i<<" ";
    //  }
    // }
    for (int i = 1; i < sqrt(x);i++){ 
       if(x%i == 0){
       cout<<i<<" ";
       if (i != floor(x/i)){
        cout<<floor(x/i)<<" ";
       }
       }
       
      }
}
int main(){
    int n;
    cin>>n;
    print_divisors(n);
    return 0;
}