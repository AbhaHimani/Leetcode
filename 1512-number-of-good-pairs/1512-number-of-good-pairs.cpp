
    
 class Solution {
public:
    static bool cmp(const pair<int,int>&a,const pair<int,int>&b){
        return a.second>b.second;
    }
    int numIdenticalPairs(vector<int>& nums) {
        // O(NLOG N)
//         int i=0;
//         int j=1;
//         int count=0;
         
//         sort(nums.begin(),nums.end());
//          nums.push_back(-1);
//         int n=nums.size();
//         // 1 1 1 1 -1        
//         while(i<j && j<n){
//             if(nums[i]==nums[j])
//             {
//                 cout<<j;
//                 j++;
//                 count++;                
//             }
//             // 1 1 1 1 -1       
//             else{
//                 i++;
//                 j=i+1;
//             }
//         }
//             return count;
        
//         // for O(N)
//         // 1 1 1 2 3 3 
        
        
        //For better time complexity:
        // 1 1 1 1 
        // 3 2 1 =6
        // 1 - 3-> 3+1
        int n=nums.size();
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        // 1- 3
        // 2 -1
        //3-2
              vector<pair<int, int>> freqPairs(mp.begin(), mp.end());
        sort(freqPairs.begin(), freqPairs.end(), cmp);
        
        int count = 0;
        for (const auto& pair : freqPairs) {
            int freq = pair.second;
            count += (freq * (freq - 1)) / 2;
        }
        return count;
    }
    
};
      
