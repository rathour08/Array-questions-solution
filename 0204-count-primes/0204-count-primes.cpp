class Solution {
public:
    int countPrimes(int n) {
        if(n<=2){
            return 0;
        }
        vector<bool>v(n, true);
        v[0]=false;
        v[1]=false;
        for(int i=2; i*i<=n; i++){
            if(v[i]==true){
                for(int j=i*i; j<v.size(); j+=i){
                    v[j]=false;
                }
            }
        }
        int  count =0;
        for(int i=2; i<v.size(); i++){
            if(v[i]==true){
                count++;
            }
        }
        return count;
        
    }
};