//javascript dom

function abc() {
  let a = document.getElementById("about-me-h1");
  a.innerHTML = "changed from js";
  console.log(a);
  let b= document.createElement('img');
  b.setAttribute("src","./webicon.png")
  b.style.width="50%";
  a.appendChild(b);
}
let i = 0;
let a = document.getElementById("counter");
function counter() {
  i++;

if (i > 15) {
    a.style.color="red";
}

if (i > 20) {
    a.style.color="green";
}

  a.innerText = i;
}