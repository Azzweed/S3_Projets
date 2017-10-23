SRC=launch.c
BIN=launch

$(BIN): $(SRC)
	gcc -Wall -g -std=c99 $(SRC) objet.c carte.c `sdl-config --cflags --libs` -o $(BIN) -lm

clean:
	rm -f $(BIN)
