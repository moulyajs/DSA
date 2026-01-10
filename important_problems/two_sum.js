class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums, target) {
        let map = new Map();
        for(let i = 0;i < nums.length;i++){
            let difference = target - nums[i];
            if(map.has(difference)){
                let j = map.get(difference);
                return j < i ? [j,i] : [i,j];
            }
         map.set(nums[i],i);
        }
        l
    }
}
let sol = new Solution();

let nums = [3, 4, 5, 6];
let target = 7;

let ans = sol.twoSum(nums, target);
console.log(ans); 
