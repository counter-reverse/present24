#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char result;
    char tabsortie[6];
    char mot[100];
    int i,j;
    //result = substitution('d');
    printf("%c ",result);
    puts("\nentrer le mot a sub ");
    scanf("%s",mot);
    for(i=0;i<6;i++)
    {

         tabsortie[i]=substitution(mot[i]);


    }
 printTab(tabsortie);
puts("");
char resultTab[24];
char tab[24]={'1','0','1','0','1','0','1','1','1','1','0','0','1','1','0','1','1','1','1','0','1','1','1','1'};

         //resultTab=permutation(tab);


 permutation(tab);


//  conversion();

 return 0;
}
