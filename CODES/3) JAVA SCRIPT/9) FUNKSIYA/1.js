function PowerA3(n) {
    let k = 1
    for (let i = 0; i < n; i++) {
        k *= 3
    }
    return k
}

console.log(PowerA3(3))
console.log(PowerA3(4))
console.log(PowerA3(5))