let m = 3, n = 3, a = []
for (let i = 0; i < m; i++) {
    a[i] = []
    let S = 0, line = ""
    for (let j = 0; j < n; j++) {
        a[i][j] = Math.floor(Math.random() * 100)
        S += a[i][j]
        line += a[i][j] + " "
    }
    console.log(line, " Sum : ", S)
}