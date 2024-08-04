let n = 7, a = [], max
for (let i = 0; i < n; i++) {
    a[i] = Math.floor(Math.random() * 100)
    console.log(" A[", i, "] = ", a[i])
    if (i == 0) {
        max = a[0];
    } if (max < a[i]) {
        max = a[i];
    }
}
console.log(" max = ", max)