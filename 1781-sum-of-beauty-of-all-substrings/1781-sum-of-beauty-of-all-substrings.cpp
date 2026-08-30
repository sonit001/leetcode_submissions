class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        vector<string>substring;
        int totalBeauty=0;

        for(int i=0; i<n; i++){
            string sub="";
            for(int j=i; j<n; j++){
                sub+=s[j];
                substring.push_back(sub);
            }
        }

        for(string sub: substring){
            vector<int>freq(26,0);
            for(char ch: sub){
                freq[ch-'a']++;
            }
            int maxfreq=0;
            int minfreq=INT_MAX;
            for(int i=0; i<freq.size(); i++){
                if(freq[i]>0){
                    maxfreq=max(maxfreq, freq[i]);
                    minfreq=min(minfreq, freq[i]);
                }
            }
                
            totalBeauty += (maxfreq - minfreq);
        }
        return totalBeauty;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna