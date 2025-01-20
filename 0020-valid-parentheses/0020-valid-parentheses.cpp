#include <stack>

class Solution {
public:
    bool isValid(string s) {
        if(s.length()<2){
            return false;
        }
    stack<char> st ;
       for (int i =0; i < s.length(); i++){
           if(s[i]== '(' ||s[i]== '['||s[i]== '{' ){
               st.push(s[i]);
           }else{
               if(st.empty()){
                   return false;
               }
               char x = st.top();
               if(x=='(' && s[i]!= ')')
                   return false;
               if(x=='[' && s[i]!= ']')
                   return false;
               if(x=='{' && s[i]!= '}')
                   return false;
               st.pop();
           }
       }

       if(st.size()==0)
           return true;
       return false;
       
   }
};