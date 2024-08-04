let n = 3700;
console.log(n, " sekund ");
let soat = parseInt(n / 3600);
n %= 3600;
let minut = parseInt(n / 60);
let sekund = n % 60;
console.log(soat, " soat ", minut, " minut ", sekund, " sekund ")