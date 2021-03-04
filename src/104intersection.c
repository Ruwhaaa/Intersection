/*
** EPITECH PROJECT, 2017
** 104intersection
** File description:
** 104intersection
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../include/intersection.h"

double sphere_display(double *tab, double discrim)
{
	if (tab[0] == 1) {
		printf("sphere of radius %.0lf\n", tab[7]);
		printf("straight line going through the ");
		printf("(%.0lf,%.0lf,%.0lf) ", tab[1], tab[2], tab[3]);
		printf("point and of direction vector ");
		printf("(%.0lf,%.0lf,%.0lf)\n", tab[4], tab[5], tab[6]);
		if (discrim < 0)
			printf("No intersection point.\n");
		if (discrim == 0) {
			printf("1 intersection point :\n");
			printf("(%.3lf, %.3lf, %.3lf)\n", tab[17], tab[18], tab[19]);
		}
		if (discrim > 0) {
			printf("2 intersection points :\n");
			printf("(%.3lf, %.3lf, %.3lf)\n", tab[14], tab[15], tab[16]);
			printf("(%.3lf, %.3lf, %.3lf)\n", tab[11], tab[12], tab[13]);
		}
	}
	return (0);
}

double cylinder_display(double *tab, double discrim2)
{
	if (tab[0] == 2) {
		printf("cylinder of radius %.0lf\n", tab[7]);
		printf("straight line going through the ");
		printf("(%.0lf,%.0lf,%.0lf) ", tab[1], tab[2], tab[3]);
		printf("point and of direction vector ");
		printf("(%.0lf,%.0lf,%.0lf)\n", tab[4], tab[5], tab[6]);
		if (discrim2 < 0)
			printf("No intersection point.\n");
		if (discrim2 == 0) {
			printf("1 intersection point :\n");
			printf("(%.3lf, %.3lf, %.3lf)\n", tab[17], tab[18], tab[19]);
		}
		if (discrim2 > 0) {
			printf("2 intersection points :\n");
			printf("(%.3lf, %.3lf, %.3lf)\n", tab[14], tab[15], tab[16]);
			printf("(%.3lf, %.3lf, %.3lf)\n", tab[11], tab[12], tab[13]);
		}
	}
	return (0);
}
