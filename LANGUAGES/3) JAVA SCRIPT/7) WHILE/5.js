let n = 256, k = 0, j = 1
while (j < n) {
    j *= 2
    k++
}
if (j == n) {
    console.log(2, " ^ ", k, " = ", n);
}