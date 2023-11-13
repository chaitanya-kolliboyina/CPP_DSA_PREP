#include<bits/stdc++.h>
using namespace std;
int count(int n){
    int c = floor(log10(n)+1);       //Integral part of log10 gives the number of digits 
                                     // Time Complexity : O(1)
    return c;                        // Space Complexity : O(1)
                                     // Convert to string using to_string()   Same time and space complexity
}

int main(){
    int n;
    cin>>n;
    cout<<count(n);
    return 0;
}