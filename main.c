#include <stdio.h>
#include <stdlib.h>

int main()

{
    srand(time(NULL));

    int difficulter = 0;



    printf("1 facile , 2 moyen, 3 difficile\n \n");

    int nombrechoisi = 0;

    int esseD = 3;

    int esse = 5;

    int esseF = 10;

    int nombremax = 0;

    printf("choisisser votre niveau\n \n");


    scanf("%d",&difficulter);

    printf("vous avez choisi le niveau %d \n \n ",difficulter);




//randome moyen

    if(difficulter == 2)
    {
     int rando = rand() % 100 + 1;


    printf("choisire un nombre\n");
        do


        {


            scanf("%d", &nombrechoisi, --esse);


            if (nombrechoisi > 101)
            {
                printf("nombre trop haut \n");
            }

            else if ( nombrechoisi< 1)
            {
                printf("nombre trop bas \n");
            }

            else if  (nombrechoisi < rando)
            {
                printf("c'est plus \n");
            }
            else if (nombrechoisi > rando)
            {
                printf("c'est moin \n");
            }
            else
            {
                printf("bravo \n");
                if (0 < esse)

                {
                    printf("il te rester " "%d éssé \n",esse );
                }



            }
            if (esse==0)
            {
                return 0;
            }
        }

        while (nombrechoisi != rando);

        return 0;
    }



//randome facile

    if (difficulter == 1)

    {
     int random = rand() % 20 + 1;


    printf("choisire un nombre\n");
        do


        {


            scanf("%d", &nombrechoisi, --esseF);


            if (nombrechoisi > 20)
            {
                printf("nombre trop haut \n");
            }

            else if ( nombrechoisi< 1)
            {
                printf("nombre trop bas \n");
            }

            else if  (nombrechoisi < random)
            {
                printf("c'est plus \n");
            }
            else if (nombrechoisi > random)
            {
                printf("c'est moin \n");
            }
            else
            {
                printf("bravo \n");
                if (0 < esseF)

                {
                    printf("il te rester "  "%d éssé \n",esseF );
                }



            }
            if (esseF==0)
            {
                return 0;
            }
        }

        while (nombrechoisi != random);

        return 0;
    }





//randome difficile







    if (difficulter == 3)
    {
     int randome = rand() % 1000 + 1;


    printf("choisire un nombre\n");
        do


        {


            scanf("%d", &nombrechoisi, --esseD);


            if (nombrechoisi > 1000)
            {
                printf("nombre trop haut \n");
            }

            else if ( nombrechoisi< 1)
            {
                printf("nombre trop bas \n");
            }

            else if  (nombrechoisi < randome)
            {
                printf("c'est plus \n");
            }
            else if (nombrechoisi > randome)
            {
                printf("c'est moin \n");
            }
            else
            {
                printf("bravo \n");
                if (esseD > 0)

                {
                    printf("il te rester " "%d éssé \n",esseD);
                }





            }
            if (esseD==0)
            {
                return 0;
            }
        }


        while (nombrechoisi != randome);

    }
    return 0;

}







