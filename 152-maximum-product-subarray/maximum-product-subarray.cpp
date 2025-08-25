class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=INT_MIN;
        int Prod=1;
        for(int i=0;i<nums.size();i++){
            Prod*=nums[i];
            if(Prod>max) {
                max=Prod;
                }
            if(Prod==0){
                Prod=1;
            }
        }
        int Prod1=1;
        for(int i=nums.size()-1;i>=0;i--){
            Prod1*=nums[i];
            if(Prod1>max) {
                max=Prod1;
                }
            if(Prod1==0){
                Prod1=1;
            }
        }
        return max;
    }
};