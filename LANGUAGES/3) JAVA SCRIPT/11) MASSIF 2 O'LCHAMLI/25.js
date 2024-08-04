let m = 3, n = 3, a = [], maxline, indexI
for (let i = 0; i < m; i++) {
    a[i] = []
    let line = "", Sum = 0
    for (let j = 0; j < n; j++) {
        a[i][j] = Math.floor(Math.random() * 100)
        line += a[i][j] + " "
        Sum += a[i][j]
    }
    if (i == 0) {
        maxline = Sum
        indexI = i
    }
    if (maxline < Sum) {
        maxline = Sum
        indexI = i
    }
    console.log(line, " ", Sum)
}
console.log(" A[", indexI, "][", 0, "] = ", maxline)