class Solution {
public:
    int searchInsert(vector<int>& v, int x) {
        int n=v.size();
         int low = 0;
        int end = n - 1;
        int ans = -1;
        while (low <= end)
        {

            int mid = low + (end - low) / 2;
            if (v[mid] == x)
            {
                ans= mid;
                return ans;
            }
            if (v[mid] < x)
            {
                ans = mid;
                low = mid + 1;
            }
            if (v[mid] > x)
            {
                end = mid - 1;
            }
        }
        return ans+1;
        
    }
};