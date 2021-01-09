NAME = Colleen Grace Sully
SRC = Colleen.c Grace.c Sully.c
OBJ = $(SRC:%.c=%.o)

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
	rm -f Grace_kid.c
	rm -f Sully_0
	rm -f Sully_1
	rm -f Sully_2
	rm -f Sully_3
	rm -f Sully_4
	rm -f Sully_5
re: fclean all
