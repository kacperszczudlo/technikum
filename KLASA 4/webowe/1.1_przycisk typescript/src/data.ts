export interface User {
    id:number;
    name:string;
    isChecked:boolean;
}
export const todos:User[] = [
    {id:1,name:"jeden",isChecked:true}, 
    {id:2,name:"dwa",isChecked:false}, 
    {id:3,name:"trzy",isChecked:true}, 
    {id:4,name:"cztery",isChecked:true}, 
];