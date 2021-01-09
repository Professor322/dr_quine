#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define FILE_NAME "Sully_%d.c"
#define CMD "gcc -Wall -Wextra -Werror Sully_%d.c -o Sully_%d ; ./Sully_%d"
#define STR "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <unistd.h>%1$c%1$c#define FILE_NAME %2$cSully_%%d.c%2$c%1$c#define CMD %2$cgcc -Wall -Wextra -Werror Sully_%%d.c -o Sully_%%d ; ./Sully_%%d%2$c%1$c#define STR %2$c%4$s%2$c%1$c#define START_FILE %2$cSully_5.c%2$c%1$c%1$cint main(void) {%1$cint i = %3$d;%1$cif (i <= 0)%1$creturn 0;%1$cchar cmd[100], file_name[100];%1$c%1$cif (access(START_FILE, F_OK) == 0)%1$ci--;%1$c%1$csprintf(file_name, FILE_NAME, i);%1$csprintf(cmd, CMD, i, i, i);%1$cFILE* file = fopen(file_name, %2$cw%2$c);%1$cif (file == NULL)%1$creturn -1;%1$cfprintf(file, STR, 10, 34, i, STR);%1$cfclose(file);%1$c%1$csystem(cmd);%1$creturn (0);%1$c}%1$c"
#define START_FILE "Sully_5.c"

int main(void) {
int i = 5;
if (i <= 0)
return 0;
char cmd[100], file_name[100];

if (access(START_FILE, F_OK) == 0)
i--;

sprintf(file_name, FILE_NAME, i);
sprintf(cmd, CMD, i, i, i);
FILE* file = fopen(file_name, "w");
if (file == NULL)
return -1;
fprintf(file, STR, 10, 34, i, STR);
fclose(file);

system(cmd);
return (0);
}
