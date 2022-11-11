class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         unordered_set<int> res;
         vector<int> x;
         int n=nums.size();
         for(int i=0;i<n;i++){
             if(!res.count(nums[i])){
                 res.insert(nums[i]);
                 x.push_back(nums[i]);     
              }
             
             
             
         }
        int s=x.size();
        
        for(int i=0;i<s;i++){
            nums[i]=x[i];
        }
         
        return x.size();
        
    }
};