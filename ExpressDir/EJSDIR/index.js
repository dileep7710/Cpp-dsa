const express = require("express");
const app = express();
const path = require("path");

const port = 8080;
app.use(express.static(path.join(__dirname,"public/js")));
app.use(express.static(path.join(__dirname,"public/css")));
app.set("view engine", "ejs");
app.set("views", path.join(__dirname, "/views"));

app.get("/", (req, res) => {
    res.render("home.ejs");
});

app.get("/ig/:username", (req, res) => {
    let { username } = req.params;
    const instaData = require("./data.json");
    const data = instaData[username];
    if(data) {
        res.render("instagram.ejs", {data});
    }
    else{
        res.render("error.ejs");
    }

    // if (!data) {
    //     return res.send(`<h2>User "${username}" nahi mila!</h2><a href="/">Home</a>`);
    // }

    // res.render("instagram.ejs", { data }); // ✅ data as object pass karo
});

app.get("/hello", (req, res) => {
    res.send("hello");
});

app.get("/rolldice", (req, res) => {
    let diceVal = Math.floor(Math.random() * 6) + 1;
    res.render("rolldice.ejs", { diceVal });
});

app.use((req, res) => {
    res.status(404).send("<h2>404 - Page nahi mili!</h2>");
});

app.listen(port, () => {
    console.log(`listening on port ${port}`);
});
