CC = gcc
CFLAGS = -Wall -Werror -Wextra

C_DIR=./functions/
H_DIR=./headers/

C_FILE= $(C_DIR)*.c
H_FILE= $(H_DIR)*.h

all: cat

cat:
	$(CC) $(CFLAGS) $(C_FILE) -o cat

clean:
	rm -rf *.out
	rm -f cat

clang: clang-format clang-check

clang-format:
	cp ../../materials/linters/.clang-format .
	clang-format -i $(H_FILE) $(C_FILE)
	rm -rf .clang-format

clang-check:
	cp ../../materials/linters/.clang-format .
	clang-format -n $(H_FILE) $(C_FILE)
	rm -rf .clang-format

check:
	cat check_s21-cat.txt > 1.sh
	sh 1.sh
	rm -f 1.sh
