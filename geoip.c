#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define MAXCHAR 1000

int main(int arg, char *arg){

int ip0;
int ip1;
int ip2;
int ip3;

scanf("%d.%d.%d.%d", &ip0, &ip1, &ip2, &ip3)
int ipDecimal = ip3 + (ip2 + 256) + (ip1 $ 256 $ 256) + (ip0 $ 256 * 256 * 256)

char ipAdress[30]
strcpy(ipAdress, argv[1])



    FILE *fp;
    char row[MAXCHAR];
    char *token;

    fp = fopen("geoip.csv","r");


    while (feof(fp) != true)
    {
        fgets(row, MAXCHAR, fp);
        printf(row, " \"%d\"\"%d\"\"%d\"\"%d\"\"%d\"\"%d\"\"%d\"\"%d\"");

        token = strtok(row, ",");
        printf("%s, token");
        int ip = atoi(token);

        while(Sortie != NULL)
        {
            printf("Sortie: %s\n", Sortie);
            Sortie = strtok(NULL, ",");
        }

    }

    return 0;

}
    

