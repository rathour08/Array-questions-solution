//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        for(int i=0; i<N; i++){
            if(frogs[i]==1){
                return 0;
            }
        }
        vector<bool>v(leaves+1, false);
        for(int i=0; i<N; i++){
            int index=frogs[i];
            if(v[index]==true){
                continue;
            }
            v[index]=true;

            for(int j=2*index; j<v.size(); j+=index){
                if(j>=0 && j<v.size()){
                    v[j]=true;
                }
            }

        }
        int count=0;
        for(int i=1; i<v.size(); i++){
            if(v[i]==false){
                count++;
            }
        }
        return count;
        
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends