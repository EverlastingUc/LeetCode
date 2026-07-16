/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const values = new Map();

    for (let i = 0; i < nums.length; i++) {
        const current = nums[i];
        const remaining = target - current;

        if (values.has(remaining)) {
            return [values.get(remaining), i];
        }

        values.set(current, i);
    }
};
