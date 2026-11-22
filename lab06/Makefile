CC = gcc 
CFLAGS = -Wall -Werror -std=c11
LDLIBS = -lm

SRC = 22-11-2026-5.c 
OUT = 22-11-2026-5

.PHONY: all run clean

all: $(OUT)

$(OUT): $(SRC)
		$(CC) -g -O0 $(CFLAGS) $(SRC) -o $(OUT) $(LDLIBS)

run: $(OUT)
		./$(OUT)

clean:
		rm -f $(OUT)
