let n = 5, a = [], c = 0
for (let i = 0; i < n; i++) {
    a[i] = Math.floor(Math.random() * 100)
    console.log(" A[", i, "] = ", a[i])
}
console.log(" ")
for (let i = n - 1; i >= 0; i--) {
    if (a[i] > a[i - 1]) {
        console.log(" A[", i, "] = ", a[i])
        c++;
    }
}
console.log(" soni = ", c)