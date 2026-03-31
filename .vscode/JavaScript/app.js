// let btn = document.querySelector("button");
// btn.addEventListener("click", function (){
//     let h3 = document.querySelector("h3");
//     let randomColor = getRandomColor();
//     h3.innerText = randomColor;

//     let div = document.querySelector("div");
//     div.style.backgroundColor = randomColor;

//     console.log("color updated");
// });

// function getRandomColor() {
//     let red = Math.floor(Math.random() * 255);
//     let green = Math.floor(Math.random() * 255);
//     let blue = Math.floor(Math.random() * 255);

//     let color = `rgb(${red}, ${green}, ${blue})`;
//     return color;
// }

// let p = document.querySelector("p");

// p.addEventListener("click" , function () {
//     console.log("parah was clicked");
// });

// let box = document.querySelector(".box");
// box.addEventListener("mouseenter", function () {
//     console.log("mouse inside div");
// })

// let inp = document.querySelector("input");

// btn.addEventListener("click", function(event) {
//     console.log(event);
//     console.log("button clicked"); 
// });

// btn.addEventListener("dblclick", function(event) {
//     console.log(event);
//     console.log("button clicked"); 
// });

// inp.addEventListener("keydown", function(event) {
//     console.log("code = ",event.code); // ArrowUp, ArrowDown, ArrowLeft, ArrowRight
//     if (event.code == "ArrowUp"){
//         console.log("character moves forward");
//     } else if(event.code == "ArrowDown") {
//         console.log("character moves backward");
//     } else if(event.code == "Arrowleft"){
//         console.log("character moves left");
//     } else if(event.code == "Arrowright"){
//         console.log("character moves right");
//     }
    
// });



// inp.addEventListener("keydown", function(event) {
//     console.log("code = " , event.code); // ArrowUp(U), ArrowDown(D), ArrowLeft(l), ArrowRight(R).

//     if (event.code == "KeyU"){
//         console.log("Character moves up");
//     }
//      else if (event.code == "KeyD"){
//         console.log("Character moves Down");

//      } 

//      else if (event.code == "KeyL"){
//         console.log("character moves Left");
//      }

//      else if (event.code == "KeyR"){
//         console.log("character moves Right");
//      }


// });

// let form = document.querySelector("form");

// form.addEventListener("submit", function (event) {
//     event.preventDefault();
//     console.dir(form);

//     let user =  this.elements[0]; // form.elements[0]
//     let pass = this.elements[1];
   
//     console.log(user.value);
//     console.log(pass.value);

//     alert(`Hi ${user.value}, your password is set to ${pass.value}`);
//});

// let user = document.querySelector('#user');

// user.addEventListener("change", function() {
//     console.log("input event");
//     console.log("final value =", this.value);
// } );

// user.addEventListener("input", function() {
//     console.log("input event");
//     console.log("final value =", this.value);
// } );


// let inp = document.querySelector("#text");

// let p = document.querySelector('p');

// inp.addEventListener("input", function () {
//     console.log(inp.value);
//     p.innerText = inp.value;
// });

// let div = document.querySelector("div");
// let ul = document.querySelector("ul");
// let lis = document.querySelectorAll("li");

// div.addEventListener("click", function() {
//     console.log("div was clicked");
// });

// ul.addEventListener("click", function(event) {
//     event.stopPropagation();
//     console.log("ul was clicked");
// });

// for (li of lis ) {
//     li.addEventListener("click", function (event) {
//         event.stopPropagation();
//         console.log("li was clicked");
//     });
// }
// _______

//  let btn = document.querySelector("button");
//  let ul = document.querySelector("ul");
//  let inp = document.querySelector("input");

//  btn.addEventListener("click", function() {
//     let item = document.createElement("li");
//     item.innerText = inp.value;

//     let delBtn = document.createElement("button");
//     delBtn.innerText = "delete";
//     delBtn.classList.add("delete");

//     item.appendChild(delBtn);
//     ul.appendChild(item);
//     inp.value =  " ";
//  });

//  ul.addEventListener("click", function (event) {
//    if (event.target.nodeName == "BUTTON"){
//       let listItem = event.target.parentElement;
//       listItem.remove();
//       console.log("delete");
//    }
  
//  });
 // _______


//  let delBtns = document.querySelectorAll(".delete");
//  for (delBtn of delBtns) {
//     delBtn.addEventListener("click", function () {
//         let par = this.parentElement;
//         console.log(par);
//         par.remove();
//     });
//  }



let gameSeq = [];
let userSeq = [];

let btns = ["yellow", "red", "purple", "green"];

let started = false;
let level = 0;

let h2 = document.querySelector("h2");

document.addEventListener("keypress", function () {
   if (started == false) {
      console.log("game is started");
      started = true; 
      levelUp();

   }
});

function gameFlash(btn) {
   btn.classList.add("flash");
   setTimeout(function () {
      btn.classList.remove("flash");
   }, 500);

}

function userFlash(btn) {
   btn.classList.add("userflash");
   setTimeout(function () {
      btn.classList.remove("userflash");
   }, 500);

}

function levelUp() {
   userSeq = [];
   level++;
   h2.innerText = `Level ${level}`;

   let randIdx = Math.floor(Math.random() * btns.length);
   let randColor = btns[randIdx];
   let randbtn = document.querySelector(`.${randColor}`);
   
   gameSeq.push(randColor);
   console.log(gameSeq);
   gameFlash(randbtn);
}

function checkAns(idx) {
   if (userSeq[idx] == gameSeq[idx]){
      if (userSeq.length == gameSeq.length){
         setTimeout(levelUp, 1000);
      }
   }
   
    else {
      h2.innerHTML = `Game over!  Your score was <b>${level}</br> <br> Press any key to start.`;
      document.querySelector("body").style.backgroundColor = "red";
      setTimeout(function(){
          document.querySelector("body").style.backgroundColor = "white";
      },150);
      reset();
   }
}

function btnPress() { 
   let btn = this;
   userFlash(btn);

   userColor = btn.getAttribute("id");
   userSeq.push(userColor);

   checkAns(userSeq.length-1);

}

let allBtns = document.querySelectorAll(".btn");
for (btn of allBtns) {
   btn.addEventListener("click", btnPress);
}

function reset() {
   started = false;
   gameSeq = [];
   userSeq = [];
   level = 0;
}
 