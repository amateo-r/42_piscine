FLAGS = -Wall -Werror -Wextra
#Para compilar todo con flags y generar ejecutable
ALL: *.c
	norminette -R CheckForbbidenSourceHeader *.c
	gcc $(FLAGS) *.c -o rush-02
	@echo "ESTE ES EL MEJOR PROGRAMA DEL MUNDO"
#Para borrar todos los .o y el ejecutable
fclean:
	rm -rf *.o rush-02
	@echo "BORRADO *.o Y EJECUTABlE rush-02"