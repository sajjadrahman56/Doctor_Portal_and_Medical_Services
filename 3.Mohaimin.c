void Hos_to_home();
void Popular_hospital1();
void Ibna_Sina_Hospital1();
void Oasis_Hospital1();
void Sylhet_MAG_Osmani_Medical_Hospital1();
void Trust_Medical_Hospital1();
void Al_Haramine_Hospital1();
void Park_View_Medical_Hospital1();
void Womens_Medical_College_Hospital1();
void Noorjahan_Hospital1();
void Ragib_Ali_Medical_College_and_Hospital1();
void Mount_Adora_Hospital1();
void home_to_hos();
void modinamarket();
void zindabazar();
void bondor_bazar();
void ambarkhana();
void kajolshah();
void subidbazar();
void noyasharak();
void tilagor();
void dakshinsurma();
void part4_menu();

void main()
{
    part4_menu();
}

void part4_menu()
{
    gotoxy(0,7);
    int amb,i;
    printf("\n\n\n\t\t\t1.A M B U L A N C E     S E R V I C E  \n");
    printf("\n\n\t\t\t1. Hospital to Home");

    printf("\n\n\t\t\t2. Home to Hospital\n");
    printf("\n\t\t\tChoice Option :  ");

    for(i=1; scanf("%d", &amb)>0; i++)
    {
        if(amb == 1)
        {
            system("cls");
            gotoxy(0,6);

            Hos_to_home();
        }
        else if(amb == 2)
        {
            system("cls");
            gotoxy(0,6);
            home_to_hos();
        }
        else
        {
            printf("\n\t\t\tWorng Choice !!!");

        }

        printf("\n\t\t\t'0' for back: ");
        //printf("\n\t\tCheck for another: ");
    }
}
void Hos_to_home()
{
    int hos;
    printf("\t\tSelect The Hospital name you want to get your service\n\n\n\n\t\t1. Popular Medical Centre and Hospital\n\n\t\t2. Ibn Sina Hospital\n\n\t\t3. Oasis Hospital\n\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\n\t\t5. Trust Medical Hospital\n\n\t\t6. Al Haramain Hospital\n\n\t\t7. Park View Medical College Hospital\n\n\t\t8. Womens Medical College and Hospital\n\n\t\t9. Noorjahan Hospital\n\n\t\t10. Jalalabad Ragib-Rabeya Medical College and Hospital\n\n\t\t11. Mount Adora Hospital\n\n");
    printf("\n\t\t'0' for back . ");
    printf("\n\t\tChoice Option : ");
   // scanf("%d", &hos);
    for( int i= 1; scanf("%d", &hos)>= 0; i++)
    {
        if(hos == 1)
        {
            Popular_hospital1();
        }
        else if(hos == 2)
        {
            Ibna_Sina_Hospital1();
        }
        else if(hos == 3)
        {
            Oasis_Hospital1();
        }
        else if(hos == 4)
        {
            Sylhet_MAG_Osmani_Medical_Hospital1();
        }
        else if(hos == 5)
        {
            Trust_Medical_Hospital1();
        }
        else if(hos == 6)
        {
            Al_Haramine_Hospital1();
        }
        else if(hos == 7)
        {
            Park_View_Medical_Hospital1();
        }
        else if(hos == 8)
        {
            Womens_Medical_College_Hospital1();
        }
        else if(hos == 9)
        {
            Noorjahan_Hospital1();
        }
        else if(hos == 10)
        {
            Ragib_Ali_Medical_College_and_Hospital1();
        }
        else if(hos == 11)
        {
            Mount_Adora_Hospital1();
        }
        else if(hos == 0)
        {
            system("cls");
            part4_menu();
        }
        else
        {
            printf("\n\t\tWrong Choice");
        }

        printf("\n\t\t\t'0' for Back: ");
    }
}
void Popular_hospital1()
{
    system("cls");
    int l, p;
    int popu = 20;
    gotoxy(0,7);
    printf("\n\t\tThis is Popular Medical Centre and Hospital's ambulance service.\n");
    printf("\n\t\tIts services available from 8:00 AM to 11:00 PM everyday\n");
    printf("\n\t\tCall for Booking : 01715-084078\n");
    printf("\n\t\tAmbulance reserve charge- 2000 Tk\n");
    printf("\n\n\t\tSelect The Location you want to go:\n\n\t\t1. Modina Market\n\n\t\t2. Zindabazar \n\n\t\t3. Bondor Bazar\n\n\t\t4. Ambarkhana\n\n\t\t5. Kajolshah\n\n\t\t6. Subid Bazar\n\n\t\t7. Tilagor\n\n\t\t8. Dakshin Surma\n\n\t\t9. Noyasharak\n\n\t\t10. A specific distance from hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");

    //scanf("%d", &l);
     for( int i= 1;  scanf("%d", &l) > 0 ; i++)
    {
    if(l == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tPopular Medical Centre and Hospital to Modina market= 80 Tk\n\n");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");

        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Popular_hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Popular_hospital1();
            }
        }

    }
    else if(l == 2)
    {

        system("cls");
        gotoxy(0,7);

        printf("\n\t\tPopular Medical Centre and Hospital to Zindabazar= 25 Tk\n");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Popular_hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Popular_hospital1();
            }
        }
    }
    else if(l == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tPopular Medical Centre and Hospital to Bondor Bazar= 25 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Popular_hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Popular_hospital1();
            }
        }
    }
    else if(l == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tPopular Medical Centre and Hospital to Ambarkhana= 25 Tk\n");
        //printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");

        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Popular_hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Popular_hospital1();
            }
        }
    }
    else if(l == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tPopular Medical Centre and Hospital to KajolShah= 50 Tk\n");
        //printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Popular_hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Popular_hospital1();
            }
        }
    }
    else if(l == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tpopular Medical Centre and Hospital to Subid Bazar= 65 Tk\n");
        //printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Popular_hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Popular_hospital1();
            }
        }
    }
    else if(l == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tPopular Medical Centre and Hospital to Tilagor= 50 Tk\n");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Popular_hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Popular_hospital1();
            }
        }
    }
    else if(l == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tPopular Medical Centre and Hospital to Dakshin Surma= 250 Tk\n");
        //printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Popular_hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Popular_hospital1();
            }
        }
    }
    else if(l == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tPopular Medical Centre and Hospital to Noya Sharak = 25 Tk\n");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Popular_hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Popular_hospital1();
            }
        }
    }
    else if(l == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tEnter the distance from Popular Medical Centre and Hospital in k.m. : ");
        scanf("%d", &p);
        printf("\n\t\tThe transfer cost will be: %d", popu*p);
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Popular_hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Popular_hospital1();
            }
        }
    }
    else if(l == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }
     printf("\n\n\t\t'0' For Back :  ");
    }

}

void Ibna_Sina_Hospital1()
{
    system("cls");
    gotoxy(0,7);
    int i, s;
    int v = 20;
    printf("\n\t\tThis is Ibn Sina Hospital's ambulance service.\n");
    printf("\n\t\tIts service available 24 hours everyday.\n");
    printf("\n\t\tCall for Booking : 01938-865257\n");
    printf("\n\t\tAmbulance reserve charge- 2000 Tk\n");
    printf("\n\n\t\tSelect The Location you want to go:\n\n\t\t1. Modina Market\n\n\t\t2. Zindabazar \n\n\t\t3. Bondor Bazar\n\n\t\t4. Ambarkhana\n\n\t\t5. Kajolshah\n\n\t\t6. Subid Bazar\n\n\t\t7. Tilagor\n\n\t\t8. Dakshin Surma\n\n\t\t9. Noyasharak\n\n\t\t10. A specific distance from hospital\n\n\t\t'0' For Back . \n\n\t\tChoice Option : ");
   // scanf("%d", &i);
    for( int i= 1;  scanf("%d", &i) > 0 ; i++)
    {
    if(i == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tIbn Sina Hospital to Modina market= 65 Tk\n");
        //printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ibna_Sina_Hospital1();
            }
        }
    }
    else if(i == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tIbn Sina Hospital to Zindabazar= 15 Tk\n");
        //printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ibna_Sina_Hospital1();
            }
        }
    }
    else if(i == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tIbn Sina Hospital to Bondor Bazar= 15 Tk\n");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ibna_Sina_Hospital1();
            }
        }
    }
    else if(i == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tIbn Sina Hospital to Ambarkhana= 20 Tk\n");
        //printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ibna_Sina_Hospital1();
            }
        }
    }
    else if(i == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tIbn Sina Hospital to KajolShah= 20 Tk\n");
        //printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ibna_Sina_Hospital1();
            }
        }
    }
    else if(i == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tIbn Sina Hospital to Subid Bazar= 20 Tk\n");
        //printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ibna_Sina_Hospital1();
            }
        }
    }
    else if(i == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tIbn Sina Hospital to Tilagor= 50 Tk\n");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ibna_Sina_Hospital1();
            }
        }
    }
    else if(i == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tIbn Sina Hospital to Dakshin Surma= 260 Tk\n");
        //printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ibna_Sina_Hospital1();
            }
        }
    }
    else if(i == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tIbn Sina Hospital to Noya Sharak = Ambulance service aren't available since the distance is below 1 k.m.\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ibna_Sina_Hospital1();
            }
        }
    }
    else if(i == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tEnter the distance from Ibn Sina Hospital in k.m. : ");
        scanf("%d", &s);
        printf("\n\t\tThe transfer cost will be: %d", v*s);
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ibna_Sina_Hospital1();
            }
        }
    }
    else if(i == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }
    printf("\n\n\t\t'0'For Back : ");
    }
}

void Oasis_Hospital1()
{
    system("cls");
    gotoxy(0,7);
    int o, a;
    int v = 20;
    printf("\n\t\tThis is Oasis Hospital's ambulance service.\n");
    printf("\n\t\tIts service available 24 hours everyday.\n");
    printf("\n\t\tAmbulance reserve charge- 2200 Tk\n");

    printf("\n\n\t\tSelect The Location you want to go:\n\n\t\t1. Modina Market\n\n\t\t2. Zindabazar \n\n\t\t3. Bondor Bazar\n\n\t\t4. Ambarkhana\n\n\t\t5. Kajolshah\n\n\t\t6. Subid Bazar\n\n\t\t7. Tilagor\n\n\t\t8. Dakshin Surma\n\n\t\t9. Noyasharak\n\n\t\t10. A specific distance from hospital\n\n\t\t'0' For Back . \n\n\t\tChoice Option : ");
    //scanf("%d", &o);
     for( int i= 1;  scanf("%d", &o) > 0 ; i++)
    {
    if(o == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tOasis Hospital to Modina market= 40 Tk\n");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
        }
    }
    else if(o == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tOasis Hospital to Zindabazar= Ambulance service aren't available since the distance is below 1 k.m.\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\nEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
        }
    }
    else if(o == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tOasis Hospital to Bondor Bazar= Ambulance service aren't available since the distance is below 1 k.m.\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\nEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
        }
    }
    else if(o == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tOasis Hospital to Ambarkhana= 15 Tk\n");
        //printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
        }
    }
    else if(o == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tOasis Hospital to KajolShah= 20 Tk\n");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
        }
    }
    else if(o == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tOasis Hospital to Subid Bazar= 20 Tk\n");
        ///printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
        }
    }
    else if(o == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tOasis Hospital to Tilagor= 50 Tk\n");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
        }
    }
    else if(o == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tOasis Hospital to Dakshin Surma= 265 Tk\n");
        //printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
        }
    }
    else if(o == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tOasis Hospital to Noya Sharak = Ambulance service aren't available since the distance is below 1 k.m.\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
        }
    }
    else if(o == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tEnter the distance from Oasis Hospital in k.m. : ");
        scanf("%d", &a);
        printf("\n\t\tThe transfer cost will be: %d", v*a);
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            Ibna_Sina_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
        }
    }
    else if(o == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }
    printf("\n\n\t\t'0' For Back : ");
}
}

void Sylhet_MAG_Osmani_Medical_Hospital1()
{
    system("cls");
    gotoxy(0,7);
    int mag, o;
    int sm = 20;
    printf("\n\t\tThis is Sylhet MAG Osmani Medical College Hospital's ambulance service.\n");
    printf("\n\t\tIts service available 24 hours everyday.\n");
    printf("\n\t\tCall for Booking : 01715-084078\n");
    printf("\n\t\tAmbulance reserve- 1000 Tk\n");
    //printf("\n\t\tSelect The Location you want to go:\n\t\t1. Modina Market\n\t\t2. Zindabazar \n\t\t3. Bondor Bazar\n\t\t4. Ambarkhana\n\t\t5. Kajolshah\n\t\t6. Subid Bazar\n\t\t7. Tilagor\n\t\t8. Dakshin Surma\n\t\t9. Noyasharak\n\t\t10. A specific distance from hospital\n\n");
    printf("\n\n\t\tSelect The Location you want to go:\n\n\t\t1. Modina Market\n\n\t\t2. Zindabazar \n\n\t\t3. Bondor Bazar\n\n\t\t4. Ambarkhana\n\n\t\t5. Kajolshah\n\n\t\t6. Subid Bazar\n\n\t\t7. Tilagor\n\n\t\t8. Dakshin Surma\n\n\t\t9. Noyasharak\n\n\t\t10. A specific distance from hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");
    //scanf("%d", &mag);
 for(int i=1; scanf("%d", &mag)>0; i++)
    {
    if(mag == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tSylhet MAG Osmani Medical Hospital to Modina market= 20 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Sylhet_MAG_Osmani_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Sylhet_MAG_Osmani_Medical_Hospital1();
            }
        }
    }
    else if(mag == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tSylhet MAG Osmani Medical Hospital to Zindabazar= 20 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Sylhet_MAG_Osmani_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Sylhet_MAG_Osmani_Medical_Hospital1();
            }
        }
    }
    else if(mag == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tSylhet MAG Osmani Medical Hospital to Bondor Bazar= 20 Tk\n");

        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Sylhet_MAG_Osmani_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Sylhet_MAG_Osmani_Medical_Hospital1();
            }
        }
    }
    else if(mag == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tSylhet MAG Osmani Medical Hospital to Ambarkhana= 25 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Sylhet_MAG_Osmani_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Sylhet_MAG_Osmani_Medical_Hospital1();
            }
        }
    }
    else if(mag == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\tSylhet MAG Osmani Medical Hospital to KajolShah= Ambulance service aren't available since the distance is below 1 k.m.\n\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");

        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Sylhet_MAG_Osmani_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Sylhet_MAG_Osmani_Medical_Hospital1();
            }
        }
    }
    else if(mag == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tSylhet MAG Osmani Medical Hospital to Subid Bazar= 20 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Sylhet_MAG_Osmani_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Sylhet_MAG_Osmani_Medical_Hospital1();
            }
        }
    }
    else if(mag == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tSylhet MAG Osmani Medical Hospital to Tilagor= 80 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Sylhet_MAG_Osmani_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Sylhet_MAG_Osmani_Medical_Hospital1();
            }
        }
    }
    else if(mag == 8)
    {

        system("cls");
        gotoxy(0,7);
        printf("\n\t\tSylhet MAG Osmani Medical Hospital to Dakshin Surma= 285 Tk\n");

        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Sylhet_MAG_Osmani_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Sylhet_MAG_Osmani_Medical_Hospital1();
            }
        }
    }
    else if(mag == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tSylhet MAG Osmani Medical Hospital to Noya Sharak = 30 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Sylhet_MAG_Osmani_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Sylhet_MAG_Osmani_Medical_Hospital1();
            }
        }
    }
    else if(mag == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tEnter the distance from Sylhet MAG Osmani Medical Hospital in k.m. : ");
        scanf("%d", &o);
        printf("\n\t\tThe transfer cost will be: %d", sm*o);

        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Sylhet_MAG_Osmani_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Sylhet_MAG_Osmani_Medical_Hospital1();
            }
        }
    }
    else if(mag == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }
    printf("\n\n\t\t'0' For Back : ");
}

}

void Trust_Medical_Hospital1()
{
    system("cls");
    gotoxy(0,7);
    int t, m;
    int v = 20;
    printf("\n\t\tThis is Trust Medical's ambulance service.\n");
    printf("\n\t\tIts service available from 8:00 AM to 10:30 PM\n");
    printf("\n\t\tCall for Booking : 01815-084978\n");
    printf("\n\t\tAmbulance reserve charge- 1500 Tk\n");
    //printf("\n\t\tSelect The Location you want to go:\n\t\t1. Modina Market\n\t\t2. Zindabazar \n\t\t3. Bondor Bazar\n\t\t4. Ambarkhana\n\t\t5. Kajolshah\n\t\t6. Subid Bazar\n\t\t7. Tilagor\n\t\t8. Dakshin Surma\n\t\t9. Noyasharak\n\t\t10. A specific distance from hospital\n\n");
    printf("\n\n\t\tSelect The Location you want to go:\n\n\t\t1. Modina Market\n\n\t\t2. Zindabazar \n\n\t\t3. Bondor Bazar\n\n\t\t4. Ambarkhana\n\n\t\t5. Kajolshah\n\n\t\t6. Subid Bazar\n\n\t\t7. Tilagor\n\n\t\t8. Dakshin Surma\n\n\t\t9. Noyasharak\n\n\t\t10. A specific distance from hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");

   // scanf("%d", &t);
for(int i=1; scanf("%d", &t)>0; i++)
    {
    if(t == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tTrust Medical Hospital to Modina market= 25 Tk\n");
        //printf("\n\t\tPopular Medical Centre and Hospital to Zindabazar= 25 Tk\n");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Trust_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Trust_Medical_Hospital1();
            }
        }
    }
    else if(t == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tTrust Medical Hospital to Zindabazar= 20 Tk\n");
        // printf("\n\t\tPopular Medical Centre and Hospital to Zindabazar= 25 Tk\n");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Trust_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Trust_Medical_Hospital1();
            }
        }
    }
    else if(t == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tTrust Medical Hospital to Bondor Bazar= 15 Tk\n");
        //printf("\n\t\tPopular Medical Centre and Hospital to Zindabazar= 25 Tk\n");
        // printf("\n\n\n\t\tEnter 20 to return to the main menu\n\t\tEnter 30 to return to the Hospital list\n\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Trust_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Trust_Medical_Hospital1();
            }
        }
    }
    else if(t == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tTrust Medical Hospital to Ambarkhana= 15 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Trust_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Trust_Medical_Hospital1();
            }
        }
    }
    else if(t == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tTrust Medical Hospital to KajolShah= Ambulance service aren't available since the distance is below 1 k.m.\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");

        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Trust_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Trust_Medical_Hospital1();
            }
        }
    }
    else if(t == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tTrust Medical Hospital to Subid Bazar= 15 Tk\n");

        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Trust_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Trust_Medical_Hospital1();
            }
        }
    }
    else if(t == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tTrust Medical Hospital to Tilagor= 80 Tk\n");

        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Trust_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Trust_Medical_Hospital1();
            }
        }
    }
    else if(t == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tTrust Medical Hospital to Dakshin Surma= 285 Tk\n");

        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Trust_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Trust_Medical_Hospital1();
            }
        }
    }
    else if(t == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tTrust Medical Hospital to Noya Sharak = 20 Tk\n");

        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Trust_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Trust_Medical_Hospital1();
            }
        }
    }
    else if(t == 10)
    {

        system("cls");
        gotoxy(0,7);
        printf("\n\t\tEnter the distance from Trust Medical Hospital in k.m. : ");
        scanf("%d", &m);
        printf("\n\t\tThe transfer cost will be: %d", v*m);


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Trust_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Trust_Medical_Hospital1();
            }
        }
    }
    else if( t == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }
     printf("\n\n\t\t'0' For Back : ");
}
}

void Al_Haramine_Hospital1()
{
    system("cls");
    gotoxy(0,7);
    int h, a;
    int v = 20;
    printf("\n\t\tThis is Al Haramain Hospital's ambulance service.\n");
    printf("\n\t\tIts service available 24 hours everyday.\n");
    printf("\n\t\tCall for Booking : 01815-084978\n");
    printf("\n\t\tAmbulance reserve charge- 2500 Tk\n");
    // printf("\n\t\tSelect The Location you want to go:\n\t\t1. Modina Market\n\t\t2. Zindabazar \n\t\t3. Bondor Bazar\n\t\t4. Ambarkhana\n\t\t5. Kajolshah\n\t\t6. Subid Bazar\n\t\t7. Tilagor\n\t\t8. Dakshin Surma\n\t\t9. Noyasharak\n\t\t10. A specific distance from hospital\n\n");
    printf("\n\n\t\tSelect The Location you want to go:\n\n\t\t1. Modina Market\n\n\t\t2. Zindabazar \n\n\t\t3. Bondor Bazar\n\n\t\t4. Ambarkhana\n\n\t\t5. Kajolshah\n\n\t\t6. Subid Bazar\n\n\t\t7. Tilagor\n\n\t\t8. Dakshin Surma\n\n\t\t9. Noyasharak\n\n\t\t10. A specific distance from hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");
//scanf("%d", &h);

for(int i=1; scanf("%d", &h)>0; i++)
    {

    if(h == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tAl Haramain Hospital to Modina market= 80 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Al_Haramine_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Al_Haramine_Hospital1();
            }
        }
    }
    else if(h == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tAl Haramain Hospital to Zindabazar= 25 Tk\n");

        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Al_Haramine_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Al_Haramine_Hospital1();
            }
        }
    }
    else if(h == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tAl Haramain Hospital to Bondor Bazar= 25 Tk\n");

        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Al_Haramine_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Al_Haramine_Hospital1();
            }
        }
    }
    else if(h == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tAl Haramain Hospital to Ambarkhana= 40 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Al_Haramine_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Al_Haramine_Hospital1();
            }
        }
    }
    else if(h == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tAl Haramain Hospital to KajolShah= 50 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Al_Haramine_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Al_Haramine_Hospital1();
            }
        }
    }
    else if(h == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tAl Haramain Hospital to Subid Bazar= 60 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Al_Haramine_Hospital1();
        }
        else
            printf("\n\t\t\tWrong Choice\n");
    }
    else if(h == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tAl Haramain Hospital to Tilagor= 50 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Al_Haramine_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Al_Haramine_Hospital1();
            }
        }
    }
    else if(h == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tAl Haramain Hospital to Dakshin Surma= 250 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Al_Haramine_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Al_Haramine_Hospital1();
            }
        }
    }
    else if(h == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tAl Haramain Hospital to Noya Sharak = 30 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Al_Haramine_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Al_Haramine_Hospital1();
            }
        }
    }
    else if(h == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tEnter the distance from Al Haramain Hospital in k.m. : ");
        scanf("%d", &a);


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Al_Haramine_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Al_Haramine_Hospital1();
            }
        }
    }
    else if( h == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }
     printf("\n\n\t\t'0' For Back : ");
}
}

void Park_View_Medical_Hospital1()
{
    system("cls");
    gotoxy(0,7);
    int p, v;
    int pk = 20;
    printf("\n\t\tThis is Park View Medical College Hospital's ambulance service.\n");
    printf("\n\t\tIts services available 24 hours everyday\n");
    printf("\n\t\tCall for Booking : 01715-084078\n");
    printf("\n\t\tAmbulance reserve charge- 2500 Tk\n");

    //printf("\n\t\tSelect The Location you want to go: \n\t\t1. Modina Market\n\t\t2. Zindabazar \n\t\t3. Bondor Bazar\n\t\t4. Ambarkhana\n\t\t5. Kajolshah\n\t\t6. Subid Bazar\n\t\t7. Tilagor\n\t\t8. Dakshin Surma\n\t\t9. Noyasharak\n\t\t10. A specific distance from hospital\n\n");
    printf("\n\n\t\tSelect The Location you want to go:\n\n\t\t1. Modina Market\n\n\t\t2. Zindabazar \n\n\t\t3. Bondor Bazar\n\n\t\t4. Ambarkhana\n\n\t\t5. Kajolshah\n\n\t\t6. Subid Bazar\n\n\t\t7. Tilagor\n\n\t\t8. Dakshin Surma\n\n\t\t9. Noyasharak\n\n\t\t10. A specific distance from hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");

   // scanf("%d", &p);
 for(int i=1; scanf("%d", &p)>0; i++)
    {

    if(p == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tPark View Medical Hospital to Modina market= 40 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Park_View_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Park_View_Medical_Hospital1();
            }
        }
    }
    else if(p == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tPark View Medical Hospital to Zindabazar= 15 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Park_View_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Park_View_Medical_Hospital1();
            }
        }
    }
    else if(p == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tPark View Medical Hospital to Bondor Bazar= 20 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Park_View_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Park_View_Medical_Hospital1();
            }
        }
    }
    else if(p == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tPark View Medical Hospital to Ambarkhana= 30 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Park_View_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Park_View_Medical_Hospital1();
            }
        }
    }
    else if(p == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tPark View Medical Hospital to KajolShah= 30 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Park_View_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Park_View_Medical_Hospital1();
            }
        }
    }
    else if(p == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tPark View Medical Hospital to Subid Bazar= 30 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Park_View_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Park_View_Medical_Hospital1();
            }
        }
    }
    else if(p == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tPark View Medical Hospital to Tilagor= 65 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Park_View_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Park_View_Medical_Hospital1();
            }
        }
    }
    else if(p == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tPark View Medical Hospital to Dakshin Surma= 265 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Park_View_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Park_View_Medical_Hospital1();
            }
        }
    }
    else if(p == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tPark View Medical Hospital to Noya Sharak = 30 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Park_View_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Park_View_Medical_Hospital1();
            }
        }
    }
    else if(p == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tEnter the distance from Park View Medical Hospital in k.m. : ");
        scanf("%d", &v);
        printf("\n\t\tThe transfer cost will be: %d", pk*v);


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Park_View_Medical_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Park_View_Medical_Hospital1();
            }
        }
    }
    else if( p == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }
    printf("\n\n\t\t'0' For Back : ");
}
}

void Womens_Medical_College_Hospital1()
{

    system("cls");
    gotoxy(0,7);
    int w, m;
    int c = 20;
    printf("\n\t\tThis is Women's Medical College Hospital's ambulance service.\n");
    printf("\n\t\tIts service available 24 hours everyday.\n");
    printf("\n\t\tCall for Booking : 01715-084078\n");
    printf("\n\t\tAmbulance reserve charge- 2000 Tk\n");
    // printf("\n\t\tSelect The Location you want to go:\n\t\t1. Modina Market\n\t\t2. Zindabazar \n\t\t3. Bondor Bazar\n\t\t4. Ambarkhana\n\t\t5. Kajolshah\n\t\t6. Subid Bazar\n\t\t7. Tilagor\n\t\t8. Dakshin Surma\n\t\t9. Noyasharak\n\t\t10. A specific distance from hospital\n\n");
    printf("\n\n\t\tSelect The Location you want to go:\n\n\t\t1. Modina Market\n\n\t\t2. Zindabazar \n\n\t\t3. Bondor Bazar\n\n\t\t4. Ambarkhana\n\n\t\t5. Kajolshah\n\n\t\t6. Subid Bazar\n\n\t\t7. Tilagor\n\n\t\t8. Dakshin Surma\n\n\t\t9. Noyasharak\n\n\t\t10. A specific distance from hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");
    //scanf("%d", &w);
for(int i=1; scanf("%d", &w)>0; i++)
    {
    if(w == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tWomens Medical College and Hospital to Modina market= 50 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Womens_Medical_College_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Womens_Medical_College_Hospital1();
            }
        }
    }
    else if(w == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\tWomens Medical College and Hospital to Zindabazar= Ambulance service aren't available since the distance is below 1 k.m.\n\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Womens_Medical_College_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Womens_Medical_College_Hospital1();
            }
        }
    }
    else if(w == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tWomens Medical College and Hospital to Bondor Bazar= 15 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Womens_Medical_College_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Womens_Medical_College_Hospital1();
            }
        }
    }
    else if(w == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tWomens Medical College and Hospital to Ambarkhana= 15 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Womens_Medical_College_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Womens_Medical_College_Hospital1();
            }
        }
    }
    else if(w == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tWomens Medical College and Hospital to KajolShah= 20 Tk\n");

        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Womens_Medical_College_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Womens_Medical_College_Hospital1();
            }
        }
    }
    else if(w == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tWomens Medical College and Hospital to Subid Bazar= 25 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Womens_Medical_College_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Womens_Medical_College_Hospital1();
            }
        }
    }
    else if(w == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tWomens Medical College and Hospital to Tilagor= 65 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Womens_Medical_College_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Womens_Medical_College_Hospital1();
            }
        }
    }
    else if(w == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tWomens Medical College and Hospital to Dakshin Surma= 275 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Womens_Medical_College_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Womens_Medical_College_Hospital1();
            }
        }
    }
    else if(w == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tWomens Medical College and Hospital to Noya Sharak = Ambulance service aren't available since the distance is below 1 k.m.\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");

        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Womens_Medical_College_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Womens_Medical_College_Hospital1();
            }
        }
    }
    else if(w == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tEnter the distance from Womens Medical College and Hospital in k.m. : ");
        scanf("%d", &m);
        printf("\n\t\tThe transfer cost will be: %d", c*m);


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Womens_Medical_College_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Womens_Medical_College_Hospital1();
            }
        }
    }
    else if( w == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }
     printf("\n\n\t\t'0' For Back : ");
}
}

void Noorjahan_Hospital1()
{
    system("cls");
    gotoxy(0,7);
    int n, j;
    int v = 20;
    printf("\n\t\tThis is Noorjahan Hospital's ambulance service.\n");
    printf("\n\t\tIts service available 24 hours everyday.\n");
    printf("\n\t\tCall for Booking : 01715-084078\n");
    printf("\n\t\tAmbulance reserve charge- 2000 Tk\n");
    //printf("\n\t\tSelect The Location you want to go:\n\t\t1. Modina Market\n\t\t2. Zindabazar \n\t\t3. Bondor Bazar\n\t\t4. Ambarkhana\n\t\t5. Kajolshah\n\t\t6. Subid Bazar\n\t\t7. Tilagor\n\t\t8. Dakshin Surma\n\t\t9. Noyasharak\n\t\t10. A specific distance from hospital\n\n");
    printf("\n\n\t\tSelect The Location you want to go:\n\n\t\t1. Modina Market\n\n\t\t2. Zindabazar \n\n\t\t3. Bondor Bazar\n\n\t\t4. Ambarkhana\n\n\t\t5. Kajolshah\n\n\t\t6. Subid Bazar\n\n\t\t7. Tilagor\n\n\t\t8. Dakshin Surma\n\n\t\t9. Noyasharak\n\n\t\t10. A specific distance from hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");


   // scanf("%d", &n);
    for(int i=1; scanf("%d", &n)>0; i++)
    {

    if(n == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tNoorjahan Hospital to Modina market= 40 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Noorjahan_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Noorjahan_Hospital1();
            }
        }
    }
    else if(n == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tNoorjahan Hospital to Zindabazar= Ambulance service aren't available since the distance is below 1 k.m.\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Noorjahan_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Noorjahan_Hospital1();
            }
        }
    }
    else if(n == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tNoorjahan Hospital to Bondor Bazar= Ambulance service aren't available since the distance is below 1 k.m.\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Noorjahan_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Noorjahan_Hospital1();
            }
        }
    }
    else if(n == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tNoorjahan Hospital to Ambarkhana= Ambulance service aren't available since the distance is below 1 k.m.\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Noorjahan_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Noorjahan_Hospital1();
            }
        }
    }
    else if(n == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tNoorjahan Hospital to KajolShah= 20 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Noorjahan_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Noorjahan_Hospital1();
            }
        }
    }
    else if(n == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tNoorjahan Hospital to Subid Bazar= 25 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Noorjahan_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Noorjahan_Hospital1();
            }
        }
    }
    else if(n == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tNoorjahan Hospital to Tilagor= 65 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Noorjahan_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Noorjahan_Hospital1();
            }
        }
    }
    else if(n == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tNoorjahan Hospital to Dakshin Surma= 275 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Noorjahan_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Noorjahan_Hospital1();
            }
        }
    }
    else if(n == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tNoorjahan Hospital to Noya Sharak = 15 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Noorjahan_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Noorjahan_Hospital1();
            }
        }
    }
    else if(n == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tEnter the distance from Noorjahan Hospital in k.m. : ");
        scanf("%d", &j);
        printf("\n\t\tThe transfer cost will be: %d", v*j);

        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Noorjahan_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Noorjahan_Hospital1();
            }
        }
    }
    else if( n == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }


    printf("\n\n\t\t'0' For Back : ");
}
}

void Ragib_Ali_Medical_College_and_Hospital1()
{
    system("cls");
    gotoxy(0,7);
    int ra, am;
    int c = 20;
    printf("\n\t\tThis is Jalalabad Ragib-Rabeya Medical College and Hospital's ambulance service.\n");
    printf("\n\t\tIts service available 24 hours everyday.\n");
    printf("\n\t\tCall for Booking : 01715-084078\n");
    printf("\n\t\tAmbulance reserve charge- 2500 Tk\n");
    //printf("\n\t\tSelect The Location you want to go:\n\t\t1. Modina Market\n\t\t2. Zindabazar \n\t\t3. Bondor Bazar\n\t\t4. Ambarkhana\n\t\t5. Kajolshah\n\t\t6. Subid Bazar\n\t\t7. Tilagor\n\t\t8. Dakshin Surma\n\t\t9. Noyasharak\n\t\t10. A specific distance from hospital\n\n");
    printf("\n\n\t\tSelect The Location you want to go:\n\n\t\t1. Modina Market\n\n\t\t2. Zindabazar \n\n\t\t3. Bondor Bazar\n\n\t\t4. Ambarkhana\n\n\t\t5. Kajolshah\n\n\t\t6. Subid Bazar\n\n\t\t7. Tilagor\n\n\t\t8. Dakshin Surma\n\n\t\t9. Noyasharak\n\n\t\t10. A specific distance from hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");

    //scanf("%d", &ra);
for(int i=1; scanf("%d", &ra)>0; i++)
    {
    if(ra == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tJalalabad Ragib-Rabeya Medical College and Hospital to Modina market= 15 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Ragib_Ali_Medical_College_and_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ragib_Ali_Medical_College_and_Hospital1();
            }
        }
    }
    else if(ra == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tJalalabad Ragib-Rabeya Medical College and Hospital to Zindabazar= 65 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Ragib_Ali_Medical_College_and_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ragib_Ali_Medical_College_and_Hospital1();
            }
        }
    }
    else if(ra == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tJalalabad Ragib-Rabeya Medical College and Hospital to Bondor Bazar= 65 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Ragib_Ali_Medical_College_and_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ragib_Ali_Medical_College_and_Hospital1();
            }
        }
    }
    else if(ra == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tJalalabad Ragib-Rabeya Medical College and Hospital to Ambarkhana= 40 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Ragib_Ali_Medical_College_and_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ragib_Ali_Medical_College_and_Hospital1();
            }
        }
    }
    else if(ra == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tJalalabad Ragib-Rabeya Medical College and Hospital to KajolShah= 40 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Ragib_Ali_Medical_College_and_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ragib_Ali_Medical_College_and_Hospital1();
            }
        }
    }
    else if(ra == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tJalalabad Ragib-Rabeya Medical College and Hospital to Subid Bazar= 35 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Ragib_Ali_Medical_College_and_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ragib_Ali_Medical_College_and_Hospital1();
            }
        }
    }
    else if(ra == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tJalalabad Ragib-Rabeya Medical College and Hospital to Tilagor= 110 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Ragib_Ali_Medical_College_and_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ragib_Ali_Medical_College_and_Hospital1();
            }
        }
    }
    else if(ra == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tJalalabad Ragib-Rabeya Medical College and Hospital to Dakshin Surma= 320 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Ragib_Ali_Medical_College_and_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ragib_Ali_Medical_College_and_Hospital1();
            }
        }
    }
    else if(ra == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tJalalabad Ragib-Rabeya Medical College and Hospital to Noya Sharak = 70 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Ragib_Ali_Medical_College_and_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ragib_Ali_Medical_College_and_Hospital1();
            }
        }
    }
    else if(ra == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tEnter the distance from Jalalabad Ragib-Rabeya Medical College and Hospital in k.m. : ");
        scanf("%d", &am);
        printf("\n\t\tThe transfer cost will be: %d", c*am);


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Ragib_Ali_Medical_College_and_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Ragib_Ali_Medical_College_and_Hospital1();
            }
        }
    }
    else if( ra == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }


    printf("\n\n\t\t'0' For Back : ");
}
}

void Mount_Adora_Hospital1()
{
    system("cls");
    gotoxy(0,7);
    int m, a;
    int v = 20;
    printf("\n\t\tThis is Mount Adora Hospital's ambulance service.\n");
    printf("\n\t\tIts service available 24 hours everyday.\n");
    printf("\n\t\tCall for Booking : 01715-084078\n");
    printf("\n\t\tAmbulance reserve charge- 1600 Tk\n");
    //printf("\n\t\tSelect The Location you want to go:\n\t\t1. Modina Market\n\t\t2. Zindabazar \n\t\t3. Bondor Bazar\n\t\t4. Ambarkhana\n\t\t5. Kajolshah\n\t\t6. Subid Bazar\n\t\t7. Tilagor\n\t\t8. Dakshin Surma\n\t\t9. Noyasharak\n\t\t10. A specific distance from hospital\n\n");

    printf("\n\n\t\tSelect The Location you want to go:\n\n\t\t1. Modina Market\n\n\t\t2. Zindabazar \n\n\t\t3. Bondor Bazar\n\n\t\t4. Ambarkhana\n\n\t\t5. Kajolshah\n\n\t\t6. Subid Bazar\n\n\t\t7. Tilagor\n\n\t\t8. Dakshin Surma\n\n\t\t9. Noyasharak\n\n\t\t10. A specific distance from hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");


    //scanf("%d", &m);
for(int i=1; scanf("%d", &m)>0; i++)
    {

    if(m == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\tMount Adora Hospital to Modina market= Ambulance service aren't available since the distance is below 1 k.m.\n\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Mount_Adora_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Mount_Adora_Hospital1();
            }
        }
    }
    else if(m == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tMount Adora Hospital to Zindabazar= 50 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Mount_Adora_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Mount_Adora_Hospital1();
            }
        }
    }
    else if(m == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tMount Adora Hospital to Bondor Bazar= 50 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Mount_Adora_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Mount_Adora_Hospital1();
            }
        }
    }
    else if(m == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tMount Adora Hospital to Ambarkhana= 35 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Mount_Adora_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Mount_Adora_Hospital1();
            }
        }
    }
    else if(m == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tMount Adora Hospital to KajolShah= 30 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Mount_Adora_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Mount_Adora_Hospital1();
            }
        }
    }
    else if(m == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tMount Adora Hospital to Subid Bazar= 20 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Mount_Adora_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Mount_Adora_Hospital1();
            }
        }
    }
    else if(m == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tMount Adora Hospital to Tilagor= 95 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Mount_Adora_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Mount_Adora_Hospital1();
            }
        }
    }
    else if(m == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tMount Adora Hospital to Dakshin Surma= 310 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Mount_Adora_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Mount_Adora_Hospital1();
            }
        }
    }
    else if(m == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tMount Adora Hospital to Noya Sharak = 60 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Mount_Adora_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Mount_Adora_Hospital1();
            }
        }
    }
    else if(m == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tEnter the distance from Mount Adora Hospital in k.m. : ");
        scanf("%d", &a);
        printf("\n\t\tThe transfer cost will be: %d", v*a);


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            Mount_Adora_Hospital1();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Mount_Adora_Hospital1();
            }
        }
    }
    else if( m == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }

       printf("\n\n\t\t'0' For Back : ");
}
}

//home to hospital

void home_to_hos()
{
    int home;
    printf("\n\n\t\tSelect your location: \n\n\t\t1. Modina Market\n\n\t\t2. Zindabazar\n\n\t\t3. Bondor Bazar\n\n\t\t4. Ambarkhana\n\n\t\t5. Kajolshah\n\n\t\t6. Subid Bdazar\n\n\t\t7. Nayasharak\n\n\t\t8. Tilagor\n\n\t\t9. Dakshin Surma\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");
    //scanf("%d", &home);
    for(int i=1; scanf("%d", &home)>0; i++)
    {

    if(home == 1)
    {
        modinamarket();
    }
    else if(home == 2)
    {
        zindabazar();
    }
    else if(home == 3)
    {
        bondor_bazar();
    }
    else if(home == 4)
    {
        ambarkhana();
    }
    else if(home == 5)
    {
        kajolshah();
    }
    else if(home == 6)
    {
        subidbazar();
    }
    else if(home == 7)
    {
        noyasharak();
    }
    else if(home == 8)
    {
        tilagor();
    }
    else if(home == 9)
    {
        dakshinsurma();
    }
    else if( home == 0)
    {
        system("cls");
        gotoxy(0,7);
        home_to_hos();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }

    printf("\n\n\t\t'0' For Back : ");
}

}

void modinamarket()
{
    system("cls");
    gotoxy(0,7);
    int mm;

    // printf("\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\t\t2. Ibn Sina Hospital\n\t\t3. Oasis Hospital\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\t\t5. Trust Medical Hospital\n\t\t6. Al Haramine Hospital\n\t\t7. Park View Medical College Hospital\n\t\t8. Womens Medical College and Hospital\n\t\t9. Noorjahan Hospital\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\t\t11. Mount Adora Hospital\n\n");
    printf("\n\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\n\t\t2. Ibn Sina Hospital\n\n\t\t3. Oasis Hospital\n\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\n\t\t5. Trust Medical Hospital\n\n\t\t6. Al Haramine Hospital\n\n\t\t7. Park View Medical College Hospital\n\n\t\t8. Womens Medical College and Hospital\n\n\t\t9. Noorjahan Hospital\n\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\n\t\t11. Mount Adora Hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");

   // scanf("%d", &mm);
    for(int i=1; scanf("%d", &mm)>0; i++)
    {

    if(mm == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\tDistance from Modina Market to Popular Medical Centre and Hospital= 6.6 k.m.\n\n\t\tTransport cost will be: 80 Tk\n");
        //printf("\n\t\tDistance from Modina Market to Popular Medical Centre and Hospital= 6.6 k.m.\n\t\tTransport cost will be: 80 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            modinamarket();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                modinamarket();
            }
        }
    }
    else if(mm == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\tDistance from Modina Market to Ibn Sina Hospital = 5.3 k.m.\n\n\t\tTransport cost will be: 65 Tk\n");



        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            modinamarket();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                modinamarket();
            }
        }
    }
    else if(mm == 3)
    {

        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\tDistance from Modina Market to Oasis Hospital = 3.8 k.m.\n\n\t\tTransport cost will be: 40 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            modinamarket();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                modinamarket();
            }
        }
    }
    else if(mm == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\tDistance from Modina Market to Sylhet MAG Osmani Medical Hospital = 2 k.m.\n\n\t\tTransport cost will be: 20 Tk\n");


        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            modinamarket();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                modinamarket();
            }
        }
    }
    else if(mm == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\tDistance from Modina Market to Trust Medical Hospital = 2.5 k.m.\n\n\t\tTransport cost will be: 25 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            modinamarket();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                modinamarket();
            }
        }
    }
    else if(mm == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\tDistance from Modina Market to Al Haramain Hospital = 6.5 k.m.\n\n\t\tTransport cost will be: 80 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            modinamarket();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                modinamarket();
            }
        }
    }
    else if(mm == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\tDistance from Modina Market to Park View Medical College Hospital = 3.7 k.m.\n\n\t\tTransport cost will be: 40 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            modinamarket();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                modinamarket();
            }
        }
    }
    else if(mm == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\tDistance from Modina Market to Womens Medical College and Hospital = 4.4 k.m.\n\n\t\tTransport cost will be: 50 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            modinamarket();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                modinamarket();
            }
        }
    }
    else if(mm == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Modina Market to Noorjahan Hospital = 3.6 k.m.\n\n\t\tTransport cost will be: 40 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            modinamarket();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                modinamarket();
            }
        }
    }
    else if(mm == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\tDistance from Modina Market to Jalalabad Ragib Rabeya Medical College and Hospital = 1.5 k.m.\n\n\t\tTransport cost will be: 15 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            modinamarket();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                modinamarket();
            }
        }
    }
    else if(mm == 11)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Modina Market to Mount Adora Hospital = 0.5 k.m.\n\n\t\tAmbulance service won't be needed since the distance is below 1 k.m.\n\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            modinamarket();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                modinamarket();
            }
        }
    }
    else if( mm == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }
      printf("\n\n\t\t'0' For Back : ");
}
}

void zindabazar()
{
    system("cls");
    gotoxy(0,7);
    int z;

    printf("\n\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\n\t\t2. Ibn Sina Hospital\n\n\t\t3. Oasis Hospital\n\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\n\t\t5. Trust Medical Hospital\n\n\t\t6. Al Haramine Hospital\n\n\t\t7. Park View Medical College Hospital\n\n\t\t8. Womens Medical College and Hospital\n\n\t\t9. Noorjahan Hospital\n\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\n\t\t11. Mount Adora Hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");
   // scanf("%d", &z);
    for(int i=1; scanf("%d", &z)>0; i++)
    {

    if(z == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\tDistance from Zindabazar to Popular Medical Centre and Hospital= 2.7 k.m.\n\n\t\tTransport cost will be: 25 Tk\n");

        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            zindabazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                zindabazar();
            }
        }
    }
    else if(z == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\tDistance from Zindabazar to Ibn Sina Hospital = 1.4 k.m.\n\n\t\tTransport cost will be: 15 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            zindabazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                zindabazar();
            }
        }
    }
    else if(z == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Zindabazar to Oasis Hospital is less than 100 meters\n\n\t\tAmbulance service won't be needed since the distance is below 1 k.m.\n\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            zindabazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                zindabazar();
            }
        }
    }
    else if(z == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Zindabazar to Sylhet MAG Osmani Medical Hospital = 2.1 k.m.\n\n\t\tTransport cost will be: 20 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            zindabazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                zindabazar();
            }
        }
    }
    else if(z == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\tDistance from Zindabazar to Trust Medical Hospital = 1.5 k.m.\n\n\t\tTransport cost will be: 20 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            zindabazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                zindabazar();
            }
        }
    }
    else if(z == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Zindabazar to Al Haramain Hospital = 2.6 k.m.\n\n\t\tTransport cost will be: 25 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            zindabazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                zindabazar();
            }
        }
    }
    else if(z == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Zindabazar to Park View Medical College Hospital = 3.7 k.m.\n\n\t\tTransport cost will be: 15 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            zindabazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                zindabazar();
            }
        }
    }
    else if(z == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Zindabazar to Womens Medical College and Hospital = 0.9 k.m.\n\n\t\tAmbulance service won't be needed since the distance is below 1 k.m.\n\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            zindabazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                zindabazar();
            }
        }
    }
    else if(z == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Zindabazar to Noorjahan Hospital = 0.8 k.m.\n\n\t\tAmbulance service won't be needed since the distance is below 1 k.m.\n\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            zindabazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                zindabazar();
            }
        }
    }
    else if(z == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\tDistance from Zindabazar to Jalalabad Ragib Rabeya Medical College and Hospital = 5.2 k.m.\n\n\t\tTransport cost will be: 65 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            zindabazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                zindabazar();
            }
        }
    }
    else if(z == 11)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Zindabazar to Mount Adora Hospital = 4.2 k.m.\n\n\t\tTransport cost will be: 50 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            zindabazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                zindabazar();
            }
        }
    }
    else if( z == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }
     printf("\n\n\t\t'0' For Back : ");
}
}

void bondor_bazar()
{
    system("cls");
    gotoxy(0,7);
    int bb;
    //printf("\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\t\t2. Ibn Sina Hospital\n\t\t3. Oasis Hospital\n4. Sylhet MAG Osmani Medical Hospital\n\t\t5. Trust Medical Hospital\n\t\t6. Al Haramine Hospital\n\t\t7. Park View Medical College Hospital\n\t\t8. Womens Medical College and Hospital\n\t\t9. Noorjahan Hospital\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\t\t11. Mount Adora Hospital\n\n");
    printf("\n\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\n\t\t2. Ibn Sina Hospital\n\n\t\t3. Oasis Hospital\n\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\n\t\t5. Trust Medical Hospital\n\n\t\t6. Al Haramine Hospital\n\n\t\t7. Park View Medical College Hospital\n\n\t\t8. Womens Medical College and Hospital\n\n\t\t9. Noorjahan Hospital\n\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\n\t\t11. Mount Adora Hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");


    //scanf("%d", &bb);
    for(int i=1; scanf("%d", &bb)>0; i++)
    {

    if(bb == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Bondor Bazar to Popular Medical Centre and Hospital= 2.7 k.m.\n\n\t\tTransport cost will be: 25 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            bondor_bazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                bondor_bazar();
            }
        }
    }
    else if(bb == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Bondor Bazar to Ibn Sina Hospital = 1.3 k.m.\n\n\t\tTransport cost will be: 15 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            bondor_bazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                bondor_bazar();
            }
        }
    }
    else if(bb == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Bondor Bazar to Oasis Hospital is less than 100 meters\n\n\t\tAmbulance service won't be needed since the distance is below 1 k.m.\n\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            bondor_bazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                bondor_bazar();
            }
        }
    }
    else if(bb == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Bondor Bazar to Sylhet MAG Osmani Medical Hospital = 2.1 k.m.\n\n\t\tTransport cost will be: 20 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            bondor_bazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                bondor_bazar();
            }
        }
    }
    else if(bb == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Bondor Bazar to Trust Medical Hospital = 1.5 k.m.\n\n\t\tTransport cost will be: 15 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            bondor_bazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                bondor_bazar();
            }
        }
    }
    else if(bb == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Bondor Bazar to Al Haramain Hospital = 2.6 k.m.\n\n\t\tTransport cost will be: 25 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            bondor_bazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                bondor_bazar();
            }
        }
    }
    else if(bb == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Bondor Bazar to Park View Medical College Hospital = 3.7 k.m.\n\n\t\tTransport cost will be: 40 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            bondor_bazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                bondor_bazar();
            }
        }
    }
    else if(bb == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Bondor Bazar to Womens Medical College and Hospital = 1.3 k.m.\n\n\t\tTransport cost will be: 15 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            bondor_bazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                bondor_bazar();
            }
        }
    }
    else if(bb == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Bondor Bazar to Noorjahan Hospital = 0.85 k.m.\n\n\t\tAmbulance service won't be needed since the distance is below 1 k.m.\n\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            bondor_bazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                bondor_bazar();
            }
        }
    }
    else if(bb == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Bondor Bazar to Jalalabad Ragib Rabeya Medical College and Hospital = 5.2 k.m.\n\n\t\tTransport cost will be: 65 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            bondor_bazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                bondor_bazar();
            }
        }
    }
    else if(bb == 11)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Bondor Bazar to Mount Adora Hospital = 4.2 k.m.\n\n\t\tTransport cost will be: 50 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            bondor_bazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                bondor_bazar();
            }
        }
    }
    else if( bb == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }
      printf("\n\n\t\t'0' For Back : ");
}
}

void ambarkhana()
{
    system("cls");
    gotoxy(0,7);
    int am;
    //printf("\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\t\t\2. Ibn Sina Hospital\n\t\t3. Oasis Hospital\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\t\t5. Trust Medical Hospital\n\t\t6. Al Haramine Hospital\n\t\t7. Park View Medical College Hospital\n\t\t8. Womens Medical College and Hospital\n\t\t9. Noorjahan Hospital\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\t\t11. Mount Adora Hospital\n\n");
    printf("\n\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\n\t\t2. Ibn Sina Hospital\n\n\t\t3. Oasis Hospital\n\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\n\t\t5. Trust Medical Hospital\n\n\t\t6. Al Haramine Hospital\n\n\t\t7. Park View Medical College Hospital\n\n\t\t8. Womens Medical College and Hospital\n\n\t\t9. Noorjahan Hospital\n\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\n\t\t11. Mount Adora Hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");


   // scanf("%d", &am);
 for(int i=1; scanf("%d", &am)>0; i++)
    {
    if(am == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Ambarkhana to Popular Medical Centre and Hospital= 2.7 k.m.\n\n\t\tTransport cost will be: 25 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            ambarkhana();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                ambarkhana();
            }
        }

    }
    else if(am == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Ambarkhana to Ibn Sina Hospital = 2.4 k.m.\n\n\t\tTransport cost will be: 20 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            ambarkhana();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                ambarkhana();
            }
        }

    }
    else if(am == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Ambarkhana to Oasis Hospital = 1.4 k.m\n\n\t\tTransport cost will be: 15 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            ambarkhana();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                ambarkhana();
            }
        }

    }
    else if(am == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Ambarkhana to Sylhet MAG Osmani Medical Hospital = 2.5 k.m.\n\n\t\tTransport cost will be: 25 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            ambarkhana();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                ambarkhana();
            }
        }
    }
    else if(am == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Ambarkhana to Trust Medical Hospital = 1.8 k.m.\n\n\t\tTransport cost will be: 15 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            ambarkhana();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                ambarkhana();
            }
        }


    }
    else if(am == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Ambarkhana to Al Haramain Hospital = 3.6 k.m.\n\n\t\tTransport cost will be: 40 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            ambarkhana();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                ambarkhana();
            }
        }

    }
    else if(am == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Ambarkhana to Park View Medical College Hospital = 2.8 k.m.\n\n\t\tTransport cost will be: 30 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            ambarkhana();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                ambarkhana();
            }
        }

    }
    else if(am == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Ambarkhana to Womens Medical College and Hospital = 1.3 k.m.\n\n\t\tTransport cost will be: 15 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            ambarkhana();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                ambarkhana();
            }
        }

    }
    else if(am == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Ambarkhana to Noorjahan Hospital = 0.65 k.m.\n\n\t\tAmbulance service won't be needed since the distance is below 1 k.m.\n\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            ambarkhana();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                ambarkhana();
            }
        }


    }
    else if(am == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Ambarkhana to Jalalabad Ragib Rabeya Medical College and Hospital = 4.2 k.m.\n\n\t\tTransport cost will be: 40 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            ambarkhana();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                ambarkhana();
            }
        }

    }
    else if(am == 11)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Ambarkhana to Mount Adora Hospital = 3.2 k.m.\n\n\t\tTransport cost will be: 35 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            ambarkhana();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                ambarkhana();
            }
        }

    }
    else if( am == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }

    printf("\n\n\t\t'0' For Back : ");
}
}

void kajolshah()
{
    system("cls");
    gotoxy(0,7);
    int ka;
    // printf("\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\t\t2. Ibn Sina Hospital\n\t\t3. Oasis Hospital\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\t\t5. Trust Medical Hospital\n\t\t6. Al Haramine Hospital\n\t\t7. Park View Medical College Hospital\n\t\t8. Womens Medical College and Hospital\n9. Noorjahan Hospital\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\t\t11. Mount Adora Hospital\n\n");
    printf("\n\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\n\t\t2. Ibn Sina Hospital\n\n\t\t3. Oasis Hospital\n\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\n\t\t5. Trust Medical Hospital\n\n\t\t6. Al Haramine Hospital\n\n\t\t7. Park View Medical College Hospital\n\n\t\t8. Womens Medical College and Hospital\n\n\t\t9. Noorjahan Hospital\n\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\n\t\t11. Mount Adora Hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");

   // scanf("%d", &ka);
    for(int i=1; scanf("%d", &ka)>0; i++)
    {


    if(ka == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Kajolshah to Popular Medical Centre and Hospital= 4.6 k.m.\n\t\tTransport cost will be: 50 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            kajolshah();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                kajolshah();
            }
        }
    }
    else if(ka == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Kajolshah to Ibn Sina Hospital = 1.8 k.m.\n\n\t\tTransport cost will be: 20 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            kajolshah();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                kajolshah();
            }
        }
    }
    else if(ka == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Kajolshah to Oasis Hospital = 1.8 k.m\n\n\t\tTransport cost will be: 20Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            kajolshah();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                kajolshah();
            }
        }
    }
    else if(ka == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Kajolshah to Sylhet MAG Osmani Medical Hospital = 0.3 k.m.\n\n\t\tAmbulance service won't be needed since the distance is below 1 k.m.\n\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            kajolshah();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                kajolshah();
            }
        }
    }
    else if(ka == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Kajolshah to Trust Medical Hospital = 0.4 k.m.\n\nAmbulance service won't be needed since the distance is below 1 k.m.\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            kajolshah();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                kajolshah();
            }
        }
    }
    else if(ka == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Kajolshah to Al Haramain Hospital = 4.4 k.m.\n\n\t\tTransport cost will be: 50 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            kajolshah();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                kajolshah();
            }
        }
    }
    else if(ka == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Kajolshah to Park View Medical College Hospital = 2 k.m.\n\n\t\tTransport cost will be: 30 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            kajolshah();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                kajolshah();
            }
        }
    }
    else if(ka == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Kajolshah to Womens Medical College and Hospital = 1.7 k.m.\n\n\t\tTransport cost will be: 20 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            kajolshah();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                kajolshah();
            }
        }
    }
    else if(ka == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Kajolshah to Noorjahan Hospital = 1.65 k.m.\n\n\t\tTransport cost will be: 20 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            kajolshah();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                kajolshah();
            }
        }
    }
    else if(ka == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Kajolshah to Jalalabad Ragib Rabeya Medical College and Hospital = 3.6 k.m.\n\n\t\tTransport cost will be: 40 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            kajolshah();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                kajolshah();
            }
        }
    }
    else if(ka == 11)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Kajolshah to Mount Adora Hospital = 2.6 k.m.\n\n\t\tTransport cost will be: 30 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            kajolshah();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                kajolshah();
            }
        }
    }
    else if( ka == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }

    printf("\n\n\t\t'0' For Back : ");
}
}

void subidbazar()
{
    system("cls");
    gotoxy(0,7);
    int sb;
    // printf("\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\t\t2. Ibn Sina Hospital\n3. Oasis Hospital\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\t\t5. Trust Medical Hospital\n\t\t6. Al Haramine Hospital\n\t\t7. Park View Medical College Hospital\n\t\t8. Womens Medical College and Hospital\n9. Noorjahan Hospital\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\t\t11. Mount Adora Hospital\n\n");
    printf("\n\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\n\t\t2. Ibn Sina Hospital\n\n\t\t3. Oasis Hospital\n\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\n\t\t5. Trust Medical Hospital\n\n\t\t6. Al Haramine Hospital\n\n\t\t7. Park View Medical College Hospital\n\n\t\t8. Womens Medical College and Hospital\n\n\t\t9. Noorjahan Hospital\n\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\n\t\t11. Mount Adora Hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");


   // scanf("%d", &sb);
     for(int i=1; scanf("%d", &sb)>0; i++)
    {

    if(sb == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Subid Bazar to Popular Medical Centre and Hospital= 5.1 k.m.\n\n\t\tTransport cost will be: 65 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            subidbazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                subidbazar();
            }
        }


    }
    else if(sb == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Subid Bazar to Ibn Sina Hospital = 2.3 k.m.\n\n\t\tTransport cost will be: 20 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            subidbazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                subidbazar();
            }
        }


    }
    else if(sb == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Subid Bazar to Oasis Hospital = 2.4 k.m\n\n\t\tTransport cost will be: 20 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            subidbazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                subidbazar();
            }
        }


    }
    else if(sb == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Subid Bazar to Sylhet MAG Osmani Medical Hospital = 2 k.m.\n\n\t\tTransport cost will be: 20 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            subidbazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                subidbazar();
            }
        }


    }
    else if(sb == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Subid Bazar to Trust Medical Hospital = 1.5 k.m.\n\n\t\tTransport cost will be: 15 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            subidbazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                subidbazar();
            }
        }



    }
    else if(sb == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Subid Bazar to Al Haramain Hospital = 4.9 k.m.\n\n\t\tTransport cost will be: 60 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            subidbazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                subidbazar();
            }
        }


    }
    else if(sb == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Subid Bazar to Park View Medical College Hospital = 2.4 k.m.\n\n\t\tTransport cost will be: 30 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            subidbazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                subidbazar();
            }
        }



    }
    else if(sb == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Subid Bazar to Womens Medical College and Hospital = 2.2 k.m.\n\n\t\tTransport cost will be: 25 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            subidbazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                subidbazar();
            }
        }



    }
    else if(sb == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Subid Bazar to Noorjahan Hospital = 2.1 k.m.\n\n\t\tTransport cost will be: 25 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            subidbazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                subidbazar();
            }
        }


    }
    else if(sb == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Subid Bazar to Jalalabad Ragib Rabeya Medical College and Hospital = 2.9 k.m.\n\n\t\tTransport cost will be: 35 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            subidbazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                subidbazar();
            }
        }



    }
    else if(sb == 11)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Subid Bazar to Mount Adora Hospital = 2 k.m.\n\n\t\tTransport cost will be: 20 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            subidbazar();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                subidbazar();
            }
        }

    }
    else if( sb == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }
     printf("\n\n\t\t'0' For Back : ");
}
}

void noyasharak()
{
    system("cls");
    gotoxy(0,7);
    int ns;
    printf("\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\t\t2. Ibn Sina Hospital\n\t\t3. Oasis Hospital\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\t\t5. Trust Medical Hospital\n\t\t6. Al Haramine Hospital\n\t\t7. Park View Medical College Hospital\n\t\t8. Womens Medical College and Hospital\n\t\t9. Noorjahan Hospital\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\t\t11. Mount Adora Hospital\n\n");
    //scanf("%d", &ns);
    for(int i=1; scanf("%d", &ns)>0; i++)
    {


    if(ns == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Nayasarak to Popular Medical Centre and Hospital= 2.5 k.m.\n\n\t\tTransport cost will be: 25 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            noyasharak();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                noyasharak();
            }
        }



    }
    else if(ns == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Nayasarak to Ibn Sina Hospital = 0.7 k.m.\n\nAmbulance service won't be needed since the distance is below 1 k.m.\n\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            noyasharak();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                noyasharak();
            }
        }

    }
    else if(ns == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Nayasarak to Oasis Hospital = 0.7 k.m\n\n\t\tAmbulance service won't be needed since the distance is below 1 k.m.\n\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            noyasharak();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                noyasharak();
            }
        }
    }
    else if(ns == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Nayasarak to Sylhet MAG Osmani Medical Hospital = 2.6 k.m.\n\n\t\tTransport cost will be: 30 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            noyasharak();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                noyasharak();
            }
        }
    }
    else if(ns == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Nayasarak to Trust Medical Hospital = 1.9 k.m.\n\n\t\tTransport cost will be: 20 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            noyasharak();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                noyasharak();
            }
        }
    }
    else if(ns == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Nayasarak to Al Haramain Hospital = 2.3 k.m.\n\n\t\tTransport cost will be: 30 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            noyasharak();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                noyasharak();
            }
        }
    }
    else if(ns == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Nayasarak to Park View Medical College Hospital = 2 k.m.\n\n\t\tTransport cost will be: 30 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            noyasharak();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                noyasharak();
            }
        }
    }
    else if(ns == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Nayasarak to Womens Medical College and Hospital = 0.7 k.m.\n\n\t\tAmbulance service won't be needed since the distance is below 1 k.m.\n\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            noyasharak();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                noyasharak();
            }
        }

    }
    else if(ns == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Nayasarak to Noorjahan Hospital = 1.3 k.m.\n\n\t\tTransport cost will be: 15 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            noyasharak();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                noyasharak();
            }
        }


    }
    else if(ns == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Nayasarak to Jalalabad Ragib Rabeya Medical College and Hospital = 5.7 k.m.\n\n\t\tTransport cost will be: 70 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            noyasharak();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                noyasharak();
            }
        }



    }
    else if(ns == 11)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Nayasarak to Mount Adora Hospital = 4.7 k.m.\n\t\tTransport cost will be: 60 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            noyasharak();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                noyasharak();
            }
        }

    }
    else if( ns == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }

    printf("\n\n\t\t'0' For Back : ");
}
}
//baki
/*
else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
              noyasharak();
            }
        }


//
*/
void tilagor()
{
    system("cls");
    gotoxy(0,7);
    int tl;
    // printf("\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\t\t2. Ibn Sina Hospital\n\t\t3. Oasis Hospital\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\t\t5. Trust Medical Hospital\n\t\t6. Al Haramine Hospital\n\t\t7. Park View Medical College Hospital\n\t\t8. Womens Medical College and Hospital\n\t\t9. Noorjahan Hospital\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\t\t11. Mount Adora Hospital\n\n");
    printf("\n\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\n\t\t2. Ibn Sina Hospital\n\n\t\t3. Oasis Hospital\n\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\n\t\t5. Trust Medical Hospital\n\n\t\t6. Al Haramine Hospital\n\n\t\t7. Park View Medical College Hospital\n\n\t\t8. Womens Medical College and Hospital\n\n\t\t9. Noorjahan Hospital\n\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\n\t\t11. Mount Adora Hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");




  //  scanf("%d", &tl);
    for(int i=1; scanf("%d", &tl)>0; i++)
    {

    if(tl == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Tilagor to Popular Medical Centre and Hospital= 4 k.m.\n\t\tTransport cost will be: 50 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            tilagor();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                tilagor();
            }
        }
    }
    else if(tl == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Tilagor to Ibn Sina Hospital = 4 k.m.\n\t\tTransport cost will be: 50 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            tilagor();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                tilagor();
            }
        }
    }
    else if(tl == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Tilagor to Oasis Hospital = 4 k.m\n\t\tTransport cost will be: 50 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            tilagor();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                tilagor();
            }
        }
    }
    else if(tl == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Tilagor to Sylhet MAG Osmani Medical Hospital = 6.1 k.m.\n\t\tTransport cost will be: 80 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            tilagor();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                tilagor();
            }
        }
    }
    else if(tl == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Tilagor to Trust Medical Hospital = 6 k.m.\n\t\tTransport cost will be: 80 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            tilagor();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                tilagor();
            }
        }
    }
    else if(tl == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Tilagor to Al Haramain Hospital = 3.9 k.m.\n\t\tTransport cost will be: 50 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            tilagor();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                tilagor();
            }
        }
    }
    else if(tl == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Tilagor to Park View Medical College Hospital = 4.8 k.m.\n\t\tTransport cost will be: 65 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            tilagor();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                tilagor();
            }
        }
    }
    else if(tl == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Tilagor to Womens Medical College and Hospital = 5 k.m.\n\t\tTransport cost will be: 65 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            tilagor();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                tilagor();
            }
        }
    }
    else if(tl == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Tilagor to Noorjahan Hospital = 5 k.m.\n\t\tTransport cost will be: 65 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            tilagor();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                tilagor();
            }
        }
    }
    else if(tl == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Tilagor to Jalalabad Ragib Rabeya Medical College and Hospital = 8.5 k.m.\n\t\tTransport cost will be: 110 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            tilagor();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                tilagor();
            }
        }
    }
    else if(tl == 11)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Tilagor to Mount Adora Hospital = 7.5 k.m.\n\t\tTransport cost will be: 95 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            tilagor();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                tilagor();
            }
        }
    }
    else if( tl == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }

    printf("\n\n\t\t'0' For Back : ");
}
}

void dakshinsurma()
{
    system("cls");
    gotoxy(0,7);
    int ds;
    //printf("\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\t\t2. Ibn Sina Hospital\n\t\t3. Oasis Hospital\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\t\t5. Trust Medical Hospital\n\t\t6. Al Haramine Hospital\n\t\t7. Park View Medical College Hospital\n\t\t8. Womens Medical College and Hospital\n\t\t9. Noorjahan Hospital\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\t\t11. Mount Adora Hospital\n\n");
    printf("\n\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\n\t\t2. Ibn Sina Hospital\n\n\t\t3. Oasis Hospital\n\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\n\t\t5. Trust Medical Hospital\n\n\t\t6. Al Haramine Hospital\n\n\t\t7. Park View Medical College Hospital\n\n\t\t8. Womens Medical College and Hospital\n\n\t\t9. Noorjahan Hospital\n\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\n\t\t11. Mount Adora Hospital\n\n\t\t'0' For Back.\n\n\t\tChoice Option :  ");

    //scanf("%d", &ds);
    for(int i=1; scanf("%d", &ds)>0; i++)
    {

    if(ds == 1)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Dakshin Surma to Popular Medical Centre and Hospital= 16.7 k.m.\n\t\tTransport cost will be: 250 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            dakshinsurma();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                dakshinsurma();
            }
        }
    }
    else if(ds == 2)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Dakshin Surma to Ibn Sina Hospital = 17 k.m.\n\t\tTransport cost will be: 260 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            dakshinsurma();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                dakshinsurma();
            }
        }
    }
    else if(ds == 3)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Dakshin Surma to Oasis Hospital = 17.7 k.m\n\t\tTransport cost will be: 265 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            dakshinsurma();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                dakshinsurma();
            }
        }
    }
    else if(ds == 4)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Dakshin Surma to Sylhet MAG Osmani Medical Hospital = 19.1 k.m.\n\t\tTransport cost will be: 285 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            dakshinsurma();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                dakshinsurma();
            }
        }
    }
    else if(ds == 5)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Dakshin Surma to Trust Medical Hospital = 19.5 k.m.\n\t\tTransport cost will be: 285 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            dakshinsurma();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                dakshinsurma();
            }
        }
    }
    else if(ds == 6)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Dakshin Surma to Al Haramain Hospital = 16.6 k.m.\n\t\tTransport cost will be: 250 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            dakshinsurma();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                dakshinsurma();
            }
        }
    }
    else if(ds == 7)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Dakshin Surma to Park View Medical College Hospital = 17.6 k.m.\n\t\tTransport cost will be: 265 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            dakshinsurma();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                dakshinsurma();
            }
        }
    }
    else if(ds == 8)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Dakshin Surma to Womens Medical College and Hospital = 18.5 k.m.\n\t\tTransport cost will be: 275 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            dakshinsurma();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                dakshinsurma();
            }
        }
    }
    else if(ds == 9)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Dakshin Surma to Noorjahan Hospital = 18.5 k.m.\n\t\tTransport cost will be: 275 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            dakshinsurma();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                dakshinsurma();
            }
        }
    }
    else if(ds == 10)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Dakshin Surma to Jalalabad Ragib Rabeya Medical College and Hospital = 23.5 k.m.\n\t\tTransport cost will be: 320 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            dakshinsurma();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                dakshinsurma();
            }
        }
    }
    else if(ds == 11)
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\t\tDistance from Dakshin Surma to Mount Adora Hospital = 22.4 k.m.\n\t\tTransport cost will be: 310 Tk\n");
        printf("\n\n\n\t\t'0' For Back :  ");
        int r;
        scanf("%d", &r);
        if(r == 0)
        {
            system("cls");
            // Hos_to_home();
            dakshinsurma();
        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
            printf("\n\n\t\t'0' For Back :  ");

            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                dakshinsurma();
            }
        }
    }
    else if( ds == 0)
    {
        system("cls");
        gotoxy(0,7);
        Hos_to_home();

    }
    else
    {
        printf("\n\t\t\tWrong Choice\n");
    }
    printf("\n\n\t\t'0' For Back : ");
}
}





