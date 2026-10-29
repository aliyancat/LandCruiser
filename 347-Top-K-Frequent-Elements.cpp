
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> num_freq;

        for (int i = 0; i < nums.size(); i++) {
            num_freq[nums[i]]++;
        }

        vector<int> hold;

        while (hold.size() < k) {
            int max_freq = 0;
            int max_num = 0;

            for (auto s : num_freq) {
                if (s.second > max_freq) {
                    max_freq = s.second;
                    max_num = s.first;
                }
            }

            hold.push_back(max_num);
            num_freq.erase(max_num);
        }

        return hold;
    }
};
