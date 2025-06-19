#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main() {
    // Step 1 : Crate a stack to store the most recent number in the array.
    stack<int> q;
    ll n;
    cin>>n;
    // Step 2 : Total size of the input vector.
    vector<ll> input;
    // Step 3 : Input the vector of size n.
    for(ll i=0;i<n;i++){
        ll t;
        cin>>t;
        input.push_back(t);
    }
    // Step 4 : Insert the values in the stack as per the condition.
    for(ll i=0;i<n;i++){
        // Step 5 : If stack is empty then push the index+1 as the question is 1-indexed and print 0 i.e no number is smaller then the current value.
        if(q.empty()){
            q.push(i+1);
            cout<<0<<" ";
        }
        // Step 6 : If stack is not empty and the vector index of stack's top-1 is smaller then the current value then print the top and push the current index+!.
        else if(!q.empty() && input[q.top()-1]<input[i]){
            cout<<q.top()<<" ";
            q.push(i+1);
        }
        // Step 7 : If stack is not empty and the vector index of stack's top is greate then the current value then then pop the stack values till the value is smaller.
        else if(!q.empty() && input[q.top()-1]>=input[i]){
            while(!q.empty() && input[q.top()-1]>=input[i]){
                q.pop();
            }
            // Step 8 : If stack is empty after popping then push the index+1 and 0 as no value is greater then the current value.
            if(q.empty()){
                q.push(i+1);
                cout<<0<<" ";
            }
            // Step 9 : If the stack is not empty then print the stack's top and then push the index+1 in the stack.
            else{
                cout<<q.top()<<" ";
                q.push(i+1);
            }
        }
    }
    return 0;
}