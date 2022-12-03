class Solution {
public:

    string frequencySort(string s) {
        map<char, int> freq;
vector<pair<int, char>> v;
string ans = "";
for (char c : s) freq[c]++;
for (auto p : freq) v.push_back({p.second, p.first});
sort(v.begin(), v.end());
for (int i = v.size() - 1; i >= 0; i--)
ans += string(v[i].first, v[i].second);
return ans;
    }
};