import React from 'react';
import './App.css';
import Compo1 from './MyComponents/Compo1';
import Compo2 from './MyComponents/Compo2';
import Compo3 from './MyComponents/Compo3';
import Compo4 from './MyComponents/Compo4';

type Props = {}
function App(props:Props) {
  return (
    <>
    <div id="border"> 
    <h2>Wizytówka</h2>
    <Compo4 napis4={''}/>
    <Compo1 napis1={'Kacper Szczudło'} />
    <Compo2 napis2={'Klasa IV TIP/G'} />
    <Compo3 napis3={'ZSJP II'} />
    
    </div>  
    </>
  );
}

export default App;