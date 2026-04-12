function handleFormSubmit(event) {
    event.preventDefault();
    console.log("form was submitted");
}

export default function form() {
    return ( 
    <div style={{ display: "flex", justifyContent: "center", paddingTop: "10px" }}>
        <form>
            <input placeholder="write something"/>
            <button onClick={handleFormSubmit}>Submit</button>
        </form>
    </div>
    );
}