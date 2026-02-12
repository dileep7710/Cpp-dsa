// let a = 10;
// let b = 5;
// let output = "The total price is :" + ( pencilPrice + erasorPrice) + " Rupees.";
// let output = `The total price is : ${pencilPrice} rupees.`;
// console.log(output);
// console.log(`Your pay ${a + b} rupees`);

// let size = 'M';
// if(size==='XL'){
//     console.log("price is Rs:-",250);
// }
// else if(size==='L'){
//     console.log("price is:-",200);
// }
// else if(size=='M'){
//     console.log("price is:-",100);
// }
// else{
//     console.log("price is:-",50);
// }
// let str = "Abhishek";
// if((str[0]=='A') && (str.length>3)){
//     console.log("Good");
// }
// else
//     console.
// let months = ["january","july","march","august"];
// months.splice(0,2,"july","June");
// for(let i=1; i<=5;i++){
//     console.log(i);
// }
// for(let i=1;i<=15;i+=2){
//         console.log(i);
        
// }

// let n = prompt("write your number");
// n = parseInt(n);

// for(let i=n;i<=n*10; i=i+n){
//         console.log(i);
// }

// const favMovie = "avatar";

// let guess =  prompt("guess my favorite movie");

// while((guess != favMovie) && (guess != "quite")){
//        guess = prompt("wrong guess. please try again");
// }
// if(guess==favMovie){
//         console.log("congrats!!");
// }
// let todo = [];
// let req = prompt("please enter your request");

// while(true){
//         if(req == "quit"){
//                 console.log("quitting app");
//                 break;
//         }

//         if(req == "list"){
//                 console.log("-------------");
//                 for(let i=0; i<todo.length; i++){
//                         console.logo(i,todo[i]);
//                 }
//                 for(task of todo){
//                         console.log(task);
//                 }
//                 console.log("-----------");
//         }
//         else if(req == "add") {
//                 let task = prompt("please enter the task you want to add");
//                 todo.push(task);
//                 console.log("task added");
//         }
//         else if(req == "delete"){
//                 let idx = prompt("please enter the task index");
//                 todo.splice(idx, 1);
//                 console.log("task deleted");
//         }
//         req = prompt("please enter your request");
// }
// const student = {
//         name: "Dileep",
//         age: 23,
//         marks:94.4
// };

// const post = {
//         username: "@DileepYadav",
//         Content: "This is my #firstPost",
//         likes: 150,
//         reposts: 5,
//         tags: ["@apanacollege","@delta"] 
// };

// const classInfo = {
//         aman : {
//                 grade:"A+",
//                 city:"Delhi"
//         },

//         Dileep : {
//                 grade:"B",
//                 city:"Kushinagar"
//         },
//         karan : {
//                 grade:"o",
//                 city:"Mumbai"
//         }
// };

// const max = prompt("enter the max number");

// const random = Math.floor(Math.random() * max) + 1;

// let guess = prompt("guess the number");

// while(true){
//         if(guess == "quit"){
//                 console.log("user quit");
//                 break;
//         }
//         if(guess == random){
//                 console.log("you are right! congrats!! random number was", random);
//                 break;
//         }
//         else if(guess<random){
//                 guess = prompt("hint : your guess was too small. please try again");
//         }
//         else {
//                 guess = prompt("hint : your guess was too large. please try again");
//         }


//         // else {
//         //         guess = prompt("your guess was wrong.please try again");
//         // }
// }

// let dice = Math.floor(Math.random() * 6) + 1;
// console.log(dice);

// const car = {
//         name: "maruti , suzuki",
//         model: "Maruti Suzuki Dzire",
//         color: "Red",

// };
// console.log(car.name);

// const Person = {
//         name: "Dileep Yadav",
//         age: 23,
//         city: "tamkuhiroad",
// };
// Person.city = "New York";
// Person.country = "United States";
// console.log(Person);

// function isAdult(){
//         let age = 18;
//         if(age>=18){
//                 console.log("adult");
//         }else {
//                 console.log("not adult");
//         }
// }

// isAdult();

// function printPoem(){
//         console.log("Twinkle Twinkle, little star");
//         console.log("how i wonder what you are");

// }
// printPoem();

// function rollDice() {
//         let rand = Math.floor(Math.random()*6) + 1;
//         console.log(rand);
// }

// rollDice();
// rollDice();
// rollDice();
// rollDice();
// rollDice();
// rollDice();

// function printinfo(name,age){
//         console.log(`${name}'s age is ${age}.`);
// }
// printinfo("Dileep yadav" ,23);

// function sum(a,b) {
//         console.log(a+b);
// }

// sum(1,2);
// sum(4,5);
// sum(7,8);

function calcAvg(a,b,c){
        let avg = (a+b+c)/3;
        console.log(avg);
}
calcAvg(2, 4, 6); 