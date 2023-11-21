#include<bits/stdc++.h>
using namespace std;

void print_divisors(int x){
    for(int i = 1; i <x+1;i++){
     if(x%i == 0){
        cout<<i<<" ";
     }
    }
}
int main(){
    int n;
    cin>>n;
    print_divisors(n);
    return 0;
}