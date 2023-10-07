/**
 * @param {number} n
 * @return {Function} counter
 */

let counter;
var createCounter = function(n) {
    if(counter!=-1) counter =-1;
    return function() {
        counter+=1;
        return (n+counter)
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */