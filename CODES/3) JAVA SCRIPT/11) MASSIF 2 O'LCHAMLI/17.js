let m = 3, n = 3, k = 2, a = [], qator = ""
for (let i = 0; i < m; i++) {
    a[i] = []
    qator = ""
    for (let j = 0; j < n; j++) {
        a[i][j] = Math.floor(Math.random() * 100)
        qator += a[i][j] + " "
    }
    console.log(qator)
}
let sum = 0, f = 1
for (let i = 0; i < n; i++) {
    sum += a[k - 1][i]
    f *= a[k - 1][i]
}
console.log(k, " - qator  yig'indi = ", sum, " Ko'paytma = ", f)