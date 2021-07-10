#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int choice,end,results;
    int bjp=0,ysrcp=0,tdp=0,nota=0,jana_sena=0,inc=0;
    for(;;) {
            system("cls");
    printf("\n\n\n\n\t\t\t\t\t\tANDHRA PRADESH ELECTIONS");
    printf("\n\n\n\t\t\t 1. BJP\
           \t\t\t\t\t\t 2. YSRCP\
           \n\n\n\t\t\t 3. TDP\
           \t\t\t\t\t\t 4. JANA SENA\
           \n\n\n\t\t\t 5. INC\
           \t\t\t\t\t\t 6. NOTA\n\n\n\n");
    printf("\n\n\n\n\n\t\t\tEnter your choice and press enter : ");
    scanf("%d",&choice);
    switch(choice) {
        system("cls");
        case 1 : bjp++; break;
        case 2 : ysrcp++;break;
        case 3 : tdp++; break;
        case 4 : jana_sena++; break;
        case 5 : inc++; break;
        case 6 : nota++; break;
        default : system("cls");
                  printf("\n\n\n\t\t\tEnter a valid choice!! ");
    }
   if(choice>0&&choice<7) system("cls");
    printf("\n\n\n\n\n\t\t\t\tTo continue election press 1 : ");
    scanf("%d",&end);
    if(end!=1)
        break;

    }
    system("cls");
    printf("\n\n\n\n\n\t\t\t\tTO DISPLAY RESULTS, PRESS 1 : ");
    scanf("%d",&results);
    if(results==1){
        printf("\n\n\n\n\t\t\tBJP : %d\t\t\t\t\t\t\tYSRCP : %d\n\n\n\n\t\t\tTDP : %d\t\t\t\t\t\t\tJANA SENA : %d\n\n\n\n\t\t\tINC : %d\t\t\t\t\t\t\tNOTA : %d\n\n\n\n\n",
               bjp,ysrcp,tdp,jana_sena,inc,nota);
    }
    return 0;
}
