let n = 123;
let yuz = parseInt(n / 100);
let on = parseInt(n / 10) % 10;
let bir = n % 10;
let k = yuz * 100 + bir * 10 + on;
console.log(" n = ", n, " k = ", k);