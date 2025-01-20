class Solution {
    public int trap(int[] height) {
        int totalWater =0;
        int left =0;
        int right= height.length -1;
        int mxLift = height[left];
        int mxRight= height[right];
        while (left < right){
            int currentWater =0;

            if (height[right] > height[left]){
                currentWater = Math.min(mxLift, mxRight) - height[left];
                left++;
            }else {
                currentWater = Math.min(mxLift,mxRight) - height[right];
                right--;
            }
            if (currentWater> 0){
                totalWater+= currentWater;
            }
            mxRight = Math.max(mxRight, height[right]);
            mxLift = Math.max(mxLift, height[left]);

        }

        return totalWater;
    }
}