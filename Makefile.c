filter:
	gcc -ggdb3 -O0 -Wunused-argument -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow -lm -o filter filter.c helpers.c -lm
