test_pokemon:
	cc -o bin/test_pokemon test/test_pokemon.c
	./bin/test_pokemon

cleanup:
	rm -r bin/*
	rm a.out
