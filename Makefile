all: geraos principal

principal: principal.o biblioteca.o
gcc principal.o biblioteca.o -o principal

geraos: principal.c biblioteca.c
gcc -c principal.c biblioteca.c

clean:
rm -rf *.o principal
