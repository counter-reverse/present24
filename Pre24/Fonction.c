#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Fonction.h"
//https://en.wikipedia.org/wiki/Bit-reversal_permutation
char substitution(char val)

{
    char sortie;
    // déclaration de la Boite S et affectation des valeurs
    char BoiteS[2][16]={{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'},
                        {'c','5','6','b','9','0','a','d','3','e','f','8','4','7','1','2'}};
                    int i,j=0;
                    // parcours et affichage de la boite s
               /*   for(i=0;i<2;i++){
                    // boucle qui parcours les lignes de la boites
                        for(j=0;j<16;j++){
                    //boucle qui parcours les colonnes
                            printf("%c ",BoiteS[i][j]);
                            //affichage de la cellule

                        }
                        puts("");
                    }*/


           // on parcours la boite pour retourner les bits correspondants à la sortie

             for(i=0;i<1;i++){
                    // boucle qui parcours les lignes de la boites
                        for(j=0;j<16;j++){
                    //boucle qui parcours les colonnes
                            //affichage de la cellule
                           // printf("%c",BoiteS[i][j]);

                        if(BoiteS[i][j]==val)
                        {
                            // on renvoie la valeur à la position correspondante dans la Boite S
                         //printf(" la valeur est %c",BoiteS[1][j]);
                         // on sauvegarde la valeur correspondante de la Boite S dans la  sortie
                         sortie=BoiteS[1][j];
                        }
                        }
                        puts("");
                    }

            return sortie;

}

// fonction d'affichagedu tableau
void printTab(char tab[])
{
    int i;

  for(i=0;i<6;i++)
    {
         printf("\t%c ",tab[i]);

    }

}


void permutation(char TabEntrer[])
{
    int i;

      // int TabPi[24]={0,6,12,18,1,7,13,19,2,8,14,20,3,9,15,21,4,10,16,22,5,11,17,23};
       char TabPermuter[24];
       char Tabresult[24];
    //on parcours le tab[24]

            TabPermuter[0]=TabEntrer[0];
            TabPermuter[6]=TabEntrer[1];
            TabPermuter[12]=TabEntrer[2];
            TabPermuter[18]=TabEntrer[3];
            TabPermuter[1]=TabEntrer[4];
            TabPermuter[7]=TabEntrer[5];
            TabPermuter[13]=TabEntrer[6];
            TabPermuter[19]=TabEntrer[7];
            TabPermuter[2]=TabEntrer[8];
            TabPermuter[8]=TabEntrer[9];
            TabPermuter[14]=TabEntrer[10];
            TabPermuter[20]=TabEntrer[11];
            TabPermuter[3]=TabEntrer[12];
            TabPermuter[9]=TabEntrer[13];
            TabPermuter[15]=TabEntrer[14];
            TabPermuter[21]=TabEntrer[15];
            TabPermuter[4]=TabEntrer[16];
            TabPermuter[10]=TabEntrer[17];
            TabPermuter[16]=TabEntrer[18];
            TabPermuter[22]=TabEntrer[19];
            TabPermuter[5]=TabEntrer[20];
            TabPermuter[11]=TabEntrer[21];
            TabPermuter[17]=TabEntrer[22];
            TabPermuter[23]=TabEntrer[23];

  for(i=0;i<24;i++)
    {
       Tabresult[i]=TabPermuter[i];
    }

     for(i=0;i<24;i++)
    {
       printf("%c ",Tabresult[i]);
    }
   // return Tabresult;

}
/*
void conversion()
{

    char hexa[100];
    long int he=0;
    int bin;
    printf("\t\t\tentrer un nombre hexadecimal: ");
            scanf("%s",hexa);
            printf("\n\t\t\tSon Equivalent binaire: ");
            while(hexa[he]){
                switch(hexa[he]){
                case '0':
                    printf("0000");
                    bin=bin+0;
                    break;

                case '1':
                    printf("0001");
                    bin=bin+1;
                    break;
                case '2':
                    printf("0010");
                    bin=bin+1;
                    break;
                case '3':
                    printf("0011");
                    bin=bin+2;
                    break;
                case '4':
                    printf("0100");
                    bin=bin+1;
                    break;
                case '5':
                    printf("0101");
                    bin=bin+2;
                    break;
                case '6':
                    printf("0110");
                    bin=bin+2;
                    break;
                case '7':
                    printf("0111");
                    bin=bin+3;
                    break;
                case '8':
                    printf("1000");
                    bin=bin+1;
                    break;
                case '9':
                    printf("1001");
                    bin=bin+2;
                    break;
                case 'A':
                    printf("1010");
                    bin=bin+2;
                    break;
                case 'B':
                    printf("1011");
                    bin=bin+3;
                    break;
                case 'C':
                    printf("1100");
                    bin=bin+2;
                    break;
                case 'D':
                    printf("1101");
                    bin=bin+3;
                    break;
                case 'E':
                    printf("1110");
                    bin=bin+3;
                    break;
                case 'F':
                    printf("1111");
                    bin=bin+4;
                    break;
                case 'a':
                    printf("1010");
                    bin=bin+2;
                    break;
                case 'b':
                    printf("1011");
                    bin=bin+3;
                    break;
                case 'c':
                    printf("1100");
                    bin=bin+2;
                    break;
                case 'd':
                    printf("1101");
                    bin=bin+3;
                    break;
                case 'e':
                    printf("1110");
                    bin=bin+3;

                   break;
                case 'f':
                    printf("1111");
                    bin=bin+4;
                    break;
                default:
                    printf("\nInvalide %c ",hexa[he]);
                    return 0;
                }
                he++;


            }
}
*/
