/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    let negative= false;
    let n = x;
    if(x<0){
        negative=true;
        n= -x;
    }
    const string1 = n.toString();
    const string2 =  string1.split("").reverse().join("");
    const result = parseInt(string2);
    if(result >= Math.pow(2,31)){
        return 0;
    }
    if(negative){
        return -result;
    }else{
        return result;
    }
};