// function hello(){
//     console.log("hello");
// }



// function printName(){
//     console.log("Apna college");
//     console.log("Apna college");
// }

// function print1to5() {
//     for(let i=1; i<=5; i++){
//         console.log(i);
//     }
// }


// function isAdult(){
//     let age = 17 ;
//     if(age >=18){
//         console.log("Adult");  
//     }
//     else {
//         console.log("not adult"); 
//     }
// }

// isAdult();


// function printPoem(){
//     console.log("Twinkle Twinkle little star");
// }

// printPoem();

// function rolldice(){
//     let random = Math.floor(Math.random()*6)+1;
//     console.log(random);
// }

// rolldice();

// function printinfo(name, age){
//     console.log(`${name}'s age is ${age}.`);
// }

// printinfo("Dileep",18);
// printinfo("dileep");

// function sum(a,b){
//     console.log(a+b);
// }

// sum(2,4);
// sum(4,5);


// function calcAvg(a,b,c){
//     avg = (a+b+c)/2;
//     console.log(avg);
// }

// calcAvg(2,3,4);

// function printTable(a){
//     for(let i=a; i<=a*10; i=i+a){
//         console.log(i);
//     }
// }

// printTable(2);

// function isAdult(age){
//     if(age >= 18){
//         return "adult";
//     }
//     else {
//         return "not adult";
//     }
// }

// console.log(isAdult(13));

function sumNum(n){
    let sum = 0;
    for(let i=1; i<=n; i++){
        sum = sum + i;
    }
    return sum; 
}

console.log(sumNum(100));