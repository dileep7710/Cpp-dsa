//  let arr = [1, 2, 3, 4, 5];

// let print = function(el){
//     console.log(el);
// };

// arr.forEach(print);

// arr.forEach((el) =>{
//     console.log(el);
// });

// arr.forEach(function(el){
//     console.log(el);
// });

// let students = [{
//     name: "aman",
//     marks:95
// },
// {
//     name:"shardha",
//     marks:94.4
// },
// {
//     name:"rajat",
//     maks:92
// },
// ]; 

// let gpa = students.map((el) => {
//     return el.marks / 10;

// });

// arr.forEach((student) =>{
//     console.log(student.name);
// });

// let num = [1, 2, 3, 4];

// let double = num.map(function(el) {
//     return el*el;
// });


let nums = [1, 2, 3, 4, 7, 8, 2, 9, 10, 12, 11];
let ans = nums.filter((el) => {
    return el % 2 == 0;  // even -> true, odd -> false
});