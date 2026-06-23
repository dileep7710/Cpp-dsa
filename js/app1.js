// let msg = "   Hello   ";

//  let password = prompt("set your password");
//  let newPass = password.trim();
//  console.log(newPass);

// let name = "Apna college";

// let msg = "ILoveCoding";

// let msg = "  hello ";
// // let newMsg = msg.trim();
// // console.log(newMsg);
// // newMsg = newMsg.toUpperCase();
// // console.log(newMsg);

// let newMsg = msg.trim().toUpperCase();
// console.log(newMsg);


// let msg = "   hello";

// let password = prompt("Enter you password");
// let currentPass = (password);
// 
// let msg = "   dileep";
// let newMsg = msg.trim().toUpperCase();
// console.log(newMsg);

// let str = "loveCoding";
// let newstr = str.replace("love", "do");
// console.log(newstr);
// console.log(str);

// let msg = "  help!";
// newMsg = msg.trim().toUpperCase();
// console.log(newMsg);




// for(let i = 1; i<=15; i++){
//     if(i%2!=0){
//         console.log("It is odd numbers", i);
//     }
// }


// for(let i=1; i<=10; i++){
//     if(i%2==0){
//         console.log("It is even number", i); 
//     }
// }


// for(let i=1; ; i++){
//     console.log(i);
// }

// let n = prompt("write your number");
// n = parseInt(n);

// for(let i=1; i<=n*10; i++){
//     if(i%5==0){
//         console.log("The table is  ", i);
//     }
// }


// for(let i=1; i<=3; i++){
//     console.log(`outer loop ${i}`);
//     for(let j=1; j<=i ; j++){
//         console.log(j);
//     }
// }

// const favMovie = "avatar";

// let guess = prompt("guess my favorite movie");

// while((guess != favMovie) && (guess !="quit")){

//      guess = prompt(" wrong guess. Please try again");

// }

// if(guess == favMovie){
//     console.log("congrats!!"); 
// }

// let i=1;
// while(i<=5){
//     if(i==3){
//         break;
//     }
//     console.log(i);
//     i++;
// }

// let fruits = ["mango", "apple", "banana", "litchi", "orange"];

// for(let i=0; i<=fruits.length; i++){
//     if(i%2!=0){
//         console.log(i, fruits[i]); 
//     }
    
// }



// let heroes = [
//     ["ironman", "spiderman", "thor"],
//     ["superman", "wonder woman", "flash"]
// ]

// for(let i=0; i<heroes.length; i++){
//     console.log(i, heroes[i], heroes[i].length);
//     for(let j=0; j<heroes[i].length; j++){
//         console.log(`j=${j},${heroes[i][j]}`);
//     }
// }


// let student = [["aman", 95], ["shradha", 94.4], ["karan", 100]];

// for(let i=0; i<student.length; i++){
//     console.log(`info of # ${i+1}`);
//     for(let j=0; j<student[i].length; j++){
//         console.log(student[i][j]);
//     }
// }

// let fruits = ["mango", "apple", "banana", "litchi", "orange"];

// for(fruit of fruits) {
//     console.log(fruit);
// }

// for(char of "apnacollege"){
//     console.log(char);
// }

let todo = [];

let req = prompt("please enter your request");
console.log(req);

while(true) {
    if(req == "quit") {
        console.log("quitting app");
        break;
    }

    if(req == "list"){
        console.log("----------------");
        for(let i=0; i<todo.length; i++){
            console.log(i, todo[i]);
        }
        for(task of todo) {
            console.log(task);
        }
        console.log("----------------");
    } else if(req == "add"){
        let task = prompt("please enter the task you want to add");
        todo.push(task);
        console.log("task added");
    }
    else if(req == "delete") {
        let idx = prompt("please enter the task index");
        todo.splice(idx, 1);
        console.log("task deleted");
    }
    else {
        console.log("wrong request");
    }
    req = prompt("please enter your request");
}