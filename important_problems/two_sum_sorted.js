var twoSum = function(numbers,target){
    let l =0;
    let r = numbers.length - 1;
    while(l < r){
        let cur = numbers[l] + numbers[r];
        if(cur > target){
            r--;
        }
        else if(cur < target){
            l++;
        }
        else{
            return [l+1,r+1];
        }
    }
    return [];
}


function main() {
    let numbers = [2, 7, 11, 15];
    let target = 9;

    let result = twoSum(numbers, target);
    console.log(result);
}


main();