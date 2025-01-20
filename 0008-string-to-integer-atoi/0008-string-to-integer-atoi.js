/**
 * @param {string} s
 * @return {number}
 */
var myAtoi = function(s) {
    const int1= parseInt(s);
    if(int1){
        if(int1 >= Math.pow(2,31)){
            return Math.pow(2,31)-1
        }
        if(int1 <= - Math.pow(2,31)){
            return -(Math.pow(2,31))
        }
        return int1;

    }else{
        return 0;
    }
    
};