FLAGS = -Wall -Wextra -Werror

all:
	for function in `find . -name "*.c" -not -name "*.test.c" | tr '\n' ' ' | sed -e 's/\.\///g' -e 's/\.c/\.out/g'`; do \
		$(MAKE) $$function; \
	done

exec_all:
	for function in `find . -name "*.out" | tr '\n' ' '`; do \
		$$function; \
	done

%.out: %.o %.test.o
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@

clean:
	rm -f *.o *.out
		
.PHONY: clean