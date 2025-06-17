#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main() {
    ll n;
    cin>>n;
    // Step 1 : Take the input
    for(ll i=1;i<=n;i++){
        // Step 2: Now first find all the combination that are there to place 2 knights in a i*i chessboard
        ll total = (pow(i,4)-pow(i,2))/2;
        /*Step 3 : Now find all the combination where the 2 knights can attack each other for this we should find all possible 2X3 and 3X2 matrix and multipy them with 4 to get all the diff comibation.
        We multipy 4 as 2 times for all the combination as frist knight then second knight at the same position and in the 2X3 or 3X2 matrix 
        there is also 2 combination so 4 times.*/
        ll notValid = (i-1)*(i-2)*4;
        //Step 4 : Now subtract the notValid from total and we have the ans.
        ll ans = total-notValid;
        cout<<ans<<endl;
    }
    return 0;
}