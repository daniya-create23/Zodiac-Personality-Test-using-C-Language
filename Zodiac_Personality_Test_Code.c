
//Group leader: Fatima iqbal
/*Group members: Noor Tahir
         Daniya Imram and Fatima Iqbal*/
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{
    while (1)
    {

        int i = 2;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
        printf("DISCLAIMER:This quiz is just for entertainment purposes ", i);
        printf("lighthearted humor shouldn't be taken seriously\n\n", i);
        int n;
        float t = 0;
        int u;
        int j = 4;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), j);
        printf("                   |**************************|\n        ", j);
        printf("           |       HI THERE !         |\n         ", j);
        printf("          |**************************|\n         ", j);
        printf("          |     LETS TAKE YOUR       |\n         ", j);
        printf("          |    ZODIAC PERSONALITY    |\n         ", j);
        printf("          |          TEST            |\n         ", j);
        printf("          |**************************|\n         ", j);
        _getch();
        system("cls");
        int f = 1;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), f);
        printf(" FIRST THiNGS FIRST :\n", f);
        printf(" ENTER YOUR NAME : \n", f);
        char name[20];
        scanf("%s", name);

        _getch();
        system("cls");


        printf("HI %s , HOPE YOU HAVING A GOOD DAY ", name, f);
        printf(" LEZZ START \n", i);
        printf("ENTER THE DATE OF THE LUCKY DAY YOU WERE BORN ON \n ", f);
        int a; // day
        scanf(" %d", &a);
        printf("Enter the month you were born in from 1 to 12 \n ", f);
        int b; // month
        scanf(" %d", &b);
        printf("Enter the glorified year you were born in :D \n", f);
        int c; // year
        scanf(" %d", &c);
        printf("What is the date today? \n", f);
        int date; // today's date
        scanf(" %d", &date);
        int s = (2019 - c);
        int months = 12 - b;
        int days;
        if (date >= a)
        {
            days = date - a;
        }
        else
        {
            months--;
            days = 30 - (a - date);
        }
        printf("GREAT %s! YOU ARE  %d YEARS, %d MONTHS AND %d DAYS OLD\n  ", name, s, months, days);

        _getch();
        system("cls");

        if ((a >= 20 && b == 1) || (a <= 18 && b == 2))

        {
            int z;
            for (z = 1; z>0; z++)
            {
                printf(" %s ,YOUR sign is AQUARIUS\n", name, f);
                printf(" WHAT DO U WANT TO DO ?\n", i);
                printf("A- KNOW FACTS ABOUT ME ?\n ", f);
                printf("B- LESS CHECK MY AQUARIAN PERCENTAGE\n", f);
                printf("C-IMMA DO SOMETHING MORE INTERESTING\n", f);
                char k;
                scanf(" %c", &k);
                _getch();
                system("cls");
                if (k == 'A' || k == 'a')
                {
                    int q = 5;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), q);
                    printf("  YOU WANNA KNOW FACTS ABOUT U ?\n");
                    printf(" **************************************\n", q);
                    printf(" |LUCKY NUMBERS  | 4 ,8, 13           |\n", q);
                    printf(" |SUITABLE COLORS| BLUE , GREEN       |\n", q);
                    printf(" |GOOD QUALITIES | HONESTY , CURIOSITY|\n", q);
                    printf(" |BAD QUALITIES  | UNPREDICTABLE      |\n", q);
                    printf("***************************************\n", q);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                }
                _getch();
                system("cls");
                if (k == 'b' || k == 'B')
                {

                    for (u = 1; u <= 5; u++)
                    {
                        if (u == 1)
                        {
                            int w = 3;
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), w);
                            printf("You wanted to do a task according to ur own plan . guess what your friends ended up ruining your plan your reaction is ?\n", w);
                            printf("A-nahhh..i m okay with it life doesnt always go as u want\n ", w);
                            printf("B-I'm gonna murder them\n ", w);
                            printf("You going with A or B\n", w);
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");
                            if (d == 'A')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 2)
                        {
                            int e = 3;
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
                            printf("Are you one of those people who are known by everyone around you? BUt only a few truely know you izz it true?\n", e);
                            printf("A--THISS ISS MEEE\n", e);
                            printf("B-Get a life NO!! \n", e);
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 3)
                        {
                            int r = 3;
                            printf("YOU ARE ALL ALONE FOR THE WEEKEND \n WHAT ARE YOU MOST INTERESTED IN DOING ?\n", r);
                            printf("A-Cooking some meal\n", r);
                            printf("B-Going out on a picnic\n", r);
                            printf("C-listening to your fav songs and hanging out alone\n", r);
                            printf("D-ughh.. I am never alone\n", r);
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'C' || d == 'c')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 4)
                        {
                            int t = 3;
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), t);
                            printf(" WHO DO YOU THINK YOU GET ALONG WITH. GO ON AND CHOOSE \n", t);
                            printf("A- Pisces, Leo\n", t);
                            printf("B- Aries, Gemini\n", t);
                            printf("C-Taurus, Scorpio\n", t);
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 5)
                        {
                            int y = 3;
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), y);
                            printf("You saw a baby crying? What would you do?\n", y);
                            printf("A- Will you be annoyed?\n", y);
                            printf("B-Will you Help the poor soul? \n", y);
                            printf("NO!!! i am a baby myself???\n", y);
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                            _getch();
                            system("cls");
                            int percentage;
                            percentage = (t / 5.0) * 100;
                            int u = 6;
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), u);
                            printf(" yeahh YOU ARE %d percent AQUARIAN\n", percentage, u);
                            _getch();
                            system("cls");
                        }

                    }

                }
                if (k == 'C' || k == 'c')
                    break;
            }
        }
        else if ((a <= 20 && b == 3) || (a > 19 && b == 2))
        {
            int z;
            for (z = 1; z>0; z++)
            {
                printf(" %s ,YOUR sign is PISCES\n", name);
                printf(" WHAT DO U WANT TO DO ?\n");
                printf("A- KNOW FACTS ABOUT ME ? \n");
                printf("B- LESS CHECK MY Pisces PERCENTAGE\n");
                printf("C-IMMA DO SOMETHING MORE INTERESTING\n");
                char k;
                scanf(" %c", &k);
                _getch();
                system("cls");
                if (k == 'A' || k == 'a')
                {
                    printf("  YOU WANNA KNOW FACTS ABOUT U ?\n");
                    printf(" ****************************************\n");
                    printf(" |LUCKY NUMBERS  | 3 ,7, 12             |\n");
                    printf(" |SUITABLE COLORS| PURPLE , VIOLET      |\n");
                    printf(" |GOOD QUALITIES | EMOTUONAL , SENSITIVE|\n");
                    printf(" |BAD QUALITIES  | PESSIMISM,BLUNT      |\n");
                    printf("*****************************************\n");
                }
                _getch();
                system("cls");
                if (k == 'b' || k == 'B')
                {

                    for (u = 1; u <= 5; u++)
                    {
                        if (u == 1)
                        {

                            printf("You broke your mama's favourite vase ,currently she's bout to roast you.What would be your rection?\n");
                            printf("A-AHHHH just another normal day, listen from one ear and out the other.\n");
                            printf("B-Starts crying like a cry baby.\n");
                            printf("C-Try not repeating the mistake because of which i am getting scolded at.\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");
                            if (d == 'C' || d == 'c')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 2)
                        {
                            printf("It's 1am when you realised your mobile was on 10% and you are on your bed getting cozy ,ready to take your precious night sleep, what would you do in such devastating situation?\n");
                            printf("A-just like another normal human being I would jump out of my bed and plug in the charger\n");
                            printf("B-sleep>>>>>charging your phone\n");
                            printf("C-HAAA HAWNNNNN\n");
                            printf("D-Really? why do you think i spent dollars on powerbank?\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 3)
                        {
                            printf("Your exams are just around the corner,whatcha gonna do?\n");
                            printf("A-who cares?\n");
                            printf("B-I know i am gonna fail! Lemme go and cry in some corner.\n");
                            printf("C-Try studying hard and ace it!\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 4)
                        {
                            printf("You get to know, your friends have some surprise planned for your birthday tomorrow, How you gonna react?\n");
                            printf("A-Who cares?\n");
                            printf("B-My friends dont even know my poor soul's birthday\n");
                            printf("C-Blackmail one of your friend to disclose every detail of the plan\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'C' || d == 'c')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 5)
                        {
                            printf("Think about the person you are closest to. What's his/her zodiac sign?\n");
                            printf("A-Taurus,Cancer,Capricorn,Scorpio\n");
                            printf("B-Aquarius,Leo,Gemini,Sagittarius.\n");
                            printf("C-Cancer,Sagittarius,Taurus.\n");

                            char d;
                            scanf(" %c", &d);

                            _getch();
                            system("cls");
                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                            _getch();
                            system("cls");
                            int percentage;
                            percentage = (t / 5.0) * 100;
                            printf(" yeahh YOU ARE %d percent pisces ", percentage);
                            _getch();
                            system("cls");
                        }
                    }
                }
                if (k == 'C' || k == 'c')
                    break;
            }
        }
        else if ((a >= 23 && b == 10) || (a <= 21 && b == 11))
        {

            int z;
            for (z = 1; z>0; z++)
            {
                printf(" %s ,YOUR sign is SCORPIO\n", name);
                printf(" WHAT DO U WANT TO DO ?\n");
                printf("A- KNOW FACTS ABOUT ME ? \n");
                printf("B- LESS CHECK MY SCORPION PERCENTAGE\n");
                printf("C-IMMA GO DO SOMETHING MORE INTERESTING\n");
                char k;
                scanf(" %c", &k);
                _getch();
                system("cls");
                if (k == 'A' || k == 'a')
                {
                    printf("  YOU WANNA KNOW FACTS ABOUT U ?\n");
                    printf(" ************************************************\n");
                    printf(" |LUCKY NUMBERS  | 9 ,18, 27                    |\n");
                    printf(" |SUITABLE COLORS| RED , BLUE,RUST              |\n");
                    printf(" |GOOD QUALITIES | LOYALTY, INTENSITY           |\n");
                    printf(" |BAD QUALITIES  | UNFORGIVABLE,CONTROLLING     |\n");
                    printf("*************************************************\n");
                }
                _getch();
                system("cls");                    if (k == 'b' || k == 'B')
                {

                    printf("LES CHECK YOUR SCORPIAN PERCENTAGE? GET READY!!!\n 1..\n 2..\n 3...\n GO");
                    for (u = 1; u <= 5; u++)
                    {
                        if (u == 1)
                        {
                            printf("YOU just came across a mysterious incident in your locality What would you possibly do ?\n");
                            printf("A-Investigate about the scene\n");
                            printf("B-why do you think I care? \n");
                            printf("C-Was I the murderer??\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");
                            if (d == 'A')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 2)
                        {
                            printf("You are sitting among a group of people and you dont like one of them WHAT WOULD YOU DO??\n");
                            printf("A--IGNORE THE PERSON\n");
                            printf("B- BE BLUNT AND TELL HIM \n");
                            printf("C-I wont sit with the group\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");
                            if ((d == 'B') || (d == 'b'))
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 3)
                        {
                            printf("YOU ARE ALL ALONE FOR THE WEEKEND \n WHAT ARE YOU MOST INTERESTED IN DOING ?\n");
                            printf("A-Reading some detective novel\n");
                            printf("B-Going out and partying\n");
                            printf("C-Just being wraped up in my blanket imagining a hypothetical situation\n");
                            printf("D-ughh.. I am never alone\n");
                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'C' || d == 'c')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 4)
                        {
                            printf(" WHO DO YOU THINK YOU GET ALONG WITH. GO ON AND CHOOSE \n");
                            printf("A- Virgo, Capricorn\n");
                            printf("B- Libra, Scorpio\n");
                            printf("C-Taurus, Aquarius\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 5)
                        {
                            printf("The bottles on you and you got to choose t or d? what would you do?\n");
                            printf("A-OFC TAKING THE DARE\n");
                            printf("B-I PREFER TO SPILL THE TRUTH \n");
                            printf("BUT WHY?? T AND D IS CHILD'S PLAY\n");

                            char d;
                            scanf(" %c", &d);

                            _getch();
                            system("cls");
                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                            _getch();
                            system("cls");
                            int percentage;
                            percentage = (t / 5.0) * 100;
                            int rr = 6;
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rr);
                            printf(" yeahh YOU ARE %d percent SCORPION \n", percentage, rr);
                            _getch();
                            system("cls");
                        }
                    }
                }
                if (k == 'C' || k == 'c')
                    break;
            }
        }

        else if ((a >= 21 && b == 3) || (a <= 19 && b == 4))
        {
            int z;
            for (z = 1; z>0; z++)
            {
                printf(" %s ,YOUR sign is ARIES \n", name);
                printf(" WHAT DO U WANT TO DO ?\n");
                printf("A- KNOW FACTS ABOUT ME ? \n");
                printf("B- LESS CHECK MY ARIEN PERCENTAGE\n");
                printf("C-IMMA GO DO SOMETHING MORE INTERESTING\n");
                char k;
                scanf(" %c", &k);
                _getch();
                system("cls");
                if (k == 'A' || k == 'a')
                {
                    printf("  YOU WANNA KNOW FACTS ABOUT U ?\n");
                    printf(" **************************************\n");
                    printf(" |LUCKY NUMBERS  | 2 ,8, 12            |\n");
                    printf(" |SUITABLE COLORS| GREY , YELLOW       |\n");
                    printf(" |GOOD QUALITIES | LOYAL , RESPECTFUL  |\n");
                    printf(" |BAD QUALITIES  | LOUD,BOSSY,TAUNTING |\n");
                    printf("***************************************\n");
                }
                if (k == 'b' || k == 'B')
                {
                    for (u = 1; u <= 5; u++)

                    {
                        if (u == 1)
                        {
                            printf("You are trying to solve a math question for hours, what would be your rection?\n");
                            printf("A-Throw your book against the wall\n");
                            printf("B-keep trying until you get the right answer\n");
                            printf("C-Really? Do you think i'll waste HOURS on a math question?\n");
                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");
                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 2)
                        {
                            printf("Your squad has gone for cruising, and you see a girl drowning. What would you do?\n");
                            printf("A-Jump in the ocean to help the poor soul without giving a second thought.\n");
                            printf("B-Start recording the situation\n");
                            printf("C-Wait for someone else to help her.\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");
                            if ((d == 'A') || (d == 'a'))
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 3)
                        {
                            printf("One of your classmate asked a doubt related to your assignment,that you knew how to solve, in a whatsapp group\n");
                            printf("A-Act like you dont exist and ignore the message thinking that he'll get more marks than you.\n");
                            printf("B-Be a good human and help the poor soul.\n");
                            printf("C-Ignore the message thinking that someone else will help him out.\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 4)
                        {
                            printf(" WHO DO YOU THINK YOU GET ALONG WITH. GO ON AND CHOOSE \n");
                            printf("A- Gemini, Leo, Sagittarius\n");
                            printf("B- Cancer , Capricorn\n");
                            printf("C-Taurus, Pisces\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 5)
                        {
                            printf("Someone cuts you off in traffic, how would you react?\n");
                            printf("A-Start getting angry and chase the car\n");
                            printf("B-Act cool and think that he must be in a hurry.\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                            _getch();
                            system("cls");
                            int percentage;
                            percentage = (t / 5.0) * 100;
                            int pp = 3;
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pp);
                            printf(" yeahh YOU ARE %d percent ARIEN", percentage, pp);
                            _getch();
                            system("cls");
                        }
                    }
                }
                if (k == 'C' || k == 'c')
                    break;
            }
        }

        else if ((a >= 20 && b == 4) || (a <= 20 && b == 5))
        {
            int z;
            for (z = 1; z>0; z++)
            {
                printf(" %s ,YOUR sign is TAURUS\n", name);
                printf(" WHAT DO U WANT TO DO ?\n");
                printf("A- KNOW FACTS ABOUT ME ? \n");
                printf("B- LESS CHECK MY TAURUSIAN PERCENTAGE\n");
                printf("C-IMMA DO SOMETHING MORE INTERESTING\n");
                char k;
                scanf(" %c", &k);
                _getch();
                system("cls");
                if (k == 'A' || k == 'a')
                {
                    printf("  YOU WANNA KNOW FACTS ABOUT U ?\n");
                    printf(" ****************************************\n");
                    printf(" |LUCKY NUMBERS  | 6 ,15, 24             |\n");
                    printf(" |SUITABLE COLORS| BLUE , GREEN,PINK     |\n");
                    printf(" |GOOD QUALITIES | LOYAL ,ARTISTIC,STABLE|\n");
                    printf(" |BAD QUALITIES  | LAZY,LIMITED OUTLOOK  |\n");
                    printf("*****************************************\n");
                }
                _getch();
                system("cls");
                if (k == 'b' || k == 'B')
                {
                    for (u = 1; u <= 5; u++)
                    {
                        if (u == 1)
                        {
                            printf("It's 1am when you realised your mobile was on 10% and you are on your bed getting cozy ,ready to take your precious night sleep, what would you do in such devastating situation?\n");
                            printf("A-just like another normal human being I would jump out of my bed and plug in the charger\n");
                            printf("B-sleep>>>>>charging your phone\n");
                            printf("C-HAAA HAWNNNNN\n");
                            printf("D-Really? why do you think i spent dollars on powerbank?\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");
                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 2)
                        {
                            printf("There is a friend of yours in your squad which is strongly disliked by your parents,its his birthday party, whacha gonna do?\n");
                            printf("A-Be a good boy/girl and try to convince your parents\n");
                            printf("B-Keep eating their brains until they gave you permission else Sneak out\n");
                            printf("C-lie about it.\n");
                            printf("D-FRIENDS? No pal, I dont have any friends. I need new friends(Hello darkness my old friend)\n");
                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if ((d == 'B') || (d == 'b'))
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 3)
                        {
                            printf("You are trying to solve a math question for hours, what would be your rection?\n");
                            printf("A-Throw your book against the wall\n");
                            printf("B-keep trying til you get the right answer\n");
                            printf("C-Really? Do you think i'll waste HOURS on math?\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 4)
                        {
                            printf("WHO DO YOU THINK YOU GET ALONG WITH. GO ON AND CHOOSE \n");
                            printf("A- Virgo ,Cancer, Capricorn\n");
                            printf("B- Libra, Sagittarius\n");
                            printf("C-Leo, Aquarius,Scorpio\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 5)
                        {
                            printf("You have an assignment due next week (can related?), what would you do?\n");
                            printf("A-Try to complete it before the due date\n");
                            printf("B-Keep procastinating\n");
                            printf("C-Borrow an assignment of a classmate just before an hour before the due date and just COPY\n");

                            char d;
                            scanf(" %c", &d);

                            _getch();
                            system("cls");
                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                            _getch();
                            system("cls");
                            int percentage;
                            percentage = (t / 5.0) * 100;
                            printf(" yeahh YOU ARE %d percent ARIEN", percentage);
                        }
                    }
                }if (k == 'C' || k == 'c')
                    break;
            }
        }

        else if ((a >= 21 && b == 5) || (a <= 20 && b == 6))
        {
            int z;
            for (z = 1; z>0; z++)
            {
                printf(" %s ,YOUR sign is GEMINI\n", name);
                printf(" WHAT DO U WANT TO DO ?\n");
                printf("A- KNOW FACTS ABOUT ME ? \n");
                printf("B- LESS CHECK MY GEMINI PERCENTAGE\n");
                printf("C-IMMA DO SOMETHING MORE INTERESTING\n");
                char k;
                scanf(" %c", &k);
                _getch();
                system("cls");
                if (k == 'A' || k == 'a')
                {
                    printf("  YOU WANNA KNOW FACTS ABOUT U ?\n");
                    printf(" ****************************************\n");
                    printf(" |LUCKY NUMBERS  | 5 ,14, 23            |\n");
                    printf(" |SUITABLE COLORS| PALE BLUE ,PINK      |\n");
                    printf(" |GOOD QUALITIES | BRILLIANCE ,WIT      |\n");
                    printf(" |BAD QUALITIES  | DUALITY,LAZY,UNTIDY  |\n");
                    printf("*****************************************\n");
                }
                _getch();
                system("cls");
                if (k == 'b' || k == 'B')
                {
                    printf("LES CHECK YOUR GEMINI PERCENTAGE? GET READY!!! 1..\n 2..\n 3...\n GO");
                    for (u = 1; u <= 5; u++)
                    {
                        if (u == 1)
                        {
                            printf("Turns out it was your mistake that your friends got into a fight,What would you do?\n");
                            printf("A-Be a good boy/girl and apologize to them, and clear out the misunderstanding\n");
                            printf("B-*GRABS POPCORN*\n");
                            printf("C-WHATT? ofc it wasn't my fault, are you in your right mind?\n");


                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'C' || d == 'c')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 2)
                        {
                            printf("Someone cuts you off in traffic, how would you react?\n");
                            printf("A-Chase the car, get on his face and start cursing \n");
                            printf("B-Let him be\n");
                            printf("C-My poor soul doesnt own a car :(\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if ((d == 'A') || (d == 'a'))
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 3)
                        {
                            printf("Your fellow is bad at doing makeup ,she ends up looking like a witch on her birthday\n");
                            printf("A- OFC.. Ask her to wash her the second you look at her!!!\n");
                            printf("B-who cares?\n");
                            printf("C-FRIENDS? No pal, I dont have any friends. I need new friends(Hello darkness my old friend)\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");


                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 4)
                        {
                            printf(" WHO DO YOU THINK YOU GET ALONG WITH. GO ON AND CHOOSE \n");
                            printf("A- Aries, Leo ,Libra\n");
                            printf("B- Virgo, Sagittarius, Pisces\n");
                            printf("C-Cancer,Taurus, Virgo\n");

                            char d;
                            scanf(" %c", &d);

                            _getch();
                            system("cls");
                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 5)
                        {
                            printf("It's 1am when you realised your mobile was on 10% and you are on your bed getting cozy ,ready to take your precious night sleep, what would you do in such devastating situation?\n");
                            printf("A-just like another normal human being I would jump out of my bed and plug in the charger\n");
                            printf("B-sleep>>>>>charging your phone\n");
                            printf("C-HAAA HAWNNNNN\n");
                            printf("D-Really? why do you think i spent dollars on powerbank?\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                            int percentage;
                            percentage = (t / 5.0) * 100;
                            _getch();
                            system("cls");
                            printf(" yeahh YOU ARE %d percent GEMINI\n", percentage);
                        }

                    }

                }
                if (k == 'C' || k == 'c')
                    break;
            }
        }


        else if ((a >= 21 && b == 6) || (a <= 22 && b == 7))
        {
            int z;
            for (z = 1; z>0; z++)
            {
                printf(" %s ,YOUR sign is CANCER\n", name);
                printf(" WHAT DO U WANT TO DO ?\n");
                printf("A- KNOW FACTS ABOUT ME ? \n");
                printf("B- LESS CHECK MY CANCERIAN PERCENTAGE\n");
                printf("C-IMMA DO SOMETHING MORE INTERESTING\n");
                char k;
                scanf(" %c", &k);
                _getch();
                system("cls");
                if (k == 'A' || k == 'a')
                {
                    printf("  YOU WANNA KNOW FACTS ABOUT U ?\n");
                    printf(" ****************************************\n");
                    printf(" |LUCKY NUMBERS  | 2 ,7, 11             |\n");
                    printf(" |SUITABLE COLORS| ORANGE , WHITE       |\n");
                    printf(" |GOOD QUALITIES | LOYAL , PATRIOTIC    |\n");
                    printf(" |BAD QUALITIES  | INSECURE,PESSIMISM   |\n");
                    printf("*****************************************\n");
                }
                _getch();
                system("cls");
                if (k == 'b' || k == 'B')
                {
                    printf("LES CHECK YOUR CANCER PERCENTAGE? GET READY!!! 1..\n 2..\n 3...\n GO");
                    for (u = 1; u <= 5; u++)
                    {
                        if (u == 1)
                        {
                            printf("You got your lca oht marks, and alas they are below average AGAIN!, what would be your reaction?\n");
                            printf("A-Who cares?\n");
                            printf("B-Pity for your poor soul and think why are you still ALIVE!\n");
                            printf("C-HAAA HAWNNNNN\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");
                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 2)
                        {
                            printf("Your parents are scolding you FOR SOME REASON.What would be your rection?\n");
                            printf("A-AHHHH just another normal day, listen from one ear and out the other.\n");
                            printf("B-Starts crying like a cry baby.");
                            printf("C-Try not repeating the mistake because of which i am getting scolded at.\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");
                            if ((d == 'B') || (d == 'b'))
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 3)
                        {
                            printf("Your exams are just around the corner,whatcha gonna do?\n");
                            printf("A-who cares?\n");
                            printf("B-I know i am gonna fail! Lemme go and cry in some corner.\n");
                            printf("C-Try studying hard and ace it!\n");
                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 4)
                        {
                            printf("WHO DO YOU THINK YOU GET ALONG WITH. GO ON AND CHOOSE\n ");
                            printf("A- Aquarius, Virgo, Capricorn\n");
                            printf("B- Libra, Aries, Leo\n");
                            printf("C-Taurus, Virgo, Scorpio\n");
                            char d;
                            scanf("%c", &d);
                            _getch();
                            system("cls");
                            if (d == 'C' || d == 'c')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 5)
                        {
                            printf("A person fell on his face right infront of you,whatcha gonna do?\n");
                            printf("A-HELP THE POOR SOUL!");
                            printf("B-Act like you just didnt watch him fall right infront of you.\n");
                            printf("C-LOL!\n");
                            printf("D-Run away from the situation!\n");


                            char d;
                            scanf("%c", &d);
                            _getch();
                            system("cls");

                            if ((d == 'C') || (d == 'c'))
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                            int percentage;
                            percentage = (t / 5.0) * 100;
                            printf(" yeahh YOU ARE %d percent CANCERIAN\n", percentage);
                            _getch();
                            system("cls");
                        }

                    }

                }
                if (k == 'C' || k == 'c')
                    break;
            }
        }
        else if ((a >= 23 && b == 7) || (a <= 22 && b == 8))
        {
            int z;
            for (z = 1; z>0; z++)
            {
                printf(" %s ,YOUR sign is LEO\n", name);
                printf(" WHAT DO U WANT TO DO ?\n");
                printf("A- KNOW FACTS ABOUT ME ? \n");
                printf("B- LESS CHECK MY LEO PERCENTAGE\n");
                printf("C-IMMA DO SOMETHING MORE INTERESTING\n");
                char k;
                scanf(" %c", &k);
                _getch();
                system("cls");
                if (k == 'A' || k == 'a')
                {
                    printf("  YOU WANNA KNOW FACTS ABOUT U ?\n");
                    printf(" ****************************************\n");
                    printf(" |LUCKY NUMBERS  | 1 ,4, 10             |\n");
                    printf(" |SUITABLE COLORS| ORANGE , WHITE       |\n");
                    printf(" |GOOD QUALITIES | DIGNITY ,OPTIMISM    |\n");
                    printf(" |BAD QUALITIES  | IMPATIENCE, ARROGANCE|\n");
                    printf("*****************************************\n");
                }
                _getch();
                system("cls");
                if (k == 'b' || k == 'B')
                {

                    printf("LES CHECK YOUR LEO PERCENTAGE? GET READY!!! \n1..\n 2..\n 3...\n GO");
                    for (u = 1; u <= 5; u++)
                    {
                        if (u == 1)
                        {
                            printf("Where do you see yourself in 5 years?\n");
                            printf("A-Nah man!I haven't even planned what i'll be doing tomorrow\n");
                            printf("B-prolly signing contracts with other business dealers while having tea in my office(LIKE A BOSS)\n");
                            printf("C-Still trying to complete my degree\n");
                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");
                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 2)
                        {
                            printf("Turns out it was your mistake that your friends got into a fight,What would you do?\n");
                            printf("A-Be a good boy/girl and apologize to them, and clear out the misunderstanding\n");
                            printf("B-*GRABS POPCORN*\n");
                            printf("C-WHATT? ofc it wasn't my fault, are you in your right mind?\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if ((d == 'A') || (d == 'a'))
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 3)
                        {
                            printf("It'a a busy morning and you see a stray cat dying of hunger, What will you do?\n");
                            printf("A-Help the poor soul by giving it any edible stuff you have at that moment.\n");
                            printf("B-Ignore, just another normal day.\n");
                            printf("C-RIP, cat\n");
                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 4)
                        {
                            printf("WHO DO YOU THINK YOU GET ALONG WITH. GO ON AND CHOOSE \n");
                            printf("A- Pisces, Cancer, Sagittarius\n");
                            printf("B- Libra, Aries, Gemini\n");
                            printf("C-Taurus, Virgo, Scorpio\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 5)
                        {
                            printf("HURRAY! You got an appointment letter from two companies, one from your own preference and the other one offering you a huge amount of money, what would be your choice?\n");
                            printf("A-OFC. The job according to my own talents I have been waiting for such a job my whole life  own preference\n");
                            printf("B- OFC The one offering a huge amount of money. Who doesn't wanna become a millionaire\n");
                            printf("C-I am not that talented enough to get two jobs\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                            int percentage;
                            percentage = (t / 5.0) * 100;
                            printf(" yeahh YOU ARE %d percent Leo \n", percentage);
                            _getch();
                            system("cls");
                        }

                    }

                }
                if (k == 'C' || k == 'c')
                    break;
            }
        }
        else if ((a >= 23 && b == 8) || (a <= 22 && b == 9))
        {

            int z;
            for (z = 1; z>0; z++)
            {
                printf(" %s ,YOUR sign is VIRGO\n", name);
                printf(" WHAT DO U WANT TO DO ?\n");
                printf("A- KNOW FACTS ABOUT ME ? \n");
                printf("B- LESS CHECK MY VIRGO PERCENTAGE \n");
                printf("C-IMMA DO SOMETHING MORE INTERESTING\n");
                char k;
                scanf(" %c", &k);
                _getch();
                system("cls");
                if (k == 'A' || k == 'a')
                {
                    printf("  YOU WANNA KNOW FACTS ABOUT U ?\n");
                    printf(" ****************************************\n");
                    printf(" |LUCKY NUMBERS  | 5 ,14, 23             |\n");
                    printf(" |SUITABLE COLORS| ORANGE , GREY,YELLOW  |\n");
                    printf(" |GOOD QUALITIES | INTELLIGENT,ELEGANT   |\n");
                    printf(" |BAD QUALITIES  | CRITICAL,AGGRESSIVE   |\n");
                    printf("*****************************************\n");
                }
                _getch();
                system("cls");
                if (k == 'b' || k == 'B')
                {
                    printf("LES CHECK YOUR VIRGO PERCENTAGE? GET READY!!! 1..\n 2..\n 3...\n GO");
                    for (u = 1; u <= 5; u++)
                    {
                        if (u == 1)
                        {
                            printf("Tom cruise's new movie just came out,and you watched it with your friends in  cinema and it didn't reach your expectation.Your reaction would be?\n");
                            printf("A-FRIENDS? No pal, I dont have any friends. I need new friends(Hello darkness my old friend)\n");
                            printf("B-Who cares when you have popcorns in your hands\n");
                            printf("C-Tom cruise? Man he is dang overrated!\n");
                            printf("D-Walk out of the cinema in between the movie,while critising the makers\n");
                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'D' || d == 'd')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 2)
                        {
                            printf("There is a friend of yours in your squad which is strongly disliked by your parents,its his birthday party, whacha gonna do?\n");
                            printf("A-Be a good boy/girl and try to convince your parents\n");
                            printf("B-Keep eating their brains until they gave you permission else Sneak out\n");
                            printf("C-lie about it.\n");


                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if ((d == 'B') || (d == 'b'))
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 3)
                        {
                            printf("Your sibling baked a cake for you to make up after a conflict you guys had.What would you do?\n");
                            printf("A-Who the heck would eat that cake, when you know that she/he can't bake properly\n");
                            printf("B-Be super happy, and forgive the poor soul  *WIPES OFF THE FAKE TEARS*  \n");
                            printf("C-bAkE a cAkE fOR YoU? News flash:Thats never gonna happen in a million year!.. Duh\n");
                            char d;
                            scanf(" %c", &d);

                            _getch();
                            system("cls");
                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 4)
                        {
                            printf("WHO DO YOU THINK YOU GET ALONG WITH. GO ON AND CHOOSE \n");
                            printf("A- Aries, Leo, Pisces\n");
                            printf("B- Aquarius, Sagittarius, Gemini\n");
                            printf("C-Taurus, Cancer, Scorpio\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'C' || d == 'c')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 5)
                        {
                            printf("You are trying to solve a math question for hours, what would be your rection?\n");
                            printf("A-Throw your book against the wall\n");
                            printf("B-keep trying til you get the right answer\n");
                            printf("C-Really? Do you think i'll waste HOURS on a math question?\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;

                            int percentage;
                            percentage = (t / 5.0) * 100;
                            _getch();
                            system("cls");
                            printf(" yeahh YOU ARE %d percent VIRGO \n", percentage);
                        }

                    }

                }
                if (k == 'C' || k == 'c')
                    break;
            }
        }
        else if ((a >= 23 && b == 9) || (a <= 22 && b == 10))
        {

            int z;
            for (z = 1; z>0; z++)
            {
                printf(" %s ,YOUR sign is LIBRA \n", name);
                printf(" WHAT DO U WANT TO DO ?\n");
                printf("A- KNOW FACTS ABOUT ME ? \n");
                printf("B- LESS CHECK MY LIBRAN PERCENTAGE\n");
                printf("C-IMMA DO SOMETHING MORE INTERESTING\n");
                char k;
                scanf(" %c", &k);
                _getch();
                system("cls");
                if (k == 'A' || k == 'a')
                {
                    printf("  YOU WANNA KNOW FACTS ABOUT U ?\n");
                    printf(" ****************************************\n");
                    printf(" |LUCKY NUMBERS  | 6 ,15, 24             |\n");
                    printf(" |SUITABLE COLORS| BLUE , GREEN          |\n");
                    printf(" |GOOD QUALITIES | ALERT,CHARMING        |\n");
                    printf(" |BAD QUALITIES  | DETACH,INSECURE       |\n");
                    printf("*****************************************\n");
                }
                _getch();
                system("cls");
                if (k == 'b' || k == 'B')
                {


                    printf("LES CHECK YOUR LIBRA PERCENTAGE? GET READY!!! 1..\n 2..\n 3...\n GO");
                    for (u = 1; u <= 5; u++)
                    {
                        if (u == 1)
                        {
                            printf("It's 1am when you realised your mobile was on 10% and you are on your bed getting cozy ,ready to take your precious night sleep, what would you do in such devastating situation?\n ");
                            printf("A-just like another normal human being I would jump out of my bed and plug in the charger\n");
                            printf("B-sleep>>>>>charging your phone\n");
                            printf("C-HAAA HAWNNNNN\n");
                            printf("D-Really? why do you think i spent dollars on powerbank?\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");
                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 2)
                        {
                            printf("You think you are about lose your mind due to alot of things going on at the same time. What will be the next step you'll take?\n");
                            printf("A-Dont share with anyone, cry in some corner and keep suffering like a poor soul you are :( \n");
                            printf("B-Share your situation with one of your mate, and be ready for a PEP TALK! (MEANWHILE c3a be like: AM I A JOKE TO YOU?)\n");
                            printf("C-Start living in denial by acting as if none of it is actually happening\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if ((d == 'A') || (d == 'a'))
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 3)
                        {
                            printf("You have both your exams and a farewell party in the coming week, what will you choose?\n");
                            printf("A-OFCOURSE, the farewell party, who cares about the exams. PARTY>EXAMS! duhhh\n");
                            printf("B-OFCOURSE,exams. Exams and My Grades: Are we a joke to you?.\n");
                            printf("C-Will be in a delimma and wont be able to decide,will let someone else to decide for me.\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'C' || d == 'c')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 4)
                        {
                            printf("WHO DO YOU THINK YOU GET ALONG WITH. GO ON AND CHOOSE \n");
                            printf("A- Cancer, Capricorn, Virgo\n");
                            printf("B- Gemini, Leo ,Aquarius\n");
                            printf("C-Scorpio,Taurus,Aries\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;

                        }
                        if (u == 5)
                        {
                            printf("You get to know, your friends have some surprise planned for your birthday tomorrow, How you gonna react?\n");
                            printf("A-Doesn't really gives a dang about it\n");
                            printf("B-My friends probably doesn't even remember my poor soul's birthday\n");
                            printf("C-Blackmail one of your friend to disclose every detail of the plan\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                            int percentage;
                            percentage = (t / 5.0) * 100;
                            printf(" yeahh YOU ARE %d percent Libra\n", percentage);
                            _getch();
                            system("cls");
                        }

                    }

                }
                if (k == 'C' || k == 'c')
                    break;
            }
        }
        else if ((a >= 22 && b == 11) || (a <= 21 && b == 12))
        {

            int z;
            for (z = 1; z>0; z++)
            {
                printf(" %s ,YOUR sign is SAGGITARIUS\n", name);
                printf(" WHAT DO U WANT TO DO ?\n");
                printf("A- KNOW FACTS ABOUT ME ? \n");
                printf("B- LESS CHECK MY SAGGITARIUN PERCENTAGE\n");
                printf("C-IMMA DO SOMETHING MORE INTERESTING\n");
                char k;
                scanf(" %c", &k);
                _getch();
                system("cls");
                if (k == 'A' || k == 'a')
                {
                    printf("  YOU WANNA KNOW FACTS ABOUT U ?\n");
                    printf(" ******************************************\n");
                    printf(" |LUCKY NUMBERS  | 3 ,21, 12              |\n");
                    printf(" |SUITABLE COLORS| PURPLE , VIOLET        |\n");
                    printf(" |GOOD QUALITIES | FRANK , SELF DEPENDENT |\n");
                    printf(" |BAD QUALITIES  | LACK OF FOCUS,CONFIDENT|\n");
                    printf("*******************************************\n");
                }
                _getch();
                system("cls");
                if (k == 'b' || k == 'B')
                {
                    printf("LES CHECK YOUR SAGITTARIUS PERCENTAGE? GET READY!!!\n 1..\n 2..\n 3...\n GO");
                    for (u = 1; u <= 5; u++)
                    {
                        if (u == 1)
                        {
                            printf("Your fellow is bad at doing makeup ,she ends up looking like a witch on her birthday!, What would you have done in such an embarrassing situation?\n");
                            printf("A- OFC.. Ask her to wash her the second you look at her!!!\n");
                            printf("B-who cares?\n");
                            printf("C-FRIENDS? No pal, I dont have any friends. I need new friends(Hello darkness my old friend)\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");
                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 2)
                        {
                            printf("You get to know that the stray cat who used to come everyday at your door step in search of food, got runover the recent night, How would you react?\n");
                            printf("A-Start crying the second you heard about it.\n");
                            printf("B-Act normal cause who cares?\n");
                            printf("C-Starts to look for your non-existant gun to shoot the driver who ran over the poor soul, HOW DARE HE?.\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if ((d == 'B') || (d == 'b'))
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 3)
                        {
                            printf("Your sir tells you a day before that you'll be having a quiz, whatcha gonna do about it?\n");
                            printf("A-Try to solve every exercise of that topic :/ (RIP)\n");
                            printf("B-Starts panicking\n");
                            printf("C-AHH,I know i am gonna ACE it cause i did listen to the lectures!\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'C' || d == 'c')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 4)
                        {
                            printf(" WHO DO YOU THINK YOU GET ALONG WITH. GO ON AND CHOOSE \n");
                            printf("A- Gemini, Cancer ,Capricorn\n");
                            printf("B- Pisces, Taurus, Virgo\n");
                            printf("C-Libra,Leo,Aries\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'C' || d == 'c')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 5)
                        {
                            printf("You and your friend are super hungry,all cafe's are closed, and you only have a half-sandwich in your bag.What would you do?\n");
                            printf("A-Lie to him/her that you dont have anything with yourself,run to the washroom and the sand-wich all by yourself.\n");
                            printf("B-Lie to your friend that you aren't hungry and give the poor soul the sand-wich.\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                            int percentage;
                            percentage = (t / 5.0) * 100;

                            printf(" yeahh YOU ARE %d percent SAGGITARIAN \n", percentage);
                            _getch();
                            system("cls");
                        }

                    }

                }
                if (k == 'C' || k == 'c')
                    break;
            }
        }
        else
        {
            int z;
            for (z = 1; z>0; z++)
            {
                printf(" %s ,YOUR sign is CAPRICORN \n", name);
                printf(" WHAT DO U WANT TO DO ?\n");
                printf("A- KNOW FACTS ABOUT ME ? \n");
                printf("B- LESS CHECK MY CAPRICORNIAN PERCENTAGE\n");
                printf("C-IMMA DO SOMETHING MORE INTERESTING\n");
                char k;
                scanf(" %c", &k);
                _getch();
                system("cls");
                if (k == 'A' || k == 'a')
                {
                    printf("  YOU WANNA KNOW FACTS ABOUT U ?\n");
                    printf(" ****************************************\n");
                    printf(" |LUCKY NUMBERS  | 1 ,4, 8,10           |\n");
                    printf(" |SUITABLE COLORS| BROWN , GREY         |\n");
                    printf(" |GOOD QUALITIES | AMBITIOUS ,FAITHFUL  |\n");
                    printf(" |BAD QUALITIES  | SHY, AWKWARD,GLOOMY  |\n");
                    printf("*****************************************\n");
                }
                _getch();
                system("cls");
                if (k == 'B' || k == 'b')
                {
                    printf("LES CHECK YOUR CAPRICORN PERCENTAGE? GET READY!!!\n 1..\n 2..\n 3...\n GO");
                    for (u = 1; u <= 5; u++)
                    {
                        if (u == 1)
                        {
                            printf("Your ESE's are just around the corner,whatcha gonna do?\n");
                            printf("A-who cares?\n");
                            printf("B-I know i am gonna fail! Lemme go and cry in some corner.\n");
                            printf("C-Try studying hard and ace it!\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");
                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 2)
                        {
                            printf("There is a friend of yours in your squad which is strongly disliked by your parents,its his birthday party, whacha gonna do?\n");
                            printf("A-Be a good boy/girl and try to convince your parents\n");
                            printf("B-Keep eating their brains until they gave you permission else Sneak out\n");
                            printf("C-lie about it.\n");
                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");
                            if ((d == 'B') || (d == 'b'))
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 3)
                        {
                            printf("You think you are about lose your mind due to alot of things going on at the same time. What will be the next step you'll take?\n");
                            printf("A-Dont share with anyone, cry in some corner and keep suffering like a poor soul you are :( \n");
                            printf("B-Share your situation with one of your mate, and be ready for a PEP TALK! (MEANWHILE c3a be like: AM I A JOKE TO YOU?)\n");
                            printf("C-Start living in denial by acting as if none of it is actually happening\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'A' || d == 'a')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 4)
                        {
                            printf("WHO DO YOU THINK YOU GET ALONG WITH. GO ON AND CHOOSE \n ");
                            printf("A- Sagittarius, Aquarius ,Pisces\n");
                            printf("B- Scorpio, Taurus, Virgo\n");
                            printf("C-Libra,Gemini,Aries\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                        }
                        if (u == 5)
                        {
                            printf("You are trying to solve a math question for hours, what would be your rection?\n");
                            printf("A-Throw your book against the wall\n");
                            printf("B-keep trying til you get the right answer\n");
                            printf("C-Really? Do you think i'll waste HOURS on a math question?\n");

                            char d;
                            scanf(" %c", &d);
                            _getch();
                            system("cls");

                            if (d == 'B' || d == 'b')
                            {
                                n = 1;
                            }
                            else
                            {
                                n = 0;
                            }
                            t += n;
                            int percentage;
                            percentage = (t / 5.0) * 100;
                            _getch();
                            system("cls");
                            printf(" yeahh YOU ARE %d percent Capricon \n", percentage);
                        }

                    }

                }
                if (k == 'C' || k == 'c')
                    break;
            }
        }

        printf("DO YOU WANT TO ENTER A NEW BIRTHDAY PRESS 1 FOR YES OR 0 FOR NO");
        int g;
        scanf_s("%d", &g);
        if (g == 0)

            break;


    }
    int i = 2;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
    printf(" Bye Have a nice day!", 2);
}
