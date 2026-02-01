class Solution{
    isPalindrome(s){
        let l = 0;
        let r = s.length - 1;
        while(l<r){
            while(l < r && !this.alphaNum(s[l])){
                l++;
            }
            while( r > l && !this.alphaNum(s[r])){
                r--;
            }
            if(s[l].toLowerCase() !== s[r].toLowerCase()){
                return false;

            }
            l++;
            r--;

        }
        return true;
    }
    alphaNum(c){
        return(
        (c >= 'A' && c <= 'Z')||
        (c >= 'a' && c <= 'z')||
        (c >= '0' && c <= '9')
        )
    }

}












function main() {
    const solution = new Solution();

    const testCases = [
        "A man, a plan, a canal: Panama",
        "race a car",
        " ",
        "0P"
    ];

    for (const s of testCases) {
        console.log(`"${s}" → ${solution.isPalindrome(s)}`);
    }
}

/* Call main */
main();