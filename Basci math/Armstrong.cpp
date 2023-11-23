#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int original = num;
    int exp = ceil(log10(num));
    int sum = 0;
    int rem;
    while(num>0){
        rem = num%10;
        sum= sum+ pow(rem,exp);
      
        num = num/10;
        
    }
    
    if (original == sum){
        cout<<"Yes !!!!!";
    }
    else{
        cout<<"No !!!!!";
    }
    return 0;
}