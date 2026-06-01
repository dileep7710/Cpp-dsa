// let pencilPrice = 10;
// let erasorPrice = 5;
// let output = "The total price is :" +( pencilPrice + erasorPrice) + "Rupees."
// console.log(output);


//  operators

// let age = 18;
// console.log(age >= 18);  // false 


// console.log("before my if statement");
// let age = 14;
// if(age >= 18){
//     console.log("you can vote");
//     console.log("you can drive");
//     let a = 5;
//     console.log(5 * a);
// }
// if(age < 18)  {
//     console.log("you cannot vote");
// }
// console.log("after my if statement");


// Traffic Light System 
// let color = "yellow";

// if(color === "red"){
//     console.log("stop, Light color is red");
// }

//  else if(color === "green, Light color is green"){
//     console.log("Go");
// }

// else if(color === "yellow"){
//     console.log("slow Down, light color is yellow  ");
// }

// let marks = 65;

// if(marks >= 80){
//     console.log("A+");
// }
// else if(marks >60){
//     console.log("A");
// }
// else if(marks >= 33){
//     console.log("B");
// }
// else if(marks <33){
//     console.log("F");
// }

// let size = 'XL';
// if(size === 'XL'){
//     console.log("size is 'XL', price is Rs.250");
// }
// else if(size =='L'){
//     console.log("size is 'L',price is Rs.200");
// }
// else if(size === 'M'){
//     console.log("size is 'M', price is Rs.100");
// }
// else if("size === 'S', price is Rs.50");

// if(marks >= 33) {
//     console.log("Pass");
//     if(marks >= 80){
//         console.log("Grade : O");
//     }
//     else {
//         console.log("Grade : A");
//     }
    
// }
// else {
//     console.log("Better luck next time!");
// }

// logical Operators  
// let marks = 75;


// if(marks >= 33 && marks >= 80) {
//     console.log("Pass");
//     console.log("A+");
// }

// let age = 14;

// if( age >= 18){
//     console.log("you can vote");
// }
// else if(age <18){
//     console.log("you cannot vote");
// }

// let marks = 50;

// if(marks >=80 ){
//     console.log("grade: A+");
// }
// else if(marks >= 60) {
//     console.log("Grade : B+");
// }
// else if(marks >= 33 ){
//     console.log("Grade : B");
// }
// else if(marks < 33){
//     console.log("Fail");
// }


// let str = "apple";
// if((str[0]=== 'a') && (str.length > 3)){
//     console.log("It is a good string");

// }

// else {
//     console.log("It is not a good string");
// }


// let num = 12;
// if((num % 3 == 0) && (num+1 == 15) || (num-1 == 11)) {
//     console.log("safe");
// }

// else{
//     console.log("unsafe");
// }

// let color = "red";

// switch(color) {
//     case "red" :
//         console.log("stop");
//         break;
//     case "yellow" :
//         console.log("slow  down") ;
//         break;
//     case "green" :
//         console.log("Go");
//         break;
//     default : 
//     console.log("Broken Light");
// }



// let day = 12;

// switch(day){
//     case 1 :
//         console.log("Monday");
//         break;

//     case 2 : 
//         console.log("Tuesday");
//         break;

//     case  3 : 
//         console.log("Wednesday");
//         break;

//     case 4 : 
//         console.log("Thusday");
//         break;

//     case 5 : 
//         console.log("Friday");
//         break;

//     case  6 : 
//         console.log("Saturday");
//         break;
//     case 7 : 
//         console.log("Sunday,fun day");
//         break;
    
//     default : 
//         console.log("wrong day!");

// }

// alert("something is wrong!");

// let firstName = prompt("Enter first name");
// let lastName = prompt("enter last name");
// console.log("Welcome", firstName, " ", lastName, "!");


// let num = 50;

// if(num % 10 == 0){
//     console.log("Good");
// }

// else {
//     console.log("Bad");
// }

// let name = prompt("please  enter your name");
// let age = prompt("please enter you age");

// alert(`${name} is ${age} years old.`);

// let Quarter = 3;
// switch(Quarter) {
//     case 1 :
//         console.log("January, February, March");
//         break;

//     case 2 : 
//         console.log("April, May, June");
//          break;
//     case 3 : 
//         console.log("July, August, September");
//          break;

//     case 4 : 
//         console.log("October, November, December");
//          break;

//     default : 
//         console.log("Not exist");
//     }

let string = "oran";

if((string[0] === 'A') || (string[0] === 'a') && (string >=5)){
    console.log("A sting is a golden string");
}

else { 
    console.log("A string is  not golden string");
}