 void testName();
void  hamatology();
void biochemistry();
void serology();
void urine();
void stool();
void microbiology();
void cytopathology();
void hormones();
void ultrasonogram();
void xray();
void location();void Test_payment();


int m = 0;
float testCost = 0,TestPrice[100] , CT = 0 ;
int  TestCode[100];

int main()
{
    part3();
}

void part3()
{
    all_testName();
}

void  all_testName()
{
   gotoxy(0,7);
    int data,i;

    printf("\n\n\t\t\t1. T E S T     N A M E  \n");
    printf("\n\t\t\t2. Purchase History\n\n");
    printf("\t\t\t3. Location for Test\n");
    printf("\n\t\t\tChoice Option : ");
    for(i=1; scanf("%d",&data)>0; i++)
    {
        switch(data)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            testName();
            // printingMedicine();
            all_test_field();
            break;
        }
        case 2:
        {

            system("cls");gotoxy(0,7);
            if( testCost == 0)
            {
                printf("\n\n\n\t\t\tYou List Is Empty..!\n");

            }
            else
            {
                printf("\n\n\t\tTotal Test Rate  = %.3f\n\n", testCost );
                // printf("\n\n\n\t\t\tTOtoal Test Code : %.3f\n\n\n",CT);
                // printf("\n\tHistory\n\n");
                testCount();

            }
            break;
        }
        case 3:
        {

            system("cls");gotoxy(0,7);
            location();
            break;
        }
        case 0:
            system("cls");gotoxy(0,7);
            part3();
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t\t'0' for Back : ");
    }
}

void all_test_field()
{
    int  test_field,i;

    printf("\n\n\n\t\t\t'0' for Back : ");
    printf("\n\t\t\tChoice Option  = ");

    for(i=1; scanf("%d", &test_field)>0; i++)
    {
        switch(test_field)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            //hamatology();
            al_hamatology();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            //biochemistry();
            al_biochemistry();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            //serology();
            al_serology();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            //urine();
            al_urine();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);
            //stool();
            al_stool();
            break;
        }
        case 6:
        {
            system("cls");gotoxy(0,7);
            //microbiology();
            al_microbiology();
            break;
        }
        case 7:
        {
            system("cls");gotoxy(0,7);
            //cytopathology();
            al_cytopathology();
            break;
        }
        case 8:
        {
            system("cls");gotoxy(0,7);
            //hormones();
            al_hormones();
            break;
        }
        case 9:
        {
            system("cls");gotoxy(0,7);
            //ultrasonogram();
            al_ultrasonogram();
            break;
        }
        case 10:
        {
            system("cls");gotoxy(0,7);
            //xray();
            al_xray();
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
            all_testName();
            break;

        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back : ");
        printf("\n\t\tCheck for another : ");
    }
}



void testName()
{
    system("cls");
    int choice=0;
    FILE *file;
    char ch;
    file = fopen("testName.txt","r");
    if(file == NULL)
        printf("File dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }

}

void al_hamatology()
{
    int data,i;

    printf("\n\n\n\t\t\t1. H A M A T O L O G Y \n\n");
   printf("\t\t\t2. Purchase History\n\n");
    printf("\t\t\t3. Location for Test\n");
    printf("\n\t\t\tChoice Option : ");

    for(i=1; scanf("%d", &data)>0; i++)
    {
        switch(data)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            // printing();
            hamatology();
            break;
        }
        case 2:
        {
            //payment();
            Test_payment();
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
            testName();
            all_test_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice \n");
        }
        //printf("\n\t\t'0'to   back: ");
        //printf("\n\t\tCheck for another: ");
        printf("\n\t\t\t'0' for Back : ");
    }
}

void  hamatology()
{
    FILE *file;
    char ch;
    file = fopen("hamatology.txt","r");
    if(file == NULL)
        printf("File dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }


    int data,a ;
    printf("\n\t\t\t'0' for Back : ");
    printf("\n\t\tHow Many Test  : ");
    scanf("%d",&data);
    if(data == 0 )
    {
        system("cls");
        testName();
        all_test_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a == 0)
            {
                system("cls");gotoxy(0,7);
                testName();
                all_test_field();
            }
            if(a >= 1 && a <= 10)
            {
                test_count(a);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }
}

void al_biochemistry()
{
    int data,i;

    printf("\n\n\n\t\t\t1. B I O C H E M I S T R Y \n\n");

 printf("\t\t\t'0' for Back : \n\n");

    printf("\n\t\t\tChoice Option : ");

    for(i=1; scanf("%d", &data)>0; i++)
    {
        switch(data)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            // printing();
            biochemistry();
            break;
        }

        case 0:
        {
            system("cls");gotoxy(0,7);
            testName();
            all_test_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back : ");
        //printf("\n\t\tCheck for another: ");
    }
}
void biochemistry()
{
    FILE *file;
    char ch;
    file = fopen("biochemistry.txt","r");
    if(file == NULL)
        printf("File dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }

    int data, a;
    printf("\n\t\t\t'0' for Back : ");
    printf("\n\t\tHow Many Test  : ");
    scanf("%d",&data);
    if(data == 0)
    {
        system("cls");
        testName();
        all_test_field();

    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number  : ");

            scanf("%d",&a);
            if(data == 0)
            {
                system("cls");gotoxy(0,7);
                testName();
                all_test_field();

            }
            if(a >= 1 && a <= 10)
            {
                test_count(a + 10);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }
}

void al_serology()
{
    int data,i;

    printf("\n\n\n\t\t\t 1.S E R O L O G Y \n\n");

 printf("\t\t\t'0' for Back : \n\n");

    printf("\n\t\t\tChoice Option : ");
    printf("\n\t\t\tChoice Option : ");

    // printf("\n\n\t\t\t'0' for  back :  ");

    for(i=1; scanf("%d", &data)>0; i++)
    {
        switch(data)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            // printing();
            serology();
            break;
        }

        case 0:
        {
            system("cls");
            testName();
            all_test_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back : ");
        //printf("\n\t\tCheck for another: ");
    }
}
void serology()
{
    FILE *file;
    char ch;
    file = fopen("serology.txt","r");
    if(file == NULL)
        printf("File dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }


    int data, a;

    printf("\n\t\t\t'0' for Back : ");
    printf("\n\t\tHow Many Test  : ");
    scanf("%d",&data);
    if(data == 0)
    {
        system("cls");gotoxy(0,7);
        testName();
        all_test_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");
            scanf("%d",&a);
            if(data == 0)
            {
                system("cls");gotoxy(0,7);
                testName();
                all_test_field();
            }
            if(a >= 1 && a <= 10)
            {
                test_count(a + 20);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }
}

void al_urine()
{
    int data,i;

    printf("\n\n\n\t\t\t1. U R I N E \n\n");

  printf("\t\t\t'0' for Back : \n\n");

    printf("\n\t\t\tChoice Option : ");
    //printf("\n\t\t\tChoice Option : ");

    for(i=1; scanf("%d", &data)>0; i++)
    {
        switch(data)
        {
        case 1:
        {
            system("cls");
            // printing();
            urine();
            break;
        }

        case 0:
        {
            system("cls");
            testName();
            all_test_field();
            break;
        }
        default:
            printf("\n\tWrong Choice\n");
        }

        printf("\n\t\t\t'0' for Back : ");
        //printf("\n\t\tCheck for another: ");
    }
}
//done
void urine()
{
    FILE *file;
    char ch;
    file = fopen("urine.txt","r");
    if(file == NULL)
        printf("File dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }


    int data, a;

    printf("\n\t\t\t'0' for Back : ");
    printf("\n\t\tHow Many Test  : ");
    scanf("%d",&data);
    if(data == 0)
    {
        system("cls");gotoxy(0,7);
        testName();
        all_test_field();

    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter The Code Number : ");

            scanf("%d",&a);
            if(data == 0)
            {
                system("cls");gotoxy(0,7);
                testName();
                all_test_field();

            }
            if(a >= 1 && a <= 6)
            {
                test_count(a + 30);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }
}

void al_stool()
{
    int data,i;

    printf("\n\n\n\t\t\t1. S T O O L \n\n");

printf("\t\t\t'0' for Back : \n\n");

    printf("\n\t\t\tChoice Option : ");

    for(i=1; scanf("%d", &data)>0; i++)
    {
        switch(data)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            // printing();
            stool();
            break;
        }

        case 0:
        {
            system("cls");gotoxy(0,7);
            testName();
            all_test_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice \n");
        }
        printf("\n\n\t\t\t'0' for Back :  ");
        //printf("\n\t\tCheck for another: ");
    }
}
void stool()
{
    FILE *file;
    char ch;
    file = fopen("stool.txt","r");
    if(file == NULL)
        printf("File dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }

    int data, a;
    printf("\n\n\t\t\t'0' for Back :  ");
    printf("\n\t\tHow Many Test  : ");
    scanf("%d",&data);
    if(data == 0)
    {
        all_test_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter The Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 4)
            {
                test_count(a + 36);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }
}

void al_microbiology()
{
    int data,i;

    printf("\n\n\n\t\t\t1. M I C R O B I O L O G Y \n\n");

printf("\t\t\t'0' for Back : \n\n");

    printf("\n\t\t\tChoice Option : ");

    for(i=1; scanf("%d", &data)>0; i++)
    {
        switch(data)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            // printing();
            microbiology();
            break;
        }

        case 0:
        {
            system("cls");
            testName();
            all_test_field();
            break;
        }
        default:
            printf("\n\tWrong Choice\n");
        }
        printf("\n\n\t\t\t'0' for  back :  ");
        //printf("\n\t\tCheck for another: ");
    }
}
void microbiology()
{
    FILE *file;
    char ch;
    file = fopen("microbiology.txt","r");
    if(file == NULL)
        printf("File dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }

    int data,a;
    printf("\n\n\t\t\t'0' for back :  ");
    printf("\n\t\tHow Many Test  : ");
    scanf("%d",&data);
    if(data == 0)
    {
        all_test_field();
    }
    else
    {
        while(data--)
        {


            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 9)
            {
                test_count(a + 40);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }
}

void al_cytopathology()
{
    int data,i;

    printf("\n\n\n\t\t\t1. C Y T O P A T H O L O G Y \n\n");

  printf("\t\t\t'0' for Back : \n\n");

    printf("\n\t\t\tChoice Option : ");

    for(i=1; scanf("%d", &data)>0; i++)
    {
        switch(data)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            // printing();
            cytopathology();
            break;
        }

        case 0:
        {
            system("cls");gotoxy(0,7);
            testName();
            all_test_field();
            break;
        }
        default:
            printf("\n\tWrong Choice\n");
        }
        printf("\n\n\t\t\t'0' for Back :  ");
        //printf("\n\t\tCheck for another: ");
    }
}
void cytopathology()
{
    FILE *file;
    char ch;
    file = fopen("cytopathology.txt","r");
    if(file == NULL)
        printf("File dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }

    int data,a;
    printf("\n\n\t\t\t'0' for Back :  ");
    printf("\n\t\tHow Many Test  : ");
    scanf("%d",&data);
    if(data == 0)
    {
        all_test_field();
    }
    else
    {
        while(data--)
        {
            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 3)
            {
                test_count(a + 49);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }
}

void al_hormones()
{
    int data,i;

    printf("\n\n\n\t\t\t1. H O R M O N E S \n\n");

   printf("\t\t\t'0' for Back : \n\n");

    printf("\n\t\t\tChoice Option : ");

    for(i=1; scanf("%d", &data)>0; i++)
    {
        switch(data)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            // printing();
            hormones();
            break;
        }

        case 0:
        {
            system("cls");gotoxy(0,7);
            testName();
            all_test_field();
            break;
        }
        default:
            printf("\n\tWrong Choice\n");
        }
        printf("\n\n\t\t\t'0' for Back :  ");
        //printf("\n\t\tCheck for another: ");
    }
}
void hormones()
{
    FILE *file;
    char ch;
    file = fopen("hormones.txt","r");
    if(file == NULL)
        printf("File dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }

    int data,a;
    printf("\n\n\t\t\t'0' for Back :  ");
    printf("\n\t\tHow Many Test : ");
    scanf("%d",&data);
    if(data == 0)
    {
        all_test_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 9)
            {
                test_count(a + 52);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }
}
void al_ultrasonogram()
{
    int data,i;

    printf("\n\n\n\t\t\t1. U L T R A S O N O G R A M \n\n");

 printf("\t\t\t'0' for Back : \n\n");

    printf("\n\t\t\tChoice Option : ");
    for(i=1; scanf("%d", &data)>0; i++)
    {
        switch(data)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            // printing();
            ultrasonogram();
            break;
        }

        case 0:
        {
            system("cls");gotoxy(0,7);
            testName();
            all_test_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }

        printf("\n\t\t\t'0' for Back : ");
        //printf("\n\t\tCheck for another: ");
    }
}
void ultrasonogram()
{
    FILE *file;
    char ch;
    file = fopen("ultrasonogram.txt","r");
    if(file == NULL)
        printf("File dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }

    int data,a;
    printf("\n\t\tHow Many Test  : ");
    scanf("%d",&data);
    if(data == 0)
    {
        all_test_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 8)
            {
                test_count(a + 61);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }
}
void al_xray()
{
    int data,i;

    printf("\n\n\n\t\t\t1. X R A Y \n\n");

   printf("\t\t\t'0' for Back : \n\n");

    printf("\n\t\t\tChoice Option : ");

    for(i=1; scanf("%d", &data)>0; i++)
    {
        switch(data)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            // printing();
            xray();
            break;
        }

        case 0:
        {
            system("cls");gotoxy(0,7);
            testName();
            all_test_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }

        printf("\n\t\t\t'0' for Back : ");
        //printf("\n\t\tCheck for another: ");
    }
}
void xray()
{
    FILE *file;
    char ch;
    file = fopen("xray.txt","r");
    if(file == NULL)
        printf("File dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }

    int data,a;
    printf("\n\n\t\t\t'0' for Back :  ");
    printf("\n\t\tHow Many Test : ");
    scanf("%d",&data);
    if(data == 0)
    {
        all_test_field();
    }
    else
    {
        while(data--)
        {

            printf("\n\t\tEnter the Code Number : ");

            scanf("%d",&a);
            if(a >= 1 && a <= 9)
            {
                test_count(a + 69);
            }
            else
            {
                printf("\n\t\tWrong Choice ");
            }
        }
    }
}




int test_count(int a)
{
    int b;
    switch(a)
    {
    case 1:

        printf("\n\t\t\tName : TC WBC\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] =  100 ;
        m++;
        break;
    case 2:

        printf("\n\t\t\tName : DC WBC\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 3:
        printf("\n\t\t\tName : HB\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 4:
        printf("\n\t\t\tName : ESR\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 5:

        printf("\n\t\t\tName : CBC\n");
        b = 400;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 400 ;
        m++;
        break;
    case 6:
        printf("\n\t\t\tName : BT\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 7:
        printf("\n\t\t\tName : CT\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 8:
        printf("\n\t\t\tName : TCE\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 9:
        printf("\n\t\t\tName : MP\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 10:
        printf("\n\t\t\tName : Platelate Count\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 11:
        printf("\n\t\t\tName : Fasting Blood Sugar\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 12:
        printf("\n\t\t\tName : Random Blood Sugar\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 13:
        printf("\n\t\t\tName : Blood Sugar 1h A.B.F\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 14:
        printf("\n\t\t\tName : Blood Sugar 2h A.B.F\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 15:
        printf("\n\t\t\tName : 2h 75gm Glucose Drink\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 16:
        printf("\n\t\t\tName : 2h After Lunch\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 17:
        printf("\n\t\t\tName : GTT\n");
        b = 300;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 300 ;
        m++;
        break;
    case 18:
        printf("\n\t\t\tName : Hba 1C\n");
        b = 800;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 800 ;
        m++;
        break;
    case 19:
        printf("\n\t\t\tName : S Urea\n");
        b = 200;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 200 ;
        m++;
        break;
    case 20:
        printf("\n\t\t\tName : Creatinine\n");
        b = 200;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 200 ;
        m++;
        break;
    case 21:
        printf("\n\t\t\tName : Blood Grouping & Rh Factor\n");
        b = 150;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 150 ;
        m++;
        break;
    case 22:
        printf("\n\t\t\tName : Coombs test,direct/indirect\n");
        b = 400;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 400 ;
        m++;
        break;
    case 23:
        printf("\n\t\t\tName : ASO Titre\n");
        b = 400;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 400 ;
        m++;
        break;
    case 24:
        printf("\n\t\t\tName : RA/FA Test\n");
        b = 300;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 300 ;
        m++;
        break;
    case 25:
        printf("\n\t\t\tName : RA Test & Titre\n");
        b = 500;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 500 ;
        m++;
        break;
    case 26:
        printf("\n\t\t\tName : Widal Test\n");
        b = 300;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 300 ;
        m++;
        break;
    case 27:
        printf("\n\t\t\tName : Well Felix test\n");
        b = 600;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 600 ;
        m++;
        break;
    case 28:
        printf("\n\t\t\tName : Brucela Abortus\n");
        b = 400;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 400 ;
        m++;
        break;
    case 29:
        printf("\n\t\t\tName : Brucellia Malitensis\n");
        b = 400;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 400 ;
        m++;
        break;
    case 30:
        printf("\n\t\t\tName : Febrile Antigent\n");
        b = 1200;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 1200 ;
        m++;
        break;
    case 31:
        printf("\n\t\t\tName : Urine for R/E M/E\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 32:
        printf("\n\t\t\tName : Urine for C/S\n");
        b = 300;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 300 ;
        m++;
        break;
    case 33:
        printf("\n\t\t\tName : Urine for pregnancy test\n");
        b = 200;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 200 ;
        m++;
        break;
    case 34:
        printf("\n\t\t\tName : 24 hr Total protein\n");
        b = 400;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 400 ;
        m++;
        break;
    case 35:
        printf("\n\t\t\tName : Acetic Body\n");
        b = 300;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 300 ;
        m++;
        break;
    case 36:
        printf("\n\t\t\tName : Specific Gravity\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 37:
        printf("\n\t\t\tName : Stool R/E\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 38:
        printf("\n\t\t\tName : Stool C/S\n");
        b = 300;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 300 ;
        m++;
        break;
    case 39:
        printf("\n\t\t\tName : OBT\n");
        b = 600;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 600 ;
        m++;
        break;
    case 40:
        printf("\n\t\t\tName : Reducing Substances\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 41:
        printf("\n\t\t\tName : Throat Swab:C/S(each)\n");
        b = 300;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 300 ;
        m++;
        break;
    case 42:
        printf("\n\t\t\tName : Semen Analysis\n");
        b = 300;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 300 ;
        m++;
        break;
    case 43:
        printf("\n\t\t\tName : P/S for G/S\n");
        b = 300;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 300 ;
        m++;
        break;
    case 44:
        printf("\n\t\t\tName : P/S for C/S\n");
        b = 400;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 400 ;
        m++;
        break;
    case 45:
        printf("\n\t\t\tName : HVS for G/S\n");
        b = 300;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 300 ;
        m++;
        break;
    case 46:
        printf("\n\t\t\tName : HVS for C/S\n");
        b = 400;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 400 ;
        m++;
        break;
    case 47:
        printf("\n\t\t\tName : Skin Scraping for fungua\n");
        b = 300;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 300 ;
        m++;
        break;
    case 48:
        printf("\n\t\t\tName : Sputum for AFB\n");
        b = 200;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 200 ;
        m++;
        break;
    case 49:
        printf("\n\t\t\tName : Sputum for TCE\n");
        b = 100;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 100 ;
        m++;
        break;
    case 50:
        printf("\n\t\t\tName : FNAC\n");
        b = 1000;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 1000 ;
        m++;
        break;
    case 51:
        printf("\n\t\t\tName : FNAC (Both Breast)\n");
        b = 2000;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 2000 ;
        m++;
        break;
    case 52:
        printf("\n\t\t\tName : FNAC From Both Axillary L/N\n");
        b = 2000;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 2000 ;
        m++;
        break;
    case 53:
        printf("\n\t\t\tName : T3\n");
        b = 600;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 600 ;
        m++;
        break;
    case 54:
        printf("\n\t\t\tName : T4\n");
        b = 600;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 600 ;
        m++;
        break;
    case 55:
        printf("\n\t\t\tName : TSH\n");
        b = 600;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 600 ;
        m++;
        break;
    case 56:
        printf("\n\t\t\tName : FT3\n");
        b = 800;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 800 ;
        m++;
        break;
    case 57:
        printf("\n\t\t\tName : FT4\n");
        b = 600;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 600 ;
        m++;
        break;
    case 58:
        printf("\n\t\t\tName : CA-125\n");
        b = 1000;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 1000 ;
        m++;
        break;
    case 59:
        printf("\n\t\t\tName : LH\n");
        b = 800;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 800 ;
        m++;
        break;
    case 60:
        printf("\n\t\t\tName : FSH\n");
        b = 800;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 800 ;
        m++;
        break;
    case 61:
        printf("\n\t\t\tName : Prolection\n");
        b = 900;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 900 ;
        m++;
        break;
    case 62:
        printf("\n\t\t\tName : Whole Abdomen\n");
        b = 1000;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 1000 ;
        m++;
        break;
    case 63:
        printf("\n\t\t\tName : HBS-Upper Abdomen\n");
        b = 800;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 800 ;
        m++;
        break;
    case 64:
        printf("\n\t\t\tName : Lower Abdomen\n");
        b = 800;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 800 ;
        m++;
        break;
    case 65:
        printf("\n\t\t\tName : Uterus\n");
        b = 800;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 800 ;
        m++;
        break;
    case 66:
        printf("\n\t\t\tName : Pregnancy Profile\n");
        b = 800;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 800 ;
        m++;
        break;
    case 67:
        printf("\n\t\t\tName : Chest\n");
        b = 800;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 800 ;
        m++;
        break;
    case 68:
        printf("\n\t\t\tName : Thyroid\n");
        b = 1000;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 1000 ;
        m++;
        break;
    case 69:
        printf("\n\t\t\tName : Brain\n");
        b = 800;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 800 ;
        m++;
        break;
    case 70:
        printf("\n\t\t\tName : Chest P/A\n");
        b = 300;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 300 ;
        m++;
        break;
    case 71:
        printf("\n\t\t\tName : KUB Abdomen A/P\n");
        b = 400;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 400 ;
        m++;
        break;
    case 72:
        printf("\n\t\t\tName : Abdomen EP\n");
        b = 400;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 400 ;
        m++;
        break;
    case 73:
        printf("\n\t\t\tName : PNS OMV\n");
        b = 300;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 300 ;
        m++;
        break;
    case 74:
        printf("\n\t\t\tName : Skull B/V\n");
        b = 500;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 500 ;
        m++;
        break;
    case 75:
        printf("\n\t\t\tName : Wrist joints B/V\n");
        b = 300;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 300 ;
        m++;
        break;
    case 76:
        printf("\n\t\t\tName : Hip joints B/V\n");
        b = 400;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 400 ;
        m++;
        break;
    case 77:
        printf("\n\t\t\tName : Knee joints B/V\n");
        b = 300;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 300 ;
        m++;
        break;
    case 78:
        printf("\n\t\t\tName : Cervical Spine B/V\n");
        b = 400;
        testCost += b  ;
        TestCode[m] = a ;
        TestPrice[m] = 400 ;
        m++;
        break;
    default:
        printf("\n\tWrong Choice\n");
    }

    printf("\n\t\t\t'0' for back : ");
    //printf("\n\t\tCheck for another: ");
}

 void location()
{
    int place ;

    printf("\n\n\t\t\t\t\t\tMedical and Diagonostic  Center \n\n");


    printf("\n\n\t\t\t\t\t\tList of locations\n\n");

    printf("\n\n\t\t\t\t1. Tilagor\t\t\t2. Amborkhana ");
    printf("\n\n\t\t\t\t3. Modina Makre\t\t\t4. Uposhohor ");
    printf("\n\n\t\t\t\t5. Noyasharak\t\t\t6. Bondor Bazar ");
    printf("\n\n\t\t\t\t7. Zindabazar\t\t\t8. Sheikhghat  ");
    printf("\n\n\t\t\t\t9. kamalbazar\t\t\t10. Rikabibazar  ");
    printf("\n\n\t\t\t\t11. Kodomtoli\t\t\t12. Shahi Eidgah  ");
    printf("\n\n\t\t\t\t13. Subidbazar\t\t\t14. Chawhatta  ");
    printf("\n\n\t\t\t\t15. Subhanighat\t\t\t16. Dakhsin Surma  ");
    printf("\n\n\t\t\t\t\t\t17. Tukerbazar  ");
    printf("\n\n\t\t\t\t\t\t'0' for Back :  ");

    printf("\n\n\t\t\t\tChoice your location : ");


    for(int i=1; scanf("%d",&place) >0; i++)
    {

        if( place == 1)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t-------------\n\n");
            printf("\t\t\t1.Tilagor Nogor Swastho Kendro\n\n");
            printf("\t\t\t2.Surjer Hashi Clinic\n\n");
            printf("\t\t\t3.SSKS Clinic\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t-------------\n\n");
            printf("\t\t\t1.Mohiuddin Nur Healthcare and Training Center\n\n");
            printf("\t\t\t2.Park View Medical College Hospital\n\n");


        }

        else if(place == 2)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Noorjahan Hospital\n\n");
            printf("\t\t\t2.Womens Medical College and Hospital\n\n");
            printf("\t\t\t3.ABC Diagnostic Center\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Well Care Diagnostic Center\n\n");
            printf("\t\t\t2.Trust Medical Hospital\n\n");
        }

        else if(place == 3)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Medinova Medical Services Ltd\n\n");
            printf("\t\t\t2.Popular Medical Center\n\n");
            printf("\t\t\t3.Sylhet MAG Osmani Medical Hospital\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.National Diagnostic Center\n\n");
            printf("\t\t\t2.City Diagnostic Center\n\n");
        }

        else if(place == 4)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Green Crescent Medilab\n\n");
            printf("\t\t\t2.Al Haramain Hospital Private Limited\n\n");
            printf("\t\t\t3.Alfesani Diagnostic Center\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Healthfirst Medical Centre\n\n");
            printf("\t\t\t2.Ibn Sina Hospital\n\n");
        }

        else if(place == 5)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Well Care Diagnostic Center\n\n");
            printf("\t\t\t2.Ibn Sina Hospital\n");
            printf("\t\t\t3.Raju X-Ray and Diagnostic center\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.The Pathology Lab\n\n");
            printf("\t\t\t2.Popular Medical Centre and Hospital\n\n");
        }

        else if(place == 6)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Oasis Diagnostic & Consultation Center\n\n");
            printf("\t\t\t2.Oasis Hospital\n\n");
            printf("\t\t\t3.Trust Medical Service\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Madi-Chek Digital Diagnostic Center\n\n");
            printf("\t\t\t2.Sylhet MAG Osmani Medical Hospital\n\n");
        }

        else if(place == 7)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.The Pathology Lab\n\n");
            printf("\t\t\t2.Oasis Hospital\n\n");
            printf("\t\t\t3.Healthfirst Medical Centre\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Green Crescent Medilab\n\n");
            printf("\t\t\t2.Popular Medical Centre and Hospital\n\n");
        }

        else if(place == 8)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.SURJER HASHI CLINIC\n\n");
            printf("\t\t\t2.Park View Medical College Hospital\n\n");
            printf("\t\t\t3.The Sylhet X-Ray & Diagnostic Center\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Well Care Diagnostic Center\n\n");
            printf("\t\t\t2.Sylhet MAG Osmani Medical Hospital\n\n");
        }

        else if(place == 9)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Ideal Diagnostic Center\n\n");
            printf("\t\t\t2.Ibn Sina Hospital\n\n");
            printf("\t\t\t3.APOLLO Diagnostic Center\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Mediaid Heart Centre\n\n");
            printf("\t\t\t2.Sylhet MAG Osmani Medical Hospital\n\n");
        }

        else if(place == 10)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Central Diagnostic center\n\n");
            printf("\t\t\t2.Sylhet MAG Osmani Medical Hospital\n\n");
            printf("\t\t\t3.Ideal Hospital and Cardiac center\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Healthfirst Medical Centre\n\n");
            printf("\t\t\t2.Ibn Sina Hospital\n\n");
        }

        else if(place == 11)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Medi Vision Diagnostic and Consultation Center\n\n");
            printf("\t\t\t2.Anwar General Hospital\n\n");
            printf("t\t\t3.Health-Aid Diagnostic Center\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Ideal Diagnostic Center\n\n");
            printf("\t\t\t2.Royal Lab Dot Com\n\n");
        }

        else if(place == 12)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Al-Hamad Medical Centre\n\n");
            printf("\t\t\t2.National Heart Foundation Hospital\n\n");
            printf("\t\t\t3.ABC Diagnostic Center\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Alfesani Diagnostic Center\n\n");
            printf("\t\t\t2.Ibn Sina Hospital\n\n");
        }

        else if(place == 13)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Dr Lal PathLabs\n\n");
            printf("\t\t\t2.Jalalabad Ragib-Rabeya Medical College and Hospital\n\n");
            printf("\t\t\t3.Ideal Diagnostic Center\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Health Care Hospital & Trauma Centre\n\n");
            printf("\t\t\t2.Ibn Sina Hospital\n\n");
        }

        else if(place == 14)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.The Pathology Lab\n\n");
            printf("\t\t\t2.Sylhet Sahid Shamsuddin Ahmed Hospital\n\n");
            printf("\t\t\t3.Popular Diagnostic Complex\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.United Hospital\n\n");
            printf("\t\t\t2.Madi-Chek Digital Diagnostic Center\n\n");
        }

        else if(place == 15)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Ma Moni Digital Diagnostic Centre\n\n");
            printf("\t\t\t2.Shimantik Hospital and Diagnostic Center\n\n");
            printf("\t\t\t3.Alfesani Diagnostic Center\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.United Hospital\n\n");
            printf("\t\t\t2.Madi-Chek Digital Diagnostic Center\n\n");
        }

        else if(place == 16)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.South Surma Upazila Health Complex\n\n");
            printf("\t\t\t2.Nur-un-nahar Community Clinic\n\n");
            printf("\t\t\t3.Jangal Hata Community Clinic\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.North East Medical College & Hospital\n\n");
            printf("\t\t\t2.Shimantik Hospital and Diagnostic Center\n\n");
        }

        else if(place == 17)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\n\n\t\t\tNear Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Al-Hamad Medical Centre Ltd\n\n");
            printf("\t\t\t2.Modern General Hospital\n\n");
            printf("\t\t\t3.National Diagnostic Center\n\n");
            printf("\n");
            printf("\n\n\t\t\tFar Medical");
            printf("\n\t\t\t--------------\n\n");
            printf("\t\t\t1.Ideal Diagnostic Center\n\n");
            printf("\t\t\t2.Mount Adora Hospital\n\n");
        }
        else if(place == 0)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n");
            location();
        }
        else
        {
            printf("\n\n\twrong input\n\n\n");
        }
        printf("\n\n\t\t\t'0' for Back : ");
        //printf("\n\t\tCheck for another: ");
    }
}
void Test_payment()
{
    system("cls");
    gotoxy(0,7);
    int a ;
    if(  testCost ==  0)
    {
        printf("\n\t\t\tYou did not Buy anything");

        printf("\n\n\t\t\tFor Test Info press '1'  : ");
        printf("\n\t\t\t'0' for Back: ");
        scanf("%d",&a);
        if(a == 0)
        {
             system("cls");gotoxy(0,7);
            testName();
            // printingMedicine();
            all_test_field();
        }
        else if(a==1)
        {
            system("cls");
            all_testName();
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

void testCount()
{
    printf("\n\n\n\n\t\t\tCode\tCatagories\t\t\tTest Price\n\n");

    //m is a global variable that works is count how much medicine order
    for(int i = 0 ; i < m ; i++)
    {

        if( TestCode[i] >= 1 &&  TestCode[i] <= 10)
        {
            printf("\n\t\t\t%d\tHamatology\t\t\t%.3f\n", TestCode[i],  TestPrice[i]);
            CT += TestPrice[i];
        }
        if( TestCode[i] >= 11 &&  TestCode[i] <= 20)
        {
            printf("\n\t\t\t%d\tBiochemistry\t\t\t%.3f\n", TestCode[i],  TestPrice[i]); CT += TestPrice[i];
        }
        if( TestCode[i] >= 21 &&  TestCode[i] <= 30)
        {
            printf("\n\n\t%d\tSerology\t\t\t%.3f\n", TestCode[i],  TestPrice[i]); CT += TestPrice[i];
        }
        if( TestCode[i] >= 31 &&  TestCode[i] <= 36)
        {
            printf("\n\t\t\t%d\tUrine\t\t\t%.3f\n", TestCode[i],  TestPrice[i]); CT += TestPrice[i];
        }
        if( TestCode[i] >= 37 &&  TestCode[i] <= 40)
        {
            printf("\n\n\t%d\tStool\t\t\t%.3f\n", TestCode[i],  TestPrice[i]); CT += TestPrice[i];
        }
        if( TestCode[i] >= 41 &&  TestCode[i] <= 49)
        {
            printf("\n\t\t\t%d\tMicrobiology\t\t\t%.3f\n", TestCode[i],  TestPrice[i]); CT += TestPrice[i];
        }
        if( TestCode[i] >= 50 &&  TestCode[i] <= 52)
        {
            printf("\n\t\t\t%d\tCrytopatholgy\t\t\t%.3f\n", TestCode[i],  TestPrice[i]); CT += TestPrice[i];
        }
        if( TestCode[i] >= 53 &&  TestCode[i] <= 61)
        {
            printf("\n\t\t\t%d\tHormone\t\t\t%.3f\n", TestCode[i],  TestPrice[i]); CT += TestPrice[i];
        }
        if( TestCode[i] >= 62 &&  TestCode[i] <= 69)
        {
            printf("\n\t\t\t%d\tUltrasonogram\t\t\t%.3f\n", TestCode[i],  TestPrice[i]); CT += TestPrice[i];
        }
        if( TestCode[i] >= 70 &&  TestCode[i] <= 78)
        {
            printf("\n\t\t\t%d\tX-ray\t\t\t%.3f\n", TestCode[i],  TestPrice[i]); CT += TestPrice[i];
        }

    }
    printf("\n\n\n\t\t\tTOtoal Test Code : %.3f\n\n",CT);

}


