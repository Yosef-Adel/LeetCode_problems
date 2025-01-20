class Solution {
public:
    bool detectCapitalUse(string word) {
        bool first = isupper(word[0]);
        if(!first){
            for(int i=1; i< word.length(); i++){
                if(isupper(word[i])){
                    return false;
                }
            }
        }
        if(first && word.length()> 1){
        bool sec = isupper(word[1]);
        if(sec){
            for(int i =1; i< word.length(); i++){
                if(!isupper(word[i])){
                    return false;
                }
            }
        }else{
             for(int i =1; i< word.length(); i++){
                if(isupper(word[i])){
                    return false;
                }
            }
        }

        }


        return true;
    }
};