class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = (k % (nums.size()));
        vector<int> first = {nums.end()-k, nums.end()};
        vector<int> end = {nums.begin(),nums.end()-k };
        vector<int> v(first);
        v.insert(v.end(), end.begin(), end.end());
        nums = v;
      

        
    }
};