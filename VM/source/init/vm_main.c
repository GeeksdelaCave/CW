/*
** vm_main.c for corewar vm in /home/mongep/rendu/CPE/CW/VM/source
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Mon Mar 16 13:00:50 2015 Monge Pierre
** Last update Mon Mar 16 15:45:31 2015 Monge Pierre
*/

#include		"corewar_vm.h"

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

int			main(int ac, char **av)
{
  if (ac <= 2)
    return (vm_tuto(""));
  return (0);
}
