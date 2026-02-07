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
let todo = [];
let req = prompt("please enter your request");

while(true){
        if(req == "quit"){
                console.log("quitting app");
                break;
        }

        if(req == "list"){
                console.log("-------------");
                for(let i=0; i<todo.length; i++){
                        console.logo(i,todo[i]);
                }
                for(task of todo){
                        console.log(task);
                }
                console.log("-----------");
        }
        else if(req == "add") {
                let task = prompt("please enter the task you want to add");
                todo.push(task);
                console.log("task added");
        }
        else if(req == "delete"){
                let idx = prompt("please enter the task index");
                todo.splice(idx, 1);
                console.log("task deleted");
        }
        req = prompt("please enter your request");
}
