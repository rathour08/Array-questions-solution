//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        int nextzero=0;
        int nexttwo=n-1;
        int i=0;
        while(i<=nexttwo){
            if(arr[i]==0){
                swap(arr[nextzero],arr[i]);
                i++;
                nextzero++;
            }
            else if(arr[i]==2){
                swap(arr[nexttwo], arr[i]);
                nexttwo--;
                
            }
            else{
                i++;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends