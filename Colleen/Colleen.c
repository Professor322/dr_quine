#include <stdio.h>
/*
comment outside main
*/
void another_function() {
char *s = "#include <stdio.h>%1$c/*%1$ccomment outside main%1$c*/%1$cvoid another_function() {%1$cchar *s = %2$c%3$s%2$c;%1$cprintf(s, 10, 34, s);%1$c}%1$cint main(void) {%1$c/*%1$ccomment inside main%1$c*/%1$canother_function();%1$creturn (0);%1$c}%1$c";
printf(s, 10, 34, s);
}
int main(void) {
/*
comment inside main
*/
another_function();
return (0);
}
