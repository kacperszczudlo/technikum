import {cytaty, persons} from "./cytaty";
function App(){
    return(
        <>
        <h1>Cytaty</h1>
        <ul>
            {cytaty.map((cytat,index)=>(<li key={index}>{cytat}</li>))}
        </ul>
        <h1>Persons</h1>
        <ul>
        {persons.map((person,index)=>(<li key={index}>Imie: {person.firstName}<br /> Nazwisko: {person.lastName}<br /> Wiek: {person.age}</li>))}
        </ul>
        </>
    )
}
export default App;