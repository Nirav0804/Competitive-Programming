#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int len = s.length();
    int res = 1;
    int temp = 1;
    for(int i=0;i<len-1;i++){
        if(s[i]==s[i+1]) {
            temp++;
            res = max(temp, res);
        }else temp = 1;

    }
    cout<<res;
    return 0;
}