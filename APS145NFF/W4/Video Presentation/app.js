const weatherType = document.getElementById("weather-type")
const accSpan = document.getElementById("acc-span")
const resultsText = document.getElementById("results-text")
const form = document.getElementById("form")


window.addEventListener("load", e => {
    handleAccSpanText(weatherType.value)
})

weatherType.addEventListener("change", e => {
    console.log(e.target.value);
    handleAccSpanText(e.target.value)
})

form.addEventListener("submit", e=> {
    e.preventDefault();
    handleResults()
})

function handleAccSpanText(value) {
    accSpan.innerText = value == "ice" ? "mm" : "cm"
}

function handleResults() {
    resultsText.innerText = Math.random() > 0.5 ? "1 (normal) Salt Truck" : "1 (heavy) Sand Truck\n1 (heavy) Sand Truck"
}