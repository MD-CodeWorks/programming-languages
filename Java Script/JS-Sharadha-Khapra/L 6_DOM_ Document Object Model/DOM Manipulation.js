console.log("Access Element By ID");
let heading = document.getElementById("heading");
console.log(heading);
console.dir(heading);

console.log("Access Element By Class");
let Class_Element = document.getElementsByClassName("C-Element");
console.log(Class_Element);
console.dir(Class_Element);

console.log("Access Element By Tag");
let By_tag = document.getElementsByTagName("p");
console.log(By_tag);
console.dir(By_tag);

// Query Selector is a good way than Id, Class, and Tag selector
console.log("Query Selector");
let firstEle = document.querySelector("p"); // 1st element 
console.log("Only Firt Element Access");
console.log(firstEle);

// if we want select all seelct than we use "querySelectorAll"
let allElement = document.querySelectorAll("h4");
console.log(allElement);


/* Propertities */
console.log("Propertities");
// tagName: returns tag for element nodes
console.log(heading.tagName);
console.log(Class_Element[0].tagName);
console.log(By_tag[0].tagName);
console.log(firstEle.tagName);
console.log(allElement[0].tagName);

// innerText: returns the text content of the element and all its children
console.log(firstEle.innerText);

// innerHTML: returns the plain text or HTML content in the element
let div = document.querySelector("div");
console.log(div.innerHTML); // Single element par direct access

