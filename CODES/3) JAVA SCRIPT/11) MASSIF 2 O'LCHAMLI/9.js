let m = 3, n = 3, a = [], qator = ""
for (let i = 0; i < m; i++) {
    a[i] = []
    qator = ""
    for (let j = 0; j < n; j++) {
        a[i][j] = Math.floor(Math.random() * 100)
        qator += a[i][j] + " "
    }
    console.log(qator)
}
console.log("Juft qatorlar ")
for (let i = 0; i < m; i += 2) { 
    qator = ""
    for (let j = 0; j < n; j++) {
        qator += a[i][j] + " "
    }
    console.log(qator)
}