class Solution {
    public int[] plusOne(int[] digits) {
         int p = digits.length -1;
        boolean isAdded =false;
        while (p>=0){
            if(digits[p] < 9){
                digits[p]+= 1;
                isAdded =true;
                break;
            }else {
                digits[p] =0;
                p--;
            }
        }
        if(isAdded){
            return  digits;
        }else {
            int[] result = new int[digits.length + 1];
            result[0] =1;
            return result;
        }
    }
}