
function handleClick() {
    console.log("hello!");
}


function handleMouseOver() {
    console.log("bye!");
}

function handleDblClick() {
    console.log("you double clicked");
}
export default function Button() {
    return (
        <div>
            <button onClick={handleClick}>Click me!</button>
            <p onMouseOver={handleMouseOver}>this parah is event demo</p>
            <button onDoubleClick={handleDblClick}>double clicke m e!</button>
        </div>
    );
}
