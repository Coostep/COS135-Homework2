#include <stdio.h>
/* Homework Part A*/
int main() {

	printf("%-10s %-10s %-15s\n", "Country", "Region", "Population (M)");
	printf("---------------------------------------------\n");
	printf("%-10s %-10s %-15d\n", "USA", "AMERICA", 332);
	printf("%-10s %-10s %-15d\n", "JAPAN", "ASIA", 126);
	printf("%-10s %-10s %-15d\n", "FRANCE", "EUROPE", 68);
	printf("%-10s %-10s %-15d\n", "GHANA", "AFRICA", 33);


/* Homework Part B*/

	char chr = 88;
	printf("Character having ASCII value %d is %c.\n", chr, chr);

/* Homework Part C*/

	int i_number = 12;
	float f_number = 3.125;
	double d_number = 7.5345345;
	char character = 'T';
	char text[] = "COS 135";

	printf("%d, %f, %lf, %c, %s\n", i_number, f_number, d_number, character, text);

	return 0;
}
