const pokemonName = document.querySelector(".pokemon__name");
const pokemonNumber = document.querySelector(".pokemon__number");
const pokemonImage = document.querySelector(".pokemon__image");

const form = document.querySelector(".form");
const input = document.querySelector(".input__search");
const buttonPrev = document.querySelector("btn-ptn-prev");
const buttonNext = document.querySelector("btn-ptn-next");

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
    pokemonName.innerHTML = data.name;
    pokemonNumber.innerHTML = data.id;
    if (input.value > 1008 || input.value <= 0) {
      console.log("Invalid Pokemon Number");
      pokemonName.innerHTML = "Pokemon not found";
      pokemonNumber.innerHTML = "";
    }
    if (input.value >= 650 && input.value <= 1008) {
      pokemonImage.src =
        data["sprites"]["versions"]["generation-viii"]["icons"][
          "front_default"
        ];
    }
    if (input.value < 650 && input.value > 0) {
      pokemonImage.src =
        data["sprites"]["versions"]["generation-v"]["black-white"]["animated"][
          "front_default"
        ];
    }
    input.value = "";
    searchPokemon = data.id;
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
