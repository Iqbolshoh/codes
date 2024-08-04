let n = 5, a, b, maxA, maxB
for (let i = 0; i < n; i++) {
    a = Math.floor(Math.random() * 100)
    b = Math.floor(Math.random() * 100)
    console.log(a, b)
    if (i == 0) {
        maxA = a
        maxB = b
    }
    if (maxA < a) {
        maxA = a;
    }
    if (maxB < b) {
        maxB = b;
    }
}
console.log(" maxA = ", maxA)
console.log(" maxB = ", maxB)