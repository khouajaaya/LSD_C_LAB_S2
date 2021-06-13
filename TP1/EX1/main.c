SRC = main.c iterative_fibo.c recursive_fibo.c
PRO_NAME= prog

all:
	gcc $(SRC) -o $(PRO_NAME)

clean:
	rm $(PRO_NAME)
