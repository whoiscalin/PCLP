CC = gcc 
CFLAGS = -Wall -Werror -std=c11
LDLIBS = -lm

SRC = 21-11-2026-6.c 
OUT = 21-11-2026-6

.PHONY: all run clean

all: $(OUT)

$(OUT): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $(OUT) $(LDLIBS)

run: $(OUT)
		./$(OUT)

clean:
		rm -f $(OUT)
