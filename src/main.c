/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../include/intersection.h"

int main(int ac, char **av)
{
	if (ac < 9 || ac > 9) {
		return (84);
	}
	init(av);
	return (0);
}
