/*
 * CS1050
 * Spring 2020
 * Lab 8
 * x-lab8main.c
 * By Jim Ries, jer676
 */

// Prototypes
void ShowWords(char * string);

int main(void)
{
    char testString[] = 
"Once there was a way to get back homeward.\n\
Once there was a way to get back home .   \n\
Sleep pretty darling.\n\
Do not cry, and I will sing this lullabye.";

    ShowWords(testString);
}
