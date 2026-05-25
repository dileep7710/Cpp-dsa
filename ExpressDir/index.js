const express = require("express");
const app = express();
// console.dir(app);


let port = 8080;

app.listen(port, () => {
    console.log(`app is listening on port ${port}`);
} );

// app.get("/", (req,res) =>{
//     res.send("hello, i am root");
// });

// app.get("/", (req, res) => {
//     res.send("hello, i am root");
// });

app.get("/:username/:id", (req, res) => {
    let {username, id} = req.params;
    let htmlstr = `welcome to the page of @${username}!` 
    res.send(htmlstr);
});

app.get("/search", (req, res) =>{
   let {q} = req.query;
   if(!q) {
    res.send("nothing searched");
   }
    res.send(`search results for query: ${q}`);
});