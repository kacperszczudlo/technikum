var _a;
import { todos } from "./data.js";
(_a = document.querySelector("#go")) === null || _a === void 0 ? void 0 : _a.addEventListener("click", (e) => {
    var _a;
    const divFirst = document.createElement("div");
    divFirst.innerHTML = getList(todos);
    (_a = document.querySelector("#app")) === null || _a === void 0 ? void 0 : _a.appendChild(divFirst);
});
function getList(data) {
    let html = "<table class='table'>";
    data.forEach((v, i) => {
        const style = !v.isChecked ? "style='color:red'" : "style='color:green'";
        html += `<tr ${style}><td>${v.id}</td><td>${v.name}</td></tr>`;
    });
    html += "</table>";
    return html;
}
