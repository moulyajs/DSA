class Solution {
    encode(strs) {
        let res = '';
        for(let s of strs){
            res += s.length + '#' + s;
        }
        return res;
    }
    decode(str) {
        let res = [];
        let i = 0;
        while(i < str.length){
            let j = i;
            while(str[j] !== '#'){
                j++;
            }
            let length = parseInt(str.substring(i,j));
            i = j + 1;
            j = i + length;
            res.push(str.substring(i,j));
            i = j;
        }

        return res;

    }


}



function main() {
    let solution = new Solution();

    let input = ["cat", "dog", "apple"];

    console.log("Original list:", input);

    let encoded = solution.encode(input);
    console.log("Encoded string:", encoded);

    let decoded = solution.decode(encoded);
    console.log("Decoded list:", decoded);
}

// Run main
main();