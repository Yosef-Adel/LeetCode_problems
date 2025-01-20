// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long  start = 0;
        long long end = n;
        while(isBadVersion(end)){
             long long  mid = (start+end)/2 ;
            if(isBadVersion(mid)){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }

        return int(end+1);

 
    }
};