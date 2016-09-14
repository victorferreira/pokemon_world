test_pokemon:
	cc -o bin/test_pokemon test/test_pokemon.c
	./bin/test_pokemon

test_pokedex:
	cc -o bin/test_pokedex test/test_pokedex.c
	./bin/test_pokedex

cleanup:
	rm -r bin/*
