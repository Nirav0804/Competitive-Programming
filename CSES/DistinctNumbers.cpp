#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main() {
    set<int> input;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        input.insert(t);
    }

    cout<<input.size()<<endl;
    return 0;
}   