let m = 3, n = 3, a = []
for (let i = 0; i < m; i++) {
    a[i] = []
    let line = "", min
    for (let j = 0; j < n; j++) {
        a[i][j] = Math.floor(Math.random() * 100)
        line += a[i][j] + " "
        if (j == 0) {
            min = a[i][j]
        }
        if (min > a[i][j]) {
            min = a[i][j]
        }
    }
    console.log(line, " min : ", min)
}