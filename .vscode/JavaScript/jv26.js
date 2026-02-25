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

let arr = [{
    name: "aman",
    marks:95
},
{
    name:"shardha",
    marks:94.4
},
{
    name:"rajat",
    maks:92
},
];

arr.forEach((student) =>{
    console.log(student.name);
});