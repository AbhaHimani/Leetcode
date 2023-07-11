class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int mx=-1;
        sort(nums.begin(),nums.end());
        // -3 -1
        //  3  2
        int n=nums.size();
        int begin=0;
        int end=n-1;
        int mid= (end+begin)/2;
       while(begin<end){
        
            // -7 -1 1 0 7 10
           
            if(nums[begin]==-(nums[end]))
            {
                mx= nums[end]; 
               return mx;
                begin++;
                end--;
            }
                      
           // 
            else if(nums[begin] > -(nums[end])){
                // -3>-4
                end--;   
            }
            else{
                begin++;
            }
        }
        return mx;

    }
};