/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * function MountainArray() {
 *     @param {number} index
 *     @return {number}
 *     this.get = function(index) {
 *         ...
 *     };
 *
 *     @return {number}
 *     this.length = function() {
 *         ...
 *     };
 * };
 */

/**
 * @param {number} target
 * @param {MountainArray} mountainArr
 * @return {number}
 */

var findInMountainArray = function (target, mountainArr) {

    let start = 0;
    let end;
    let middle;

    // function - find peak mountain array
    function indexPeak() {
        start = 0;
        end = mountainArr.length() - 1;
        while (start < end) {
            middle = Math.floor((start + end) / 2);

            if (mountainArr.get(middle) < mountainArr.get(middle + 1)) {
                start = middle + 1;
            } else {
                end = middle;
            }
        }

        console.log("peak = " + start);
        return start;
    }

    // function - get index target in mountain array
    function indexTarget(peak) {
        start = 0;
        end = peak;
        while (start <= end) {
            middle = Math.floor((start + end) / 2);

            if (mountainArr.get(middle) == target) {
                return middle;
            } else if (mountainArr.get(middle) < target) {
                start = middle + 1;
            } else {
                end = middle - 1;
            }
        }

        start = peak;
        end = mountainArr.length() - 1;
        
        while (start <= end) {
            middle = Math.floor((start + end) / 2);
            console.log("middle = " + middle);
            if (mountainArr.get(middle) == target) {
                return middle;
            } else if (mountainArr.get(middle) < target) {
                end = middle - 1;
            } else {
                start = middle + 1;
            }
        }

        return -1;
    }

    let peak = indexPeak();
    let position = indexTarget(peak);

    return position;
};