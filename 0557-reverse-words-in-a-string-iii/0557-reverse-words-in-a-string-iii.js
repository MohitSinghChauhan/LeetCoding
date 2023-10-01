/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let words = s.split(' ');
    let ans = "";

    for(let word of words){
        ans+= word.split('').reverse().join('');
        ans+=" ";
    }

    return ans.slice(0,-1);
};