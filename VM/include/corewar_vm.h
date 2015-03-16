/*
** corewar_vm.h for corewar vm header in /home/mongep/rendu/CPE/CW/VM
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Mon Mar 16 11:34:01 2015 Monge Pierre
** Last update Mon Mar 16 16:38:55 2015 Monge Pierre
*/

#ifndef				__COREWAR_VM_H_
# define			__COREWAR_VM_H_

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

/*
** struct of a Champ
*/

typedef		struct		s_champ
{
  char				*name;
  int				id;

  int				live_before_die;
  struct	s_champ		*next;
}				t_champ;

/*
** general struct of vm
*/

typedef		struct		s_vm
{
  int				cycle;
  int				live_done;

  int				nbr_champ;
  struct	s_champ		*champ_first;
}				t_vm;

/*
** Vm instructions
*/

int				vm_instructions_live();
int				vm_instructions_ld();
int				vm_instructions_st();
int				vm_instructions_add();
int				vm_instructions_sub();
int				vm_instructions_and();
int				vm_instructions_or();
int				vm_instructions_xor();
int				vm_instructions_zjmp();
int				vm_instructions_ldi();
int				vm_instructions_sti();
int				vm_instructions_fork();
int				vm_instructions_lld();
int				vm_instructions_lldi();
int				vm_instructions_lfork();
int				vm_instructions_aff();

/*
** End instructions
*/

/*
** Static struct (Is like a global struct)
*/

t_vm				*vm_data_getter();

/*
** Func for parsing arguments and init vm
*/

t_vm				*vm_data_init(struct s_vm *);

/*
** FUNC OF ERROR
*/

int				vm_error(char *);

#endif				/* !__COREWAR_VM_H_ */
