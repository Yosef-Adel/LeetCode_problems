class Solution {
public:
set<vector<int> > result;
void dp (vector<int> nums, int index, int lastElement, vector<int> gen){
    if(index == nums.size()){
        if(gen.size()>1){
            result.insert(gen);
        }
        return;
    }
    
    if(lastElement > nums[index]){
       dp(nums, index+1, lastElement, gen);
    }else{
        dp(nums, index+1, lastElement, gen);
        lastElement = nums[index];
        gen.push_back(lastElement);
        dp(nums, index+1, lastElement, gen);
    }
    
    return;
    
    
    
}



    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> gg ;
        dp(nums, 0, -1000, gg);

            for (auto it = result.begin();
             it != result.end();
             it++) {
          res.push_back(*it);
            
        }

        return res;

    }
};