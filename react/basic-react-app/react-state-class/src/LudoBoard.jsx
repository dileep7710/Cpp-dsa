import { useState } from "react"

export default function LudoBoard() {
    let [Moves, setMoves] = useState({blue: 0, red: 0, yellow: 0, green: 0});
    let [count, setCount] = useState(0);
    let [arr, SetArr] = useState(["no moves"]);

    let updateBlue = () =>{
        // setMoves((prevMoves) => {
        //    return { ...prevMoves, blue: prevMoves.blue +1}
        // });

       
        SetArr((prevArr) => {return [...prevArr," blue moves"]});
        console.log(arr);
    };

    let updatered = () =>{
        setMoves((prevMoves) => {
           return { ...prevMoves, red: prevMoves.red +1}
        });
    };


    return (
        <div>
            <p>Game Begins!</p>
            <p>{arr}</p>
            <div className="board">
                <p>Blue Moves = {Moves.blue}</p>
                <button style={{ backgroundColor: "blue"}} onClick={updateBlue}>+1</button>
                <p>Yellow moves = {Moves.red}</p>
                <button style={{ backgroundColor: "red"}}  onClick={updatered}>+1</button>
                <p>Green moves ={Moves.yellow} </p>
                <button style={{ backgroundColor: "yellow", color: "black"}}>+1</button>
                <p>Red moves = {Moves.green}</p>
                <button style={{ backgroundColor: "green"}}>+1</button>
            </div>
        </div>
    )
}