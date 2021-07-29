
void printingMedicine();
void backMedicine_field();
void part2();
void al_alargic();
void printingMedicine();
void all_medicine();
void all_medicine_field();
void calculation();
void alargic();
void al_azrithmoycin();
void azrithmoycin();
void al_bectoriyaInfec();
void bectoriyaInfec();
void al_cartilage();
void cartilage();
void al_cough();
void cough();
void al_depression();
void depression();
void al_eyeDrop();
void eyeDrop();
void al_hypertension();
void hypertension();
void al_migrane();
void migraine();
void al_omeprazol();
void omeprazol();
void al_paracetamol();
void paracetamol();
void al_thyroid();
void thyroid();
void al_ulcer();
void ulcer();
void al_vitamin();
void vitamin();
void payment();
void remMedicine();
void  more();
int medi_count(int a);
void gotoxy(int x,int y)   //  use  cordinate
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int collect[100], ke =0, l = 0, quantity[100] ;
int totalPrice = 0 ;

float TotalMediPrice = 0, TMP[100], add = 0,mediPrice[100], wp = 0;

int main()
{
    part2();
}
void part2()
{
    all_medicine();
}

void printingMedicine()
{
    FILE *mail;

    char c ;

    mail = fopen("printing_medicine.txt","r");

    if(mail == NULL)
        printf("\n\t\tFile Is Missing");
    else
    {
        while(! feof(mail))
        {
            c = fgetc(mail);
            printf("%c",c);
        }
        fclose(mail);
    }


}


void  all_medicine()
{
    gotoxy(0,7);
    int haramain,i;
    printf("\n\n\t\t\t1.M E D I C I N E   CE NT ER \n");
    printf("\n\t\t\t2.Purchase History\n\n");
    printf("\n\t\t\tChoice Option : ");
    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printingMedicine();
            all_medicine_field();
            break;
        }
        case 2: //purchese history
        {
            system("cls");
            gotoxy(0,7);
            if(TotalMediPrice == 0)
            {
                gotoxy(0,7);
                printf("\n\n\n\t\t\tYou Did not buy anything:\n");

            }
            else
            {
                system("cls");
                gotoxy(0,7);
                printf("\n\n\t\t\tTotal amount = %.3f",TotalMediPrice );

                printf("\n\n\n");

                //printf("\n\tHistory\n\n");
                calculation();
                printf("\n\n\n");
                more();
                printf("\n\n\n");
            }
            break;
        }
        case 0:
            system("cls");
            gotoxy(0,7);
            //all_medicine();
            part2();
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t\t'0' for Back : ");
        //printf("\n\t\tCheck for another: ");
    }
}
void all_medicine_field()
{
    //gotoxy(0,7);
    int alharamain_field,i;

    printf("\n\n\n\t\t\t'0' For Back : ");
    printf(" \n\t\t\tChoice Option  = ");
    for(i=1; scanf("%d", &alharamain_field)>0; i++)
    {
        switch(alharamain_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            // al_haramain_medical();
            // al_paracetamol();
            al_alargic();
            //al_migrane();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            //popular_medical();
            // al_migrane();
            //al_vitamin();
            al_azrithmoycin();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            al_bectoriyaInfec();
            // al_omeprazol();
            // Mount_Adora_medical();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            al_cartilage();
            // Oasis_medical();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            // IBN_SINA_medical();
            al_cough();
            break;
        }
        case 6:
        {
            system("cls");
            gotoxy(0,7);
            al_depression();
            // ParkView_medical();
            break;
        }
        case 7:
        {
            system("cls");
            gotoxy(0,7);
            al_eyeDrop();
            // IBN_SINA_medical();
            break;
        }
        case 8:
        {
            system("cls");
            gotoxy(0,7);
            al_hypertension();
            // ParkView_medical();
            break;
        }
        case 9:
        {
            system("cls");
            gotoxy(0,7);
            al_migrane();
            // IBN_SINA_medical();
            break;
        }
        case 10:
        {
            system("cls");
            gotoxy(0,7);
            // ParkView_medical();
            al_omeprazol();
            break;
        }
        case 11:
        {
            system("cls");
            gotoxy(0,7);
            al_paracetamol();
            // IBN_SINA_medical();
            break;
        }
        case 12:
        {
            system("cls");
            al_thyroid();
            // ParkView_medical();
            break;
        }
        case 13:
        {
            system("cls");
            gotoxy(0,7);
            al_ulcer();
            // ParkView_medical();
            break;
        }
        case 14:
        {
            system("cls");
            gotoxy(0,7);
            al_vitamin();
            // ParkView_medical();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            //printing();
            all_medicine();
            break;

        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t'0' For Back : \n");
        printf("\n\tCheck for another: ");
    }
}
void backMedicine_field()
{
    system("cls");
    //gotoxy(0,7);
    printingMedicine();
    all_medicine_field();
}

void  calculation()
{

    //gotoxy(0,7);
     printf("\n\n\n");
    printf("\n\t\tCode\tCatagories\t\t\tQuantity\t\tPrice(1's)\t\tTotal Amount\n\n");
    for(int i = 0 ; i < ke ; i++)
    {
        if(collect[i] >= 1 && collect[i] <= 5)
        {
            printf("\n\t\t%d\tALLERGIC\t\t\t%d\t\t\t%.2f\t\t\t%.3f",collect[i], quantity[i],mediPrice[i],quantity[i] * mediPrice[i]);
            wp += (quantity[i] * mediPrice[i]);
        }

        if(collect[i] >= 6 && collect[i] <= 11)
        {

            printf("\n\t\t%d\tAZRITHMOYCIN\t\t\t%d\t\t\t%.2f\t\t\t%.3f",collect[i], quantity[i],mediPrice[i],quantity[i] * mediPrice[i]);
            wp += (quantity[i] * mediPrice[i]);
        }

        if(collect[i] >= 12 && collect[i] <= 21)
        {

            printf("\n\t\t%d\tBACTERIYA INFECTION\t\t\t%d\t\t\t%.2f\t\t\t%.3f",collect[i], quantity[i],mediPrice[i],quantity[i] * mediPrice[i]);
            wp += (quantity[i] * mediPrice[i]);
        }

        if(collect[i] >= 22 && collect[i] <= 29)
        {

            printf("\n\t\t%d\tCARTILAGE\t\t\t%d\t\t\t%.2f\t\t\t%.3f",collect[i], quantity[i],mediPrice[i],quantity[i] * mediPrice[i]);
            wp += (quantity[i] * mediPrice[i]);
        }
        if(collect[i] >= 29 && collect[i] <= 37)
        {

            printf("\n\t\t%d\tCOUGH\t\t\t%d\t\t\t%.2f\t\t\t%.3f",collect[i], quantity[i],mediPrice[i],quantity[i] * mediPrice[i]);
            wp += (quantity[i] * mediPrice[i]);
        }
        if(collect[i] >= 38 && collect[i] <= 42)
        {

            printf("\n\t\t%d\tDEPRESSION\t\t\t%d\t\t\t%.2f\t\t\t%.3f",collect[i], quantity[i],mediPrice[i],quantity[i] * mediPrice[i]);
            wp += (quantity[i] * mediPrice[i]);
        }
        if(collect[i] >= 43 && collect[i] <= 52)
        {

            printf("\n\t\t%d\tEYE DROP\t\t\t%d\t\t\t%.2f\t\t\t%.3f",collect[i], quantity[i],mediPrice[i],quantity[i] * mediPrice[i]);
            wp += (quantity[i] * mediPrice[i]);
        }
        if(collect[i] >= 53 && collect[i] <=  62)
        {

            printf("\n\t\t%d\tHYPERTENSION\t\t\t%d\t\t\t%.2f\t\t\t%.3f",collect[i], quantity[i],mediPrice[i],quantity[i] * mediPrice[i]);
            wp += (quantity[i] * mediPrice[i]);
        }
        if(collect[i] >= 63 && collect[i] <=  72)
        {

            printf("\n\t%d\tMIGRAIN\t\t\t%d\t\t\t%.2f\t\t\t%.3f",collect[i], quantity[i],mediPrice[i],quantity[i] * mediPrice[i]);
            wp += (quantity[i] * mediPrice[i]);
        }
        if(collect[i] >= 73 && collect[i] <=  87)
        {

            printf("\n\t\t%d\tOMEPRAZOL\t\t\t%d\t\t\t%.2f\t\t\t%.3f",collect[i], quantity[i],mediPrice[i],quantity[i] * mediPrice[i]);
            wp += (quantity[i] * mediPrice[i]);
        }
        if(collect[i] >= 88 && collect[i] <=  101)
        {

            printf("\n\t\t%d\tPARACITAMOL\t\t\t%d\t\t\t%.2f\t\t\t%.3f",collect[i], quantity[i],mediPrice[i],quantity[i] * mediPrice[i]);
            wp += (quantity[i] * mediPrice[i]);
        }
        if(collect[i] >= 102 && collect[i] <=  107)
        {

            printf("\n\t\t%d\tTHYROID\t\t\t%d\t\t\t%.2f\t\t\t%.3f",collect[i], quantity[i],mediPrice[i],quantity[i] * mediPrice[i]);
            wp += (quantity[i] * mediPrice[i]);
        }
        if(collect[i] >= 108 && collect[i] <=  117)
        {
//\n\t%d\tAZRITHMOYCIN\t\t\t%.2f\t\t\t%.3f
            printf("\n\t\t%d\tULCER\t\t\t%d\t\t\t%.2f\t\t\t%.3f",collect[i], quantity[i],mediPrice[i],quantity[i] * mediPrice[i]);
            wp += (quantity[i] * mediPrice[i]);
        }
        if(collect[i] >= 118 && collect[i] <= 125)
        {

            printf("\n\t\t%d\tVITAMIN\t\t\t%d\t\t\t%.2f\t\t\t%.3f",collect[i], quantity[i],mediPrice[i],quantity[i] * mediPrice[i]);
            wp += (quantity[i] * mediPrice[i]);
        }

    }

    printf("\n\n\n\t\t\tCURRENT AMOUNT = %.2f",wp );
    printf("\n\n\n");
}



void al_alargic()
{
    // gotoxy(0,7);
    int haramain,i;

    printf("\n\n\n\t\t\t1. A L A R G I C \n\n");

    printf("\n\t\t\t2. Payment.");
    printf("\n\n\t\t\t'0' for Back. ");
    printf("\n\n\t\t\tChoice Option :  ");



    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            // printing();
            gotoxy(0,7);
            alargic();
            break;
        }
        case 2:
        {
            //system("cls");
            // printing();
            //migraine();
            //gotoxy(0,7);
            payment();
            break;
        }
        case 0:
        {
            system("cls");
            //printing();
            // al_haramain_medical_Field();
            //printing();
            gotoxy(0,7);
            printingMedicine();
            all_medicine_field();
            break;
        }
        default:
            printf("\n\t\t\tWrong Choice\n");
        }
        printf("\n\t\t\t'0' for Back : ");
        //printf("\n\t\tCheck for another: ");
    }
}
void alargic()
{
    //gotoxy(0,7);
    FILE *mail;

    char c ;

    mail = fopen("alargic.txt","r");

    if(mail == NULL)
        printf("\n\t\tFile Is Missing");
    else
    {
        while(! feof(mail))
        {
            c = fgetc(mail);
            printf("%c",c);
        }
        fclose(mail);
    }
    int data,a ;
    printf("\n\t\t'0' for Back: ");
    printf("\n\t\tTotal Number of Medicine Buy : ");
    scanf("%d",&data);
    if(data == 0 )
    {
        backMedicine_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 5)
            {
                medi_count(a);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }


}
void al_azrithmoycin()
{
    //gotoxy(0,7);
    int haramain,i;

    printf("\n\n\n\t\t\t1. A Z R I T H M O Y C I N\n\n");
    printf("\n\n\t\t\t2. Payment . ");
    printf("\n\n\t\t\t'0' for Back .");
    printf("\n\n\t\t\tChoice Option : ");


    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            // printing();
            gotoxy(0,7);
            azrithmoycin();
            break;
        }
        case 2:
        {
            //system("cls");
            // printing();
            //migraine();
            payment();
            break;
        }
        case 0:
        {
            system("cls");
            //printing();
            // al_haramain_medical_Field();
            //printing();
            gotoxy(0,7);
            printingMedicine();
            all_medicine_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back.");
        printf("\n\t\tCheck for another : ");
    }
}

void azrithmoycin()
{
    //gotoxy(0,7);
    FILE *mail;

    char c ;

    mail = fopen("azrithmoycin.txt","r");

    if(mail == NULL)
        printf("\n\t\tFile Is Missing");
    else
    {
        while(! feof(mail))
        {
            c = fgetc(mail);
            printf("%c",c);
        }
        fclose(mail);
    }
    int data,a ;
    printf("\n\t\t'0' for Back : ");
    printf("\n\t\tTotal Number of Medicine Buy : ");
    scanf("%d",&data);
    if(data == 0 )
    {
        backMedicine_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 5)
            {
                medi_count(a + 5);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }

}

void al_bectoriyaInfec()
{
    //gotoxy(0,7);
    int haramain,i;

    printf("\n\n\n\t\t\t1. B A C T O R I Y A     I N F E C T I O N\n\n");
    printf("\n\n\t\t\t2. Payment.");
    printf("\n\n\t\t\t'0' for Back .");
    printf("\n\n\t\t\tChoice Opotion :  ");

    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            // printing();
            bectoriyaInfec();
            break;
        }
        case 2:
        {
            //system("cls");
            // printing();
            //migraine();
            payment();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            //printing();
            // al_haramain_medical_Field();
            //printing();
            printingMedicine();
            all_medicine_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back .  ");
        printf("\n\t\tCheck for another : ");
    }
}
void bectoriyaInfec()
{
    //gotoxy(0,7);
    FILE *mail;

    char c ;

    mail = fopen("bectariya infection.txt","r");

    if(mail == NULL)
        printf("\n\t\tFile Is Missing");
    else
    {
        while(! feof(mail))
        {
            c = fgetc(mail);
            printf("%c",c);
        }
        fclose(mail);
    }
    int data,a ;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tTotal Number of Medicine Buy : ");
    scanf("%d",&data);
    if(data == 0 )
    {
        backMedicine_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 10)
            {
                medi_count(a + 11);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }


}

void al_cartilage()
{
    //gotoxy(0,7);
    int haramain,i;

    printf("\n\n\n\t\t\t1. C A R T I L A G E\n\n");

    printf("\n\n\t\t\t2. Payment.");
    printf("\n\n\t\t\t'0' for Back . ");
    printf("\n\t\t\tChoice Option : ");



    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            // printing();
            cartilage();
            break;
        }
        case 2:
        {
            //system("cls");
            // printing();
            //migraine();
            payment();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            //printing();
            // al_haramain_medical_Field();
            //printing();
            printingMedicine();
            all_medicine_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back .");;
        printf("\n\t\tCheck for another : ");
    }
}

void cartilage()
{
    //gotoxy(0,7);
    FILE *mail;

    char c ;

    mail = fopen("cartilage.txt","r");

    if(mail == NULL)
        printf("\n\t\tFile Is Missing");
    else
    {
        while(! feof(mail))
        {
            c = fgetc(mail);
            printf("%c",c);
        }
        fclose(mail);
    }
    int data,a ;
    printf("\n\t\t'0' for Back .");
    printf("\n\t\tTotal Number of Medicine Buy : ");
    scanf("%d",&data);
    if(data == 0 )
    {
        backMedicine_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 8)
            {
                medi_count(a + 21);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }


}
void  al_cough()
{
    //gotoxy(0,7);
    int haramain,i;
    printf("\n\n\n\t\t\t 1.C O U G H \n\n");

    printf("\n\n\t\t\t2 . Payment . ");
    printf("\n\t\t\t'0' for Back . ");

    printf("\n\t\t\tChoice Option : ");


    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            // printing();
            cough();
            break;
        }
        case 2:
        {
            //system("cls");
            // printing();
            //migraine();
            cough();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            //printing();
            // al_haramain_medical_Field();
            //printing();
            printingMedicine();
            all_medicine_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back . ");
        printf("\n\t\tCheck for another : ");
    }
}
void  cough()
{
    //gotoxy(0,7);
    FILE *mail;

    char c ;

    mail = fopen("cough.txt","r");

    if(mail == NULL)
        printf("\n\t\tFile Is Missing");
    else
    {
        while(! feof(mail))
        {
            c = fgetc(mail);
            printf("%c",c);
        }
        fclose(mail);
    }
    int data,a ;
    printf("\n\t\t'0' for back: ");
    printf("\n\t\tTotal Number of Medicine Buy : ");
    scanf("%d",&data);
    if(data == 0 )
    {
        backMedicine_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 8)
            {
                medi_count(a + 29 );
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }


}

void  al_depression()
{
    // gotoxy(0,7);
    int haramain,i;

    printf("\n\n\n\t\t\t1. D E P R E S S I O N \n\n");
    //printf("\n\t")
    printf("\n\t\t\tPress '1' for Go . ");

    printf("\n\n\t\t\t2. Payment .");

    printf("\n\t\t\t'0' for Back .");
    printf("\n\t\t\tChoice Option : ");

    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            // printing();
            depression();
            break;
        }
        case 2:
        {
            //system("cls");
            // printing();
            //migraine();
            payment();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            //printing();
            // al_haramain_medical_Field();
            //printing();
            printingMedicine();
            all_medicine_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back .");
        printf("\n\t\tCheck for another : ");
    }
}
void  depression()
{
    // gotoxy(0,7);
    FILE *mail;

    char c ;

    mail = fopen("depression drug.txt","r");

    if(mail == NULL)
        printf("\n\t\tFile Is Missing");
    else
    {
        while(! feof(mail))
        {
            c = fgetc(mail);
            printf("%c",c);
        }
        fclose(mail);
    }
    int data,a ;
    printf("\n\t\t'0' for Back . ");
    printf("\n\t\tTotal Number of Medicine Buy : ");
    scanf("%d",&data);
    if(data == 0 )
    {
        backMedicine_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 5)
            {
                medi_count(a + 37);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }

}

void  al_eyeDrop()
{
    //gotoxy(0,7);
    int haramain,i;

    printf("\n\n\n\t\t\t1. E Y E   D R O P\n\n");

    //printf("\n\t\t\tPress '1' for Go . ");

    printf("\n\n\t\t\t2. Payment . ");

    printf("\n\n\t\t\t'0' for Back .");
    printf("\n\t\t\tChoice Option :  ");


    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            // printing();
            eyeDrop();
            break;
        }
        case 2:
        {
            //system("cls");
            // printing();
            //migraine();
            payment();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            //printing();
            // al_haramain_medical_Field();
            //printing();
            printingMedicine();
            all_medicine_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back . ");
        printf("\n\t\tCheck for another : ");
    }
}
void  eyeDrop()
{
    //gotoxy(0,7);
    FILE *mail;

    char c ;

    mail = fopen("Eye Drop.txt","r");

    if(mail == NULL)
        printf("\n\t\tFile Is Missing");
    else
    {
        while(! feof(mail))
        {
            c = fgetc(mail);
            printf("%c",c);
        }
        fclose(mail);
    }
    int data,a ;
    printf("\n\t\t\t'0' for Back . ");
    printf("\n\t\tTotal Number of Medicine Buy : ");
    scanf("%d",&data);
    if(data == 0 )
    {
        backMedicine_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 10)
            {
                medi_count(a + 42);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }

}

void al_hypertension()
{
    //gotoxy(0,7);
    int haramain,i;

    printf("\n\n\n\t\t\t1. H Y P E R T E N S I O N\n\n");


    printf("\n\n\t\t\t2. Payment . ");

    printf("\n\n\t\t\t'0' for Back .");
    printf("\n\t\t\tChoice Option :  ");

    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            // printing();
            hypertension();
            break;
        }
        case 2:
        {
            //system("cls");
            // printing();
            //migraine();
            payment();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            //printing();
            // al_haramain_medical_Field();
            //printing();
            printingMedicine();
            all_medicine_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back .");
        printf("\n\t\tCheck for another : ");
    }
}

void hypertension()
{
    //gotoxy(0,7);
    FILE *mail;

    char c ;

    mail = fopen("hypertension.txt","r");

    if(mail == NULL)
        printf("\n\t\tFile Is Missing");
    else
    {
        while(! feof(mail))
        {
            c = fgetc(mail);
            printf("%c",c);
        }
        fclose(mail);
    }
    int data,a ;
    printf("\n\t\t\t'0' for Back . ");
    printf("\n\t\tTotal Number of Medicine Buy : ");
    scanf("%d",&data);
    if(data == 0 )
    {
        backMedicine_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 10)
            {
                medi_count(a + 52);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }

}


void al_migrane()
{
    //gotoxy(0,7);
    int haramain,i;

    printf("\n\n\n\t\t\t1. M I G R A  N E  \n\n");

    printf("\n\n\t\t\t2. Payment . ");

    printf("\n\n\t\t\t'0' for Back .");
    printf("\n\t\t\tChoice Option :  ");

    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            // printing();
            migraine();
            break;
        }
        case 2:
        {
            //system("cls");
            // printing();
            //migraine();
            payment();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            //printing();
            // al_haramain_medical_Field();
            //printing();
            printingMedicine();
            all_medicine_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back .");
        printf("\n\t\tCheck for another : ");
    }
}

void migraine()
{
    //gotoxy(0,7);
    FILE *mail;

    char c ;

    mail = fopen("migrain.txt","r");

    if(mail == NULL)
        printf("\n\t\tFile Is Missing");
    else
    {
        while(! feof(mail))
        {
            c = fgetc(mail);
            printf("%c",c);
        }
        fclose(mail);
    }
    int data,a ;
    printf("\n\t\t'0' for Back . ");
    printf("\n\t\tTotal Number of Medicine Buy : ");
    scanf("%d",&data);
    if(data == 0 )
    {
        backMedicine_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 10)
            {
                medi_count(a + 62);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }

}


void al_omeprazol()
{
    // gotoxy(0,7);
    int haramain,i;


    printf("\n\n\n\t\t\t 1.O M E P R A Z O L\n\n");


    printf("\n\n\t\t\t2. Payment . ");

    printf("\n\n\t\t\t'0' for Back .");
    printf("\n\t\t\tChoice Option :  ");

    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            // printing();
            omeprazol();
            break;
        }
        case 2:
        {
            //system("cls");
            // printing();
            //migraine();
            payment();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            //printing();
            // al_haramain_medical_Field();
            //printing();
            printingMedicine();
            all_medicine_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back .");
        printf("\n\t\tCheck for another : ");
    }
}

void omeprazol()
{
    //gotoxy(0,7);
    FILE *mail;

    char c ;

    mail = fopen("omeprazol.txt","r");

    if(mail == NULL)
        printf("\n\t\tFile Is Missing");
    else
    {
        while(! feof(mail))
        {
            c = fgetc(mail);
            printf("%c",c);
        }
        fclose(mail);
    }
    int data,a ;
    printf("\n\t\t'0' for Back . ");
    printf("\n\t\tTotal Number of Medicine Buy : ");
    scanf("%d",&data);
    if(data == 0 )
    {
        backMedicine_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 10)
            {
                medi_count(a + 72);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }

}
void al_paracetamol()
{
    //gotoxy(0,7);
    int haramain,i;

    printf("\n\n\n\t\t\t1. P  A R A C E T A M O L\n\n");

    printf("\n\n\t\t\t2. Payment . ");

    printf("\n\n\t\t\t'0' for Back .");
    printf("\n\t\t\tChoice Option :  ");

    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            // printing();
            paracetamol();
            break;
        }
        case 2:
        {
            //system("cls");
            // printing();
            //migraine();
            payment();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            //printing();
            // al_haramain_medical_Field();
            //printing();
            printingMedicine();
            all_medicine_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back .");
        printf("\n\t\tCheck for another : ");
    }
}
void paracetamol()
{
    //gotoxy(0,7);
    FILE *mail;

    char c ;

    mail = fopen("paracetamol.txt","r");

    if(mail == NULL)
        printf("\n\t\tFile Is Missing");
    else
    {
        while(! feof(mail))
        {
            c = fgetc(mail);
            printf("%c",c);
        }
        fclose(mail);
    }
    int data,a ;
    printf("\n\t\t'0' for Back .");
    printf("\n\t\tTotal Number of Medicine Buy : ");
    scanf("%d",&data);
    if(data == 0 )
    {
        backMedicine_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 14)
            {
                medi_count(a + 87);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }

}

void al_thyroid()
{
    //gotoxy(0,7);
    int haramain,i;

    printf("\n\n\n\t\t\t1. T H Y R O I D\n\n");

    printf("\n\n\t\t\t2. Payment . ");

    printf("\n\n\t\t\t'0' for Back .");
    printf("\n\t\t\tChoice Option :  ");

    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            // printing();
            thyroid();
            break;
        }
        case 2:
        {
            //system("cls");
            // printing();
            //migraine();
            payment();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            //printing();
            // al_haramain_medical_Field();
            //printing();
            printingMedicine();
            all_medicine_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back .");
        printf("\n\t\tCheck for another : ");
    }
}

void thyroid()
{
    // gotoxy(0,7);
    FILE *mail;

    char c ;

    mail = fopen("Thyroid.txt","r");

    if(mail == NULL)
        printf("\n\t\tFile Is Missing");
    else
    {
        while(! feof(mail))
        {
            c = fgetc(mail);
            printf("%c",c);
        }
        fclose(mail);
    }
    int data,a ;
    printf("\n\t\t'0' for Back .");
    printf("\n\t\tTotal Number of Medicine Buy : ");
    scanf("%d",&data);
    if(data == 0 )
    {
        backMedicine_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 6)
            {
                medi_count(a + 101);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }


}
void al_ulcer()
{
    //gotoxy(0,7);
    int haramain,i;

    printf("\n\n\n\t\t\t1. U L C E R\n\n");

    printf("\n\n\t\t\t2. Payment . ");

    printf("\n\n\t\t\t'0' for Back .");
    printf("\n\t\t\tChoice Option :  ");

    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);

            // printing();
            ulcer();
            break;
        }
        case 2:
        {
            //system("cls");
            // printing();
            //migraine();
            payment();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);

            //printing();
            // al_haramain_medical_Field();
            //printing();
            printingMedicine();
            all_medicine_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back .");
        printf("\n\t\tCheck for another : ");
    }
}
void ulcer()
{
    //gotoxy(0,7);
    FILE *mail;

    char c ;

    mail = fopen("ulcer.txt","r");

    if(mail == NULL)
        printf("\n\t\tFile Is Missing");
    else
    {
        while(! feof(mail))
        {
            c = fgetc(mail);
            printf("%c",c);
        }
        fclose(mail);
    }
    int data,a ;
    printf("\n\t\t'0' for Back . ");
    printf("\n\t\tTotal Number of Medicine Buy : ");
    scanf("%d",&data);
    if(data == 0 )
    {
        backMedicine_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 10)
            {
                medi_count(a + 107);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }


}

/*
void gotoxy(int x,int y)   //  use  cordinate
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
*/
void al_vitamin()
{

    // gotoxy(0,7);
    int haramain,i;

    printf("\n\n\n\t\t\t1. V I T A M I N \n\n");

    printf("\n\n\t\t\t2. Payment . ");

    printf("\n\n\t\t\t'0' for Back .");
    printf("\n\t\t\tChoice Option :  ");



    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            // printing();
            vitamin();
            break;
        }
        case 2:
        {
            //system("cls");
            // printing();
            //migraine();
            payment();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            //printing();
            // al_haramain_medical_Field();
            //printing();
            printingMedicine();
            all_medicine_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back .");
        printf("\n\t\tCheck for another: ");
    }

}

void  vitamin()
{
    // gotoxy(0,7);
    FILE *mail;
    char c ;

    mail = fopen("vitamin.txt","r");

    if(mail == NULL)
        printf("\n\t\tFile Is Missing");
    else
    {
        while(! feof(mail))
        {
            c = fgetc(mail);
            printf("%c",c);
        }
        fclose(mail);
    }

    int data,a ;
    printf("\n\t\t'0' for Back . ");
    printf("\n\t\tTotal Number of Medicine Buy : ");
    scanf("%d",&data);

    if(data == 0 )
    {
        backMedicine_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 8)
            {
                medi_count(a + 117);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }
}


void payment()
{
    system("cls");
    gotoxy(0,7);
    int a ;
    if( TotalMediPrice ==  0)
    {
        printf("\n\t\t\tYou did not Buy anything");

        printf("\n\n\t\t\tFor medicine buy press '1'  : ");
        printf("\n\t\t\t'0' for Back: ");
        scanf("%d",&a);
        if(a == 0)
        {
            system("cls");
            printingMedicine();
            all_medicine_field();
        }
        else if(a==1)
        {
            system("cls");
            all_medicine();
        }

    }
    else
    {
        system("cls");
        gotoxy(0,7);
        printf("\n\n\t\t1.B-kas\n\n\t\t2.Rocket");
        printf("\n\n\t\t3.Nagad\n\n\t\t4.Card");

        printf("\n\n\t\tEnter Choice : ");

        scanf("%d",&a);
        if(a==1)
        {
            getchar();
            printf("\n\n\nPlease wait");
            printf("\n\n");
            for(int i = 0 ; i <= 30 ; i++)
            {
                Sleep(13);
                //printf("%c",120);
                printf("%c",219);
            }

            printf("\n\tEnter Your B-kas Number : ");
            int bkas;scanf("%d",&bkas);

            printf("\n\tEnter your Pin Number : ");
            int pin; scanf("%d",&pin);
            printf("\n\tThank You For your Payment \n");

        }
    }
}
//medicine count ()
int medi_count(int a)
{
    int b;
    switch(a)
    {
    case 1:

        printf("\n\tName : D-PLUS 5 \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 7;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 7;
        TMP[ke] =  add;
        ke++;
        break;
    case 2:

        printf("\n\tName : DESLORIN Plus 2.5 \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3.5;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3.5;
        TMP[ke] = add;
        ke++;
        break;
    case 3:

        printf("\n\tName : DESLORIN Plus 5 \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 5.5;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 5.5;
        TMP[ke] = add;
        ke++;
        break;
    case 4:

        printf("\n\tName : SARINEX D 2.5\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3;
        TMP[ke] = add;
        ke++;
        break;
    case 5:

        printf("\n\tName : SARINEX D 5  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 5;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 5;
        TMP[ke] = add;
        ke++;
        break;
    case 6:

        printf("\n\tName : AR-500 	 \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 30;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 30;
        TMP[ke] = add;
        ke++;
        break;
    case 7:

        printf("\n\tName : ASIZITH  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 20;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 20;
        TMP[ke] = add;

        ke++;
        break;
    case 8:

        printf("\n\tName : AZ-250 	\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 20;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 20;
        TMP[ke] = add;
        ke++;
        break;
    case 9:

        printf("\n\tName : AZ-500 	\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 30;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 30;
        TMP[ke] = add;
        ke++;
        break;
    case 10:

        printf("\n\tName : AZI-S 500 \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 30;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 30;
        TMP[ke] = add;
        ke++;
        break;
    case 11:

        printf("\n\tName : AZICIN  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 20;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 20;
        TMP[ke] = add;
        ke++;
        break;
    case 12:

        printf("\n\tName : BIOPEN VK\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 1.5;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 1.5;
        TMP[ke] = add;

        ke++;
        break;
    case 13:

        printf("\n\tName : CRYSTAPEN V \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 1.55;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 1.55;
        TMP[ke] = add;
        ke++;
        break;

    case 14:

        printf("\n\tName : CYTAPEN-V\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 1.52;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 1.52;
        TMP[ke] = add;
        ke++;
        break;
    case 15:

        printf("\n\tName : ERACILLIN-K\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 1.5;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 1.5;
        TMP[ke] = add;
        ke++;
        break;
    case 16:

        printf("\n\tName : G-PENICILLIN V\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 1.52;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 1.52;
        TMP[ke] = add; //16 tmp call
        ke++;
        break;
    case 17:

        printf("\n\tName : H-PEN 	 \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 1.35;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 1.35;

        ke++;
        break;
    case 18:

        printf("\n\tName : OPEN 	\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 1.25;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 1.25;
        ke++;
        break;
    case 19:

        printf("\n\tName : ORACYN-K 250\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 1.55;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 1.55;
        ke++;
        break;
    case 20:

        printf("\n\tName : PACIN-V \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 1.56;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 1.56;
        ke++;
        break;
    case 21:

        printf("\n\tName : PENACIN K\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 1.2;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 1.2;
        ke++;
        break;
    case 22:

        printf("\n\tName : DUOBON \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3;
        ke++;
        break;
    case 23:

        printf("\n\tName : GLUSTIN  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3.5;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3.5;
        ke++;
        break;
    case 24:

        printf("\n\tName : JOINIX\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3;
        ke++;
        break;
    case 25:

        printf("\n\tName : MASO  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3;
        ke++;
        break;
    case 26:

        printf("\n\tName : TILEX 	 \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3;
        ke++;
        break;
    case 27:

        printf("\n\tName : JOINTEC Plus  	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 8;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 8;

        ke++;
        break;
    case 28:

        printf("\n\tName : JORIX 	\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 7;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 7;
        ke++;
        break;
    case 29:

        printf("\n\tName : MASO Plus 	\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 7;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 7;
        ke++;
        break;




    case 30:

        printf("\n\tName : BROFEX\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 25;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 25;
        ke++;
        break;
    case 31:

        printf("\n\tName : COLDFLU\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 23;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 23;
        ke++;
        break;
    case 32:

        printf("\n\tName : D-COUGH\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 25;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 25;
        ke++;
        break;
    case 33:

        printf("\n\tName : DEPHAN \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 20;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 20;
        ke++;
        break;
    case 34:

        printf("\n\tName : DEXSOL \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 25;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 25;
        ke++;
        break;
    case 35:

        printf("\n\tName : DEXTROMETHORPHAN  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 35;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 35;
        ke++;
        break;
    case 36:

        printf("\n\tName : DEXTROMETHORPHAN  	 \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 24.27;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 24.27;
        ke++;
        break;
    case 37:

        printf("\n\tName : EXOPHAN  	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 24;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 24;

        ke++;
        break;
    case 38:

        printf("\n\tName : AMILIN \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.5;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.5;
        ke++;
        break;
    case 39:

        printf("\n\tName : AMIT\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.9;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.9;
        ke++;
        break;
    case 40:

        printf("\n\tName :AMITRIPTYLINE \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *0.55;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.55;
        ke++;
        break;
    case 41:

        printf("\n\tName :TRIP 10 \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.50;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.50;
        ke++;
        break;
    case 42:

        printf("\n\tName :TRYPTIN \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.55;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.55;
        ke++;
        break;

    case 43:

        printf("\n\tName : A-PHENICOL\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 23;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 23;
        ke++;
        break;
    case 44:

        printf("\n\tName : A-PHENICOL\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 11.63;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 11.63;
        ke++;
        break;
    case 45:

        printf("\n\tName : ARISTOPHEN\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 25.81;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 25.81;
        ke++;
        break;
    case 46:

        printf("\n\tName : ARISTOPHEN\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 8.34;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 8.34;
        ke++;
        break;
    case 47:

        printf("\n\tName : CHEMOPHENICOL  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 25.89;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 25.89;
        ke++;
        break;
    case 48:

        printf("\n\tName : DEXTROMETHORPHAN  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 25.89;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 25.89;
        ke++;
        break;
    case 49:

        printf("\n\tName : DEXTROMETHORPHAN  	 \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 20.23;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 20.23;
        ke++;
        break;
    case 50:

        printf("\n\tName : CHLORPHEN\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 120.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 120.00;

        ke++;
        break;

    case 51:

        printf("\n\tName : CLORAM \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 25;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 25;
        ke++;
        break;
    case 52:

        printf("\n\tName : CLORAM \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 8.50;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 8.50;
        ke++;
        break;
    //hipertension
    case 53:

        printf("\n\tName :  ACEPRIL\n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 4;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 4;
        ke++;
        break;
    case 54:

        printf("\n\tName : FASTRIL 	 \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 2.79;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 2.79;
        ke++;
        break;
    case 55:

        printf("\n\tName :  G-LISINOPRIL  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *  2.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  2.00;
        ke++;
        break;
    case 56:

        printf("\n\tName : HYPORIL  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 20.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 20.00 ;
        ke++;
        break;
    case 57:

        printf("\n\tName : LINORIL  	 \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 1.29;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 1.29;
        ke++;
        break;
    case 58:

        printf("\n\tName :  LIPRIL  	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3.00;
        ke++;
        break;

    case 59:

        printf("\n\tName :  LISPRIL  	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 2.25;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 2.25;
        ke++;
        break;
    case 60:

        printf("\n\tName : NEOPRIL  	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 1.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 1.00;
        ke++;
        break;
    case 61:

        printf("\n\tName :   NOP	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3.54;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3.54;
        ke++;
        break;
    case 62:

        printf("\n\tName : STRIL  	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3.00;
        ke++;
        break;



    case 63:

        printf("\n\tName :  ANTIGRAIN \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3.00;
        ke++;
        break;
    case 64:

        printf("\n\tName : ANTIGRAIN-TS 	 \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 7.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 7.00;
        ke++;
        break;
    case 65:

        printf("\n\tName :  AVIDRO  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *  3.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  3.00;
        ke++;
        break;
    case 66:

        printf("\n\tName : D-FEN  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 2.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 2.00 ;
        ke++;
        break;
    case 67:

        printf("\n\tName : MIGOFEN    	 \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3.00;
        ke++;
        break;
    case 68:

        printf("\n\tName :  MIGRANIL 	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3.00;
        ke++;
        break;

    case 69:

        printf("\n\tName : PITOFEN  	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3.00;
        ke++;

        break;
    case 70:

        printf("\n\tName : PIZO-A   	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3.00;
        ke++;
        break;
    case 71:

        printf("\n\tName :   PIZOFEN 	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3.00;
        ke++;
        break;
    case 72:

        printf("\n\tName : PIZOFEN-TS 	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 7.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 7.00;
        ke++;
        break;


    //hjh

    case 73:

        printf("\n\tName : ALTON  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 7.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 7.00;
        ke++;
        break;
    case 74:

        printf("\n\tName : EPA  	 \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 4.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 4.00;
        ke++;
        break;
    case 75:

        printf("\n\tName :  LOSECTIL DR \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *  4.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  4.00;
        ke++;
        break;
    case 76:

        printf("\n\tName : LOSEK  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3.50;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3.50 ;
        ke++;
        break;
    case 77:

        printf("\n\tName : LUMISEC 20   	 \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3.00;
        ke++;
        break;
    case 78:

        printf("\n\tName : MEPRA 20 	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 4.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 4.00;
        ke++;
        break;

    case 79:

        printf("\n\tName : ALTON   	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 7.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 7.00;
        ke++;

        break;
    case 80:

        printf("\n\tName : EPA  	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 4.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 4.00;
        ke++;
        break;
    case 81:

        printf("\n\tName :   OMEL-20  	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 4.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 4.00;
        ke++;
        break;
    case 82:

        printf("\n\tName : OMENIX  	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 4.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 4.00;
        ke++;
        break;
    case 83:

        printf("\n\tName : NAPXON 375  	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 8.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 8.00;
        ke++;
        break;
    case 84:

        printf("\n\tName :  PIAZOL-20   	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 4.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 4.00;
        ke++;
        break;

    case 85:

        printf("\n\tName : PPI  	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 4.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 4.00;
        ke++;
        break;
    case 86:

        printf("\n\tName : PRAM    \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3.00;
        ke++;
        break;
    case 87:

        printf("\n\tName : PRAZO    \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 4.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 4.00;
        ke++;
        break;

    case 88:

        printf("\n\tName : TAMEN    \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.79;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.79;
        ke++;
        break;
    case 89:

        printf("\n\tName : TAMOL   \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.60;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.60;
        ke++;
        break;
    case 90:

        printf("\n\tName : TANDAMOL   \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.60;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.60;
        ke++;
        break;
    case 91:

        printf("\n\tName : TEMPAC  	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.60;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.60;
        ke++;
        break;
    case 92:

        printf("\n\tName : TEMPIL   	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.80;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.80;
        ke++;
        break;
    case 93:

        printf("\n\tName : TEMPOL 	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.65;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.65;
        ke++;
        break;
    case 94:

        printf("\n\tName : TIMIDAL  	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.59;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.59;
        ke++;
        break;

    case 95:

        printf("\n\tName : TYDENOL 	  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.51;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.51;
        ke++;
        break;
    case 96:

        printf("\n\tName : TYLEN   \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.80;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.80;
        ke++;
        break;
    case 97:

        printf("\n\tName : TYNOL  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.65;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.65;
        ke++;
        break;

    case 98:

        printf("\n\tName : SILPA     \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.65;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.65;
        ke++;
        break;
    case 99:

        printf("\n\tName : NAPA    \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.80;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.80;
        ke++;
        break;
    case 100:

        printf("\n\tName : NAPA    \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *  18.24;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  18.24;
        ke++;
        break;
    case 101:

        printf("\n\tName : NAPA    \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *  3.5;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  3.5;
        ke++;
        break;
    case 102:

        printf("\n\tName : ELTROXIN     \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *  2.56;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  2.56;
        ke++;
        break;
    case 103:

        printf("\n\tName : EUTHYCIN    \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 1.20;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  1.20;
        ke++;
        break;
    case 104:

        printf("\n\tName : JAROXIN-50   \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 1.20;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =   1.20;
        ke++;
        break;
    case 105:

        printf("\n\tName : THYRONOR     \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *  1.2;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  1.2;
        ke++;
        break;
    case 106:

        printf("\n\tName : THYROX  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *  1.2;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  1.2;
        ke++;
        break;
    case 107:

        printf("\n\tName : CARBIZOL    \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *  3.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  3.00;
        ke++;
        break;

    case 108:

        printf("\n\tName : ANTEPSIN   \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *   4.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  4.00;
        ke++;
        break;
    case 109:

        printf("\n\tName : GASTALFET      \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 4.02;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  4.02;
        ke++;
        break;
    case 110:

        printf("\n\tName : ULSEC    \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 4.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  4.00;
        ke++;
        break;
    case 111:

        printf("\n\tName : ENSO   \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3.00;
        ke++;
        break;
    case 112:

        printf("\n\tName : LANOZOLE      \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *  3.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  3.00;
        ke++;
        break;
    case 113:

        printf("\n\tName : LANSEC    \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *   5.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  5.00;
        ke++;
        break;
    case 114:

        printf("\n\tName : LANSINA      \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *  6.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  6.00;
        ke++;
        break;
    case 115:

        printf("\n\tName : LANSO     \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *  3.5;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  3.5;
        ke++;
        break;
    case 116:

        printf("\n\tName : LANSODIN   \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *  3.50;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =   3.50;
        ke++;
        break;
    case 117:

        printf("\n\tName : LANSOPROL     \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 4.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =   4.00;
        ke++;
        break;

    case 118:

        printf("\n\tName : EYEVI    \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 8.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 8.00;
        ke++;
        break;
    case 119:

        printf("\n\tName : GOLD      \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 8.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  8.00;
        ke++;
        break;

    case 120:

        printf("\n\tName : TIOXIL  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 8.00;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  8.00;
        ke++;
        break;
    case 121:

        printf("\n\tName : A-VIT-1     \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 2.83;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  2.83;
        ke++;
        break;
    case 122:

        printf("\n\tName : BEFORTE  \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.43;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 0.43;
        ke++;
        break;
    case 123:

        printf("\n\tName :  KVIT-B 	     \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 0.42;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  0.42;
        ke++;
        break;
    case 124:

        printf("\n\tName : RIBAPLEX   \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b *  0.45;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] =  0.45;
        ke++;
        break;
    case 125:

        printf("\n\tName : OSCAL-D    \n");
        printf("\n\tQ U A N T I T Y : ");
        scanf("%d",&b);
        add = b * 3.30;
        TotalMediPrice += add;
        //totalPrice += b * 3 ;
        collect[ke] = a;
        quantity[ke] = b ;
        mediPrice[ke] = 3.30;
        ke++;
        break;
    // case 0:
    //system("cls");
    //all_medicine();
    default:
        printf("\n\tWrong Choice.\n");
    }
    //printf("\n\t'0' For Back:>");
    // return TotalMediPrice;
}

/// rem medicine means remove item from
void remMedicine()
{
    //gotoxy(0,7);
    int  pos = - 1;
    printf("\n\t\tEnter Position : ");
    scanf("%d",&pos);

    if(pos < 0 || pos > ke)
    {
        printf("\n\t\tInvalid Position \n");
    }
    else
    {

        for(int i=pos-1; i<ke-1; i++)
        {
            collect[i] =  collect[i + 1];
            quantity[i] = quantity[i + 1];
            mediPrice[i] = mediPrice[i + 1];
        }
        ke--;
        //system("cls");
        printf("\n\n\n\n");
        printf("\n\t\t\tUpdate List\n\n");
        printf("\n\t\t\tPrevious Price : = %.3f",TotalMediPrice);
        wp = 0 ;
        // TotalMediPrice = 0;
        calculation(); printf("\n\n\n");
        more(); printf("\n\n\n");
    }
}

void more()
{
    // gotoxy(0,6);
    printf("\n\n\t\t 1. Remove item from list \t\t2.Payment ");
    printf("\n\n\t\tChoice a option ");
    int ll;
    scanf("%d",&ll);

    if(ll == 1)
    {
        remMedicine();
    }
    else if(ll == 2)
    {
        payment();
    }
    else
    {
        printf("\n\tWrong Choice");
    }
}


