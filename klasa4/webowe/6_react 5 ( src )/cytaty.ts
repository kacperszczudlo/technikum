
export const cytaty = [
    "pierwszy cytat",
    "drugi cytat",
    "trzeci cytat",
    "czwarty cytat",
    "piąty cytat"
]

class Person{
    firstName: string;
    lastName: string;
    age: number;

    constructor(firstName:string, lastName:string, age:number){
        
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
    }
}
    export const persons = [
        new Person("Jason","Jerzy",22),
        new Person("Kacper","Szczudło",32),
        new Person("Jakub","Pikulski",25),
        new Person("Norbert","Gierczak",62),
    ]
