#include <stdio.h>

int main(int argc, char *argv[]) {

int x, y;

char *dados;

if (argc == 4) {

x = *argv[1] - 0;
y = *argv[2] = 0;

}

printf("total de parametros: %i\n\n", argc);
printf("X = %i   Y = %i", x, y);



return 0;

}
