let m = 3, n = 4, k = 2, a = []
let qator = "", Kqator = ""
for (let i = 0; i < m; i++) {
  a[i] = []
  qator = ""
  for (let j = 0; j < n; j++) {
    a[i][j] = Math.floor(Math.random() * 100)
    qator += a[i][j] + " "
  }
  if (k == i + 1) {
    Kqator = qator
  }
  console.log(qator)
}
console.log(k, " - qator : ", Kqator)