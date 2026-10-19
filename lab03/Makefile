CC = gcc 
CFLAGS = -Wall -Wextra -std=c11
LDLIBS = -lm

SRC = 19-10-2026-6.c utils.c
OUT = 19-10-2026-6

.PHONY: all run clean

all: $(OUT)

$(OUT): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $(OUT) $(LDLIBS)

run: $(OUT)
		./$(OUT)

clean:
		rm -f $(OUT)
