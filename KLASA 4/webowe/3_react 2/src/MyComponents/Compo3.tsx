import React from "react";

type Props = {
    result: number
}

const Compo3 = (r:Props) => {
    return (
        <>
            <h2>Compo3</h2>
            <h6> Wynik działania: {r.result}</h6>
        </>
    )
}
export default Compo3;