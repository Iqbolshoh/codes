let m = 3, n = 3, a = []
let qator = "", juft = "", toq = ""

for (let i = 0; i < m; i++) {
    a[i] = []
    qator = ""
    for (let j = 0; j < n; j++) {
        a[i][j] = Math.floor(Math.random() * 100)
        qator += a[i][j] + " "
    }
    console.log(qator)
}
console.log()
for (let i = 0; i < m; i++) {
    qator = ""
    for (let j = 0; j < n; j++) {
        qator += a[i][j] + " "
    }
    if (i % 2 == 1) {
        toq = qator
    }
    if (i % 2 == 0) {
        juft = qator
    }
    console.log(toq + " " + juft)
    toq = ""
    juft = ""
}     