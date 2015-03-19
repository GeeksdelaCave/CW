/*
** asm.h for header asm in /home/lafon_l/rendu/CW/ASM
**
** Made by leo lzfon
** Login   <lafon_l@epitech.net>
**
** Started on  Thu Mar 19 11:38:53 2015 leo lzfon
** Last update Thu Mar 19 19:29:06 2015 leo lzfon
*/

#ifndef ASM_H_
# define ASM_H_

# include <unistd.h>
# include <stdlib.h>

/*
** error defines
*/

# define DOT_S "File extension must be '.s'\n"
# define ARG "Missing argument(s)\n"
# define OPEN "Open has fail\n"
# define CLOSE "Close has fail\n"

/*
** generic functions
*/

int		my_strlen(char *);

#endif /*  !ASM_H_ */
