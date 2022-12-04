import React from 'react';
import './App.css';
import Compo1 from '../src/MyComponents/Compo1';
import Compo2 from '../src/MyComponents/Compo2';
import Compo3 from '../src/MyComponents/Compo3';

type Props = {}
function App(props:Props) {
  return (
    <>
    <Compo1 napis='To jest property' />
    <Compo2 date={new Date()} price={34.90} />
    <Compo3 result={5+7} />
    </>
  );
}

export default App;
