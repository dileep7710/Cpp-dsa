const express = require("express");
const app = express();
console.dir(app);


let port = 8080;

app.listen(port, () => {
    console.log('app is listening on port ${port}');
} );

app.use((req, res) => {
    console.log("request received");
    let  code = "<h1>Fruits</h> <ul><li>apple</li><li>orange</li></ul>"; 
    res.send(code);
});