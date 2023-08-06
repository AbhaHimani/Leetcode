//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        //greatest element to right
        vector<int>ans;
        stack<pair<int,int>> st;
        ans.push_back(1);
        st.push({price[0],1});
        
        // 100 80 60 70 60 75 85
         
        // 100 80 60 70
        // 1   1  1  
        // 1   1   1
        for(int i=1;i<n;i++){
            int count=1;
        if(!st.empty() && st.top().first<=price[i]){
            while(!st.empty() && st.top().first<=price[i]){
                count = count + st.top().second;
                st.pop();
             }
                 
                ans.push_back(count);
                st.push({price[i],count});
        }
        else if(!st.empty() && st.top().first>price[i]){
            ans.push_back(1);
            st.push({price[i],1});
        }
        
        }
        return ans;

       // Your code here
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends