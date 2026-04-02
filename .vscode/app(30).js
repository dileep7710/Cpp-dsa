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

h1 = document.querySelector("h1");

function changeColor(color, delay) {
    return new Promise((resolve, reject) => {
    setTimeout(() => {
        let num = Math.floor(Math.random() * 5) + 1;
        if(num > 3) {
            reject("promise rejected");
        }

        h1.style.color = color;
        console.log(`color changed to ${color}!`);
        resolve("color changed!");
   }, delay);
 }); 
   
}

async function demo() {
    try {
    await changeColor("red", 1000);
    await changeColor("orange", 1000);
    await changeColor("green", 1000);
    await changeColor("blue", 1000);
    }
    catch (err) {
        console.log("error caught");
        console.log(err);
    }
    
    let a = 5;
    console.log(a);
    console.log("new number = ", a+3);
}

// changeColor("red", 1000)
// .then(() => {
//     console.log("red color was completed");
//     return changeColor("orange",1000);
// })
// .then(() => {
//     console.log("orange color was completed");
//     return changeColor("green", 1000);
// })
// .then(() => {
//     console.log("green color was completed");
//     return changeColor("blue", 1000);
// })
// .then(() => {
//     console.log("blue color was completed");
// });

// changeColor("red", 1000, () => {
//     changeColor("orange",1000, () => {
//         changeColor("green",1000, () => {
//             changeColor("yellow",1000);

//         });
//     });
// });

// callbacks nesting -> callback hell



// function savetoDb(data, success, failure) {
//     let internetSpeed = Math.floor(Math.random() * 10) + 1;
//     if(internetSpeed > 4) {
//         success();
//     } else {
//         failure();
//     }
// }

//  savetoDb("apna college", () => {
//     console.log("success : your data was saved :");
//     savetoDb("hello world", () => {
//         console.log("success2 : data2 saved");
//         savetoDb("shardha", ()=>{
//             console.log("success3: data3 saved");
//         },
//         () => {
//             console.log("failure3: weak connection");
//         }
//     );
//     },
//  () => {
//     console.log("failure2 : weak connection");
//  }
// );
//  }, 
//   () => {
//     console.log("failure : weak connection. data not saved");
//   });

  

// function savetoDb(data) {
//     return new Promise((resolve, reject) => {
//         let internetSpeed = Math.floor(Math.random() * 10) +1;
//         if(internetSpeed >4){
//             resolve("success : data was saved");
//         } else {
//             reject("failure : weak connection");
//         }
//     })
// }



// savetoDb("apna college")
//     .then((result) => {
//         console.log("data1 saved");
//         console.log("result of promise: ", result);
//         return savetoDb("helloworld");
//     })
//     .then((result) => {
//         console.log("data2 saved");
//         console.log("result of promise: ", result);
//     })
//     .catch((error) => {
//         console.log("promise was rejected");
//         console.log(error);
//     });

// async function greet() {
//     throw "404 page not found";
//     return "hello";
// }

// greet()
//   .then((result) => {
//     console.log("promise was resolved");
//     console.log("result was : ", result);
//   })
//   .catch((err) => {
//     console.log("promise was rejected with err : ", err);
//   })

//   let demo = async () => {
//     return 5;
//   };



// function getNum() {
//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//         let num = Math.floor(Math.random() * 10) + 1;
//         console.log(num);
//         resolve(); 

//         }, 1000);
       
//     });
// }

// async function demo() {
//     await getNum();
//      getNum();
//      getNum();
// }