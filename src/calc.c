/*
** EPITECH PROJECT, 2018
** calc.c
** File description:
** calc
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <math.h>
#include "../include/intersection.h"

int calc_sphere(double *tab)
{
	double discrim = 0;
	double lambda = 0;
	double lambda1 = 0;
	double lambda2 = 0;

	tab[8] = tab[4] * tab[4] + tab[5] * tab[5] + tab[6] * tab[6];
	tab[9] = 2 * (tab[1] * tab[4]) + 2 * (tab[2] * tab[5]) + 2 * (tab[3] * tab[6]);
	tab[10] = tab[1] * tab[1] + tab[2] * tab[2] + tab[3] * tab[3] - tab[7] * tab[7];
	discrim = tab[9] * tab[9] - (4 * tab[8] * tab[10]);
	if (discrim == 0)
		lambda = -tab[9] / (2 * tab[8]);
	if (discrim > 0) {
		lambda1 = (-tab[9] - sqrt(discrim)) / 2 * tab[8];
		lambda2 = (-tab[9] + sqrt(discrim)) / 2 * tab[8];
	}
	tab[11] = tab[1] + lambda1 * tab[4];
	tab[12] = tab[2] + lambda1 * tab[5];
	tab[13] = tab[3] + lambda1 * tab[6];
	tab[14] = tab[1] + lambda2 * tab[4];
	tab[15] = tab[2] + lambda2 * tab[5];
	tab[16] = tab[3] + lambda2 * tab[6];
	tab[17] = tab[1] + lambda * tab[4];
	tab[18] = tab[2] + lambda * tab[5];
	tab[19] = tab[3] + lambda * tab[6];
	sphere_display(tab, discrim);
	return (0);
}

int calc_cylinder(double *tab)
{
	double discrim2 = 0;
	double lambda;
	double lambda1;
	double lambda2;

	tab[8] = tab[4] * tab[4] + tab[5] * tab[5];
	tab[9] = 2 * (tab[1] * tab[4]) + 2 * (tab[2] * tab[5]);
	tab[10] = tab[1] * tab[1] + tab[2] * tab[2] - tab[7] * tab[7];
	discrim2 = tab[9] * tab[9] - (4 * tab[8] * tab[10]);
	if (discrim2 == 0)
		lambda = -tab[9] / (2 * tab[8]);
	if (discrim2 > 0) {
		lambda1 = (-tab[9] - sqrt(discrim2)) / (2 * tab[8]);
		lambda2 = (-tab[9] + sqrt(discrim2)) / (2 * tab[8]);
	}
	tab[11] = tab[1] + lambda1 * tab[4];
	tab[12] = tab[2] + lambda1 * tab[5];
	tab[13] = tab[3] + lambda1 * tab[6];
	tab[14] = tab[1] + lambda2 * tab[4];
	tab[15] = tab[2] + lambda2 * tab[5];
	tab[16] = tab[3] + lambda2 * tab[6];
	tab[17] = tab[1] + lambda * tab[4];
	tab[18] = tab[2] + lambda * tab[5];
	tab[19] = tab[3] + lambda * tab[6];
	cylinder_display(tab, discrim2);
	return (0);
}
