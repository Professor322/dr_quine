#include <stdio.h>

#define STR "#include <stdio.h>%c%c#define STR %c%s%c%c%c#define DATA(file) fprintf(file, STR, 10, 10, 34, STR, 34, 10, 10, 10, 10, 34, 34, 34, 34, 10, 10, 10, 10)%c%c#define MAIN int main() {/*comment*/ FILE *file; file = fopen(%cGrace_kid.c%c, %cw%c); DATA(file); fclose(file); return (0); }%c%c%cMAIN%c"

#define DATA(file) fprintf(file, STR, 10, 10, 34, STR, 34, 10, 10, 10, 10, 34, 34, 34, 34, 10, 10, 10, 10)

#define MAIN int main() {/*comment*/ FILE *file; file = fopen("Grace_kid.c", "w"); DATA(file); fclose(file); return (0); }


MAIN
