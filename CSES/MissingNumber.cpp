#include <bits/stdc++.h>
using namespace std;

int main() {
    //This approch can be improved by using a bool vector which checks if the number is appeared or not and at last we just check which one number is not seen(checked) and we get the ans.
    // This approch uses 2 vector so its a bit slove 0.07s
    // vector<int>input;
    // int s;
    // cin>>s;
    // for(int i=1;i<s;i++){
    //     int temp;
    //     cin>>temp;
    //     input.push_back(temp);
    // }
    // vector<int> freq(s+1,0);
    // for(int i = 0;i<s-1;i++){
    //     freq[input[i]]++;
    //     // cout<<freq[input[i]]<<"     "<<input[i]<<endl;
    // }
    // for(int i=1;i<freq.size();i++){
    //     if(freq[i]==0) {
    //         cout<<i<<endl;
    //         break;
    //     }
    // }

    // Second Approch 
    int n;
    cin>>n;
    int sum = 0;
    for(int i= 1;i<=n;i++){
        sum+=i;
    }
    for(int i=1;i<n;i++){
        int t;
        cin>>t;
        sum-=t;
    }
    cout<<sum<<endl;
    return 0;
}