 const taskInputElement = document.getElementById("taskInput");
const addBtnElement = document.getElementById("addBtn");
const taskList = document.getElementById("taskList");


// Tasks ka data store karne ke liye array
let tasks = [];


// Ek task ko screen par display karna
function displayTask(task) {

    // Create li
    const li = document.createElement("li");


    // Create span
    const span = document.createElement("span");
    span.textContent = task;


    // Complete / Incomplete
    span.addEventListener("click", function() {

        span.classList.toggle("completed");

    });


    // Create delete button
    const deleteBtn = document.createElement("button");
    deleteBtn.textContent = "🗑️";


    // Delete task from screen
    deleteBtn.addEventListener("click", function() {

        li.remove();

    });


    // Add span and button inside li
    li.appendChild(span);
    li.appendChild(deleteBtn);


    // Add li to task list
    taskList.appendChild(li);
}

const savedTasks = localStorage.getItem("tasks");

const parsedTask = JSON.parse(savedTasks);

// New task add karna
function addTask() {

    const task = taskInputElement.value;

    // Empty task check
    if (task === "") {
        return;
    }


    // Array mein task add
    tasks.push(task);

    localStorage.setItem("tasks", JSON.stringify(tasks));

    // Number of tasks check
    console.log(tasks.length);

    // Task ko screen par display
    displayTask(task);

    // Input clear
    taskInputElement.value = "";
}


// Add button
addBtnElement.addEventListener("click", addTask);


// Enter key
taskInputElement.addEventListener("keydown", function(event) {

    if (event.key === "Enter") {
        addTask();
    }

});


// Array ke tasks ko display karna
tasks.forEach(function(task) {

    displayTask(task);

});