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


// let nums = [1, 2, 3, 4, 7, 8, 2, 9, 10, 12, 11];
// let ans = nums.filter((el) => {
//     return el % 2 == 0;  // even -> true, odd -> false
// });

// let nums = [1,2,3,4];
// let finalValue = nums.reduce((res,el)=>{
//     console.log(res);
//     return res + el;
// });
// console.log(finalValue);

// let arr = [1, 4, 2, 5, 6, 7, 2, 9, 2];

// let max = -1;

// for(let i = 0; i<arr.length; i++){
//     if(max < arr[i]) {
//         max = arr[i];
//     }
// }

// console.log(max);

// let max = arr.reduce((max, el) =>{
//     if(max < el) {
//         return el;
//     } else {
//         return max;
//     }
// });

// console.log(max);



// let ans = nums.every((el) => el % 10 == 0);

// console.log(ans); 

function getMin(nums){
    let min = nums.reduce((min, el) =>{
        if(min < el){
            return min;
        }
        else {
            return el;

    }
});

 return min;

}

let nums = [10, 20, 30, 40, 5];
