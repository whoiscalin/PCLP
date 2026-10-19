CC = gcc 
CFLAGS = -Wall -Wextra -std=c11
LDLIBS = -lm

SRC = I.c
OUT = I

.PHONY: all run clean

all: $(OUT)

$(OUT): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $(OUT) $(LDLIBS)

run: $(OUT)
		./$(OUT)

clean:
		rm -f $(OUT)
