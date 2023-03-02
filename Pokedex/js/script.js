const pokemonName = document.querySelector(".pokemon__name");
const pokemonNumber = document.querySelector(".pokemon__number");
const pokemonImage = document.querySelector(".pokemon__image");

const form = document.querySelector(".form");
const input = document.querySelector(".input__search");
const buttonPrev = document.querySelector(".btn-prev");
const buttonNext = document.querySelector(".btn-next");

let searchPokemon = 1;

const fetchPokemon = async (pokemon) => {
  const APIResponse = await fetch(
    `https://pokeapi.co/api/v2/pokemon/${pokemon}`
  );
  if (APIResponse.status === 200) {
    const data = await APIResponse.json();
    return data;
  }
};

const renderPokemon = async (pokemon) => {
  pokemonName.innerHTML = "Loading...";
  pokemonNumber.innerHTML = "";

  const data = await fetchPokemon(pokemon);

  if (data) {
    pokemonImage.style.display = "block";
    pokemonName.innerHTML = data.name;
    pokemonNumber.innerHTML = data.id;
    searchPokemon = data.id;
    if (searchPokemon >= 650 && searchPokemon <= 1008) {
      pokemonImage.src =
        data["sprites"]["versions"]["generation-viii"]["icons"][
          "front_default"
        ];
      pokemonImage.style.transform = "translate(-56%, 15%)";
      pokemonImage.style.height = "32%";
    }
    if (searchPokemon < 650 && searchPokemon > 0) {
      pokemonImage.src =
        data["sprites"]["versions"]["generation-v"]["black-white"]["animated"][
          "front_default"
        ];
      pokemonImage.style.transform = "translate(-63%, 18%)";
      pokemonImage.style.height = "18%";
    }
    input.value = "";
  } else {
    console.log("Invalid Pokemon Number");
    pokemonImage.style.display = "none";
    pokemonName.innerHTML = "Pokemon not found";
    pokemonNumber.innerHTML = "";
  }
};

form.addEventListener("submit", (e) => {
  e.preventDefault();
  renderPokemon(input.value.toLowerCase());
});

buttonPrev.addEventListener("click", () => {
  if (searchPokemon > 1) {
    searchPokemon -= 1;
    renderPokemon(searchPokemon);
  }
});
buttonNext.addEventListener("click", () => {
  searchPokemon += 1;
  renderPokemon(searchPokemon);
});

renderPokemon(searchPokemon);
