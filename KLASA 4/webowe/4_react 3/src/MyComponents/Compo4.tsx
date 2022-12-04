import React from "react";
import Sun from "../Images/student.jpg";
type Props = {
    napis4 : string
}
const Compo4 = (info:Props) => {
    return (
        <>
        <div>{info.napis4}</div> 
        <img src={Sun} alt="sloneczko" id="img" />         
        </>
    )
}
export default Compo4;