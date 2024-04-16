// let move = (position, roll) => position + 2 * roll

// let positiveSum = (arr) => { let sum = 0; for (let i = 0; i < arr.length; i++) if (arr[i] > 0) sum += arr[i]; return sum }

// let squareSum = (numbers) => numbers.reduce((sum, num) => sum + num ** 2, 0);

// let isLeapYear = (year) => (year % 4 === 0 && year % 100 !== 0 || year % 400 === 0) ? true : false

// function arr2bin(arr) { let sum = arr.reduce((acc, element) => typeof element === 'number' ? acc + element : acc, 0); return sum.toString(2); }

// let hero = (bullets, dragons) => 2 * dragons <= bullets ? true : false

// let lastDigit = (str1, str2) => parseInt(str2) == 0 ? 1 : Math.pow(parseInt(str1) % 10, parseInt(str2) % 4 == 0 ? str2 = 4 : str2) % 10

// let isDivisible = (n, x, y) => n%x == 0 && n%y == 0

// function countPositivesSumNegatives(input) { let sum = 0, c = 0; for (let i = 0; i < input.length; i++) input[i] > 0 ? c++ : sum += input[i]; return [c, sum]; }

// let getASCII = (c) => c.charCodeAt(0)

// let pillars = (numPill, dist, width) => numPill > 1 ? (numPill - 1) * dist * 100 + (numPill - 2) * width : 0

// let countSheeps = (sheep) => { let c = 0; for (let i = 0; i < sheep.length; i++) if (sheep[i] == true) c++; return c }

// let checkAlive  =(health) =>health <= 0 ? true : false

// let twoHighest = (arr) => { if (arr.length === 0) return []; if(arr.length === 1) return [arr[0]]; let max = arr[0], max2 = arr[0]; for (let i = 0; i < arr.length; i++) if (max < arr[i]){ max2 = max; max = arr[i];} else if (max2 < arr[i]) max2 = arr[i]; return [max, max2] }

// let testEven = (n) => n % 2 == 0

// let sayHello = (name, city, state) => { let str = ""; for (let i = 0; i < name.length; i++) str += " " + name[i]; return "Hello," + str + "! Welcome to " + city + ", " + state + "!"; }

// let array = (string) => { let str = ""; for (let i = 1; i < string.length - 1; i++) str += string[i] + " "; return str }

// function keysAndValues(data) { let keys = Object.keys(data), values = keys.map(function (key) { return data[key]; }); return [keys, values]; }

// function mainDiagonalProduct(mat) { let k = 1; for (let i = 0; i < mat.length; i++) k *= mat[i][i]; return k }

// function arraySum(arr) { let S = 0; for (let i = 0; i < arr.length; i++) S += arr[i]; return S }

// let stringy = (size) => { let str = ""; for (let i = 0; i < size.length; i++) i % 2 == 0 ? str += "1" : str += "0"; return str.length > 0 ? str : "1" }

// let paperwork = (n, m) => n < 0 || m < 0 ? 0 : m * n

// let mergeArrays = (a, b) => [...a, ...b].sort().filter((item, index, array) => array.indexOf(item) === index);

// let multipleOfIndex = (array) => { let a = []; if (array[0] == 0) a.push(0);  for (let i = 1; i < array.length; i++) if (array[i] % i == 0) a.push(array[i]); return a }

// let problem = (x) => typeof x === "string" ? "Error" : x * 50 + 6;

// let shortcut = string => string.replace(/[aeiou]/g, '');

// let contamination = (text, char) => !char ? text : text.split('').map(() => char).join('');

// let bmi = (w, h,) => { let a = w / h / h;  return a <= 18.5 ? "Underweight" : a <= 25 ? "Normal" : a <= 30 ? "Overweight" : "Obese"; }

// let opposite = (number) => number == 0 ? 0 : -number

// let summation = (num) => num * (num + 1) / 2

// let boolToWord = (bool) => bool ? "Yes" : "No"

// let reverseSeq = n => { let a = []; for (let i = 0; i < n; i++) a[i] = n - i; return a; }

// let lowercaseCount = (str) => (str.match(/[a-z]/g) || []).length;

// let basicOp = (o, a, b) => o === "+" ? a + b : o === "-" ? a - b : o === "*" ? a * b : o === "/" ? a / b : "";

// let splitAndMerge = (string, separator) => string.split(' ').map(word => word.split('').join(separator)).join(' ');

// let simpleMultiplication = (n) => n * (n % 2 ? 9 : 8);

// let areaOrPerimeter = (l, w) => l == w ? l * w : (l + w) * 2

// let noBoringZeros = (n) => { n = n.toString(); return n != 0 ? parseInt(n.replace(/0+$/, ''), 10) : 0 }

// let tripleTrouble = (one, two, three) => { let str = ""; for (let i = 0; i < one.length; i++) str += one[i] + two[i] + three[i]; return str; }

// let position = (letter) => { let p = letter.charCodeAt(0); p >= 97 && p <= 122 ? r = p - 96 : r = p - 64; return "Position of alphabet: " + r }

// let getChar = (c) => String.fromCharCode(c)

// let quarterOf = (month) => Math.ceil(month / 3);

// let findAverage = (array) => { let sum = 0, n = array.length; for (let i = 0; i < n; i++)  sum += array[i]; return n > 0 ? (sum / n) : 0 }

// let betterThanAverage = (classPoints, yourPoints) => { let sum = 0, n = classPoints.length; for (let i = 0; i < n; i++)  sum += classPoints[i]; return (sum / n < yourPoints) ? true : false}

// let nameShuffler = (str)=>{ let [ism, familya] = str.split(' '); return `${familya} ${ism}`; }

// let updateLight = (current) => current === "green"? "yellow": current === "yellow"? "red" : current === "red"? "green": ""

// let unusualFive = () => "Iqbol".length

// let twiceAsOld = (dadYearsOld, sonYearsOld)=> Math.abs(dadYearsOld - sonYearsOld * 2);

// function NameMe(first, last) { this.firstName = first; this.lastName = last; this.name = this.firstName + ' ' + this.lastName; }

// let ArrowFunc = (arr) => arr.map(num => String.fromCharCode(num)).join('');

// let orderOperations = () => (2 + 2) * (2 + 2) * 2

// Array.prototype.filter = function (func) { let result = []; for (let i = 0; i < this.length; i++)if (func(this[i])) result.push(this[i]); return result; };

// Math.roundTo = (number, precision) => Number(number.toFixed(precision));

// let sumSquares = (array) => array.reduce((sum, element) => sum + element ** 2, 0);

// function isPrime(num) { if (num <= 1) return false; for (let i = 2; i <= Math.sqrt(num); i++)if (num % i === 0) return false; return true; }

// function matrixAddition(a, b) { let size = a.length; for (let i = 0; i < size; i++) for (let j = 0; j < size; j++) a[i][j] += b[i][j]; return a; }

// let stringToNumber = (str) => parseInt(str);

// let maxab = (a, b) => a > b ? a : b

// let solution = (str) => str.split('').reverse().join('')

// sumOfDifferences = arr => arr.length <= 1 ? 0 : Math.max(...arr) - Math.min(...arr)

// let logs = (x, a, b) => Math.log(a * b) / Math.log(x)

// let countSheep = (num) => { let result = ""; for (let i = 1; i <= num; i++)result += i + " sheep..."; return result }

// let nearestSq = (n) => { let s = (Math.sqrt(n)); let k = parseInt(s); return Math.abs(s - k) < Math.abs(k + 1 - s) ? k ** 2 : (k + 1) ** 2 }

// let replace = (s) => s.replace(/[aeiouAEIOU]/g, '!');

// let removeExclamationMarks = (s) => s.replace(/!/g, '');

