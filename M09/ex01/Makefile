#             ################                                                  
#           ####################                                                
#         ########################                                              
#        #############+########### #                                            
#        ######-..        .+########        < Makefile >                        
#        ####-..            ..+####                                             
#        ###-...             .-####                                             
#        ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
#         #-.++###.      -###+..##                                              
#         #....  ...   .-.  ....##       Created: 2024/03/31 20:12:22 by oezzaou
#      --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/31 20:12:48 by oezzaou
#       ---....... ..  ........... -                                            
#       -+#..     ..   .       .+-.                                             
#        .--.     .     .     ..+.                                              
#          -..    .+--.-.     ...                                               
#          +.... .-+#.#+.    ..-                                                
#           +...#####-++###-..-                                                 
#           #---..----+--.---+##                                                
#         ###-+--.... ....--+#####                                              
#   ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#====< Variables >==============================================================
NAME		:= RPN
CC			:= c++
CPPFLAGS	:= -std=c++98 -Wall -Wextra -Werror
OBJ_DIR		:= objs
SRC_DIR		:= src
INCLUDE		:= -Iinclude -Ilib/include
SRC			:= $(wildcard *.cpp) $(wildcard */*.cpp) $(wildcard */*/*.cpp)
OBJ			:= $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(notdir $(basename $(SRC)))))
RM			:= rm -rf

#====< Colors >=================================================================
RED			:= \033[0;31m
GREEN		:= \033[0;32m
BLUE		:= \033[0;34m
YELLOW		:= \033[0;33m
END			:= \033[0m

#====< Rules >==================================================================
all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $^ -o $@
	@test | awk '						\
	BEGIN{								\
		for (i=0; i < 50; i++){			\
			printf("$(GREEN)▇$(END)");	\
			system("sleep 0.01");		\
		}								\
		print("");						\
	}'									

$(OBJ_DIR)/%.o: lib/src/%.cpp | $(OBJ_DIR)
	@$(CC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@
	@printf "✅	Compiling... %5s\n" $<

$(OBJ_DIR)/%.o: src/%.cpp | $(OBJ_DIR)
	@$(CC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@
	@printf "✅	Compiling... %5s\n" $<

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@$(CC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@
	@printf "✅	Compiling... %5s\n" $<

$(OBJ_DIR):
	@mkdir -p $@

clean:
	@${RM} $(OBJ_DIR)
	@printf "✅	cleaning objs...\n"

fclean: clean
	@${RM} $(NAME)
	@printf "✅	cleaning program...\n"

re: fclean all

run:
	@./$(NAME) "2 3 +"

.SUFFIXES: .o .cpp .tpp
.PHONY: all clean fclean re run
#===============================================================================
