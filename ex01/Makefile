NAME		=	ex01

SRCS		=	\
				main.cpp \
				Span.cpp

_OBJS		=	${SRCS:.cpp=.o}
OBJS		=	$(addprefix build/, $(_OBJS))

CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98
INCLUDE		=	-I includes/
LIBS		=


all		:	$(NAME)

build/%.o	:	srcs/%.cpp
	@if [ ! -d $(dir $@) ]; then\
		mkdir -p $(dir $@);\
	fi
	$(CC) ${CFLAGS} ${INCLUDE} -c $< -o $@

$(NAME)	:	$(OBJS) $(LIBS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

$(LIBS)	:	FORCE
	@for lib in $(LIBS); do\
		echo make -C $$(dirname $$lib);\
		make -C $$(dirname $$lib);\
	done

clean	:	
	rm -Rf build/

cleanlibs	:
	@for lib in $(LIBS); do\
		echo make -C $$(dirname $$lib) clean;\
		make -C $$(dirname $$lib) clean;\
	done

cleanall	:	clean cleanlibs


fclean	:	clean
	rm -f ${NAME}

fcleanlibs	:
	@for lib in $(LIBS); do\
		echo make -C $$(dirname $$lib) fclean;\
		make -C $$(dirname $$lib) fclean;\
	done

fcleanall	:	fclean fcleanlibs


re		:	fclean ${NAME}

relibs	:
	@for lib in $(LIBS); do\
		echo make -C $$(dirname $$lib) re;\
		make -C $$(dirname $$lib) re;\
	done

reall	: relibs re


.PHONY	:	all clean cleanlibs cleanall fclean fcleanlibs fcleanall re relibs reall FORCE
