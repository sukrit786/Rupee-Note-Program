const readline = require('readline');
let arr = [3,4,5,8];
console.log(Array.from(arr,(x)=>{
if(x%2==0){return x*2}
  else{return x*3}
}));
console.log(Array.of("hungama"));
let num = [[1],2,3];
let num2 = [4,5,0];
console.log(num.concat(num2));
num[0].push(0);
console.log(num);
var words = ["nam@gmail.com","k@gmail.com","kanu","manu"];
console.log(words.filter(words=>words.match(/@gmail.com/)));
arr.push(num2);
console.log(arr.flat().sort());
const r1 = readline.createInterface({
   input  : process.stdin,
   output : process.stdout 
});
var name = '';
r1.question('hey man name youself ',(answer)=>{
    console.log(`Hey ${answer} whats up`);
    name += answer;
    console.log(answer.split("").reverse().join(""));
    printi(name);
})
function printi(name){
    console.log(name);
    r1.close();
}
