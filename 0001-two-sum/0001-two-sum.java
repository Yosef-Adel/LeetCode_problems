class Solution {

    public int[] twoSum(int[] nums, int target) {
        return optimizedFindPair(nums, target);
    }


    public static int[] findPair(int[] arr, int target ){
        for (int p1=0; p1 < arr.length; p1++){
            int numberToFind = target - arr[p1];
            for(int p2=p1 +1; p2<arr.length; p2++){
                if (arr[p2] == numberToFind){
                    return new int[]{p1,p2};
                }
            }
        }

        return null;

    }

     public static int[] optimizedFindPair(int[] arr, int target){
        HashMap<Integer, Integer> numsMap = new HashMap<>();
        for(int p=0; p< arr.length; p++){
            if(numsMap.get(arr[p]) != null){
                Integer currentMapVal = numsMap.get(arr[p]);
                return new int[]{currentMapVal,p};
            }else {
                int numberToFind = target -arr[p];
                numsMap.put(numberToFind, p);
            }
        }

        return null;
    }
}