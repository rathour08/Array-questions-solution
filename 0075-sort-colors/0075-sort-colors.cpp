class Solution {
public:
    void sortColors(vector<int>& nums) {
        int nextzero=0;
        int nexttwo=nums.size()-1;
        int i=0;
        while(i<=nexttwo){
            if(nums[i]==0){
                swap(nums[nextzero],nums[i]);
                i++;
                nextzero++;
            }
            else if(nums[i]==2){
                swap(nums[nexttwo], nums[i]);
                nexttwo--;
            }
            else{
                i++;
            }
        }
        
    }
};