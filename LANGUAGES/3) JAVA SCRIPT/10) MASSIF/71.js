let n = 5, a = [], c
for (let i = 0; i < n; i++) {
    a[i] = Math.floor(Math.random() * 100)
    console.log(" A[", i, "] = ", a[i])
}
console.log(" teskarisga almashtirish ")
for (let i = 0; i < n / 2; i++) {
    c = a[i]
    a[i] = a[n - 1 - i]
    a[n - 1 - i] = c
}
for (let i = 0; i < n; i++) {
    console.log(" A[", i, "] = ", a[i])
}