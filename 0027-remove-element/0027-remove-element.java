class Solution {
    public int removeElement(int[] nums, int val) {

        int count = 0;
        int p1=0;
        int p2= nums.length -1;
        while (p1<= p2){
            if(nums[p1] ==val){
                int temp = nums[p1];
                nums[p1] = nums[p2];
                nums[p2] = temp;
                p2--;
            }else {
                p1++;
                count++;
            }
        }
        return count;
        
    }
}