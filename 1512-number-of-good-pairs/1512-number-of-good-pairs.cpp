class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i=0;
        int j=1;
        int count=0;
         
        sort(nums.begin(),nums.end());
         nums.push_back(-1);
        int n=nums.size();
        // 1 1 1 1 -1        
        while(i<j && j<n){
            if(nums[i]==nums[j])
            {
                cout<<j;
                j++;
                count++;                
            }
            // 1 1 1 1 -1       
            else{
                i++;
                j=i+1;
            }
        }
            return count;
    }
};