class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        // vector<int> diff;
        // for(int i=1;i<nums.size();i++){
        //     int d =nums[i-1]-nums[i];
        //     diff.push_back(d);
        //     d=0;
        // }
        // for(int j=1;j<diff.size();j++){
        //     if(diff[j-1]<diff[j]){
        //         return true;
        //     }
        // }
        // return false;

    if (nums.size() < 4) return false;


        int count=0;
        int i=1;
        while( i<nums.size()&&nums[i-1]<nums[i]){
            i++;
        }
        if(i>1){ 
        count++;}
        else return false;
        int p=i;
        while(p<nums.size()&&nums[p-1]>nums[p] ){
            p++;
        }
        if(p>i){ 
        count++;}
        else return false;
        int q=p;
        while( q<nums.size()&&nums[q-1]<nums[q] ){
            q++;
        }
        if(q>p){ 
        count++;}
        else return false;
        if (count<3 || q!=nums.size())return false;
        return true;
    }
};