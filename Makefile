CC = gcc
syntezator: syntezator.c
	$(CC) syntezator.c -o syntezator

clean:
	rm syntezator
