import React from "react";
import Sun from "../Images/sloneczko.gif";
type Props = {
    napis : string
}
const Compo1 = (info:Props) => {
    return (
        <>
        <h2>Compo1</h2>
          {info.napis}
            <div>
                Lorem, ipsum dolor sit amet consectetur adipisicing elit. Id, fugit ut ipsa blanditiis eum animi eius voluptates eveniet saepe mollitia pariatur suscipit maiores veritatis vel. Voluptatibus soluta molestias officiis dolorum?
            </div>

            <a href="http://onet.pl">
                <img src={Sun} alt="sloneczko" />
            </a>
        </>
    )
}
export default Compo1;