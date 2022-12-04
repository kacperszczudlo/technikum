import React from "react";

type Props = {
    date:Date,
    price: number
}

const Compo2 = (d:Props) => {
    return (
        <>
            <h2>Compo2</h2>
            <h1> {d.date.toLocaleDateString()}</h1>
            <h3>My price = {d.price}</h3>
        </>
    )
}
export default Compo2;