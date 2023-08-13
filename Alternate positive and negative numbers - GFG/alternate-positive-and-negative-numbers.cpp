//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int>positive;
	    vector<int>negative;
	    for(int i=0; i<n; i++){
	        if(arr[i]>=0){
	            positive.push_back(arr[i]);
	        }
	        else{
	            negative.push_back(arr[i]);
	        }
	        
	    }
	    int k=0;
	    int j=0;
	    int l=0;
	    while(k<positive.size() && j<negative.size()){
	        arr[l++]=positive[k++];
	        arr[l++]=negative[j++];
	        
	    }
	    while(j<negative.size()){
	        arr[l++]=negative[j++];
	    }
	    while(k<positive.size()){
	        arr[l++]=positive[k++];
	    }
	    
	    

	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends