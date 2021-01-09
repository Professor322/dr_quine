NAME = Colleen Grace
SRC = Colleen.s Grace.s
OBJ = $(SRC:%.s=%.o)

all: $(NAME)
Colleen: Colleen.o
	gcc -Wall -Wextra -Werror -o Colleen Colleen.o
Grace: Grace.o
	gcc -Wall -Wextra -Werror -o Grace Grace.o
Sully: Sully.o
	gcc -Wall -Wextra -Werror -o  Sully Sully.o

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
	rm -f Grace_kid.s
re: fclean all
