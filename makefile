# make file=file.c compile
all: compile clean

compile:
	@ echo loading...
	@ gcc $(file) -o program
	@ ./program
	

run:
	@ echo loading...
	@ gcc $(file)
	@ ./a
	@ echo finished.

clean:
	@ echo finished.

test:
	@ echo FUNCIONOU