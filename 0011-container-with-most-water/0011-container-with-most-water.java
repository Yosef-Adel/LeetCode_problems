class Solution {
    public int maxArea(int[] height) {
        int mxArea = 0;
        int s = 0;
        int e = height.length -1;
        while (s != e){
            int area = Math.min(height[s], height[e]) * (e -s);
            mxArea = Math.max(area, mxArea);
            if(height[s] < height[e])
                s++;
            else
                e--;

        }


        return mxArea;
    }

  
}