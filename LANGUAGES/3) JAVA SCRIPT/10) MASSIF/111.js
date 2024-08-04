let n = 5, a = []
for (let i = 0; i < n; i++) {
    a[i] = Math.floor(Math.random() * 100)
    console.log(" A[", i, "] = ", a[i])
    if (a[i] % 2 == 1) {
        a[i] *= 2
    }
}
console.log()
for (let i = 0; i < n; i++) {
    console.log(" A[", i, "] = ", a[i])
}
