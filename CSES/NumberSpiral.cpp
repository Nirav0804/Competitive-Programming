#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main() {
    ll t;
    cin>>t;
    //Step 1 : Run till testcases exists.
    while(t--){
        ll a,b;
        ll num ;
        cin>>a>>b;
        a-=1;
        b-=1;
        // Step 2 : Get 2 indexes and subtract 1 from both to make them 0-indexed.
        if(a==0 && b==0) {
            // If both 0 then return 1.
            cout<<1<<endl;
            continue;
        }
        // Step 4 : Check which value is greater the row or column so we can know from which one we need to subtract to get the ans.
        if(a>=b){
            //Step 5 : Now if row is even then get the square of the row and mius column from it.
            if(a%2==0) num = (a*a)+b+1;
            else {
                //Step 6: If the row is odd then add one to row and then square it and minus column from it.
                a++;
                num = (a*a)-b;
            } 
        }else {
            //Step 7 : If column is greater and the column is odd then square the column minus row from it.
            if(b%2!=0) num = (b*b)+a+1;
            else {
                //Step 8 : If column is even then add one to it then square it and minus row from it.
                b++;
                num = (b*b)-a;
            }
        }
        //Step 9 : Print the ans.
        cout<<num<<endl;
    }
    return 0;
}