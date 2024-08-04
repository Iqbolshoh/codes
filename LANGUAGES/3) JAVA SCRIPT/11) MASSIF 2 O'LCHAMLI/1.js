let m = 3, n = 3, a = []
for (let i = 0; i < m; i++) {
    a[i] = []
    a[0][i] = Math.floor(Math.random() * 10)
}
for (let i = 1; i < m; i++) {
    a[i] = []
    for (let j = 0; j < n; j++) {
        a[i][j] = a[i - 1][j] * 10
    }
}
for (let i = 0; i < m; i++) {
    let qator = "";
    for (let j = 0; j < n; j++) {
        qator += a[i][j] + " ";
    }
    console.log(qator);
}