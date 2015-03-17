/*
** vm_main.c for corewar vm in /home/mongep/rendu/CPE/CW/VM/source
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Mon Mar 16 13:00:50 2015 Monge Pierre
** Last update Tue Mar 17 16:58:56 2015 Monge Pierre
*/

#include		"corewar_vm.h"

/*
** Func pointers -> instruction
*/

void			vm_pointer_instr()
{
  t_vm			*vm;

  vm = vm_data_getter();
  vm->func[0] = &vm_instruction_live;
  vm->func[1] = &vm_instruction_ld;
  vm->func[2] = &vm_instruction_st;
  vm->func[3] = &vm_instruction_add;
  vm->func[4] = &vm_instruction_sub;
  vm->func[5] = &vm_instruction_and;
  vm->func[6] = &vm_instruction_or;
  vm->func[7] = &vm_instruction_xor;
  vm->func[8] = &vm_instruction_zjmp;
  vm->func[9] = &vm_instruction_ldi;
  vm->func[10] = &vm_instruction_sti;
  vm->func[11] = &vm_instruction_fork;
  vm->func[12] = &vm_instruction_lld;
  vm->func[13] = &vm_instruction_lldi;
  vm->func[14] = &vm_instruction_lfork;
  vm->func[15] = &vm_instruction_aff;
  vm->func[16] = NULL;
  return ;
}

/*
** Tuto for use the binary
*/

int			vm_tuto(char *error)
{
  my_printf("%s\nvm: ./corewar [-dump nbr_cycle] [[-n prog_number]"
	    "[-a load_adress] prog_name] ...\n\nDescriptions :\n\n"
	    "◦ -dump nbr_cycle\n"
	    "Dump la mémoire après nbr_cycle d’exécution (si la partie"
	    " n’est pas déjà finie)"
	    " au format 32 octets par ligne au format xx code en hexadecimal :"
	    "A0BCDEFE1DD3..........\n", error);
  my_printf("une fois la mémoire dumpée, on quitte la partie.\n"
	    "\n◦ -n prog_number\n"
	    "Fixe le numéro du prochain programme.\nPar défaut il choisit le"
	    " premier numéro libre dans l’ordre des paramètres.\n"
	    "\n◦ -a load_address\n"
	    "Fixe l’adresse de chargement du prochain programme.\nLorsque aucun"
	    "e adresse n’est précisée, on choisira les adresses de telle sorte"
	    " que les programmes soient"
	    "les plus éloignés.\nLes adresses sont modulo MEM_SIZE.\n");
  return (0);
}

t_vm			*vm_data_getter()
{
  static	t_vm	vm;

  return (&vm);
}

int			main(int ac, char **av)
{
  t_vm			*vm;

  if (ac <= 2)
    return (vm_tuto(""));
  vm = vm_data_getter();
  vm_pointer_instr();
  if ((vm = vm_data_init(vm, av)) == NULL)
    return (vm_error("vm: VM can't init data !\n"));
  while (vm->nbr_champ > 1)
    {
      if ((vm = vm_action(vm)) == NULL)
	return (vm_error("vm: fatal crash of vm !\n"));
      vm->cycle += 1;
    }
  my_printf("vm : %s win after %i cycle !\n", vm->champ_first->name, vm->cycle);
  return (0);
}
