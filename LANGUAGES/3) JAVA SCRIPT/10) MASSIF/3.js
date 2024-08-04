let n = 5, a1 = 7, d = 3
let a = []
for (let i = 0; i < n; i++) {
    a[i] = a1
    console.log(" A[", i, "] = ", a[i])
    a1 += d
}