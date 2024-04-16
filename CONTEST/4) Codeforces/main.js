class Solution { static missingNumber(array, n) { array.sort((a, b) => a - b); for (let i = 1; i < n - 1; i++) if (array[i - 1] + 1 != array[i]) return array[i - 1] + 1 } }
console.log(Solution.missingNumber([6, 1, 2, 8, 3, 4, 7, 10, 5], 10));

