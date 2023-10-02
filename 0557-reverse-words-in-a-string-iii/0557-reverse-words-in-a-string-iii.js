/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let words = s.split(' ');

    // for(let word of words){
    //     word = word.split('').reverse().join('');
    // }

    // Because In JavaScript, when you use a for...of loop with an array, 
    // the variable word becomes a copy of each element, and modifying it won't 
    // affect the original array.

     for (let i = 0; i < words.length; i++) {
        words[i] = words[i].split('').reverse().join('');
    }

    return words.join(' ');
};