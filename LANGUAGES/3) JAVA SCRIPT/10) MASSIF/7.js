let n = 5, a = []
for (let i = 0; i < n; i++) {
    a[i] = Math.floor(Math.random() * 100)
    console.log(" A[", i, "] = ", a[i])
}
console.log(" teskarisi ! ")
for (let i = n - 1; i >= 0; i--) {
    console.log(" A[", i, "] = ", a[i])
}