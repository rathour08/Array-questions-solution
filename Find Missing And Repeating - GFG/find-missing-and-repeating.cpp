//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        vector<int>ans;
        for(int i=0; i<arr.size(); i++){
            int index=abs(arr[i]);
            if(arr[index-1]>0){
                arr[index-1]*=-1;
            }
            else{
                ans.push_back(index);
            }
            
        }
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>0){
                ans.push_back(i+1);
            }
            
        }
        return ans;
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends