/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    const string1 = x.toString();
    const string2 =  string1.split("").reverse().join("");

    return string1===string2 ;

};