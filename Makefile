test_pokemon:
	cc -o bin/test test/test_pokemon.c
	./bin/test

cleanup:
	rm -r build/*
	rm a.out
