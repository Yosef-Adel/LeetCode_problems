class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int one = 0;
        int flip = 0;
        for(int i =0; i<s.length(); i++){
            if(s[i]=='1'){
                one++;
            }else{
                if(one==0){
                    continue;
                }else{
                    flip++;
                }
            }

            if(one<flip){
                flip = one;
            }
        }
        return flip;
    }
};