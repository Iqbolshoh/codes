let a = 5, b = 5, c = 5, d = 5
if (a == c && c == d) {
    a = b
}
if (a == b && b == d) {
    a = c
}
if (a == b && b == c) {
    a = d
}
console.log(a)