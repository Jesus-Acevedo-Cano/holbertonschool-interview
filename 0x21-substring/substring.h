#ifndef SUBSTRING_H
#define SUBSTRING_H

/**-LIBRARIES--------------------------------------------------------------*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**-PROTOTYPES-------------------------------------------------------------*/
int *find_substring(char const *s, char const **words, int nb_words, int *n);
#endif /* _SUBSTRING_H_ */
