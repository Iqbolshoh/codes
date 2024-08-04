let m = 3, n = 3, a = [], minline, max, indexI
for (let i = 0; i < m; i++) {
    a[i] = []
    let line = "", Sum = 0
    for (let j = 0; j < n; j++) {
        a[i][j] = Math.floor(Math.random() * 100)
        line += a[i][j] + " "
        Sum += a[i][j]
    }
    if (i == 0) {
        minline = Sum
        indexI = i
    }
    if (minline > Sum) {
        minline = Sum
        indexI = i
    }
    console.log(line, Sum)
}
console.log("minline Sum : ", minline)
for (let i = 0; i < n; i++) {
    if (i == 0) {
        max = a[indexI][i]
    }
    if (max < a[indexI][i]) {
        max = a[indexI][i]
    }
}
console.log("max element : ", max)