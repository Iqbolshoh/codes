let n = 5, a, max1, min1
for (let i = 0; i < n; i++) {
    a = Math.floor(Math.random() * 100)
    console.log(a)
    if (i == 0) {
        max1 = a
        min1 = a
    }
    if (max1 < a) {
        max1 = a
    }
    if (min1 > a) {
        min1 = a
    }
}
console.log(" max1: " + max1)
console.log(" min1: " + min1)