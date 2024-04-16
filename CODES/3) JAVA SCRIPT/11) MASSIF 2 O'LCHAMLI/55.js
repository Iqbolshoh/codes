let m = 3, n = 3, a = [], c
for (let i = 0; i < m; i++) {
    a[i] = []
    let line = ""
    for (let j = 0; j < n; j++) {
        a[i][j] = Math.floor(Math.random() * 100)
        line += a[i][j] + " "
    }
    console.log(line)
}
for (let i = 0; i < m / 2; i++) {
    for (let j = 0; j < n; j++) {
        c = a[i][j]
        a[i][j] = a[n - i - 1][j]
        a[n - i - 1][j] = c
    }
}
console.log()
for (let i = 0; i < m; i++) {
    let line = ""
    for (let j = 0; j < n; j++) {
        line += a[i][j] + " "
    }
    console.log(line)
}   