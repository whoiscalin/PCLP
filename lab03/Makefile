CC = gcc 
CFLAGS = -Wall -Wextra -std=c11
LDLIBS = -lm

SRC = 23-10-2026-3.c 
OUT = 23-10-2026-3

.PHONY: all run clean

all: $(OUT)

$(OUT): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $(OUT) $(LDLIBS)

run: $(OUT)
		./$(OUT)

clean:
		rm -f $(OUT)
