#ifndef MAIN_H
#define MAIN_H
char *create_array(unsigned int size, char c);
char *_strdup(char *);
char *str_concat(char *, char *);
int **alloc_grid(int width, int height);
int _putchar(char c);
char *argstostr(int ac, char **av);
void free_grid(int **, int);
#endif
