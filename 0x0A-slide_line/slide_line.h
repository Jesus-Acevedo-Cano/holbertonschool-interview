#ifndef SLIDE_LINE
#define SLIDE_LINE

#include <stdlib.h>
#include <stdio.h>


#define SLIDE_LEFT 1
#define SLIDE_RIGHT 2

int slide_line(int *line, size_t size, int direction);
void left(int *line, int size_aux);
void right(int *line, int size_aux);

#endif
