//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    int s=0;
    int e=n-1;
    int tp=-1;
    while(s<=e){
        
        int mid=s+(e-s)/2;
        if(arr[mid]==0){
            
            s=mid+1;
        }
        else{
            tp=mid;
            e=mid-1;
        }
    }
    if(tp==-1){
        return -1;
    }
    else{
        return tp;
    }

}