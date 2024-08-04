let m = 3, n = 3, a = []
for (let i = 0; i < m; i++) {
    a[i] = []
    for (let j = 0; j < n; j++) {
        a[i][j] = Math.floor(Math.random() * 100)
    }
}
console.log(a)