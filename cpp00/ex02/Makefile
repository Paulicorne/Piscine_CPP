ERASE       		=    \033[2K\r
GREY        		=    \033[30m
RED            		=    \033[31m
GREEN        		=    \033[32m
YELLOW        		=    \033[33m
BLUE        		=    \033[34m
PINK        		=    \033[35m
CYAN        		=    \033[36m
WHITE       		=    \033[37m
BOLD       			=    \033[1m
UNDER       		=    \033[4m
SUR					=    \033[7m
END					=    \033[0m

EXE					=	GbuAccounts

SRCS_PATH			=	.
SRCS_FILE			=	Account.cpp \
						tests.cpp

SRCS				=	$(addprefix $(SRCS_PATH)/, $(SRCS_FILE))
OBJ_PATH			=	.obj
INC_PATH			=	.
INC					=	$(INC_PATH)/Accounts.hpp

CPPFLAG				=	-std=c++98

COMP				=	c++ $(CPPFLAG) -Wall -Wextra -Werror

RM					=	rm -rf

all					:	$(EXE)

$(EXE)				:	$(SRCS)
						@$(COMP) $(SRCS) -o $(EXE)
						@printf "$(ERASE)$(GREEN)$(EXE)\t\t-->\tCREATE\n$(END)"

clean				:
						@$(RM) $(EXE)

fclean				:	clean

re					: 	fclean all

.PHONY: all clean fclean re
