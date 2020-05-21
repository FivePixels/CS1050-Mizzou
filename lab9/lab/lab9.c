/* Name: Dylan Bolger
 * Course: CS1050 SP2020
 * Lab: Lab 9 
 * Date: 04/20/20
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <fight.h>

typedef struct _Character {
	char name[20];
	int armor;
	int hitpt;
	int hitbonus;
	int damagebonus;
} Character;

int main(int argc, char *argv[] ) {
	int count = 0;
	Character characters[argc-1];
	char *file1; char *file2;
	file1 = argv[1];
	file2 = argv[2];
	FILE *fp = fopen(file1, "r");
	FILE *fp2 = fopen(file2, "r");
	/* is there an easier way to write the code below? */
	if (fp == NULL) {
		printf("Error: Could not open %s\n", file1);
 		exit(0);
	}
	if (fp2 == NULL) {
		printf("Error: Could not open %s\n", file2);
		exit(0);
	}	
	while (!feof(fp)) {
		fscanf(fp, "%s %d %d %d %d", 
		characters[count].name,
		&characters[count].armor,
		&characters[count].hitpt,
		&characters[count].hitbonus,
		&characters[count].damagebonus);
	}
	count++;
	while (!feof(fp2)) {
		fscanf(fp2, "%s %d %d %d %d",
		characters[count].name,
		&characters[count].armor,
		&characters[count].hitpt,
		&characters[count].hitbonus,
		&characters[count].damagebonus);
	}
	count++;
	for (int i=0; i<argc-1; i++) {
		printf("Name = %s, AC = %d, HP = %d, ToHitBonus = %d, DamageBonus = %d\n",
		characters[i].name,
		characters[i].armor,
		characters[i].hitpt,
		characters[i].hitbonus,
		characters[i].damagebonus);
	}
	/* i wish i could iterate :( */
	Fight(characters[0].name, characters[0].armor, characters[0].hitpt, characters[0].hitbonus, characters[0].damagebonus,
	characters[1].name, characters[1].armor, characters[1].hitpt, characters[1].hitbonus, characters[1].damagebonus);

	fclose(fp);
	fclose(fp2);
}
