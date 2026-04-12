import { useState } from "react";

export default function LikeButton() {
    const [isLiked, setIsLiked] = useState(false);

    const toggleLike = () => {
        setIsLiked(!isLiked);
    };

    return (
        <div>
            <button onClick={toggleLike} style={{ background: "none", border: "none", cursor: "pointer", fontSize: "1.5rem" }}>
                {isLiked ? "❤️" : "🤍"} {isLiked ? "Liked" : "Like"}
            </button>
        </div>
    );
}
