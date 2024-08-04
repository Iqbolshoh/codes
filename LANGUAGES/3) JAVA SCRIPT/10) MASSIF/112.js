let n = 5, a = []
for (let i = 0; i < n; i++) {
    a[i] = Math.floor(Math.random() * 100)
    console.log(" A[", i, "] = ", a[i])
}
console.log(" Saralash ")
for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
        if (a[i] > a[j]) {
            let c = a[i]
            a[i] = a[j]
            a[j] = c
        }
    }
    console.log(" A[", i, "] = ", a[i])
}