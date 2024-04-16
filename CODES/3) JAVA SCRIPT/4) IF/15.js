let a = 5, b = 7, c = 9
let max1 = a, max2 = b
if (b > a && c > a) {
    max1 = c
}
if (a > b && c > b) {
    max2 = c
}
console.log(max1, max2)