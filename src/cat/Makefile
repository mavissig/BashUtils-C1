CC= gcc
CFLAGS= -Wall -Werror -Wextra

C_DIR=./functions/
H_DIR=./headers/

C_FILE= $(C_DIR)*.c
H_FILE= $(H_DIR)*.h

all: cat_plus

cat_plus:
	$(CC) $(CFLAGS) $(C_FILE) -o cat_plus

clean:
	rm -rf *.out
	rm -f cat_plus

clang: clang-format clang-check

clang-format:
	cp ../../materials/linters/.clang-format .
	clang-format -i $(H_FILE) $(C_FILE)
	rm -rf .clang-format

clang-check:
	cp ../../materials/linters/.clang-format .
	clang-format -n $(H_FILE) $(C_FILE)
	rm -rf .clang-format