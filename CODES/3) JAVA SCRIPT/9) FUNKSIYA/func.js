function darajaHisobla(n, d) {
    let k = 1;
    for (let i = 0; i < d; i++) {
        k *= n;
    }
    return k;
}

function katta(a, b) {
    let max = a;
    if (max < b) {
        max = b;
    }
    return max;
}

function kichik(a, b) {
    let min = a;
    if (min > b) {
        min = b;
    }
    return min;
}

function modul(a) {
    if (a < 0) {
        a = -a;
        return a;
    }
}

function faktareal(n) {
    let f = 1
    for (let i = 1; i <= n; i++) {
        f *= i
    }
    return f;
}

module.exports = {
    daraja: darajaHisobla,
    katta: katta,
    kichik: kichik,
    modul: modul,
    faktareal: faktareal
};

