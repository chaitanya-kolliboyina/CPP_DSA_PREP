#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int rev = 0;
    while(n>0){
        int rem = n%10;                          // Time complexity : O(n)
        rev = rev*10 + rem;                      // Space complexity : O(1)
        n = n/10;
    }
    return rev;
}
int main(){
    int x;
    cin>>x;
    cout<<reverse(x);                    //prints reverse of number 
    return 0;
}