const btn = document.querySelector("#btn");
 

function calculateAge() {
    const birthDateInput = document.getElementById("date");
    const resultElement = document.getElementById("result");
  
    const birthDate = new Date(birthDateInput.value);
    const today = new Date();
  
    const ageInMilliseconds = today - birthDate;
    const ageInYears = ageInMilliseconds / (365 * 24 * 60 * 60 * 1000);
  
    resultElement.textContent = `You age is ${Math.floor(ageInYears)}.`;
  }

  btn.addEventListener("click", calculateAge);