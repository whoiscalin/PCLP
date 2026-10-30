CC = gcc 
CFLAGS = -Wall -Wextra -std=c11
LDLIBS = -lm

SRC = 30-10-2026-6.c 
OUT = 30-10-2026-6

.PHONY: all run clean

all: $(OUT)

$(OUT): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $(OUT) $(LDLIBS)

run: $(OUT)
		./$(OUT)

clean:
		rm -f $(OUT)
