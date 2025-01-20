class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;

        while(end>=start){
            int mid = (start+end)/2;
            int guess = nums[mid];
            if(target == guess)
                return mid;
            if(target > guess)
                start = mid+1;
            else
                end = mid-1;
        }
        return -1;
    }
};