/*
** corewar_vm.h for corewar vm header in /home/mongep/rendu/CPE/CW/VM
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Mon Mar 16 11:34:01 2015 Monge Pierre
** Last update Thu Mar 19 12:22:33 2015 Monge Pierre
*/

#ifndef				__COREWAR_VM_H_
# define			__COREWAR_VM_H_5A5A5A

#include			<stdlib.h>
#include			<sys/stat.h>
#include			<fcntl.h>

#include			"corewar_vm_lib.h"

/*
** Necessary define for vm / champs
*/

# define			MEM_SIZE		(6*1024)
# define			IDX_MOD			512
# define			MAX_ARGS_NUMBER		4

# define			REG_NUMBER		16

# define			T_REG			1
# define			T_IND			4
# define			T_DIR			2
# define			T_LAB			8

# define			REG_SIZE		4
# define			IND_SIZE		2
# define			DIR_SIZE		4

# define			CYCLE_TO_DIE		1536
# define			CYCLE_DELTA		5
# define			NBR_LIVE		40

# define			PROG_NAME_LENGHT	128
# define			COMMENT_LENGHT		2048
# define			NAME_LENGHT		128

# define			NBR_INSTRUCTION		16

# define			MAGIC_NUMBER		0xea83f3

/*
** shortcut
*/

# define	IS_COR(x)	(my_strlen(args[x]) > 4 &&		 \
				args[x][my_strlen(args[x]) - 1] == 'r' &&\
				args[x][my_strlen(args[x]) - 2] == 'o' &&\
				args[x][my_strlen(args[x]) - 3] == 'c' &&\
				args[x][my_strlen(args[x]) - 4] == '.')

# define	IS_OPT(x)	(my_strlen(args[x]) > 2 &&		 \
				 args[x][0] == '-')

# define	RG(x)		champ->reg[x]

/*
** struct of a Champ
** J'ai longtemps réflechi et je pense que les registres pourraient être mis en
** char * avec 16 registres * 4 octets chacun soit 16 * 4 char + 1 pour un /0 de
** fin, il y a possibilité aussi de faire un char ** meme si je trouve ça moins
** pratique à use et plus long à initialisé !
*/

typedef		struct		s_champ
{
  char				name[NAME_LENGHT + 1];

  char				*data;

  int				reg[REG_NUMBER];
  int				carry;
  int				delay;

  int				live_before_die;
  struct	s_champ		*next;
}				t_champ;

/*
** general struct of vm typedef t_vm refer to s_vm
*/

typedef		struct s_vm	t_vm;

typedef				int (*vm_instr)(t_vm *, t_champ *);

/*
** Struct params
*/

typedef				enum
  {
    TYPE_IND,
    TYPE_DIR,
    TYPE_REG,
    NONE
  }				vm_type;

typedef		struct		s_params
{
  vm_type	      		type_1;
  vm_type     			type_2;
  vm_type			type_3;

  int				param_1;
  int				param_2;
  int				param_3;
}				t_params;

struct				s_vm
{
  vm_instr			func[NBR_INSTRUCTION + 1];
  char				arene[MEM_SIZE + 1];

  int				cycle;
  int				live_done;

  int				nbr_champ;

  t_params			param;
  struct	s_champ		*champ_first;
};

/*
** Vm instructions (parametres surement à changer)
*/

int				vm_instruction_live(t_vm *, t_champ *);
int				vm_instruction_ld(t_vm *, t_champ *);
int				vm_instruction_st(t_vm *, t_champ *);
int				vm_instruction_add(t_vm *, t_champ *);
int				vm_instruction_sub(t_vm *, t_champ *);
int				vm_instruction_and(t_vm *, t_champ *);
int				vm_instruction_or(t_vm *, t_champ *);
int				vm_instruction_xor(t_vm *, t_champ *);
int				vm_instruction_zjmp(t_vm *, t_champ *);
int				vm_instruction_ldi(t_vm *, t_champ *);
int				vm_instruction_sti(t_vm *, t_champ *);
int				vm_instruction_fork(t_vm *, t_champ *);
int				vm_instruction_lld(t_vm *, t_champ *);
int				vm_instruction_lldi(t_vm *, t_champ *);
int				vm_instruction_lfork(t_vm *, t_champ *);
int				vm_instruction_aff(t_vm *, t_champ *);

/*
** End instructions
*/

/*
** ACTION VM OR REG
*/

t_vm				*vm_action(t_vm *);
void				vm_reg_set(int, int, t_champ *);

/*
** Convert func
*/

char				*vm_convert(char *, char *, char *);

/*
** Static struct (Is like a global struct)
*/

t_vm				*vm_data_getter();

/*
** Func for parsing arguments and init vm
*/

t_vm				*vm_data_init(struct s_vm *, char **);
int				vm_create_champ(t_vm *, char *);

/*
** FUNC OF ERROR
*/

int				vm_error(char *);

#endif				/* !__COREWAR_VM_H_ */
