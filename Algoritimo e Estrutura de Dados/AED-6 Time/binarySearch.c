// logarithmic time using binary search
#include <stdio.h>
#define SIZE 20
// Logarithmic time using binary search
let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20];
function binarysearch(arr, value){
    let left = 0,
    right = arr.length - 1;
    while (left <= right){
        let mid = left + Math.floor((right - left) / 2);
        if (arr[mid] === value){
            return mid;
        }else if (arr[mid] < value){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}

binarysearch(arr, 8); //=>5
binarysearch(arr, 7); //=>-1