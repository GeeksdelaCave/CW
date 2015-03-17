/*
** corewar_vm.h for corewar vm header in /home/mongep/rendu/CPE/CW/VM
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Mon Mar 16 11:34:01 2015 Monge Pierre
** Last update Tue Mar 17 17:26:54 2015 Monge Pierre
*/

#ifndef				__COREWAR_VM_H_
# define			__COREWAR_VM_H_5A5A5A

#include			<stdlib.h>

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
** struct of a Champ
** J'ai longtemps réflechi et je pense que les registres pourraient être mis en
** char * avec 16 registres * 4 octets chacun soit 16 * 4 char + 1 pour un /0 de
** fin, il y a possibilité aussi de faire un char ** meme si je trouve ça moins
** pratique à use et plus long à initialisé !
*/

typedef		struct		s_champ
{
  char				name[NAME_LENGHT + 1];
  int				id;

  char				reg[(REG_SIZE * REG_NUMBER) + 1];
  int				carry;
  int				delay;

  int				live_before_die;
  struct	s_champ		*next;
}				t_champ;

/*
** general struct of vm
*/

typedef		struct s_vm	t_vm;

typedef				int (*vm_instr)(t_vm *, t_champ *);

/*
** Struct params
*/

typedef		struct		s_params
{
  int				type_1;
  int				type_2;
  int				type_3;
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
** ACTION VM
*/

t_vm				*vm_action(t_vm *);

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

/*
** FUNC OF ERROR
*/

int				vm_error(char *);

#endif				/* !__COREWAR_VM_H_ */
