class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int>mpp;
        int n=nums.size();
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        vector<pair<int, int>> v(mpp.begin(), mpp.end());

        sort(v.begin(), v.end(),
        [](pair<int, int>& a, pair<int, int>& b) {
            return a.second < b.second;
        });
        vector<int>ans;
        for(pair<int,int>x : v){
            if(x.second>n/3){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna