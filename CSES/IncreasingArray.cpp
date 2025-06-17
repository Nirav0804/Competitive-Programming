#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    
    vector<ll > input;
    ll  n;
    cin>>n;
    for(ll  i=0;i<n;i++){
        ll  t;
        cin>>t;
        input.push_back(t);
    }
    ll  count =0;
    for(ll  i=1;i<n;i++){
        if(input[i]<input[i-1]) {
            count = count + (input[i-1]-input[i]);
            input[i] = input[i-1];
        }
    }
    cout<<count;
    return 0;
}