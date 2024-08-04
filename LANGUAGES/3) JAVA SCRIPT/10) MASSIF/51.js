let n = 3, a = [], b = [], c;
for (let i = 0; i < n; i++) {
    a[i] = Math.floor(Math.random() * 100)
    b[i] = Math.floor(Math.random() * 100)
    console.log(" A[", i, "] = ", a[i], "   B[", i, "] = ", b[i])
}
console.log(" ")
for (let i = 0; i < n; i++) {
    c = a[i]
    a[i] = b[i]
    b[i] = c
    console
    console.log(" A[", i, "] = ", a[i], "   B[", i, "] = ", b[i])
}
