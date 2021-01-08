#include <stdio.h>
#include <string.h>

#define STR "#include <stdio.h>%c#include <string.h>%c%c#define STR %c%s%c%c%c#define OUTPUT(file, i) fprintf(file, STR, 10, 10, 10, 34, STR, 34, 10, 10, 10, 10, 34, 34, 10, 10, 34, 34, 34, 34, 10, 10, i, 10)%c%c#define CYCLE_BODY { char buff[9]; create_filename(i, (char*)&buff); FILE *file = fopen(buff, %cw%c); OUTPUT(file, i); fclose(file); --i; }%c%cvoid create_filename(int num, char* filename) { char buff[1] = {num + '0'}; strcpy(filename, %cSully_%c); strcat(filename, buff); strcat(filename, %c.c%c); }%c%cint main() { int i = %d; while (i >= 0) CYCLE_BODY return 0; }%c"

#define OUTPUT(file, i) fprintf(file, STR, 10, 10, 10, 34, STR, 34, 10, 10, 10, 10, 34, 34, 10, 10, 34, 34, 34, 34, 10, 10, i, 10)

#define CYCLE_BODY { char buff[9]; create_filename(i, (char*)&buff); FILE *file = fopen(buff, "w"); OUTPUT(file, i); fclose(file); --i; }

void create_filename(int num, char* filename) { char buff[1] = {num + '0'}; strcpy(filename, "Sully_"); strcat(filename, buff); strcat(filename, ".c"); }

int main() { int i = 5; while (i >= 0) CYCLE_BODY return 0; }
