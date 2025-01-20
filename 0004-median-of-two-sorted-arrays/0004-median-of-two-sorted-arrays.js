/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
    let mergedArr = []   
    let itirator1 = 0;
    let itirator2 = 0;

    while(itirator1 < nums1.length &&itirator2 < nums2.length)
    {
       if(nums1[itirator1]<=nums2[itirator2]){
           mergedArr.push(nums1[itirator1])
             itirator1++;
       }else{
           mergedArr.push(nums2[itirator2])
            itirator2++;

       }
    }
    if(itirator1 < nums1.length)
    {
        for(let i = itirator1; i < nums1.length; i++)
        {
            mergedArr.push(nums1[i])
        }
    }
    if(itirator2 < nums2.length)
    {
        for(let i = itirator2; i< nums2.length;i++)
        {
            mergedArr.push(nums2[i])
        }
    }
    
const length = mergedArr.length;
    if(length%2==0)
    {
        const h = length/2;
        const m = mergedArr[h-1] + mergedArr[h]
        return m/2;
    }else{
        const h = Math.floor(length/2);
       return mergedArr[h];
    }
};