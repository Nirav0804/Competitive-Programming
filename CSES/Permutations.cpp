#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums;
    int n;
    cin>>n;
    // This 2 cannot be solved.
    if(n == 2 || n==3) {
        cout<<"NO SOLUTION";
        return 0;
    }
    //For n = 4 we need to put the even first and it works for all the other cases too
    for(int i=2;i<=n;i+=2){
        nums.push_back(i);
    }
    for(int i=1;i<=n;i+=2){
        nums.push_back(i);
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}