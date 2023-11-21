#include<bits/stdc++.h>
using namespace std;

int CheckPrime(int x){
    for(int i = 2; i <x/2; i++){
        if (x%i == 0){
            return false;
        }      
    }
    return true;
}

int main(){
    int n;
    cin>>n;
   cout<<CheckPrime(n);
    return 0;
}