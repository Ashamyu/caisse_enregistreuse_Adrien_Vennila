#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int la_difference;
int calcule_monnaie();

int main()
{
    int valeur_a_payer,monnaie;
    
    printf("Voici la valeur a payer : ");
    
    srand(time(0));
    valeur_a_payer = (rand()% 10000 + 100); 
    printf("%d\n ", valeur_a_payer);

    printf("Inserez votre monnaie : ");
    scanf("%d",&monnaie);
   
    LOOP:if(monnaie<valeur_a_payer)
    {
    printf("Fond insuffisants! ");
    printf("Inserez une nouvelle valeur : ");
    scanf("%d",&monnaie);
    goto LOOP;
    }
    else if(valeur_a_payer==monnaie)
    {
    printf("C'est la valeur exacte.Merci beaucoup! ");
    }

    else
    {
    la_difference=monnaie - valeur_a_payer;
    printf("Votre monnaie d'echange est :%d\n ", la_difference);
    }
    printf("------------------------------------------------------------\n");
   
    calcule_monnaie();

    return 0;
}



int calcule_monnaie()
{

    int rendu;
        printf("Votre monnaie rendu sera : \n");

	rendu=(int)la_difference/2000;
	printf("%d billet(s) de Rs 2000\n ", rendu);
        la_difference = la_difference-(rendu*2000);
     
	rendu = (int)la_difference/1000;
	printf("%d billet(s) de Rs 1000\n ", rendu);
	la_difference= la_difference-(rendu*1000);
	
	rendu = (int)la_difference/500;
	printf("%d billet(s) RS 500\n ", rendu);
	la_difference = la_difference-(rendu*500);
	
	rendu= (int)la_difference/200;
	printf("%d billet(s) de RS 200\n ", rendu);
	la_difference= la_difference-(rendu*200);

        rendu = (int)la_difference/100;
	printf("%d billet(s) de Rs 100\n ", rendu);
        la_difference = la_difference-(rendu*100);
	
	rendu = (int)la_difference/50;
	printf("%d billet(s) de Rs 50\n ", rendu);
	la_difference=la_difference-(rendu*50);
	
	rendu = (int)la_difference/25;
	printf("%d billet(s) RS 25\n ", rendu);
	la_difference = la_difference-(rendu*25);
	
	rendu= (int)la_difference/20;
	printf("%d piece(s) de RS 20\n ", rendu);
	la_difference = la_difference-(rendu*20);
	
	rendu= (int)la_difference/10;
	printf("%d piece(s) de Rs 10\n ", rendu);
	la_difference = la_difference-(rendu*10);
	
	rendu= (int)la_difference/5;
	printf("%d piece(s) de RS 5\n ", rendu);
	la_difference= la_difference-(rendu*5);
	
	rendu= (int)la_difference/1;
	printf("%d piece(s) de RS 1\n ", rendu);
        la_difference=la_difference-(rendu*1);

        rendu= (int)la_difference/0.50;
	printf("%d piece(s) de 50 SOUS \n ", rendu);
	la_difference= la_difference-(rendu*0.50);
	
	rendu= (int)la_difference/0.20;
	printf("%d piece(s) de 20 SOUS\n ", rendu);
	la_difference= la_difference-(rendu*0.20);
	
	rendu= (int)la_difference/0.05;
	printf("%d piece(s) de 5 SOUS\n ", rendu);
printf("*****************************************************")

}

    
