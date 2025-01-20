class Solution {
public:
int subarraysDivByK(vector<int>& nums, int k) {
    int count = 0;
    vector<int> mod(k,0);
    vector<int> sumVec(nums.size(),0 );
    int sm =0;
    for(int i=0; i< nums.size(); i++){
        sm+= nums[i];
        sumVec[i] = (sm % k +k)%k;
    }
    for(int i =0; i< sumVec.size();i++){
        mod[sumVec[i]]+=1;
    }
    count+= mod[0];
    for (int i=0; i< mod.size(); i++){
        count+= (mod[i]* (mod[i]-1))/2 ;
    }
    
    return count;
}

};