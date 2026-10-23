CC = gcc 
CFLAGS = -Wall -Wextra -std=c11
LDLIBS = -lm

SRC = puteri_recursiv.c 
OUT = puteri_recursiv

.PHONY: all run clean

all: $(OUT)

$(OUT): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $(OUT) $(LDLIBS)

run: $(OUT)
		./$(OUT)

clean:
		rm -f $(OUT)
