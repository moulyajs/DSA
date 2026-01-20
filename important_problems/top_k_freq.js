class Solution {

    topKFrequent(nums, k) {
        const count = {};
        const freq = Array.from({length:nums.length + 1} , () => []);
        for(const n of nums){
            count[n] = (count[n] || 0) + 1;
        }
        for(const num in count){
            freq[count[num]].push(num);

        }
        const res = [];
        for(let i = freq.length - 1 ; i > 0 ; i--){
            for(const n of freq[i]){
                res.push(n);
                if(res.length == k){
                    return res;
                }
            }
        }



    }




}














function main() {
    const solution = new Solution();

    // Example input
    const nums = [9, 9, 9, 5, 5, 2, 2, 2, 2, 7];
    const k = 3;

    const result = solution.topKFrequent(nums, k);

    console.log("Input array:", nums);
    console.log("k:", k);
    console.log("Top K frequent elements:", result);
}

// Run main
main();