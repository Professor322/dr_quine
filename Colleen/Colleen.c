#include <stdio.h>
/*comment outside main*/
void another_function() {
char *s = "#include <stdio.h>%c/*comment outside main*/%cvoid another_function() {%cchar *s = %c%s%c;%cprintf(s, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10, 10);%c}%cint main(void) {%c/*comment inside main*/%canother_function();%creturn (0);%c}%c";
printf(s, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10, 10);
}
int main(void) {
/*comment inside main*/
another_function();
return (0);
}
