// function one(){
//     return 1;
// }

// function two(){
//     return one() + one();
// }

// function three() {
//     let ans = two() + one();
//     console.log(ans);
// }

// three();

// let a = 25;
// console.log(a);
// let b = 10;
// console.log(b);
// console.log(a+b);


// // synchrous nature

// setTimeout(() => {
//     console.log("apna college");
// }, 2000);
// setTimeout(() => {
//     console.log("hello world");
// }, 2000);

// console.log("hello....");

// h1 = document.querySelector("h1");


// function changeColor(color, delay, nextColorChange) {
//     setTimeout(() => {
//         h1.style.color = color;
//         if (nextColorChange) nextColorChange();
//     }, delay);
// }

// changeColor("red", 1000, () => {
//     changeColor("orange",1000, () => {
//         changeColor("green",1000, () => {
//             changeColor("yellow",1000);

//         });
//     });
// });

// callbacks nesting -> callback hell



function savetoDb(data, success, failure) {
    let internetSpeed = Math.floor(Math.random() * 10) + 1;
    if(internetSpeed > 4) {
        success();
    } else {
        failure();
    }
}

 savetoDb("apna college", () => {
    console.log("success : your data was saved :");
    savetoDb("hello world", () => {
        console.log("success2 : data2 saved");
        savetoDb("shardha", ()=>{
            console.log("success3: data3 saved");
        },
        () => {
            console.log("failure3: weak connection");
        }
    );
    },
 () => {
    console.log("failure2 : weak connection");
 }
);
 }, 
  () => {
    console.log("failure : weak connection. data not saved");
  });

  



  