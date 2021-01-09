#include <stdio.h>

#define STR "#include <stdio.h>%1$c%1$c#define STR %2$c%3$s%2$c%1$c%1$c#define DATA(file) fprintf(file, STR, 10, 34, STR)%1$c%1$c#define MAIN int main() {/*comment*/ FILE *file; file = fopen(%2$cGrace_kid.c%2$c, %2$cw%2$c); DATA(file); fclose(file); return (0); }%1$c%1$c%1$cMAIN%1$c"

#define DATA(file) fprintf(file, STR, 10, 34, STR)

#define MAIN int main() {/*comment*/ FILE *file; file = fopen("Grace_kid.c", "w"); DATA(file); fclose(file); return (0); }


MAIN
