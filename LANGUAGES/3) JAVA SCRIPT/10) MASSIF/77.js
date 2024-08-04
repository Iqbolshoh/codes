let n = 5, a = []
for (let i = 0; i < n; i++) {
    a[i] = Math.floor(Math.random() * 100)
    console.log(" A[", i, "] = ", a[i])
}
for (let i = 1; i < n - 1; i++) {
    if (a[i - 1] > a[i] && a[i] < a[i + 1]) {
        a[i] = Math.pow(a[i], 2)
    }
}
console.log()
for (let i = 0; i < n; i++) {
    console.log(" A[", i, "] = ", a[i])
}