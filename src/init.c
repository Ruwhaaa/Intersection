/*
** EPITECH PROJECT, 2018
** init.c
** File description:
** init
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../include/intersection.h"

int init(char **av)
{
	int i = 0;
	int j = 1;
	double tab[25];

	while (i < 8) {
		tab[i] = atof(av[j]);
		i++;
		j++;
	}
	if (i > 8) {
		return (84);
	}
	calc_sphere(tab);
	calc_cylinder(tab);
	return (0);
}
