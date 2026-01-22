class Solution {

    productExceptSelf(nums) {
        const n = nums.length;
        const res = new Array(n).fill(1);
        for(let i = 1;i < n;i++){
            res[i] = res[i-1] * nums[i-1];


        }
        let postfix = 1;
        for(let i = n-1;i>= 0;i--){
            res[i] = res[i] * postfix;
            postfix = postfix * nums[i];
        }


        return res;

    }


}





function main() {
    const nums = [1, 2, 3, 4];   // sample input

    const sol = new Solution();
    const result = sol.productExceptSelf(nums);

    console.log("Input:", nums);
    console.log("Output:", result);
}

// Call main
main();
