import{todos, User} from "./data.js";
document.querySelector("#go")?.addEventListener("click", (e) =>{
    const divFirst = document.createElement("div");
    divFirst.innerHTML = getList(todos);
    document.querySelector("#app")?.appendChild(divFirst);
});

function getList(data: User[]):string{
    let html = "<table class='table'>";
    data.forEach((v,i)=>{
        const style = !v.isChecked?"style='color:red'":"style='color:green'";
        html += `<tr ${style}><td>${v.id}</td><td>${v.name}</td></tr>`;
    })
    html += "</table>";
    return html;
}
 