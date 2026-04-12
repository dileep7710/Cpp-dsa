import { useState } from "react";

export default function Counter() {
    const [count, setCount] = useState(0); // initialization
    console.log("Component is rendered!");
    console.log(`count = ${count}`);

    const incCount = () => {
        setCount(count + 1);
    };

    return (
        <div>
            <h3>Count = {count}</h3>
            <button onClick={incCount}>Increase Count</button>
        </div>
    );
}
