class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                for(int k=j+1; k<nums.size(); k++){
                    if(nums[i]+nums[j]+nums[k]==0){

                        vector<int>temp={ nums[i],nums[j],nums[k] };
                        sort(temp.begin(),temp.end());
                         bool duplicate = false;

                        for(vector<int> x : ans) {
                            if(x == temp) {
                                duplicate = true;
                                break;
                            }
                        }
                        if(!duplicate) {
                            ans.push_back(temp);
                        }
                    }
                }
            }
        }
        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna