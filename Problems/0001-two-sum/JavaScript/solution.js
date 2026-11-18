/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const values = new Map();
    for (let i = 0; i < nums.length; i++) {
        const remaining = target - nums[i];
        if (values.has(remaining)) return [values.get(remaining), i];
        values.set(nums[i], i);
    }
};
