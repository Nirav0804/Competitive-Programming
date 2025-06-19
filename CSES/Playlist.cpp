#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main() {
    ll n;
    cin>>n;
    vector<ll>ids;
    // Step 1 : Take all input
    for(ll i=0;i<n;i++){
        ll t;
        cin>>t;
        ids.push_back(t);
    }
    map<ll, ll> freq;
    ll left = 0, ans = 0;
    // Step 2 : Add the values in the  map and if the freq is greater then  1 then remove the values from the left side in the window and do it tell we have the freq as 1.And calculate the max size by the right-left+1 formula
    for (ll right = 0; right < n; right++) {
        freq[ids[right]]++;

        while (freq[ids[right]] > 1) {
            freq[ids[left]]--;
            left++;
        }

        ans = max(ans, right - left + 1);
    }

    cout << ans;
    return 0;
}