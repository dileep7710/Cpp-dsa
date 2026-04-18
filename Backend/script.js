//  let n = 5;

//  for (let i = 0; i<n; i++){
//     console.log("hello, ", i);
//  }

//  console.log("bye!"); 

// console.log(process.argv);


// let args = process.argv;

// for(let i = 2; i<args.length; i++){  
//    console.log("hello to ", args[i]);
// }


// const info = require("./Fruits");

// console.log(info[0]. name);

// const figlet = require('figlet');

// figlet('Hello Dileep!', (err, data) => {
//   if (err) {
//     console.log('Error:', err);
//     return;
//   }
//   console.log(data);
// });

import { sum, PI} from "./math.js";
import { generate } from "random-words";


console.log(generate());