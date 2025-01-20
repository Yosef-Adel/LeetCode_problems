class Solution {
    public int findNonMinOrMax(int[] nums) {
        int min = 300 ; // max num is 100
        int max = -300 ; // min num is 0
        int validAns = -1;
        
        if (nums.length <=2){
            return validAns;
        }
        
        for (int num: nums){
            if (num> max){
                max = num;
            }
            if(num<min){
                min = num;
            }
        }
        
        for (int num :nums){
            if(num!= min && num !=max){
                validAns = num;
            }
        }

       return validAns;
    }
}