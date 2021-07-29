#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <conio.h>
#include<windows.h>

void back1();
void back();
void back3();
void gotoxy(int x,int y);
void x_exit();
//part -1
void Part1();
void doctorList();
void medicalName();
void allMedical();
void allMedicalFeild();
void al_haramain_medical();
void printing();
void al_haramain_medical_Field();
void  GYNAEReturn();
void GYNAE();
void dr_hena();
void dr_Lubna();
void dr_dipu();
void dr_rabeya();
void  medicineReturn();
void medicine();
void dr_kumar();
void dr_soumitra();
void dr_shahed();
void dr_bilkis();
void CRITICALReturn();
void CRITICAL();
void dr_munir();
void dr_sharmin();
void dr_ohi();
void PATHOLOGYReturn();
void PATHOLOGY();
void dr_aqm();
void dr_zakir();
void dr_das();
void ANESTHEIOLOGYReturn();
void ANESTHEIOLOGY();
void dr_kadir();
void dr_helal();
void dr_abeda();
void popular_medical();
void popular_printing();
void popular_medical_Field();
void popular_medicineReturn();
void popular_medicine();
void dr_shishir();
void dr_ronjon();
void dr_najmul();
void dr_goutam();
void dr_hezbullah();
void popular_urologyReturn();
void popular_urology();
void dr_julkifl();
void dr_promode();
void dr_shaha();
void dr_shafiq();
void  popular_cardiologyReturn();
void popular_cardiology();
void dr_faruk();
void dr_mohiuddin();
void dr_hironmoy();
void dr_farzana();
void popular_gynaeReturn();
void popular_gynae();
void dr_homaira();
void dr_maya();
void dr_fahmina();
void dr_nasima();
void dr_arpita();
void popular_orthopeadicReturn();
void popular_orthopeadic();
void dr_mukul();
void dr_sumon();
void dr_adil();
void Mount_Adora_medical();
void mount__printing();
void Mount_adora_medical_Field();
void mount__Gynae_obsReturn();
void mount__Gynae_obs();
void dr_parveen();
void dr_ishrat();
void dr_jenny();
void dr_fatema();
void mount__Surgery_obsReturn();
void mount__Surgery();
void dr_quadir();
void dr_showkat();
void dr_tapos();
void mount__PAEDIATRICS_Return();
void mount__PAEDIATRICS();
void dr_akhlaq();
void dr_muazzen();
void dr_naznin();
void mount__Nephrology_Return();
void mount__Nephrology();
void dr_alamgir();
void dr_nazmus();
void Oasis_medical();
void OOasis_printing();
void oasis_medical_Field();
void  OOasis_medicineReturn();
void  OOasis_medicine();
void dr_ruhul();
void dr_wilson();
void dr_ashfak();
void dr_enayet();
void  OOasis_Gynae_obsReturn();
void  OOasis_Gynae_obs();
void  dr_ayesha();
void dr_nujhat();
void dr_saiqa();
void dr_nadira();
void  OOasis_PAEDIATRICSReturn();
void  OOasis_PAEDIATRICS();
void dr_musa();
void dr_zakaria();
void dr_emdad();
void  OOasis_DENTISTReturn();
void  OOasis_DENTIST();
void dr_sekh();
void dr_anamila();
void  OOasis_HeartReturn();
void  OOasis_Heart();
void dr_saleh();
void dr_sulaiman();
void IBN_SINA_medical();
void ibnsina_printing();
void IBN_SINA_medical_Field();
void ibnsina_paediatric_medicineReturn();
void  ibnsina_paediatric_medicine();
void dr_farzana1();
void dr_hai();
void dr_rashed();
void dr_moosa();
void dr_shohel();
void ibnsina_medicineReturn();
void ibnsina_medicine();
void dr_faizul();
void dr_iqbal();
void dr_ashfaq();
void dr_muhit();
void dr_moswood();
void ibnsina_dermatologyReturn();
void ibnsina_dermatology();
void dr_rahman();
void dr_saleh11();
void dr_mamun();
void dr_farhana();
void ibnsina_general_surgeryReturn();
void ibnsina_general_surgery();
void dr_foyzur();
void dr_hannan();
void dr_subhan();
void ParkView_medical();
void  parkview_printing();
void parkview_medical_Field();
void  parkview_medicineReturn();
void  parkview_medicine();
void dr_khokan();
void dr_jahed();
void dr_mainuddin();
void dr_rezaul();
void dr_saifuddin();
void dr_istiak();
void  parkview_orthopeadicReturn();
void  parkview_orthopeadic();
void dr_wakil();
void dr_rezaulkarim();
void dr_mahamudur();
void dr_awal();
void dr_mohsin();
void dr_mamun12();
void  parkview_entReturn();
void  parkview_ent();
void dr_jamal();
void dr_hobarak();
void dr_omar();
void dr_nasir();
void parkview_SurgeryReturn();
void  parkview_surgery();
void dr_nahid();
void dr_sarwar();
void dr_najma();
void dr_rubel();
void dr_tutul();
void dr_morshed();
void parkview_kidneyReturn();
void  parkview_kidney();
void dr_haque();
void dr_rafiq22();
void dr_susmita();
void dr_Merina();
void  parkview_skinReturn();
void  parkview_skin();
void dr_monsur();
void dr_zia();
void dr_sizu();
void doctorList();

//part -04
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
void Part4();
//---------------
void Part2();
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
//----
void Part3();
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
void al_vitamin();
void xray();
void al_xray();
void location();
void testCount();
void al_hamatology();
void al_alargic();
void al_azrithmoycin();
void al_bectoriyaInfec();
void al_cartilage();
void  al_cough();
void al_depression();
void al_eyeDrop();
void al_hypertension();
void al_migrane();
void al_omeprazol();
void al_paracetamol();
void al_thyroid();
void al_ulcer();
void al_vitamin();
void payment();

int medi_count(int a);
void remMedicine();
void more();
void  calculation();
void backMedicine_field();
void dr_jahir();
void dr_rafiq();
void dr_shamsuddin();
void  all_testName();
void  all_testName();
void dr_moksud();
void ibnsina_orthopeadic_surgeryReturn();
void ibnsina_orthopeadic_surgery();

///--------
void doctorList();
void Part1();
void subMainMenu();
void registration();
void login();

void check();

void hereWeGo();
void greetings();
void about_work();

int doctorData[1000],dr = 0 ;
int collect[100], ke =0, l = 0, quantity[100], TestCode[100],m = 0, totalPrice = 0 ;

float TotalMediPrice = 0, TMP[100], add = 0,mediPrice[100], wp = 0,testCost = 0,TestPrice[100], CT = 0 ;

struct person_info
{
    char first_name[20];
    char last_name[12];
    char gender[5];
    char phone[12];
    char user_id[10];
    char password[12];

} p;

void  main()
{
    system("color 0b");
    greetings();
}

void greetings()
{
    printf("\n\n\n\n");
    printf("\n\n\n\t\t\t\t ");

    char box1[] = " ..................................................";
    for( int x=0; box1[x]!='\0'; x++)
    {
        printf("%c",box1[x]);
        Sleep(35);
    }
    printf("\n\n\t\t\t\t ");
    char messe[]=". Welcome To The Doctor Portal And Medical Servies .\n";
    for( int x=0; messe[x]!='\0'; x++)
    {
        printf("%c",messe[x]);
        Sleep(35);
    }

    printf("\n\t\t\t\t ");
    for( int x=0; box1[x]!='\0'; x++)
    {
        printf("%c",box1[x]);

        Sleep(35);
    }
    printf("\n\n");
    printf("\n\n\t\t\t\t");

    printf(" Press any key for more : ");
    getch();
    hereWeGo();
    //getchar();

}

void hereWeGo()
{
    system("cls");
    gotoxy(0,9);
    int x;
    double y;
    char text1[] = "1. A B O U T    W O R K";
    char text2[] = "2. S T A R T";
    char text3[] = "3. E X I T";
    char opt[]="Choice Option : ";

    printf("\n\n\t\t\t\t");
    for( x=0; text1[x]!='\0'; x++)
    {
        printf("%c",text1[x]);
        Sleep(35);
    }
    printf("\n\n\t\t\t\t");
    for( x=0; text2[x]!='\0'; x++)
    {
        printf("%c",text2[x]);
        Sleep(35);
    }
    printf("\n\n\t\t\t\t");
    for(x=0; text3[x]!='\0'; x++)
    {
        printf("%c",text3[x]);
        Sleep(35);
    }
    printf("\n\n\t\t\t\t");
    for(x=0; opt[x]!='\0'; x++)
    {
        printf("%c",opt[x]);
        Sleep(35);
    }

    int choice;
    for(int i = 0 ; scanf("%d", &choice) > 0  ; i++ )
    {
        system("cls");
        switch(choice)
        {
        case 1:
            about_work();
            getchar();
            //hereWeGo();
            break;
        case 2:
            check();
            //start();
            break;
        case 3:
            exit(0);
            break;
        case 0:
            system("cls");
            //greetings();
            hereWeGo();
        default:
            printf("\n\n\t\t\t");
            printf("Opps !! Wrong Choice .\n");
            printf("\n\n\t\t\t");
            printf("Press Enter to start again . ");
            getch();
            system("cls");
            hereWeGo();
        }
        back();
    }
}

void check()
{
    system("cls");
    gotoxy(0,7);
    printf("\n\n\t\t\t1. Create Account (Sign up) ");
    printf("\n\n\t\t\t2. Log In");
    printf("\n\n\t\t\t[NB]:- If you do not have account Please Enter '1'");
    printf("\n\n\t\t\t");
    int a;
    for(int i=1; scanf("%d", &a)>0; i++)
    {
        switch(a)
        {
        case 1:
            system("cls");
            registration();
            getch();
            break;
        case 2:
            system("cls");
            login();
            getch();
            break;
        case 0:
            system("cls");
            //check();
            greetings();


            //getch();
            break;
        default:
            printf("\n\n\t\t\t");
            printf("Wrong Input \n\t");
            //getch();

        }
        printf("\n\n\t\t\t");
        printf("'0'for Back :  ");
        printf("\n\n\t\t\t");
        printf("Check for another: ");
    }
}

void registration()
{
    system("cls");
    gotoxy(0,7);
    FILE *filePtr; //*fptr; //*filePtr

    filePtr = fopen("User Registration.txt","a");

    int x;
    double y;
    printf("\n\n\t\t\t\t\t ");
    char text[] = "R E G I S T R A T I O N";
    char info[] = "[User information]";
    for( x=0; text[x]!='\0'; x++)
    {
        printf("%c",text[x]);
        Sleep(50);
        /*for( y=0; y<=9999999; y++)
        {
        }*/
    }
    printf("\n\n\t\t\t\t\t ");
    for( x=0; info[x]!='\0'; x++)
    {
        printf("%c",info[x]);
        Sleep(50);

    }

    // User Input
    gets(p.first_name);
    printf("\n\n\t\t\t\t\t ");

    printf("First name\t: ");
    gets(p.first_name);
    fprintf(filePtr, p.first_name);
    fputs("\n",filePtr);
    printf("\n\t\t\t\t\t ");
    printf("Last Name\t: ");
    gets(p.last_name);
    fprintf(filePtr, p.last_name);
    fputs("\n",filePtr);

    printf("\n\t\t\t\t\t ");
    printf("Gender\t\t: ");
    gets(p.gender);
    fprintf(filePtr, p.gender);
    fputs("\n",filePtr);

    printf("\n\t\t\t\t\t ");
    printf("Phone\t\t: ");
    gets(p.phone);
    fprintf(filePtr, p.phone);
    fputs("\n",filePtr);

    printf("\n\n\t\t\t\t\t ");

    char keep[] = "[ Keep info for Log in  ]";
    for( x=0; keep[x]!='\0'; x++)
    {
        printf("%c",keep[x]);
        Sleep(50);

    }

    printf("\n\n\t\t\t\t\t ");
    printf("User id\t: ");
    gets(p.user_id);
    fprintf(filePtr, p.user_id);
    fputs("\n",filePtr);

    printf("\n\t\t\t\t\t ");
    printf("Password\t: ");
    gets(p.password);
    fprintf(filePtr, p.password);
    fputs("\n",filePtr);
    fputs("\n",filePtr);

    fclose(filePtr);

    printf("\n\n\t\t\t\t\t ");
    printf("Your Registration is Done\n\n\t\t\t\t\tPrees '1' to Log in : ");

    int d;
    scanf("%d",&d);
    if(d == 1) login();

    system("cls");

}
void login()
{
    getchar();
    system("cls");
    gotoxy(0,7);
    int x;

    char text[] = "Log in";
    printf("\n\t\t\t\t\t ");
    for( x=0; text[x]!='\0'; x++)
    {
        printf("%c",text[x]);
        Sleep(35);
    }

    char username[20],password[12];

    printf("\n\n\t\t\t\t\t");
    printf("User ID : ");
    gets(username);

    printf("\n\t\t\t\t\t");
    printf("Password : ");
    gets(password);

    FILE *log;

    log = fopen("User Registration.txt", "r");

    int match = 0;

    while(!feof(log))
    {
        fscanf(log,"%s",p.user_id);
        fscanf(log,"%s",p.password);

        if(strcmp(username,p.user_id) == 0 && strcmp(password,p.password)==0)
        {
            match = 1;
            fclose(log);
            break;
        }
    }
    if(match == 0)
    {
        printf("\n\n\t\t\t\t\t");
        printf("Input Correct User Name and Password : ");
        printf("\n\n\t\t\t\t\t");
        printf("'1' to LOG-IN Again : ");
        printf("\n\n\t\t\t\t\t");
        printf("'2' to REGISTRATION Again: ");
        printf("\n\n\t\t\t\t\t");

        int data;
        scanf("%d",&data);
        if(data == 1) login();
        else if(data == 2)registration();
        system("cls");
    }
    else
    {
        printf("\n\n\t\t\t\t\t");
        printf("Log in Sucessfull..!!!\n");
    }

    printf("\n\n\t\t\t\t\t");
    printf("Please ! Press any key to see  more Features :  ");
    getch();
    subMainMenu();
}
//hereWeGo()

void subMainMenu()
{
    int n,i;

    system("cls");
    gotoxy(0,7);
    printf("\n\n\t\t\t");

    char dit[]= "1. Doctor's Infromation & Ticket Buy";

    char mcp[] = "2. Medicine Categories & Price";

    char tpp[]= "3. Test Place & Price";

    char as[] ="4. Ambulance Services ";

    char op[]= "Choice A Option : ";

    printf("\n\n\t\t\t\t");
    for( int x=0; dit[x]!='\0'; x++)
    {
        printf("%c",dit[x]);
        Sleep(40);
    }
    printf("\n\n\t\t\t\t");
    for( int x=0; mcp[x]!='\0'; x++)
    {
        printf("%c",mcp[x]);
        Sleep(40);
    }
    printf("\n\n\t\t\t\t");
    for( int x=0; tpp[x]!='\0'; x++)
    {
        printf("%c",tpp[x]);
        Sleep(40);
    }
    printf("\n\n\t\t\t\t");
    for( int x=0; as[x]!='\0'; x++)
    {
        printf("%c",as[x]);
        Sleep(40);
    }
    back();
    printf("\n\n\t\t\t\t");
    for( int x=0; op[x]!='\0'; x++)
    {
        printf("%c",op[x]);
        Sleep(40);
    }

    for(i=1; scanf("%d", &n)>0; i++)
    {
        switch(n)
        {
        case 1:
            system("cls");
            Part1();
            printf("\n\t1");
            getch();

            break;
        case 2:
            system("cls");

            Part2();
            getch();
            break;
        case 3:
            system("cls");

            Part3();
            getch();
            break;
        case 4:
            system("cls");
            Part4();
            break;
        case 0:
            system("cls");
            login();
            //subMainMenu();
            // main_1();
            break;


        default:
            printf("\n\n\t\t\t\t");
            printf("Wrong Input");
        }
        //printf("\n\n\t\t\t");
        //printf("'0' for Back : ");
        back();
        printf("\n\n\t\t\t\t");
        printf("Check for another: ");
    }
}

//part 01 call
void Part1()
{
    allMedical();
}
void medicalName()
{
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("MedicalList.txt","r");
    if(file == NULL)
        printf("File dosen't Exist");
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
void allMedical()
{
    gotoxy(0,7);
    int haramain,i;
//use for consol design
    int x;

    char name1[]= "1. Hospital List";
    char name2[] = "2. Ticket History ";
    char name3[] = "'0' for Back ";
    char ex[] = "3. E X I T";
    char name4[]= "Choice Option : ";

    printf("\n\n\n\t\t\t");
    for(x=0; name1[x]!= '\0'; x++)
    {
        printf("%c",name1[x]);
        Sleep(35);
    }
    printf("\n\n\n\t\t\t");
    for(x=0; name2[x]!= '\0'; x++)
    {
        printf("%c",name2[x]);
        Sleep(35);
    }

    printf("\n\n\n\t\t\t");
    for( int x=0; ex[x]!='\0'; x++)
    {
        printf("%c",ex[x]);
        Sleep(40);
    }
    printf("\n\n\n\t\t\t");
    for(x=0; name3[x]!= '\0'; x++)
    {
        printf("%c",name3[x]);
        Sleep(35);
    }
    printf("\n\n\n\t\t\t");
    for(x=0; name4[x]!= '\0'; x++)
    {
        printf("%c",name4[x]);
        Sleep(35);
    }

    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            medicalName();
            allMedicalFeild();
            break;
        }
        case 2:
        {
            if(dr == 0)
            {
                printf("\n\n\n\t\t\t");
                printf("No ticket Purchase ,Yet !");

            }
            else
            {
                system("cls");
                gotoxy(0,7);
                printf("\n\n\t\t\tTotoal Ticket Buy : %d",dr);
                printf("\n\n\n");

                doctorList();
            }

            back3();
            int t ;
            scanf("%d",&t);
            if(t == 0)
            {
                system("cls");
                //gotoxy(0,7);
                allMedical();
            }
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            x_exit();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            //subMainMenu();
            subMainMenu();
            break;
        }

        default:
            printf("\n\t\t\tWrong Choice.\n");
        }
        printf("\n\n\t\t\tCheck for another: ");
    }
}
void allMedicalFeild()
{
    //gotoxy(0,7);
    int alharamain_field,i;
    back3();
    printf("\n\t\t\tChoice Option  = ");
    for(i=1; scanf("%d", &alharamain_field)>0; i++)
    {
        switch(alharamain_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            al_haramain_medical();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            popular_medical();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            Mount_Adora_medical();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            Oasis_medical();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            IBN_SINA_medical();
            break;
        }
        case 6:
        {
            system("cls");
            gotoxy(0,7);
            ParkView_medical();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            allMedical();
            break;
        }
        default:
            printf("\n\t\t\tWrong Choice.\n");
        }
        //printf("\n\t\t\t'0' for Back.");
        back3();
        printf("\n\n\t\t\tCheck for another: ");
    }
}
void al_haramain_medical()
{
    int haramain,i;

    printf("\n\n\t\t\t1. A L   H A R A M A I N \n\n");
    back3();

    printf("\n\n\t\t\tChoice Option : ");

    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printing();
            al_haramain_medical_Field();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            medicalName();
            allMedicalFeild();
            break;
        }
        default:
            printf("\n\t\t\tWrong Choice.\n");
        }
        printf("\n\n\t\t\tCheck for another: ");
    }
}
void printing()
{
    FILE *file;
    char ch;
    file = fopen("printing.txt","r");
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
void al_haramain_medical_Field()
{
    int alharamain_field,i;
    back1();
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &alharamain_field)>0; i++)
    {
        switch(alharamain_field)
        {
        case 1:
        {
            gotoxy(0,7);
            GYNAE();
            break;
        }
        case 2:
        {
            gotoxy(0,7);
            medicine();
            break;
        }
        case 3:
        {
            gotoxy(0,7);
            CRITICAL();
            break;
        }
        case 4:
        {
            gotoxy(0,7);
            PATHOLOGY();
            break;
        }
        case 5:
        {
            gotoxy(0,7);
            ANESTHEIOLOGY();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            al_haramain_medical();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        back1();
        printf("\n\n\t\tCheck for another: ");
    }
}
void  GYNAEReturn()
{
    int a ;
    back1();
    scanf("%d",&a);
    if(a==0)
        GYNAE();
    else
    {
        back1();
        scanf("%d",&a);
        if(a==0)
            GYNAE();
    }
}
void GYNAE()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;

    file = fopen("haramaingynea.txt","r");
    if(file == NULL)
        printf("\n\t\tFile dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }
    int POP_field,i;
    back1();

    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. PROF. DR. Shamsun Nahar Begum (Hena).\n\n");
            dr_hena();
            GYNAEReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. Lubna Yesmin.\n\n");
            dr_Lubna();
            GYNAEReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Dipu Das.\n\n");
            dr_dipu();
            GYNAEReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. DR. Rabeya Nashrin.\n\n");
            dr_rabeya();
            GYNAEReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\n\t\t101. PROF. DR. Shamsun Nahar Begum (Hena).");
            printf("\n\n\t\t102. DR. Lubna Yesmin.");
            printf("\n\n\t\t103. DR. Dipu Das.");
            printf("\n\n\t\t104. DR. Rabeya Nashrin.");

            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for back .");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                //al_haramain_medical_Field();
                GYNAE();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            printing();
            al_haramain_medical_Field();
            //GYNAE();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back.");
        printf("\n\n\t\tCheck for another: ");
    }
}

void dr_hena()
{
    printf("\t\t\t* Degrees: MBBS, FCPS(Obs & Gynae).\n\t\t\t* Chief Consultant: Obs & Gynae.\n\t\t\t* EX Prof. Obs & Gynae, Sir Salimullah Medical College, Dhaka.\n\t\t\t* Specialty: Infirmity Urogynecology(Gynae Oncology).\n\t\t\t* Contact Number: +8801931-225555.\n");
}
void dr_Lubna()
{
    printf("\t\t\t* Degrees: MBBS, DGO.\n\t\t\t* Consultant: Obs & Gynae.\n\t\t\t* Assist. Registrar, Obs & Gynea, SWMCH.\n\t\t\t* Assist Registrar Enam Medical College Hospital, Obs & Gynae.\n\t\t\t* Contact Number: +8801931-225555.\n");
}
void dr_dipu()
{
    printf("\t\t\t* Degrees: MBBS, MCPS.\n\t\t\t* Consultant: Obs & Gynae.\n\t\t\t* Lecturer Anatomy, JRRMC.\n\t\t\t* Contact Number: +8801931-225555.\n");
}
void dr_rabeya()
{
    printf("\t\t\t* Degrees: MBBS, DGO.\n\t\t\t* Consultant: Obs & Gynae.\n\t\t\t* Contact Number: +8801931-225555.\n");
}
void  medicineReturn()
{
    int a ;
    back1();
    scanf("%d",&a);
    if(a==0)
        medicine();
    else
    {
        back1();
        scanf("%d",&a);
        if(a==0)
            medicine();
    }
}
void medicine()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("haramainmedicine.txt","r");
    if(file == NULL)
        printf("\n\t\tFile dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }
    int POP_field,i;
    back1();// printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. PROF. DR. Prodoyot Kumar Bhattacharyya.\n\n");
            dr_kumar();
            medicineReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. Soumitra Roy.\n\n");
            dr_soumitra();
            medicineReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Shahed Ahmad.\n\n");
            dr_shahed();
            medicineReturn();

            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. DR. Bilkis Sultana.\n\n");
            dr_bilkis();
            medicineReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t105. PROF. DR. Prodoyot Kumar Bhattacharyya.");
            printf("\n\n\t\t106. DR. Soumitra Roy.");
            printf("\n\n\t\t107. DR. Shahed Ahmad.");
            printf("\n\n\t\t108. DR. Bilkis Sultana.");

            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            back1();

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                //al_haramain_medical_Field();
                medicine();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            printing();
            al_haramain_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        back1();
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_kumar()
{
    printf("\t\t\t* Degrees: MBBS, FCPS(Medicine)\n\t\t\t* Chief Consultant: Medicine.\n\t\t\t* Contact Number: +8801931-225555.\n");
}
void dr_soumitra()
{
    printf("\t\t\t* Degrees: MBBS, BCS(Health), FCPS(Medicine)\n\t\t\t* Consultant: Medicine.\n\t\t\t* Contact Number: +8801931-225555.\n");
}
void dr_shahed()
{
    printf("\t\t\t* Degrees: MBBS, FCPS(Medicine)\n\t\t\t* Consultant: Medicine.\n\t\t\t* Contact Number: +8801931-225555.\n");
}
void dr_bilkis()
{
    printf("\t\t\t* Degrees: MBBS, MD(Medicine)\n\t\t\t* Consultant: Medicine.\n\t\t\t* Contact Number: +8801931-225555.\n");
}
void CRITICALReturn()
{
    int a ;
    back1();// printf("\n\t\t'0' for Back.");
    scanf("%d",&a);
    if(a==0)
        CRITICAL();
    else
    {
        back1();//    printf("\n\t\t'0' for Back.");
        scanf("%d",&a);
        if(a==0)
            CRITICAL();
    }
}
void CRITICAL()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("haramaincritical.txt","r");
    if(file == NULL)
        printf("\n\t\tFile dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }
    int POP_field,i;
    back1();// printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Sheikh Muhammad Munir Hussain.\n\n");
            dr_munir();
            CRITICALReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. Sharmin Jahan Quader.\n\n");
            dr_sharmin();
            CRITICALReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Syed Ohidul Haq (Ratul).\n\n");
            dr_ohi();
            CRITICALReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t109. DR. Sheikh Muhammad Munir Hussain.");
            printf("\n\n\t\t110. DR. Sharmin Jahan Quader.");
            printf("\n\n\t\t111. DR. Syed Ohidul Haq (Ratul).");


            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            back1();// printf("\n\t\t'0' for back .");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                //al_haramain_medical_Field();
                CRITICAL();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            printing();
            al_haramain_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        back1();
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_munir()
{
    printf("\t\t\t* Degrees: MBBS, FCCM, PGFEM, FICM, FD, FID, BCCPM.\n\t\t\t* Consultant: Critical Care.\n\t\t\t* Faculty Critical Care, Clinical Care Associate,\n\t\t\t   Fellow Critical Care Medicine, Fellowship College of Critical Care Medicine,\n\t\t\t   Metro Hospital & Heart Institute, India.\n\t\t\t* Contact Number: +8801931-225555.\n");
}
void dr_sharmin()
{
    printf("\t\t\t* Degrees: MBBS, FCCM, PGFEM, FICM, FD, FID, BCCPM.\n\t\t\t* Consultant: Critical Care.\n\t\t\t* Faculty Critical Care, Clinical Care Associate,\n\t\t\t   PG Fellow Emergency Medicine(PGFEM), Fellowship College of Critical Care Medicine,\n\t\t\t   Metro Hospital & Heart Institute, India.\n\t\t\t* Contact Number: +8801931-225555.\n");
}
void dr_ohi()
{
    printf("\t\t\t* Degrees: MBBS, FCCM, PGFEM, FICM, FD, FID, BCCPM.\n\t\t\t* Consultant: Critical Care.\n\t\t\t* Faculty Critical Care, Clinical Care Associate,\n\t\t\t   PG Fellow Emergency Medicine(PGFEM), Fellowship College of Critical Care Medicine,\n\t\t\t   Metro Hospital & Heart Institute, India.\n\t\t\t* Contact Number: +8801931-225555.\n");
}
void PATHOLOGYReturn()
{
    int a ;
    back1();
    scanf("%d",&a);
    if(a==0)
        PATHOLOGY();
    else
    {
        back1();
        scanf("%d",&a);
        if(a==0)
            PATHOLOGY();
    }
}
void PATHOLOGY()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("haramain_PATHOLOGY.txt","r");
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
    int POP_field,i;
    back1();//printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. AQM Abdul Hye.\n\n");
            dr_aqm();
            PATHOLOGYReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. MD Zakir Hossain.\n\n");
            dr_zakir();
            PATHOLOGYReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Shantanu Das.\n\n");
            dr_das();
            PATHOLOGYReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t112. DR. AQM Abdul Hye..");
            printf("\n\n\t\t113. DR. MD Zakir Hossain.");
            printf("\n\n\t\t114. DR. Shantanu Das.");

            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for back .");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                printing();
                //al_haramain_medical_Field();
                PATHOLOGY();
            }
            break;
        }
        case 0:
        {
            system("cls");
            printing();
            al_haramain_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        back1();
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_aqm()
{
    printf("\t\t\t* Degrees: MBBS, M.Phil(Pathology).\n\t\t\t* Consultant: Pathology, Histo & Cystopathology.\n\t\t\t* Contact Number: +8801931-225555.\n");
}
void dr_zakir()
{
    printf("\t\t\t* Degrees: MBBS, CCD, DCP, M.Phil(Pathology).\n\t\t\t* Department: Microbiology.\n\t\t\t* Consultant: Pathology.\n\t\t\t* Contact Number: +8801931-225555.\n");
}
void dr_das()
{
    printf("\t\t\t* Degrees: MBBS, M.Phil(Pathology).\n\t\t\t* Consultant: Microbiology.\n\t\t\t* Contact Number: +8801931-225555.\n");
}
void ANESTHEIOLOGYReturn()
{
    int a ;
    back1();
    scanf("%d",&a);
    if(a==0)
        ANESTHEIOLOGY();
    else
    {
        back1();
        scanf("%d",&a);
        if(a==0)
            ANESTHEIOLOGY();
    }
}
void ANESTHEIOLOGY()
{
    system("cls");
    gotoxy(0,7);
    printf("\n\n\t\t\tA N E S T H E I O L O G Y.\n\n");
    printf("\t\t1. DR. Abdul Kadir.\n\n");
    printf("\t\t2. DR. MD Helal Uddin.\n\n");
    printf("\t\t3. DR. Abedah Begum Fazlur.\n\n");
    int POP_field,i;
    back1();
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Abdul Kadir.\n\n");
            dr_kadir();
            ANESTHEIOLOGYReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. MD Helal Uddin.\n\n");
            dr_helal();
            ANESTHEIOLOGYReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Abedah Begum Fazlur.\n\n");
            dr_abeda();
            ANESTHEIOLOGYReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\t\t115. DR. Abdul Kadir.\n\n");
            printf("\t\t116. DR. MD Helal Uddin.\n\n");
            printf("\t\t117. DR. Abedah Begum Fazlur.\n\n");

            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for Back .");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                //al_haramain_medical_Field();
                ANESTHEIOLOGY();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            printing();
            al_haramain_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        back1();//  printf("\n\t\t'0' for Back.");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_kadir()
{
    printf("\t\t\t* Degrees: MBBS, Diploma in Anesthesiology.\n\t\t\t* Junior Consultant: Anesthesiology, Al Haramain Hospital Pvt. Ltd..\n\t\t\t* Contact Number: +8801931-225555.\n");
}
void dr_helal()
{
    printf("\t\t\t* Degrees: MBBS, MCPS, DA(Anesthesiology).\n\t\t\t* Consultant: Anesthesiology.\n\t\t\t* Contact Number: +8801931-225555.\n");
}
void dr_abeda()
{
    printf("\t\t\t* Degrees: MBBS, CCD, CMUD.\n\t\t\t* Consultant: Sonologist.\n\t\t\t* Medcical Officer, Sonologist, Sylhet M.A.G. Medical College Hospital.\n\t\t\t* Contact Number: +8801931-225555.\n");
}
//Popular
void popular_medical()
{
    int POPULAR,i;

    printf("\n\n\t\t1. P O P U L A R\n");
    back1();// printf("\n\t\t'0' for back. ");
    printf("\n\n\t\tChoice Option : ");
    for(i=1; scanf("%d", &POPULAR)>0; i++)
    {
        switch(POPULAR)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            popular_printing();
            popular_medical_Field();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            medicalName();
            allMedicalFeild();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\n\t\tCheck for another: ");
    }
}
void popular_printing()
{
    FILE *file;
    char ch;
    file = fopen("Popular_printing.txt","r");
    if(file == NULL)
        printf("\n\t\tFile dosen't Exist.");
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
void popular_medical_Field()
{
    int POP_field,i;
    back1();
    printf(" \n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            popular_medicine();
            break;
        }
        case 2:
        {
            popular_urology();
            break;
        }
        case 3:
        {
            popular_cardiology();
            break;
        }
        case 4:
        {
            popular_gynae();
            break;
        }
        case 5:
        {
            popular_orthopeadic();
            break;
        }
        case 0:
        {
            system("cls");
            popular_medical();
            break;
        }

        default:
            printf("\n\t\tWrong Choice\n");
        }
        back1();
        printf("\n\n\t\tCheck for another: ");
    }
}
//previous step go
void popular_medicineReturn()
{
    int a ;
    back1();
    scanf("%d",&a);
    if(a==0)
        popular_medicine();
    else
    {
        back1();
        scanf("%d",&a);
        if(a==0)
            popular_medicine();
    }
}
void popular_medicine()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("PopularMedicine.txt","r");
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
    int POP_field,i;
    back1();// printf("\n\t\t'0' for back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Shirshir R Chakraborti.\n\n");
            dr_shishir();
            popular_medicineReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. Ranjon Roy.\n\n");
            dr_ronjon();
            popular_medicineReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Z.H.M. NaZmul Alam.\n\n");
            dr_najmul();
            popular_medicineReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. DR. Goutam Talukder.\n\n");
            dr_goutam();
            popular_medicineReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t5. DR. Muhammad Hezbullah (Jeebon).\n\n");
            dr_hezbullah();
            popular_medicineReturn();
            break;
        }
        case 6:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t201. DR. Shirshir R Chakraborti.\n\n");
            printf("\t\t202. DR. Ranjon Roy.\n\n");
            printf("\t\t203. DR. Z.H.M. NaZmul Alam.\n\n");
            printf("\t\t204. DR. Goutam Talukder.\n\n");
            printf("\t\t205. DR. Muhammad Hezbullah (Jeebon).\n\n");


            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            back1();

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                popular_medicine();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            popular_printing();  //back to previous step
            popular_medical_Field(); ////back to previous step
            break;
        }
        default:
            printf("\n\\ttWrong Choice.\n");
        }
        back1();// printf("\n\t\t'0' for back.");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_shishir()
{
    printf("\t\t\t* Degree: MBBS, FCPS(medicine).\n\t\t\t* Associate Profesor of Medicine.\n\t\t\t* Sylhet M.A.G. Osmani Medical College & Hospital.\n\t\t\t* Room: #605, 5th Floor.");
    printf("\n\t\t\t* Time: SAT-SUN(5.00.PM - 10.00 PM.\n\t\t\t* Phone: +8801719374087(For Ticket).\n\t\t\t   From (9.00PM - 9.30PM)\n");
}
void dr_ronjon()
{
    printf("\t\t\t* Degree: MBBS, FCPS(medicine).\n\t\t\t* Associate Profesor of Medicine.\n\t\t\t* Sylhet M.A.G. Osmani Medical College & Hospital.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #409, 3rd Floor.");
    printf("\n\t\t\t* Time: SAT-SUN(4.00.PM - 8.00 PM.\n\t\t\t* Phone: +8801710263588(For Ticket).\n");
}
void dr_najmul()
{
    printf("\t\t\t* Degree: MBBS, BCS, FCPS(medicine).\n\t\t\t* Medicine Specialist Sylhet.\n\t\t\t* Sylhet M.A.G. Osmani Medical College & Hospital.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #403, 3rd Floor.");
    printf("\n\t\t\t* Time: SAT-SUN(4.00.PM - 8.00 PM.\n\t\t\t* Phone: +8801972098691(For Ticket).\n");
}

void dr_goutam()
{
    printf("\t\t\t* Degree: MBBS, BCS, FCPS(medicine).\n\t\t\t* Medicine Specialist, Registrar ( Neuro Medicine ).\n\t\t\t* Sylhet M.A.G. Osmani Medical College & Hospital.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #519, 4th Floor.");
    printf("\n\t\t\t* Time: SAT-SUN(4.00.PM - 10.00 PM.\n\t\t\t* Phone: +8801779760079(For Ticket).\n");
}
void dr_hezbullah()
{
    printf("\t\t\t* Degree: MBBS, FCPS(medicine).\n\t\t\t* Associate Profesor of Medicine.\n\t\t\t* Sylhet M.A.G. Osmani Medical College & Hospital.Chamber: Popular Medical Centre Ltd.\n\t\t\t* Room: #310, 2nd Floor.");
    printf("\n\t\t\t* Time: SAT-SUN(4.30.PM - 10.00 PM.\n\t\t\t* Phone: +8801710726428 (For Ticket).\n\t\t\t   From (10.00PM - 11.00PM)\n");
}
void popular_urologyReturn()
{
    int a ;
    back1();// printf("\n\t\t'0' for back.");
    scanf("%d",&a);
    if(a==0)
        popular_urology();
    else
    {
        back1();//  printf("\n\t\t'0' for Back.");
        scanf("%d",&a);
        if(a==0)
            popular_urology();
    }
}
void popular_urology()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("PopularUrology.txt","r");
    if(file == NULL)
        printf("\n\t\tFile dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }
    int POP_field,i;
    back1();//printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. Prof. DR. M. A. Julkifl.\n\n");
            dr_julkifl();
            popular_urologyReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. Prof. DR. Promofe Ranjan Singh.\n\n");
            dr_promode();
            popular_urologyReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. Prof. DR. Pranashish Shaha.\n\n");
            dr_shaha();
            popular_urologyReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. DR. MD. Shafiqul Islam (Leon).\n\n");
            dr_shafiq();
            popular_urologyReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t206. Prof. DR. M. A. Julkifl.\n\n");
            printf("\t\t207. Prof. DR. Promofe Ranjan Singh.\n\n");
            printf("\t\t208. Prof. DR. Pranashish Shaha.\n\n");
            printf("\t\t209. DR. MD. Shafiqul Islam (Leon).\n\n");

            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            back1();// printf("\n\t\t'0' for back .");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                printing();
                popular_urology();
            }
            break;
        }
        case 0:
        {
            system("cls");
            popular_printing();  //back to previous step
            popular_medical_Field(); ////back to previous step
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n\n");
        }
        back1();// printf("\n\t\t'0' for Back.");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_julkifl()
{
    printf("\t\t\t* Degree: MBBS, FCPS; FRCS(ENGLAND).\n\t\t\t* Andrology & Transplant Surgery \n\t\t\t   Germany, India and Pakistan.\n\t\t\t\tConsultant, Urology.\n\t\t\t Asgor Ali Hospital, Dhaka.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #609, 4th Floor (Level 06).");
    printf("\n\t\t\t* Time: Once in a two months.\n\t\t\t\tThursday & Friday.\n\t\t\t* Phone: +8801715084078,  0821-725227 (For Ticket).\n");
}

void dr_promode()
{
    printf("\t\t\t* Degree: MBBS, BCS, FCPS(Surgery), MS.\n\t\t\t* (Urology) Prof & Head of the\n\t\t\t   Dept of Urology Jalalabad Ragib-Rabeya Medical College Hospital, Sylhet.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #412, 3rd Floor.");
    printf("\n\t\t\t* Time: 4.00.PM - 8.00 PM.\n\t\t\t* Phone: +8801724555050 (For Ticket 9 AM - 11 AM).\n");
}

void dr_shaha()
{
    printf("\t\t\t* Degree: MBBS, MS (Urology).\n\t\t\t* Prof & Head of the\n\t\t\t   Dept of National Cancer Research.\n\t\t\t Institute & Hospital, Dhaka.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #505, 4th Floor.");
    printf("\n\t\t\t* Time: Fortnightly Thursday & Friday.\n\t\t\t* Phone: +8801716333521 (For Ticket).\n");
}

void dr_shafiq()
{
    printf("\t\t\t* Degree: MBBS,MS(Urology).\n\t\t\t Urologist & Andrologist.\n\t\t\t* Prof & Head of the urology. \n\t\t\t   M.A.G. Osmani Medical College Hospital, Sylhet.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #609, 5th Floor.");
    printf("\n\t\t\t* Time: 4.30.PM - 6.30 PM.\n\t\t\t* Phone: +8801782105440 (For Ticket 8.30 AM- 12.30 PM).\n");
}

void  popular_cardiologyReturn()
{
    int a ;
    back1();// printf("\n\t\t'0' for Back.");
    scanf("%d",&a);
    if(a==0)
        popular_cardiology();
    else
    {
        back1();//   printf("\n\tEnter '0' for back.");
        scanf("%d",&a);
        if(a==0)
            popular_cardiology();
    }
}
void popular_cardiology()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("PopularCardiology.txt","r");
    if(file == NULL)
        printf("\n\tFile dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }
    int POP_field,i;
    back1();// printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. MD Faruque Uddin.\n\n");
            dr_faruk();

            popular_cardiologyReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. G M Mohiuddin.\n\n");
            dr_mohiuddin();
            popular_cardiologyReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Hironmoy Das.\n\n");
            dr_hironmoy();

            popular_cardiologyReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. DR. Farzana Tazin.\n\n");
            dr_farzana();
            popular_cardiologyReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t210. DR. MD Faruque Uddin.\n\n");
            printf("\t\t211. DR. G M Mohiuddin.\n\n");
            printf("\t\t212. DR. Hironmoy Das.\n\n");
            printf("\t\t213. DR. Farzana Tazin.\n\n");

            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            back1();// printf("\n\t'0' for Back .");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                printing();
                popular_cardiology();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            popular_printing();  //back to previous step
            popular_medical_Field(); ////back to previous step
            break;
        }

        default:
            printf("\n\t\tWrong Choice\n\n");

        }
        back1();// printf("\n\t\t'0' for Back.");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_faruk()
{
    printf("\t\t\t* Degree: MBBS, D-Card(Cardiology).\n\t\t\t* Asso. Prof  Head of the\n\t\t\t   Dept of Cardiology North East Medical College Hospital, Sylhet.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #304, 2nd Floor.");
    printf("\n\t\t\t* Time: SAT_SUN (4.00.PM - 8.00 PM).\n\t\t\t* Phone: +8801711462103 (For Ticket).\n");
}
void dr_mohiuddin()
{
    printf("\t\t\t* Degree: MBBS, MD; (Cardiology).\n\t\t\t* Asst. Prof Dept of Cardiology Sylhet M.A.G. Osmani Medical College Hospital, Sylhet.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #402, 3rd Floor(Level 04).");
    printf("\n\t\t\t* Time: 5.00.PM - 8.00 PM.\n\t\t\t\t Friday morning only\n\t\t\t* Phone: +8801624634816 (For Ticket) \n\t\t\t\t +8801711152898 (Emergency Advice).\n");
}
void dr_hironmoy()
{
    printf("\t\t\t* Degree: MBBS, MD; (Cardiology).\n\t\t\t* Clinical and interventional Cardiologist, Heart Disease and medicine specialist.\n\t\t\t Asst. Prof Dept of Cardiology Sylhet M.A.G. Osmani Medical College Hospital, Sylhet.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #414, 3rd Floor.");
    printf("\n\t\t\t* Time: 5.00.PM - 8.00 PM.\n\t\t\t\t Friday closed.\n\t\t\t* Phone: +8801749937601 (For Ticket).\n");
}
void dr_farzana()
{
    printf("\t\t\t* Degree: MBBS, FCPS (Cardiology).\n\t\t\t* Cardiologist, consultant.\n\t\t\t National Heart Foundation Hospital, Sylhet.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #604, 5th Floor.");
    printf("\n\t\t\t* Time: 5.00.PM - 7.00 PM.\n\t\t\t\t Friday closed.\n\t\t\t* Phone: +8801761582599 (For Ticket).\n");
}
void popular_gynaeReturn()
{
    int a ;
    back1();// printf("\n\t\t'0' for Back.");
    scanf("%d",&a);
    if(a==0)
        popular_gynae();
    else
    {
        back1();// printf("\n\t\t'0' for Back.");
        scanf("%d",&a);
        if(a==0)
            popular_gynae();
    }
}
void popular_gynae()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("PopularGynea.txt","r");
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
    int POP_field,i;
    back1();//printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Homaira Begum.\n\n");
            dr_homaira();
            popular_cardiologyReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. Maya Rani Das.\n\n");
            dr_maya();
            popular_cardiologyReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Fahmina Akther Fahmi.\n\n");
            dr_fahmina();
            popular_cardiologyReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. DR. Nasima Akther.\n\n");
            dr_nasima();
            popular_cardiologyReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t5. DR. Arpita Bhattacharjee.\n\n");
            dr_arpita();
            popular_cardiologyReturn();
            break;
        }
        case 6:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t214. DR. Homaira Begum.\n\n");
            printf("\t\t215. DR. Maya Rani Das.\n\n");
            printf("\t\t216. DR. Fahmina Akther Fahmi.\n\n");
            printf("\t\t217. DR. Nasima Akther.\n\n");
            printf("\t\t218. DR. Arpita Bhattacharjee.\n\n");

            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            back1();//printf("\n\t\t'0' for Back .");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                popular_gynae();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            popular_printing();  //back to previous step
            popular_medical_Field(); ////back to previous step
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n\n");

        }
        back1();// printf("\n\t\t'0' for Back.");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_homaira()
{
    printf("\t\t\t* Degree: MBBS, MCPS, DGO; MS (Gynae and Obs).\n\t\t\t* Asst. Prof. Gynae & Obs.\n\t\t\t  Sylhet M.A.G. Osmani Medical College Hospital, Sylhet.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #420, 3rd Floor (Level-04).");
    printf("\n\t\t\t* Time: 5.30.PM - 8.30 PM.\n\t\t\t\t Friday closed.\n\t\t\t* Phone: +8801766353211 (Ticket).\n");
}
void dr_maya()
{
    printf("\t\t\t* Degree: MBBS,BCS, MCPS, FCPS.\n\t\t\t* Gynae & Obs Specialist Surgeon.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #501, 4th Floor (Level-04).");
    printf("\n\t\t\t* Time: 5.00.PM - 8.00 PM.\n\t\t\t\t Friday closed.\n\t\t\t* Phone: +8801786459818 (Ticket).\n");
}
void dr_fahmina()
{
    printf("\t\t\t* Degree: MBBS,MS (Gynae and Obs).\n\t\t\t  Sylhet M.A.G. Osmani Medical College Hospital, Sylhet.\n\t\t\t* Residential Surgeon.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #520, 4th Floor (Level-05).");
    printf("\n\t\t\t* Time: 5.00.PM - 8.00 PM.\n\t\t\t\t Friday closed.\n\t\t\t* Phone: +8801743528088 (Ticket).\n");
}
void dr_nasima()
{
    printf("\t\t\t* Degree: MBBS,FCPS (Gynae and Obs).\n\t\t\t* Asst. Prof. (Obs & Gynae).\n\t\t\t  Sylhet M.A.G. Osmani Medical College Hospital, Sylhet.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #410 (Level-03).");
    printf("\n\t\t\t* Time: 5.00.PM - 9.00 PM.\n\t\t\t\t Thursday & Friday closed.\n\t\t\t* Phone: +8801754964918 (Ticket).\n");
}
void dr_arpita()
{
    printf("\t\t\t* Degree: MBBS,FCPS (Gynae and Obs).\n\t\t\t* Obs & Gynae surgeon.\n\t\t\t  Sylhet M.A.G. Osmani Medical College Hospital, Sylhet.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #505, 4th floor.");
    printf("\n\t\t\t* Time: 5.00.PM - 9.00 PM.\n\t\t\t\t Thursday & Friday closed.\n\t\t\t* Phone: +8801754964918 (Ticket).\n");
}
void popular_orthopeadicReturn()
{
    int a ;
    back1();// printf("\n\t\t'0' for Back.");
    scanf("%d",&a);
    if(a== 0)
        popular_orthopeadic();
    else
    {
        back1();// printf("\n\t\t'0' for Back.");
        scanf("%d",&a);
        if(a==0)
            popular_orthopeadic();
    }
}
void popular_orthopeadic()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("PopularOrtho.txt","r");
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
    int POP_field,i;
    back1();//printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Mukul Ranjan Gush.\n\n");
            dr_mukul();
            popular_cardiologyReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. Sumon Mollik.\n\n");
            dr_sumon();
            popular_cardiologyReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Alamgir Adil Samdany.\n\n");
            dr_adil();
            popular_cardiologyReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t219. DR. Mukul Ranjan Gush.\n\n");
            printf("\t\t220. DR. Sumon Mollik.\n\n");
            printf("\t\t221. DR. Alamgir Adil Samdany.\n\n");

            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            back1();//  printf("\n\t\t'0' for back .");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                popular_orthopeadic();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            popular_printing();  //back to previous step
            popular_medical_Field(); ////back to previous step
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        back1();// printf("\n\t\t'0' for Back.");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_mukul()
{
    printf("\t\t\t* Degree: MBBS,D.Ortho, MS (Orthopedics).\n\t\t\t* Trauma and orthopedics Surgeon.\n\t\t\t* Asst. Prof. Ortho Surgery.\n\t\t\t  Park View Medical College Hospital, Sylhet.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #306, 2nd floor.");
    printf("\n\t\t\t* Time: 5.00.PM - 8.00 PM.\n\t\t\t* Phone: +8801716333521 (Ticket).\n");
}
void dr_sumon()
{
    printf("\t\t\t* Degree: MBBS,MS Ortho (Orthopedics).\n\t\t\t* Asst. Prof. Ortho Surgery.\n\t\t\t  Jalalabad Ragib-Rabeya Medical College Hospital, Sylhet.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #512, 4th floor.");
    printf("\n\t\t\t* Time:  SAT-SUN(4.00.PM - 8.00 PM).\n\t\t\t\t* Friday (7.00.PM - 9.00 PM)\n\t\t\t* Phone: +8801717611118 (Ticket).\n");
}
void dr_adil()
{
    printf("\t\t\t* Degree: MBBS,MSc-Orth, MRCS(UK).\n\t\t\t* Asst. Prof. of the Orthopedics.\n\t\t\t  North East Medical College Hospital, Sylhet.\n\t\t\t* Chamber: Popular Medical Centre Ltd.\n\t\t\t\t Room: #512, 4th floor.");
    printf("\n\t\t\t* Time:  SAT-SUN(4.00.PM - 8.00 PM).\n\t\t\t* Phone: +8801777000815 (Ticket).\n");
}
//mountttttttttttttttttttttttttttttttttttttt

void Mount_Adora_medical()
{
    gotoxy(0,7);
    int adora,i;

    printf("\n\n\t\t1. M O U N T  A D O R A\n\n");
    back1();// printf("\n\t\t'0' for back.");
    printf("\n\n\t\tChoice Option : ");
    for(i=1; scanf("%d", &adora)>0; i++)
    {
        switch(adora)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            mount__printing();
            Mount_adora_medical_Field();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            medicalName();
            allMedicalFeild();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\n\t\tCheck for another: ");
    }
}
void mount__printing()
{
    FILE *file;
    char ch;
    file = fopen("MountAdora_printing.txt","r");
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
void Mount_adora_medical_Field()
{
    int adora_field,i;
    back1();// printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &adora_field)>0; i++)
    {
        switch(adora_field)
        {
        case 1:
        {
            mount__Gynae_obs();
            break;
        }
        case 2:
        {
            mount__Surgery();
            break;
        }
        case 3:
        {
            mount__PAEDIATRICS();
            break;
        }
        case 4:
        {
            mount__Nephrology();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            Mount_Adora_medical();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        back1();// printf("\n\t\t'0' for Back.");
        printf("\n\n\t\tCheck for another: ");
    }
}
void mount__Gynae_obsReturn()
{
    int a ;
    back1();//  printf("\n\t\t'0' for Back.");
    scanf("%d",&a);
    if(a==0)
        mount__Gynae_obs();
    else
    {
        back1();//  printf("\n\t\t'0' for back.");
        scanf("%d",&a);
        if(a==0)
            mount__Gynae_obs();
    }
}
void mount__Gynae_obs()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("MountAdora_gyneaobs.txt","r");
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
    int POP_field,i;
    back1();// printf("\n\t\t'0' for back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Kishuar Parveen.\n\n");
            dr_parveen();
            mount__Gynae_obsReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\t\t2. DR. Ishrat Jahan Karim.\n\n");
            dr_ishrat();
            mount__Gynae_obsReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\t\t3. DR. Fahim Ara Khanom (Jenny).\n\n");
            dr_jenny();
            mount__Gynae_obsReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\t\t4. DR. Fatematuz Zuhora.\n\n");
            dr_fatema();
            mount__Gynae_obsReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t222. DR. Kishuar Parveen.\n\n");
            printf("\t\t223. DR. Ishrat Jahan Karim.\n\n");
            printf("\t\t224. DR. Fahim Ara Khanom (Jenny).\n\n");
            printf("\t\t225. DR. Fatematuz Zuhora.\n\n");


            int code;
            printf("\n\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            back1();//  printf("\n\t\t'0' for Back .");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                mount__Gynae_obs();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            mount__printing();
            Mount_adora_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        back1();//printf("\n\t\t'0' for Back.");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_parveen()
{
    printf("\t\t\t* MBBS, FCPS (Gynae & Obs) Assistant Professor, gynae.\n\t\t\t* Sylhet M.A. G. Osmani Medical College & Hospital.\n\t\t\t* Obs & Gynae Specialist & Surgeon.\n\t\t\t* Contact for Serial: +8801716-681929.\n");
}
void dr_ishrat()
{
    printf("\t\t\t* MBBS, BCS(Health), MS (Gynae & Obs) (BSMMU).\n\t\t\t* Obs & Gynae Specialist & Surgeon.\n\t\t\t* Contact for Serial: +8801703-954305 .\n");
}
void dr_jenny()
{
    printf("\t\t\t* MBBS, DGO Gynae & Obs).\n\t\t\t* Obs & Gynae Specialist & Surgeon.\n\t\t\t* Assistant Professor, gynae.\n\t\t\t* Women's Medical College & Hospital.\n\t\t\t* Contact for Serial: +8801791-477944.\n");
}
void dr_fatema()
{
    printf("\t\t\t* MBBS(SOMC), BCS(Health), FCPS (Gynae & Obs).\n\t\t\t* Obs & Gynae Specialist & Surgeon.\n\t\t\t* Contact for Serial: +8801759-327992 .\n");
}
void mount__Surgery_obsReturn()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        mount__Surgery();
    else
    {
        printf("\n\t\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            mount__Surgery();
    }
}
void mount__Surgery()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("MountAdora_surgery.txt","r");
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
    int POP_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Mohammad Abdul Quadir.\n\n");
            dr_quadir();
            mount__Surgery_obsReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. Showkat Uddin Ahmed.\n\n");
            dr_showkat();
            mount__Surgery_obsReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Tapos Singha.\n\n");
            dr_tapos();
            mount__Surgery_obsReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t226. DR. Mohammad Abdul Quadir.\n\n");
            printf("\t\t227. DR. Showkat Uddin Ahmed.\n\n");
            printf("\t\t228. DR. Tapos Singha.\n\n");

            int code;
            printf("\n\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for Back . ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                mount__Surgery();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            mount__printing();
            Mount_adora_medical_Field();
            break;
        }

        default:
            printf("\n\t\tWrong Choice.\n");

        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_quadir()
{
    printf("\t\t\t* MBBS(CU), BCS(Health), FCPS(Surgery), FMAS(India).\n\t\t\t   FACRSI(India). \n\t\t\t* General, Colorectal & Laparoscopic Surgeon.\n\t\t\t* Contact for Serial: +8801792-515959 (Call within 9 AM - 10 AM).\n");
}
void dr_showkat()
{
    printf("\t\t\t* MBBS, BCS(Health), FCPS(Surgery).\n\t\t\t* General & Laparoscopic Surgeon.\n\t\t\t* Contact for Serial: +8801714-561325 (Call within 9 AM - 10 AM).\n");
}
void dr_tapos()
{
    printf("\t\t\t* MBBS, FCPS(Surgery).\n\t\t\t* General & Laparoscopic Surgeon.\n\t\t\t* Contact for Serial: +8801752-361274 (Call from10 AM).\n");
}
void mount__PAEDIATRICS_Return()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        mount__PAEDIATRICS();
    else
    {
        printf("\n\t\t'0' for Back.");
        scanf("%d",&a);
        if(a==0)
            mount__PAEDIATRICS();
    }
}
void mount__PAEDIATRICS()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("MountAdora_paediatrics.txt","r");
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
    int POP_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice  Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Akhlaq Ahmed.\n\n");
            dr_akhlaq();
            mount__PAEDIATRICS_Return();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. MD Muazzem Hossain (Harun).\n\n");
            dr_muazzen();
            mount__PAEDIATRICS_Return();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\t\t3. DR. Naznin Akther.\n\n");
            dr_naznin();
            mount__PAEDIATRICS_Return();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t229. DR. Akhlaq Ahmed.\n\n");
            printf("\t\t230. DR. MD Muazzem Hossain (Harun).\n\n");
            printf("\t\t231. DR. Naznin Akther.\n\n");

            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for Back. ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                mount__PAEDIATRICS();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            mount__printing();
            Mount_adora_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");

        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_akhlaq()
{
    printf("\t\t\t* MBBS, BCS(Health), DCH, MD(Pediatrics).\n\t\t\t* Child Specialist.\n\t\t\t* Contact for Serial: +8801782-158382.\n");
}
void dr_muazzen()
{
    printf("\t\t\t* MBBS, BCS(Health), DCH, MD(Pediatrics).\n\t\t\t* Child Specialist.\n\t\t\t* Contact for Serial: +8801782-158382.\n");
}
void dr_naznin()
{
    printf("\t\t\t* MBBS, (Sylhet M.A.g. Osmani Medical College),\n\t\t\t   DCH, MD(Pediatrics).\n\t\t\t* Pediatrics Specialist.\n\t\t\t* Contact for Serial: +8801786-360548.\n");
}
void mount__Nephrology_Return()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        mount__Nephrology();
    else
    {
        printf("\n\t\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            mount__Nephrology();
    }
}
void mount__Nephrology()
{
    system("cls");
    gotoxy(0,7);
    printf("\n\n\t\t\tNEPHROLOGY\n\n");
    printf("\t\t1. DR. Alamgir Chowdhary.\n\n");
    printf("\t\t2. DR. Nazmus Saqib.\n\n");
    printf("\t\t3. Buy Ticket\n\n");

    int POP_field,i;
    printf("\n\t\t'0' for back.");
    printf("\n\t\tChoice Option = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Alamgir Chowdhary.\n\n");
            dr_alamgir();
            mount__Nephrology_Return();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. Nazmus Saqib.\n\n");
            dr_nazmus();
            mount__Nephrology_Return();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            mount__printing();
            Mount_adora_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_alamgir()
{
    printf("\t\t\t* MBBS, BCS(Health), DCH, MD(Pediatrics).\n\t\t\t* Kidney Diseases & Medicine Specialist.\n\t\t\t* Contact for Serial: +8801782-158382.\n");
}
void dr_nazmus()
{
    printf("\t\t\t* MBBS, MCPS(Medicine), MD (Nephrology).\n\t\t\t* Kidney Diseases Specialist.\n\t\t\t* Contact for Serial: +8801316-172333 (Call within 9 AM - 10 AM).\n");
}
//oasiiiiiiiiiiiiiiiiiiiii
//marge baki

void Oasis_medical()
{
    int oasis,i;
    printf("\n\n\t\t1. O A S I S.\n\n");
    printf("\n\t\t'0' for Back.");
    printf("\n\n\t\tChoice Option : ");
    for(i=1; scanf("%d", &oasis)>0; i++)
    {
        switch(oasis)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            OOasis_printing();
            oasis_medical_Field();
            break;
            case 0:
            {
                system("cls");
                gotoxy(0,7);
                medicalName();
                allMedicalFeild();
                break;
            }
            default:
                printf("\n\t\tWrong Choice.\n");
            }
            printf("\n\n\t\tCheck for another: ");
        }
    }
}
void OOasis_printing()
{
    FILE *file;
    char ch;
    file = fopen("Oasis_printing.txt","r");
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
void oasis_medical_Field()
{
    int adora_field,i;
    printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option = ");
    for(i=1; scanf("%d", &adora_field)>0; i++)
    {
        switch(adora_field)
        {
        case 1:
        {
            OOasis_medicine();
            break;
        }
        case 2:
        {
            OOasis_Gynae_obs();
            break;
        }
        case 3:
        {
            OOasis_PAEDIATRICS();
            break;
        }
        case 4:
        {
            OOasis_DENTIST();
            break;
        }
        case 5:
        {
            OOasis_Heart();
            gotoxy(0,7);
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            Oasis_medical();
            break;
        }

        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back.");
        printf("\n\n\t\tCheck for another: ");
    }
}
void  OOasis_medicineReturn()
{
    int a ;
    printf("\n\t\t'0' for Back .");
    scanf("%d",&a);
    if(a==0)
        OOasis_medicine();
    else
    {
        printf("\n\t\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            OOasis_medicine();
    }
}
void  OOasis_medicine()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("Oasis_medicine.txt","r");
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
    int POP_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice Option = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Muhammad Ruhul Kabir.\n\n");
            dr_ruhul();

            OOasis_medicineReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. Wilson Deb.\n\n");
            dr_wilson();
            OOasis_medicineReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Muhammad Ashfakul Islam Sharfin.\n\n");
            dr_ashfak();
            OOasis_medicineReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. DR. MD. Enayet Hussain.\n\n");
            dr_enayet();
            OOasis_medicineReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t301.  DR. Muhammad Ruhul Kabir.\n\n");
            printf("\t\t302.  DR. Wilson Deb.\n\n");
            printf("\t\t303.  DR. Muhammad Ashfakul Islam Sharfin.\n\n");
            printf("\t\t304.  DR. MD. Enayet Hussain.\n\n");

            int code;
            printf("\n\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for Back. ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                OOasis_medicine();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            OOasis_printing();
            oasis_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_ruhul()
{
    printf("\t\t\t* MBBS, BCS(Health),FCPS (Medicine) Medicine Specialist.\n\t\t\t* Assistant Professor, Dept Of Medicine.\n\t\t\t* Sylhet M.A. G. Osmani Medical College & Hospital.\n\t\t\t* Reg. no- 40509.\n\t\t\t* Contact for Serial: +8801763-990044.\n");
}
void dr_wilson()
{
    printf("\t\t\t* MBBS, BCS Member ACP (USA) MD (Medicine).\n\t\t\t* Sylhet M.A. G. Osmani Medical College & Hospital.\n\t\t\t* Visiting Hour: 5.00-9.00(Sat, Sun).\n");
}
void dr_ashfak()
{
    printf("\t\t\t* MBBS, BCS(Health),MD (Int. Medicine) Medicine Specialist.\n\t\t\t* Sylhet M.A. G. Osmani Medical College & Hospital.\n\t\t\t* Visiting Hour: 6.00-8.00(Friday).\n");
}
void dr_enayet()
{
    printf("\t\t\t* MBBS(DMC),FCPS (Medicine) , MD(Neurology).\n\t\t\t* Visiting Hour: 8.00-6.00(only Friday).\n");
}
void  OOasis_Gynae_obsReturn()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        OOasis_Gynae_obs();
    else
    {
        printf("\n\t\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            OOasis_Gynae_obs();
    }
}
void  OOasis_Gynae_obs()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("Oasis_gyneaobs.txt","r");
    if(file == NULL)
        printf("\n\tFile dosen't Exist.");
    else
    {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }
    int POP_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice Option = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. Professor. DR. Ayesha Rahim.\n\n");
            dr_ayesha();
            OOasis_Gynae_obsReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. Nujhat Sharmin Urmi.\n\n");
            dr_nujhat();
            OOasis_Gynae_obsReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Saiqa Rehnuma.\n\n");
            dr_saiqa();
            OOasis_Gynae_obsReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. Professor. DR. Nadira Begum.\n\n");
            dr_nadira();
            OOasis_Gynae_obsReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t305. Professor. DR. Ayesha Rahim.\n\n");
            printf("\t\t306. DR. Nujhat Sharmin Urmi.\n\n");
            printf("\t\t307. DR. Saiqa Rehnuma.\n\n");
            printf("\t\t308. Professor. DR. Nadira Begum.\n\n");

            int code;
            printf("\n\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for Back. ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                OOasis_Gynae_obs();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            OOasis_printing();
            oasis_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void  dr_ayesha()
{
    printf("\t\t\t* MBBS, FCPS (Gynae & Obs) DGO, MCPS (Gynae & Obs)Professor, gynae.\n\t\t\t* Obs & Gynae Specialist & Surgeon.\n\t\t\t* Sylhet M.A. G. Osmani Medical College & Hospital.\n\t\t\t* Visiting Hour: 5.00-9.00(Sat & Sun).\n");
}
void dr_nujhat()
{
    printf("\t\t\t* MBBS, FCPS (Gynae & Obs)Assitant Professor, gynae.\n\t\t\t* Sylhet Jalalabad Ragib-Rabeya Medical College & Hospital.\n\t\t\t* Visiting Hour: 5.00-8.00(Sun, Mon, Tue, Wed).\n\t\t\t* Contact for serial: +8801763- 990048.\n");
}
void dr_saiqa()
{
    printf("\t\t\t* MBBS, BCS (Health), FCPS (Gynae & Obs).\n\t\t\t* Obs & Gynae Specialist & Surgeon.\n\t\t\t* Registrar(Gynae).\n\t\t\t* Sylhet M.A. G. Osmani Medical College & Hospital.\n\t\t\t* Visiting Hour: 5.00-9.00(Sat & Sun).\n");
}
void dr_nadira()
{
    printf("\t\t\t* MBBS, FCPS (Gynae & Obs) .\n\t\t\t* Gynecologist Surgeon.\n\t\t\t* Sylhet Jalalabad Ragib-Rabeya Medical College & Hospital.\n\t\t\t* Visiting Hour: 5.00-9.00(Sun, Tue, Wed).\n");
}
void  OOasis_PAEDIATRICSReturn()
{
    int a ;
    printf("\n\t\t'0' for back.");
    scanf("%d",&a);
    if(a==0)
        OOasis_PAEDIATRICS();
    else
    {
        printf("\n\t\t'0' for back.");
        scanf("%d",&a);
        if(a==0)
            OOasis_PAEDIATRICS();
    }
}
void  OOasis_PAEDIATRICS()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("Oasis_paediatrics.txt","r");
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
    int POP_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice Option = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. Professor. DR. Saiyad Musa M. A. Qaiyum.\n\n");
            dr_musa();
            OOasis_PAEDIATRICSReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. MD. Zakariya Hussain.\n\n");
            dr_zakaria();
            OOasis_PAEDIATRICSReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. MD. Emdadur Rahman.\n\n");
            dr_emdad();
            OOasis_PAEDIATRICSReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t309. Professor. DR. Saiyad Musa M. A. Qaiyum.\n\n");
            printf("\t\t310. DR. MD. Zakariya Hussain.\n\n");
            printf("\t\t311. DR. MD. Emdadur Rahman.\n\n");

            int code;
            printf("\n\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for Back. ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                OOasis_PAEDIATRICS();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            OOasis_printing();
            oasis_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_musa()
{
    printf("\t\t\t* MBBS, DCH, RCP & S (Ireland) .\n\t\t\t* Pediate Specialist.\n\t\t\t* North East Medical College & Hospital.\n\t\t\t* Visiting Hour: 1.00-1.00 PM(Sat, Sun, Mon, Tue, Wed, Thur).\n");
}
void dr_zakaria()
{
    printf("\t\t\t* MBBS, DPH, DDT, DCH, MAMS.\n\t\t\t* Pediatric Specialist.\n\t\t\t* Visiting Hour: 11.00 AM-4.00 PM(Sat, Sun, Mon, Tue, Wed, Thur).\n");
}
void dr_emdad()
{
    printf("\t\t\t* MBBS,DCH, (BSMMU).\n\t\t\t* Pediate Specialist.\n\t\t\t* Contact for Serial: +8801763990044.\n");
}
void  OOasis_DENTISTReturn()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        OOasis_DENTIST();
    else
    {
        printf("\n\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            OOasis_DENTIST();
    }
}
void  OOasis_DENTIST()
{
    system("cls");
    gotoxy(0,7);
    printf("\n\n\t\tDENTIST.\n\n");
    printf("\t\t1. DR. Sekh Abdullah Muhammad.\n\n");
    printf("\t\t2. DR. Anamika Paul.\n\n");
    printf("\t\t3. Buy Ticket\n\n");

    int POP_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Sekh Abdullah Muhammad.\n\n");
            dr_sekh();
            OOasis_DENTISTReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. Anamika Paul.\n\n");
            dr_anamila();
            OOasis_DENTISTReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t312.  DR. Sekh Abdullah Muhammad.\n\n");
            printf("\t\t313.  DR. Anamika Paul.\n\n");

            int code;
            printf("\n\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for Back. ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                OOasis_DENTIST();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            OOasis_printing();
            oasis_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_sekh()
{
    printf("\t\t\t* BD.S(DU) .\n\t\t\t* Dentist, Oasis Hospital, Subhani ghat, Sylhet.\n\t\t\t* Visiting Hour: 4.00 PM-8.00 PM(Daily).\n\t\t\t* Contact for Serial: +8801763990044.\n");
}
void dr_anamila()
{
    printf("\t\t\t* BD.S(DU), MPS(NSU), PGT (BSMMU) .\n\t\t\t* Special Trained in Root Canal Treatement And Esthetic Dentist..\n\t\t\t* Visiting Hour: 10.00 AM - 1.00 PM(Daily).\n\t\t\t* Contact for Serial: +8801763990044.\n");
}
void  OOasis_HeartReturn()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        OOasis_Heart();
    else
    {
        printf("\n\t\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            OOasis_Heart();
    }
}
void  OOasis_Heart()
{
    system("cls");
    gotoxy(0,7);
    printf("\n\n\t\tHEART & MEDICINE.\n\n");
    printf("\t\t1. DR. SaleH Ahmed Tahlil.\n\n");
    printf("\t\t2. DR. Sulaiman Ahmed.\n\n");
    printf("\t\t3.Buy Ticket\n\n");
    int POP_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. SaleH Ahmed Tahlil.\n\n");
            dr_saleh();
            OOasis_HeartReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. Sulaiman Ahmed.\n\n");
            dr_sulaiman();
            OOasis_HeartReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t314. DR. SaleH Ahmed Tahlil.\n\n");
            printf("\t\t315. DR. Sulaiman Ahmed.\n\n");

            int code;
            printf("\n\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for Back. ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                printing();
                OOasis_Heart();
            }
            break;
        }
        case 0:
        {
            system("cls");
            OOasis_printing();
            oasis_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_saleh()
{
    printf("\t\t\t* MBBS(SUST). M.Sc.-Card(UK).\n\t\t\t* Special Training Luton and Dunstable Hospital(UK).\n\t\t\t*  Assitant Professor, Dept of Cardiology.\n\t\t\t* Visiting Hour: 4.00 PM-8.00 PM(Daily).\n\t\t\t* Contact for Serial: +8801763990044.\n");
}
void dr_sulaiman()
{
    printf("\t\t\t* MBBS,MSC, Cardiology.\n\t\t\t* Special Training Luton and Dunstable Hospital(UK).\n\t\t\t* Visiting Hour: 5.00 PM-8.00 PM(Friday Off).\n\t\t\t* Contact for Serial: +8801763990044/55.\n");
}
//ibnnnnnnnnnnnnnnn sina
void IBN_SINA_medical()
{
    int ibnsina,i;
    printf("\n\n\t\t1. IBN SINA\n\n");
    printf("\t\t'0' for Back. ");
    printf("\n\t\tChoice Option : ");
    for(i=1; scanf("%d", &ibnsina)>0; i++)
    {
        switch(ibnsina)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            ibnsina_printing();
            IBN_SINA_medical_Field();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            medicalName();
            allMedicalFeild();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\n\t\tCheck for another: ");
    }
}
void ibnsina_printing()
{
    FILE *file;
    char ch;
    file = fopen("IbnSina_printing.txt","r");
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
void IBN_SINA_medical_Field()
{
    int ibnsina_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &ibnsina_field)>0; i++)
    {
        switch(ibnsina_field)
        {
        case 1:
        {
            ibnsina_paediatric_medicine();
            break;
        }
        case 2:
        {
            ibnsina_medicine();
            break;
        }
        case 3:
        {
            ibnsina_dermatology();
            break;
        }
        case 4:
        {
            ibnsina_general_surgery();
            break;
        }
        case 5:
        {
            ibnsina_orthopeadic_surgery();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            IBN_SINA_medical();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void ibnsina_paediatric_medicineReturn()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        ibnsina_paediatric_medicine();
    else
    {
        printf("\n\t\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            ibnsina_paediatric_medicine();
    }
}
void  ibnsina_paediatric_medicine()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("IbnSina_paediatric_medicine.txt","r");
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
    int POP_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Farzana Hamid.\n\n");
            dr_farzana1();
            ibnsina_paediatric_medicineReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. M.A. Hai.\n\n");
            dr_hai();
            ibnsina_paediatric_medicineReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Rashedul Haque.\n\n");
            dr_rashed();
            ibnsina_paediatric_medicineReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. Prof. DR. Syed Moosa.\n\n");
            dr_moosa();
            ibnsina_paediatric_medicineReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t5. DR. Mohammad Shohel.\n\n");
            dr_shohel();
            ibnsina_paediatric_medicineReturn();
            break;
        }
        case 6:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t401. DR. Farzana Hamid.");
            printf("\n\n\t\t402. DR. M.A. Hai.");
            printf("\n\n\t\t403. DR. Rashedul Haque.");
            printf("\n\n\t\t404. Prof. DR. Syed Moosa.");
            printf("\n\n\t\t405. DR. Mohammad Shohel.");

            int code;
            printf("\n\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for Back. ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                ibnsina_paediatric_medicine();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            ibnsina_printing();
            IBN_SINA_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_farzana1()
{
    printf("\t\t\t* Degrees: MBBS, FCPS(Pediatric), MRCPH.\n\t\t\t* Pediatric Medicine Specialist.\n\t\t\t* Consultation Time: Evenig.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void dr_hai()
{
    printf("\t\t\t* Degrees: MBBS, FCPS, MCPS, MD(Neonatology).\n\t\t\t* Pediatric Medicine Specialist.\n\t\t\t* Consultation Time: Evenig.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void dr_rashed()
{
    printf("\t\t\t* Degrees: MBBS, FCPS(Pediatric).\n\t\t\t* Pediatric Medicine Specialist.\n\t\t\t* Consultation Time: Evenig.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void dr_moosa()
{
    printf("\t\t\t* Degrees: MBBS, DCH, RCPAS, FCPS(Child Health).\n\t\t\t* Pediatric Medicine Specialist.\n\t\t\t* Consultation Time: Evenig.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void dr_shohel()
{
    printf("\t\t\t* Degrees: MBBS, BCS(Health), FCPS(Child Health).\n\t\t\t* Destination: Child & Adolescent Specialist.\n\t\t\t* Pediatric Medicine Specialist.\n\t\t\t* Consultation Time: Evenig.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void ibnsina_medicineReturn()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        ibnsina_medicine();
    else
    {
        printf("\n\t\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            ibnsina_medicine();
    }
}
void ibnsina_medicine()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("IbnSina_medicine.txt","r");
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
    int POP_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice Option = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. PROF. DR. Faizul Islam Chowdhury.\n\n");
            dr_faizul();
            ibnsina_medicineReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. Iqbal Ahmed Chowdhury.\n\n");
            dr_iqbal();
            ibnsina_medicineReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. MD Ashfaqul Islam.\n\n");
            dr_ashfaq();
            ibnsina_medicineReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. DR. MD Tanvir Muhit.\n\n");
            dr_muhit();
            ibnsina_medicineReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t5. DR. Muhammad Moswood Ghoni.\n\n");
            dr_moswood();
            ibnsina_medicineReturn();
            break;
        }
        case 6:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t406. PROF. DR. Faizul Islam Chowdhury.");
            printf("\n\n\t\t407. DR. Iqbal Ahmed Chowdhury.");
            printf("\n\n\t\t408. DR. MD Ashfaqul Islam. ");
            printf("\n\n\t\t409. DR. MD Tanvir Muhit.");
            printf("\n\n\t\t410. DR. Muhammad Moswood Ghoni.");

            int code;
            gotoxy(0,7);
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t'0' for Back. ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                ibnsina_medicine();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            ibnsina_printing();
            IBN_SINA_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_faizul()
{
    printf("\t\t\t* Degrees: MBBS, FCPS(Medicine).\n\t\t\t* Medicine Specialist.\n\t\t\t* Consultation Time: Friday.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void dr_iqbal()
{
    printf("\t\t\t* Degrees: MBBS, BCS,  FCPS(Medicine).\n\t\t\t* Destination: Assist Prof. M.A.G. Osmani Medical College, Sylhet.\n\t\t\t* Medicine Specialist.\n\t\t\t* Consultation Time: Evening.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void dr_ashfaq()
{
    printf("\t\t\t* Degrees: MBBS, BCS,  MD(Medicine).\n\t\t\t* Destination: Medicine.\n\t\t\t* Medicine Specialist.\n\t\t\t* Consultation Time: Evening.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void dr_muhit()
{
    printf("\t\t\t* Degrees: MBBS, BCS(Health),  FCPS(Medicine).\n\t\t\t* Destination: Assist Prof. M.A.G. Osmani Medical College, Sylhet.\n\t\t\t* Medicine Specialist.\n\t\t\t* Consultation Time: Evening 2.00 - 6.00 PM.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void dr_moswood()
{
    printf("\t\t\t* Degrees: MBBS, MRCP(Medicine).\n\t\t\t* Medicine Specialist.\n\t\t\t* Consultation Time: Evening.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void ibnsina_dermatologyReturn()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        ibnsina_dermatology();
    else
    {
        printf("\n\t\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            ibnsina_dermatology();
    }
}
void ibnsina_dermatology()
{
    system("cls");
    FILE *file;
    char ch;
    file = fopen("IbnSina_dermatology.txt","r");
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
    int POP_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Albabur Rahmam\n\n");
            dr_rahman();
            ibnsina_dermatologyReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. Saleh Ahmed Shahe.\n\n");
            dr_saleh11();
            ibnsina_dermatologyReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. Prof. DR. Syed Mamoon.\n\n");
            dr_mamun();
            ibnsina_dermatologyReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. DR. Farhana.\n\n");
            dr_farhana();
            ibnsina_dermatologyReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t411. DR. Albabur Rahmam.");
            printf("\n\n\t\t412. DR. Saleh Ahmed Shahe.");
            printf("\n\n\t\t413. Prof. DR. Syed Mamoon.");
            printf("\n\n\t\t414. DR. Farhana.\n\n");

            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for Back. ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                ibnsina_dermatology();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            ibnsina_printing();
            IBN_SINA_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back.  ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_rahman()
{
    printf("\t\t\t* Degrees: MBBS, DDV.\n\t\t\t* Dermatology Specialist.\n\t\t\t* Consultation Time: Morning.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void dr_saleh11()
{
    printf("\t\t\t* Degrees: MBBS, BCS. MD(Dermatology).\n\t\t\t* Dermatology Specialist.\n\t\t\t* Consultation Time: Evening.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void dr_mamun()
{
    printf("\t\t\t* Degrees: MBBS, DDV. MD(Dermatology).\n\t\t\t* Dermatology Specialist.\n\t\t\t* Consultation Time: Evening.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void dr_farhana()
{
    printf("\t\t\t* Degrees: MBBS, BCS(Health) DDV(Dhaka). CCD(Birdem).\n\t\t\t* Destination: Skin & Allergy Specialist.\n\t\t\t* Dermatology Specialist.\n\t\t\t* Consultation Time: Evening.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void ibnsina_general_surgeryReturn()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        ibnsina_general_surgery();
    else
    {
        printf("\n\t\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            ibnsina_general_surgery();
    }
}
void ibnsina_general_surgery()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("IbnSina_general_surgery.txt","r");
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
    int POP_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Jahir Ahmed.\n\n");
            dr_jahir();
            ibnsina_general_surgeryReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. Prof. DR. Rafiqus Salehin.\n\n");
            dr_rafiq();
            ibnsina_general_surgeryReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. Prof. DR. Syed Shamsuddin Ahmed.\n\n");
            dr_shamsuddin();
            ibnsina_general_surgeryReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. DR. Ahmed Moksud Hasan Lasker.\n\n");
            dr_moksud();
            ibnsina_general_surgeryReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t415. DR. Jahir Ahmed.");
            printf("\n\n\t\t416. Prof. DR. Rafiqus Salehin.");
            printf("\n\n\t\t417. Prof. DR. Syed Shamsuddin Ahmed.");
            printf("\n\n\t\t418. DR. Ahmed Moksud Hasan Lasker.\n\n");

            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for Back. ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                ibnsina_general_surgery();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            ibnsina_printing();
            IBN_SINA_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_jahir()
{
    printf("\t\t\t* Degrees: MBBS, BCS, FCPS(Surgery).\n\t\t\t* General Surgery.\n\t\t\t* Consultation Time: Evening.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void dr_rafiq()
{
    printf("\t\t\t* Degrees: MBBS, FCPS(Surgery), FRCS(UK).\n\t\t\t* General Surgery.\n\t\t\t* Consultation Time: Morning.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void dr_shamsuddin()
{
    printf("\t\t\t* Degrees: MBBS, DTM, Ph.D(Plastic Surgery).\n\t\t\t* General Surgery.\n\t\t\t* Consultation Time: Friday.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void dr_moksud()
{
    printf("\t\t\t* Degrees: MBBS, FCPS(Surgery).\n\t\t\t* Destination: General & Laparoscopic Surgeon.\n\t\t\t* General Surgery.\n\t\t\t* Consultation Time: Evening.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void ibnsina_orthopeadic_surgeryReturn()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        ibnsina_orthopeadic_surgery();
    else
    {
        printf("\n\t\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            ibnsina_orthopeadic_surgery();
    }
}
void ibnsina_orthopeadic_surgery()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("IbnSina_orthopeadic_surgery.txt","r");
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
    int POP_field,i;
    printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Chowdhury Fayzur Rob (Zubayer).\n\n");
            dr_foyzur();
            ibnsina_orthopeadic_surgeryReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. M.A. Hannan.\n\n");
            dr_hannan();
            ibnsina_orthopeadic_surgeryReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Syed Abdur Subhan (Rahin).\n\n");
            dr_subhan();
            ibnsina_orthopeadic_surgeryReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t419. DR. Chowdhury Fayzur Rob (Zubayer).");
            printf("\n\n\t\t420. DR. M.A. Hannan.");
            printf("\n\n\t\t421. DR. Syed Abdur Subhan (Rahin).\n\n");

            int code;
            printf("\n\n\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t'0' for Back. ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                ibnsina_orthopeadic_surgery();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            ibnsina_printing();
            IBN_SINA_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_foyzur()
{
    printf("\t\t\t* Degrees: MBBS, MS(Ortho).\n\t\t\t* Destination: General & Laparoscopic Surgeon.\n\t\t\t* Orthopedic Surgery.\n\t\t\t* Consultation Time: Evening.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void dr_hannan()
{
    printf("\t\t\t* Degrees: MBBS, BCS(Health), MS(Ortho).\n\t\t\t* Destination: Spine, Orthopedics, Trauma Speiacist & Surgeon.\n\t\t\t* Orthopedic Surgery.\n\t\t\t* Consultation Time: Evening.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
void dr_subhan()
{
    printf("\t\t\t* Degrees: MBBS, BCS(Health), MS(Ortho).\n\t\t\t* Orthopedic Surgery.\n\t\t\t* Consultation Time: 2.00 - 5.00 PM.\n\t\t\t* Contact Number: +09636300300(Get an Appointment).\n");
}
// parkkkkkkkkkkkkkkkkkkkkkkkkkk vieeeeeeeeeeeeeeew
void ParkView_medical()
{
    int parkview,i;
    printf("\n\n\t\t\t1.  P A R K  V I E R W\n\n");
    printf("\n\t\t\t '0' for Back.\n");
    printf("\n\n\t\t\t Choice Option : ");
    for(i=1; scanf("%d", &parkview)>0; i++)
    {
        switch(parkview)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            parkview_printing();
            parkview_medical_Field();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            medicalName();
            allMedicalFeild();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\n\t\tCheck for another: ");
    }
}
void  parkview_printing()
{
    FILE *file;
    char ch;
    file = fopen("Parkview_printing.txt","r");
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
void parkview_medical_Field()
{
    int Park_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &Park_field)>0; i++)
    {
        switch(Park_field)
        {
        case 1:
        {
            parkview_medicine();
            break;
        }
        case 2:
        {
            parkview_orthopeadic();
            break;
        }
        case 3:
        {
            parkview_ent();
            break;
        }
        case 4:
        {
            parkview_surgery();
            break;
        }
        case 5:
        {
            parkview_kidney();
            break;
        }
        case 6:
        {
            parkview_skin();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            ParkView_medical();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void  parkview_medicineReturn()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        parkview_medicine();
    else
    {
        printf("\n\t\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            parkview_medicine();
    }
}
void  parkview_medicine()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("Parkview_medicine.txt","r");
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
    int POP_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\tChoice Option  =  ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. PROF. DR. Khokan Kanti Das.\n\n");
            dr_khokan();
            parkview_medicineReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. A.S.M. Jahed.\n\n");
            dr_jahed();
            parkview_medicineReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Mohammad Mainuddin Chowdhury.\n\n");
            dr_mainuddin();
            parkview_medicineReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. DR. Mohammad Rezaul Karim.\n\n");
            dr_rezaul();
            parkview_medicineReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t5. DR. Saifuddin Mahmud.\n\n");
            dr_saifuddin();
            parkview_medicineReturn();
            break;
        }
        case 6:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t6. DR. Istitak Ahmed.\n\n");
            dr_istiak();
            parkview_medicineReturn();
            break;
        }
        case 7:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t501. PROF. DR. Khokan Kanti Das.");
            printf("\n\n\t\t502. DR. A.S.M. Jahed .");
            printf("\n\n\t\t503. DR. Mohammad Mainuddin Chowdhury.");
            printf("\n\n\t\t504. DR. Mohammad Rezaul Karim..");
            printf("\n\n\t\t505. DR. Saifuddin Mahmud.");
            printf("\n\n\t\t506. DR. Istitak Ahmed.");

            int code;
            printf("\n\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for Back. ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                parkview_medicine();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            parkview_printing();
            parkview_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_khokan()
{
    printf("\t\t\t* MBBS, FCCP(USA), FCPS(BD).\n\t\t\t* FRCP(Edin), FRCP(Glagow).\n\t\t\t* Ex Professor & Head Neuromedicine, CMCH.\n\t\t\t* Room No: 230.\n\t\t\t* Fee: 800 BDT.\n\t\t\t* Time: Sat-Thur(5.00.AM - 12.30 PM).\n");
}
void dr_jahed()
{
    printf("\t\t\t* MBBS, FCPS(Medicine).\n\t\t\t* Associate Professor medicine.\n\t\t\t* Chattagram Medical College.\n\t\t\t* Room No: 308.\n\t\t\t* Fee: 800 BDT.\n\t\t\t* Time: (4.30.PM - 6.00 PM) Friday Off.\n");
}
void dr_mainuddin()
{
    printf("\t\t\t* MBBS, FCPS(Medicine).\n\t\t\t* Assistant Professor CMCH.\n\t\t\t* Room No: 303.\n\t\t\t* Fee: 700 BDT.\n\t\t\t* Time: (5.00.PM - 7.00 PM) Tuesday & Friday Off.\n");
}
void dr_rezaul()
{
    printf("\t\t\t* MBBS, BCS(Health).\n\t\t\t* MD(Internal Medicine).\n\t\t\t* Room No: 227.\n\t\t\t* Fee: 600 BDT.\n\t\t\t* Time: (5.00.PM - 6.00 PM).\n");
}
void dr_saifuddin()
{
    printf("\t\t\t* MBBS, BCS(Health).\n\t\t\t*  Consultant: Medicine.\n\t\t\t* Room No: 320.\n\t\t\t* Fee: 700 BDT.\n\t\t\t* Time: (6.30.PM - 9.00 PM) Sat - Thur.\n");
}
void dr_istiak()
{
    printf("\t\t\t* MBBS, BCS(Health).\n\t\t\t* MCPS, FCPS(Medicine).\n\t\t\t*  Consultant: Medicine.\n\t\t\t* Room No: 320.\n\t\t\t* Fee: 700 BDT.\n\t\t\t* Time: (6.30.PM - 9.00 PM)Sat - Thur.\n");
}
void  parkview_orthopeadicReturn()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        parkview_orthopeadic();
    else
    {
        printf("\n\t\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            parkview_orthopeadic();
    }
}
void  parkview_orthopeadic()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("Parkview_orthopeadic.txt","r");
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
    int POP_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Wakil Ahmed.\n\n");
            dr_wakil();
            parkview_orthopeadicReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. A.T.M. Rezaul Karim.\n\n");
            dr_rezaulkarim();
            parkview_orthopeadicReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Mahamudur Rahman.\n\n");
            dr_mahamudur();
            parkview_orthopeadicReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. DR. Muhammad Abdul Awal.\n\n");
            dr_awal();
            parkview_orthopeadicReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t5. DR. Mohammad Mohsin.\n\n");
            dr_mohsin();
            parkview_orthopeadicReturn();
            break;
        }
        case 6:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t6. DR. Mohammad Mamun.\n\n");
            dr_mamun12();
            parkview_orthopeadicReturn();
            break;
        }
        case 7:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t507. DR. Wakil Ahmed.");
            printf("\n\n\t\t508. DR. A.T.M. Rezaul Karim.");
            printf("\n\n\t\t509. DR. Mahamudur Rahman.");
            printf("\n\n\t\t510. DR. Muhammad Abdul Awal.");
            printf("\n\n\t\t511. DR. Mohammad Mohsin.");
            printf("\n\n\t\t512. DR. Mohammad Mamun.\n\n");


            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for Back .");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                printing();
                parkview_orthopeadic();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            parkview_printing();
            parkview_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_wakil()
{
    printf("\t\t\t* MBBS, MCPS(Surgery).\n\t\t\t* MS(Ortho. Surgery), MMED.\n\t\t\t* Room No: 310.\n\t\t\t* +8801834522673.\n\t\t\t* Fee: 700 BDT.\n\t\t\t* Time: (10.00.PM - 5.00 PM) Friday Only.\n");
}
void dr_rezaulkarim()
{
    printf("\t\t\t* MBBS, D.Ortho , MS(Ortho).\n\t\t\t* Consultant: Orthopedics.\n\t\t\t* Room No: 310.\n\t\t\t* Fee: 800 BDT.\n\t\t\t* Time: (6.00.PM - 9.00 PM) Friday Off.\n");
}
void dr_mahamudur()
{
    printf("\t\t\t* MBBS, MS(Ortho), BCS(Health).\n\t\t\t* Assistant Professor, CMCH.\n\t\t\t* Room No: 315.\n\t\t\t* Fee: 600 BDT.\n\t\t\t* Time: (5.00.PM - 7.00 PM) Mon & Friday Off.\n");
}
void dr_awal()
{
    printf("\t\t\t* MBBS, MS(Ortho).\n\t\t\t* Assistant Professor, BSMMU.\n\t\t\t* Room No: 207.\n\t\t\t* Fee: 600 BDT.\n\t\t\t* Time: (8.00.AM - 12.00 PM) Friday Only.\n");
}
void dr_mohsin()
{
    printf("\t\t\t* MBBS, D.Ortho.\n\t\t\t* Consultant: Orthopedics & Trauma.\n\t\t\t* Room No: 205.\n\t\t\t* Fee: 500 BDT.\n\t\t\t* Time: (5.00.PM - 7.00 PM) Friday Off.\n");
}
void dr_mamun12()
{
    printf("\t\t\t* MBBS, D.Ortho.\n\t\t\t* Consultant: Orthopedics & Trauma.\n\t\t\t* Room No: 310.\n\t\t\t* Fee: 500 BDT.\n\t\t\t* Time: (10.00.AM - !.00 PM) Friday Off.\n");
}
void  parkview_entReturn()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        parkview_ent();
    else
    {
        printf("\n\t\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            parkview_ent();
    }
}
//ent = urology
void  parkview_ent()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("Parkview_urology.txt","r");
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
    int POP_field,i;
    printf("\n\t\t'0' for back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Mohammad Hussen.\n\n");
            dr_jamal();
            parkview_entReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. H.S. Hobarak Hossen.\n\n");
            dr_hobarak();
            parkview_entReturn();
            break;
        }
        case 3:
        {
            system("cls");
            printf("\n\n\t\t3. DR. Mohammad Omar Faruk.\n\n");
            dr_omar();

            parkview_entReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. DR. Nasir Uddin.\n\n");
            dr_nasir();

            parkview_entReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);

            printf("\n\n\t\t512. DR. Mohammad Hussen.");
            printf("\n\n\t\t513. DR. H.S. Hobarak Hossen.");
            printf("\n\n\t\t514. DR. Mohammad Omar Faruk.");
            printf("\n\n\t\t515. DR. Nasir Uddin.");

            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for Back . ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                parkview_ent();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            parkview_printing();
            parkview_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_jamal()
{
    printf("\t\t\t* MBBS, BCS(Health).\n\t\t\t* FCPS(ENT), MS(Thesis).\n\t\t\t* Assistant Professor, ENT.\n\t\t\t* Room No: 311.\n\t\t\t* Fee: 700 BDT.\n\t\t\t* Time: (5.30.PM - 6.30 PM) Friday Off.\n");
}
void dr_hobarak()
{
    printf("\t\t\t* MBBS, BCS(Health).\n\t\t\t* FCPS(ENT).\n\t\t\t* Assistant Professor, CHCH.\n\t\t\t* Room No: 210.\n\t\t\t* Fee: 600 BDT.\n\t\t\t* Time: (4.30.PM - 6.00 PM) Thur & Friday Off.\n");
}
void dr_omar()
{
    printf("\t\t\t* MBBS, BCS(Health).\n\t\t\t* MCPS(ENT), DLO(DU).\n\t\t\t* Consultant, ENT.\n\t\t\t* Room No: 221.\n\t\t\t* Fee: 500 BDT.\n\t\t\t* Time: (7.30.PM - 9.00 PM) Sat & Thur.\n");
}
void dr_nasir()
{
    printf("\t\t\t* MBBS, BCS(Health).\n\t\t\t* FCPS(ENT).\n\t\t\t* Room No: 321.\n\t\t\t* Fee: 600 BDT.\n\t\t\t* Time: (3.00.PM - 5.30 PM) Friday Off.\n");
}
void parkview_SurgeryReturn()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        parkview_surgery();
    else
    {
        printf("\n\t\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            parkview_surgery();
    }
}
void  parkview_surgery()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("Parkview_surgery.txt","r");
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
    int POP_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. DR. Sayed Mohammad Shamseer Nahid.\n\n");
            dr_nahid();

            parkview_SurgeryReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. S.M. SARWAR.\n\n");
            dr_sarwar();
            parkview_SurgeryReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Najma Mahbub.\n\n");
            dr_najma();
            parkview_SurgeryReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. DR. S. M. Ishtiaque Ali (Rubel).\n\n");
            dr_rubel();
            parkview_SurgeryReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t5. DR. Tutul Talukder.\n\n");
            dr_tutul();
            parkview_SurgeryReturn();
            break;
        }
        case 6:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t6. DR. Morshed.\n\n");
            dr_morshed();
            parkview_SurgeryReturn();
            break;
        }
        case 7:
        {
            system("cls");
            gotoxy(0,7);

            printf("\n\n\t\t516. DR. Sayed Mohammad Shamseer Nahid.");
            printf("\n\n\t\t517. DR. S.M. SARWAR.");
            printf("\n\n\t\t518. DR. Najma Mahbub.");
            printf("\n\n\t\t519. DR. S. M. Ishtiaque Ali (Rubel).");
            printf("\n\n\t\t520. DR. Tutul Talukder.");
            printf("\n\n\t\t521. DR. Morshed.\n\n");

            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for Back . ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                parkview_surgery();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            parkview_printing();
            parkview_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_nahid()
{
    printf("\t\t\t* MBBS(DMC), FCPS(Surgery).\n\t\t\t* FASCRS(USA).\n\t\t\t* Assistant Professor, Surgery. CMCH.\n\t\t\t* Room No: 228.\n\t\t\t* Fee: 600 BDT.\n\t\t\t* Time: (6.00.PM - 9.00 PM) Thur & Fri off.\n");
}
void dr_sarwar()
{
    printf("\t\t\t* MBBS, BCS(Health).\n\t\t\t* FCPS(Surgery), FACS(USA).\n\t\t\t* Assistant Professor, Surgery.\n\t\t\t* Room No: 324.\n\t\t\t* Fee: 600 BDT.\n\t\t\t* Time: (6.00.PM - 9.00 PM) Thur & Fri.\n");
}
void dr_najma()
{
    printf("\t\t\t* MBBS, BCS(Health).\n\t\t\t* FCPS(Surgery).\n\t\t\t* Assistant Professor, Surgery, CMC. \n\t\t\t* Room No: 301.\n\t\t\t* Fee: 600 BDT.\n\t\t\t* Time: (6.30.PM - 9.00 PM) Fri & Sat off.\n");
}
void dr_rubel()
{
    printf("\t\t\t* MBBS.\n\t\t\t* FCPS(Surgery).\n\t\t\t* Assistant Professor, Surgery.\n\t\t\t* Rangamati Medical College.\n\t\t\t* Room No: 317.\n\t\t\t* Fee: 500 BDT.\n\t\t\t* Time: (6.00.PM - 9.30 PM) Everyday.\n");
}
void dr_tutul()
{
    printf("\t\t\t* MBBS, BCS(Health).\n\t\t\t* FCPS(Surgery), FACS(USA).\n\t\t\t* Consultant, Surgery. \n\t\t\t* Room No: 324.\n\t\t\t* Fee: 600 BDT.\n\t\t\t* Time: (6.00.PM - 9.00 PM) Thur & Fri.\n");
}
void dr_morshed()
{
    printf("\t\t\t* MBBS, BCS(Health).\n\t\t\t* FCPS(Surgery).\n\t\t\t* Consultant, Surgery. \n\t\t\t* Room No: 219.\n\t\t\t* Fee: 500 BDT.\n\t\t\t* Time: (8.00.PM - 10.00 PM) Friday off.\n");
}
void parkview_kidneyReturn()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        parkview_kidney();
    else
    {
        printf("\n\t\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            parkview_kidney();
    }
}
void  parkview_kidney()
{
    system("cls");
    FILE *file;
    char ch;
    file = fopen("Parkview_kidney.txt","r");
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
    int POP_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. PROF A.M.M. Etheshamul Haque\n\n");
            dr_haque();
            parkview_kidneyReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. Rafiqul Hasan.\n\n");
            dr_rafiq22();
            parkview_kidneyReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Susmita Biswas.\n\n");
            dr_susmita();
            parkview_kidneyReturn();

            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t4. DR. Merina Atjumand.\n\n");
            dr_Merina();
            parkview_kidneyReturn();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);


            printf("\n\n\t\t522. PROF A.M.M. Etheshamul Haque.");
            printf("\n\n\t\t523. DR. Rafiqul Hasan.");
            printf("\n\n\t\t524. DR. Susmita Biswas. ");
            printf("\n\n\t\t525. DR. Merina Atjumand.");
            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t'0' for Back. ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                parkview_kidney();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            parkview_printing();
            parkview_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_haque()
{
    printf("\t\t\t* MBBS, MD(Nephrology).\n\t\t\t* Professor & Dean of Medicine, USTC. \n\t\t\t* Room No: 230.\n\t\t\t* Fee: 1000 BDT.\n\t\t\t* Time: (5.00.PM - 7.00 PM) Sat, Mon & Wed.\n");
}
void dr_rafiq22()
{
    printf("\t\t\t* MBBS, MCPS(Medicine).\n\t\t\t* FCPS(Medicine), MD(Nephrology)\n\t\t\t* Assistant Professor, Nephrology . \n\t\t\t* Room No: 206.\n\t\t\t* Fee: 600 BDT.\n\t\t\t* Time: (5.00.PM - 7.00 PM) Fri off.\n");
}
void dr_susmita()
{
    printf("\t\t\t* MBBS, BCS(Health).\n\t\t\t* MD(Paediatric, Nephrology)\n\t\t\t* Assistant Professor,  CMC. \n\t\t\t* Room No: 224.\n\t\t\t* Fee: 600 BDT.\n\t\t\t* Time: (4.00.PM - 8.00 PM) Sun, Tue & Thu.\n");
}
void dr_Merina()
{
    printf("\t\t\t* MBBS, BCS(Health).\n\t\t\t* MCPS(Medicine), MD(Nephrology)\n\t\t\t* Consultant, CMCH. \n\t\t\t* Room No: 200.\n\t\t\t* Fee: 600 BDT.\n\t\t\t* Time: (5.00.PM - 8.00 PM) Sun to Thu.\n");
}
void  parkview_skinReturn()
{
    int a ;
    printf("\n\t\t'0' for Back. ");
    scanf("%d",&a);
    if(a==0)
        parkview_skin();
    else
    {
        printf("\n\t\t'0' for Back. ");
        scanf("%d",&a);
        if(a==0)
            parkview_skin();
    }
}
void  parkview_skin()
{
    system("cls");
    gotoxy(0,7);
    FILE *file;
    char ch;
    file = fopen("Parkview_skin.txt","r");
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

    int POP_field,i;
    printf("\n\t\t'0' for Back. ");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t1. Prof. DR. Monsurul Alam.\n\n");
            dr_monsur();
            parkview_skinReturn();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t2. DR. MD. mZiaur Rahman Bhuiyan.\n\n");
            dr_zia();
            parkview_skinReturn();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            printf("\n\n\t\t3. DR. Shamin Ara Sizu.\n\n");
            dr_sizu();
            parkview_skinReturn();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);


            printf("\n\n\t\t526. Prof. DR. Monsurul Alam.");
            printf("\n\n\t\t527. DR. MD. mZiaur Rahman Bhuiyan.");
            printf("\n\n\t\t528. DR. Shamin Ara Sizu. ");

            int code;
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t\t'0' for Back. ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");
                gotoxy(0,7);
                printing();
                parkview_skin();
            }
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
            parkview_printing();
            parkview_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice. ");
        }
        printf("\n\t\t'0' for Back. ");
        printf("\n\n\t\tCheck for another: ");
    }
}
void dr_monsur()
{
    printf("\t\t\t* MBBS, FCPC, MD.\n\t\t\t* PhD. FRCP(Glasgow)\n\t\t\t* Professor & Head (EX).\n\t\t\t* Chattagram Medical College.\n\t\t\t* Room No: 227.\n\t\t\t* Fee: 1000 BDT.\n\t\t\t* Time: (9.00.AM - 1.00 PM).\n");
}
void dr_zia()
{
    printf("\t\t\t* MBBS(CMC), BCS(Health).\n\t\t\t* MCPS, FCPS(Dermatology).\n\t\t\t* Asst. Professor, Dermatology.\n\t\t\t* Room No: 319.\n\t\t\t* Fee: 700 BDT.\n\t\t\t* Time: (5.00.PM - 9.00 PM) Sat, Sun & Mon.\n");
}
void dr_sizu()
{
    printf("\t\t\t* MBBS, DDV.\n\t\t\t* MD(Dermatology).\n\t\t\t* Asst. Professor, CIMC.\n\t\t\t* Room No: 201.\n\t\t\t* Fee: 600 BDT.\n\t\t\t* Time: (7.00.PM - 9.00 PM) Thur & Fri off.\n");
}

void doctorList()
{

    for(int i = 0 ; i < dr ; i++)
    {
        if( doctorData[i] == 101)
        {
            printf("\n\n\t101. PROF. DR. Shamsun Nahar Begum (Hena).");
            printf("\n\n\t\t* Consultant: Obs & Gynae.\n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 4:50 - 7:30 PM\n\n");
        }
        if( doctorData[i]==102)
        {
            printf("\n\n\t102. DR. Lubna Yesmin.");
            printf("\n\n\t\t* Consultant: Obs & Gynae. \n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 5:50 - 8:30 PM.");
        }
        if( doctorData[i]==103)
        {
            printf("\n\n\t103. DR. Dipu Das.");
            printf("\n\n\t\t* Consultant: Obs & Gynae.\n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 4:50 - 7:30 PM.");
        }
        if( doctorData[i]==104)
        {
            printf("\n\n\t104. DR. Rabeya Nashrin.");
            printf("\n\n\t\t* Consultant: Obs & Gynae.\n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 8:50 - 10:30 PM");
        }
        if( doctorData[i]==105)
        {
            printf("\n\n\n\t105. PROF. DR. Prodoyot Kumar Bhattacharyya.");
            printf("\n\n\t\t* Chief Consultant: Medicine.\n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 8:50 - 10:30 PM.");
        }
        if( doctorData[i]==106)
        {
            printf("\n\n\t106. DR. Soumitra Roy.");
            printf("\n\n\t\t* Consultant: Medicine.\n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 8:50 - 10:30 PM.");
        }
        if( doctorData[i]==107)
        {
            printf("\n\n\t107. DR. Shahed Ahmad.");
            printf("\n\n\t\t* Consultant: Medicine.\n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 8:50 - 10:30 PM.");
        }
        if( doctorData[i]==108)
        {
            printf("\n\n\t108. DR. Bilkis Sultana.");
            printf("\n\n\t\t* Consultant: Medicine.\n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 8:50 - 10:30 PM.");
        }
        if( doctorData[i]==109)
        {
            printf("\n\n\t109. DR. Sheikh Muhammad Munir Hussain.");

            printf("\n\n\t\t* Degrees: MBBS, FCCM, PGFEM, FICM, FD, FID, BCCPM. \n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 8:50 - 10:30 PM.");
        }
        if( doctorData[i]==110)
        {
            printf("\n\n\t110. DR. Sharmin Jahan Quader.");
            printf("\n\n\t\t* Degrees: MBBS, FCCM, PGFEM, FICM, FD, FID, BCCPM. \n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 8:50 - 10:30 PM.");
        }
        if( doctorData[i]==111)
        {
            printf("\n\n\t111. DR. Syed Ohidul Haq (Ratul).");
            printf("\n\n\t\t* Degrees: MBBS, FCCM, PGFEM, FICM, FD, FID, BCCPM.\n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 8:50 - 10:30 PM.");
        }
        if( doctorData[i]==112)
        {
            printf("\n\n\t112.DR. AQM Abdul Hye..");
            printf("\n\n\t\t* Consultant: Pathology, Histo & Cystopathology.\n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 8:50 - 10:30 PM.");
        }
        if( doctorData[i]==113)
        {
            printf("\n\n\t113.  DR. MD Zakir Hossain.");
            printf("\n\n\t\t* Consultant: Pathology, Histo & Cystopathology.\n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 8:50 - 10:30 PM");
        }
        if( doctorData[i]==114)
        {
            printf("\n\n\t114. DR. Shantanu Das.");
            printf("\n\n\t\t* Consultant: Pathology, Histo & Cystopathology.\n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 8:50 - 10:30 PM");
        }

        if( doctorData[i]==115)
        {
            printf("\n\n\t115. DR. Abdul Kadir.");
            printf("\n\n\t\t* Junior Consultant: Anesthesiology, Al Haramain Hospital Pvt. Ltd..\n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 8:50 - 10:30 PM");
        }
        if( doctorData[i]==116)
        {
            printf("\n\n\t116. DR. MD Helal Uddin.");
            printf("\n\n\t\t* Junior Consultant: Anesthesiology, Al Haramain Hospital Pvt. Ltd..\n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 8:50 - 10:30 PM");
        }
        if( doctorData[i]==117)
        {
            printf("\n\n\t117. DR. Abedah Begum Fazlur.");
            printf("\n\n\t\t* Junior Consultant: Anesthesiology, Al Haramain Hospital Pvt. Ltd..\n\n\t\t* Contact Number: +8801931-225555.");
            printf("\n\n\t\t* Visiting Time : 8:50 - 10:30 PM");
        }
        if( doctorData[i]== 201)
        {
            printf("\n\n\t201. DR. Shirshir R Chakraborti.");
            printf("\n\n\t\t*  Consultant:  Medicine.");
            printf("\n\n\t\t* Time: SAT-SUN(5.00.PM - 10.00 PM.\n\n\t\t* Phone: +8801719374087(For Ticket).\n\n\t\t* From (9.00PM - 9.30PM).");
        }
        if( doctorData[i]== 202)
        {
            printf("\n\n\t202. DR. Ranjon Roy..");

            printf("\n\n\t\t*  Consultant:  Medicine.");
            printf("\n\n\t\t* Time: SAT-SUN(5.00.PM - 10.00 PM.\n\n\t\t* Phone: +8801719374087(For Ticket).\n\n\t\t   From (9.00PM - 9.30PM).");

        }
        if( doctorData[i]== 203)
        {
            printf("\n\n\t203. DR. Z.H.M. NaZmul Alam..");

            printf("\n\n\t\t*  Consultant:  Medicine.");
            printf("\n\n\t\t* Time: SAT-SUN(5.00.PM - 10.00 PM.\n\t\t\t* Phone: +8801719374087(For Ticket).\n\n\t\t   From (9.00PM - 9.30PM).");

        }
        if( doctorData[i]== 204)
        {
            printf("\n\n\t204. DR. Goutam Talukder.");

            printf("\n\n\t\t*  Consultant:  Medicine.");
            printf("\n\n\t\t* Time: SAT-SUN(5.00.PM - 10.00 PM.\n\n\t\t* Phone: +8801719374087(For Ticket).\n\n\t\t   From (9.00PM - 9.30PM).");

        }
        if( doctorData[i]== 205)
        {
            printf("\n\n\t205. DR. Muhammad Hezbullah (Jeebon).");
            printf("\n\n\t\t*  Consultant:  Medicine.");
            printf("\n\n\t\t* Time: SAT-SUN(5.00.PM - 10.00 PM.\n\n\t\t* Phone: +8801719374087(For Ticket).\n\n\t\t   From (9.00PM - 9.30PM).");
        }

        if( doctorData[i]== 206)
        {
            printf("\n\n\t206. Prof. DR. M. A. Julkifl.");
            printf("\n\n\t\t* Consultant:  Urology.");
            printf("\n\n\t\t* Time: Once in a two months.\n\n\t\t* Thursday & Friday.\n\n\t\t* Phone: +8801715084078,  0821-725227 (For Ticket).");
        }
        if( doctorData[i]== 207)
        {
            printf("\n\n\t207. Prof. DR. Promofe Ranjan Singh.");
            printf("\n\n\t\t* Consultant:  Urology");
            printf("\n\n\t\t* Time: Once in a two months.\n\n\t\t* Thursday & Friday.\n\n\t\t* Phone: +8801715084078,  0821-725227 (For Ticket).");
        }
        if( doctorData[i]== 208)
        {
            printf("\n\n\t208. Prof. DR. Pranashish Shaha.\n\n");
            printf("\n\n\t\t* Consultant:  Urology\n");
            printf("\n\n\t\t* Time: Once in a two months.\n\n\t\t* Thursday & Friday.\n\n\t\t* Phone: +8801715084078,  0821-725227 (For Ticket).");
        }
        if( doctorData[i]== 209)
        {
            printf("\n\n\t209. DR. MD. Shafiqul Islam (Leon).\n\n");
            printf("\n\n\t\t* Consultant:  Urology\n");
            printf("\n\n\t\t* Time: Once in a two months.\n\n\t\t* Thursday & Friday.\n\n\t\t* Phone: +8801715084078,  0821-725227 (For Ticket).");
        }
        if( doctorData[i]== 210)
        {
            printf("\n\n\t210. DR. MD Faruque Uddin.");
            printf("\n\n\t\t* Consultant:  Cardiology");
            printf("\n\n\t\t* Time: SAT_SUN (4.00.PM - 8.00 PM).\n\n\t\t* Phone: +8801711462103 (For Ticket).");
        }
        if( doctorData[i]== 211)
        {
            printf("\n\n\t211. DR. G M Mohiuddin.");
            printf("\n\n\t\t* Consultant:  Cardiology");
            printf("\n\n\t\t* Time: SAT_SUN (4.00.PM - 8.00 PM).\n\n\t\t* Phone: +8801711462103 (For Ticket).");
        }
        if( doctorData[i]== 212)
        {
            printf("\n\n\t212. DR. Hironmoy Das.");
            printf("\n\n\t\t* Consultant:  Cardiology");
            printf("\n\n\t\t* Time: SAT_SUN (4.00.PM - 8.00 PM).\n\n\t\t* Phone: +8801711462103 (For Ticket).");

        }
        if( doctorData[i]== 213)
        {
            printf("\n\n\t213. DR. Farzana Tazin.");
            printf("\n\n\t\t* Consultant:  Cardiology");
            printf("\n\n\t\t* Time: SAT_SUN (4.00.PM - 8.00 PM).\n\n\t\t* Phone: +8801711462103 (For Ticket).");
        }
        if( doctorData[i]== 214)
        {
            printf("\n\n\t214.  DR. Homaira Begum.");
            printf("\n\n\t\t* Consultant:  Gynae and Obs");
            printf("\n\n\t\t* Time: 5.30.PM - 8.30 PM.\n\n\t\t* Friday closed.\n\n\t\t* Phone: +8801766353211 (Ticket).");
        }
        if( doctorData[i]== 215)
        {
            printf("\n\n\t215. DR. Maya Rani Das.");
            printf("\n\n\t\t* Consultant:  Gynae and Obs");
            printf("\n\n\t\t* Time: 5.30.PM - 8.30 PM.\n\n\t\t* Friday closed.\n\n\t\t* Phone: +8801766353211 (Ticket).");
        }
        if( doctorData[i]== 216)
        {
            printf("\n\n\t216. DR. Fahmina Akther Fahmi.");
            printf("\n\n\t\t* Consultant:  Gynae and Obs");
            printf("\n\n\t\t* Time: 5.30.PM - 8.30 PM.\n\n\t\t* Friday closed.\n\n\t\t* Phone: +8801766353211 (Ticket).");
        }
        if( doctorData[i]== 217)
        {
            printf("\n\n\t217. DR. Nasima Akther.");
            printf("\n\n\t\t* Consultant:  Gynae and Obs");
            printf("\n\n\t\t* Time: 5.30.PM - 8.30 PM.\n\n\t\t* Friday closed.\n\n\t\t* Phone: +8801766353211 (Ticket).");
        }
        if( doctorData[i]== 218)
        {
            printf("\n\n\t218. DR. Arpita Bhattacharjee.");
            printf("\n\t\t\t* Consultant:  Gynae and Obs");
            printf("\n\t\t\t* Time: 5.30.PM - 8.30 PM.\n\n\t\t* Friday closed.\n\n\t\t* Phone: +8801766353211 (Ticket).");
        }
        if( doctorData[i]== 219)
        {
            printf("\n\n\t219. DR. Mukul Ranjan Gush.");
            printf("\n\n\t\t* Consultant: Orthopedics");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.\n\n\t\t* Phone: +8801716333521 (Ticket).");
        }
        if( doctorData[i]== 220)
        {
            printf("\n\n\t220.  DR. Sumon Mollik.");
            printf("\n\n\t\t* Consultant: Orthopedics");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.\n\n\t\t* Phone: +8801716333521 (Ticket).");
        }
        if( doctorData[i]== 221)
        {
            printf("\n\n\t221. DR. Alamgir Adil Samdany.");
            printf("\n\n\t\t* Consultant: Orthopedics");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.\n\n\t\t* Phone: +8801716333521 (Ticket).");
        }
        if( doctorData[i]== 222)
        {
            printf("\n\n\t222. DR. Kishuar Parveen..");
            printf("\n\n\t\t* Consultant:  Obs & Gynae Specialist & Surgeon.\n\n\t\t* Contact for Serial: +8801716-681929.");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.\n\n\t\t* Phone: +8801716333521 (Ticket).");
        }
        if( doctorData[i]== 223)
        {
            printf("\n\n\t223. DR. Ishrat Jahan Karim.");
            printf("\n\n\t\t* Consultant:  Obs & Gynae Specialist & Surgeon.\n\n\t\t* Contact for Serial: +8801716-681929.");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.\n\n\t\t* Phone: +8801716333521 (Ticket).");
        }
        if( doctorData[i]== 224)
        {
            printf("\n\n\t224. DR. Fahim Ara Khanom (Jenny).");
            printf("\n\n\t\t* Consultant:  Obs & Gynae Specialist & Surgeon.\n\n\t\t* Contact for Serial: +8801716-681929.");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.\n\n\t\t* Phone: +8801716333521 (Ticket).");
        }
        if( doctorData[i]== 225)
        {
            printf("\n\n\t225. DR. Fatematuz Zuhora.");
            printf("\n\n\t\t* Consultant:  Obs & Gynae Specialist & Surgeon.\n\n\t\t* Contact for Serial: +8801716-681929.");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.\n\n\t\t* Phone: +8801716333521 (Ticket).");
        }
        if( doctorData[i]== 226)
        {
            printf("\n\n\t226. DR. Mohammad Abdul Quadir.\n\n");
            printf("\n\n\t\t* Consultant:  General, Colorectal & Laparoscopic Surgeon.\n\n\t\t* Contact for Serial: +8801716-681929.");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.\n\n\t\t* Contact for Serial: +8801792-515959 (Call within 9 AM - 10 AM).");
        }
        if( doctorData[i]== 227)
        {
            printf("\n\n\t227. DR. Showkat Uddin Ahmed.");
            printf("\n\n\t\t* Consultant:  General, Colorectal & Laparoscopic Surgeon.\n\n\t\t* Contact for Serial: +8801716-681929.");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.\n\n\t\t* Contact for Serial: +8801792-515959 (Call within 9 AM - 10 AM).");
        }
        if( doctorData[i]== 228)
        {

            printf("\n\n\t228. DR. Tapos Singha.\n\n");
            printf("\n\n\t\t* Consultant:  General, Colorectal & Laparoscopic Surgeon.\n\n\t\t* Contact for Serial: +8801716-681929.\n");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.\n\n\t\t* Contact for Serial: +8801792-515959 (Call within 9 AM - 10 AM).\n");
        }
        if( doctorData[i]== 229)
        {
            printf("\n\n\t229. DR. Akhlaq Ahmed.");
            printf("\n\n\t\t* Consultant:   Child Specialist.\n ");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.\n\n\t\t* Contact for Serial: +8801782-158382.");
        }
        if( doctorData[i]== 230)
        {
            printf("\n\n\t230. DR. MD Muazzem Hossain (Harun).");
            printf("\n\n\t\t* Consultant:   Child Specialist. ");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.\n\n\t\t* Contact for Serial: +8801782-158382.");
        }
        if( doctorData[i]== 231)
        {
            printf("\n\n\t*231. DR. Naznin Akther.");
            printf("\n\n\t\t* Consultant:   Child Specialist.");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.\n\n\t\t* Contact for Serial: +8801782-158382.");
        }
        if( doctorData[i]== 232)
        {
            printf("\n\n\t232. DR. Alamgir Chowdhary.");
            printf("\n\n\t\t* Consultant:   Kidney Diseases & Medicine Specialist.");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.\n\n\t\t* Contact for Serial: +8801782-158382.");
        }
        if( doctorData[i]== 233)
        {
            printf("\n\n\t233. DR. Nazmus Saqib.");
            printf("\n\n\t\t* Consultant:   Kidney Diseases & Medicine Specialist.");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.\n\n\t\t* Contact for Serial: +8801782-158382.");
        }
        if( doctorData[i]== 301)
        {
            printf("\n\n\t301.  DR. Muhammad Ruhul Kabir.");
            printf("\n\n\t\t* Consultant:   Medicine Specialist.");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801763-990044.");
        }
        if( doctorData[i]== 302)
        {

            printf("\n\n\t302.  DR. Wilson Deb.");
            printf("\n\n\t\t* Consultant:   Medicine Specialist.");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801763-990044.");
        }
        if( doctorData[i]== 303)
        {
            printf("\n\n\t303.  DR. Muhammad Ashfakul Islam Sharfin.");
            printf("\n\n\t\t* Consultant:   Medicine Specialist.");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801763-990044.");
        }
        if( doctorData[i]== 304)
        {
            printf("\n\n\t304.  DR. MD. Enayet Hussain.");
            printf("\n\n\t\t* Consultant:   Medicine Specialist.");
            printf("\n\n\t\t* Time: 5.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801763-990044.");
        }
        if( doctorData[i]== 305)
        {
            printf("\n\n\t305.  Professor. DR. Ayesha Rahim.");
            printf("\n\n\t\t* Consultant:  Gynae Specialist & Surgeon.");
            printf("\n\n\t\t* Time: 5.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801763-990044.");
        }
        if( doctorData[i]== 306)
        {
            printf("\n\n\t306.  DR. Nujhat Sharmin Urmi.");
            printf("\n\n\t\t* Consultant:  Gynae Specialist & Surgeon.");
            printf("\n\n\t\t* Time: 5.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801763-990044.");
        }
        if( doctorData[i]== 307)
        {
            printf("\n\n\t307.  DR. Saiqa Rehnuma.");
            printf("\n\n\t\t* Consultant:  Gynae Specialist & Surgeon.");
            printf("\n\n\t\t* Time: 5.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801763-990044.");
        }
        if( doctorData[i]== 308)
        {
            printf("\n\n\t*308.  Professor. DR. Nadira Begum.");
            printf("\n\n\t\t* Consultant:  Gynae Specialist & Surgeon.");
            printf("\n\n\t\t* Time: 5.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801763-990044.");
        }
        if( doctorData[i]== 309)
        {
            printf("\n\n\t309.  Professor. DR. Saiyad Musa M. A. Qaiyum.");
            printf("\n\n\t\t* Consultant:  Pediate Specialist.");
            printf("\n\n\t\t* Time: 5.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801763-990044.");
        }
        if( doctorData[i]== 310)
        {
            printf("\n\n\t*310.  DR. MD. Zakariya Hussain.");
            printf("\n\n\t\t* Consultant:  Pediate Specialist.");
            printf("\n\n\t\t* Time: 5.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801763-990044.");
        }
        if( doctorData[i]== 311)
        {
            printf("\n\n\t311.  DR. MD. Emdadur Rahman.");
            printf("\n\n\t\t* Consultant:  Pediate Specialist.");
            printf("\n\n\t\t* Time: 5.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801763-990044.");
        }
        if( doctorData[i]== 312)
        {
            printf("\n\n\t312.  DR. Sekh Abdullah Muhammad.");
            printf("\n\n\t\t* Consultant:  Dentist.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801763-990044.");
        }
        if( doctorData[i]== 313)
        {
            printf("\n\n\t313.  DR. Anamika Paul.");
            printf("\n\n\t\t* Consultant:  Dentist.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801763-990044.");
        }
        if( doctorData[i]== 314)
        {
            printf("\n\n\t314.  DR. SaleH Ahmed Tahlil.");
            printf("\n\n\t\t* Consultant:  Cardiology.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801763-990044.");
        }
        if( doctorData[i]== 315)
        {
            printf("\n\n\t315.  DR. Sulaiman Ahmed.");
            printf("\n\n\t\t* Consultant:  Cardiology.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801763-990044.");
        }
        if( doctorData[i]== 401)
        {
            printf("\n\n\t401.  DR. Farzana Hamid.");
            printf("\n\n\t\t* Consultant:  Pediatric Medicine Specialist.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 402)
        {
            printf("\n\n\t402.  DR. M.A. Hai.");
            printf("\n\n\t\t* Consultant:  Pediatric Medicine Specialist.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 403)
        {
            printf("\n\n\t403. DR. Rashedul Haque.");
            printf("\n\n\t\t* Consultant:  Pediatric Medicine Specialist.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 404)
        {
            printf("\n\n\t404.  Prof. DR. Syed Moosa.");
            printf("\n\n\t\t* Consultant:  Pediatric Medicine Specialist.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 405)
        {
            printf("\n\n\t405. DR. Mohammad Shohel.");
            printf("\n\n\t\t* Consultant:  Pediatric Medicine Specialist.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 406)
        {
            printf("\n\n\t406. PROF. DR. Faizul Islam Chowdhury.");
            printf("\n\n\t\t* Consultant:  Medicine Specialist.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 407)
        {
            printf("\n\n\t407.  DR. Iqbal Ahmed Chowdhury.");
            printf("\n\n\t\t* Consultant:  Medicine Specialist.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 408)
        {
            printf("\n\n\t408. DR. MD Ashfaqul Islam.");
            printf("\n\n\t\t* Consultant:  Medicine Specialist.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 409)
        {
            printf("\n\n\t409.  DR. MD Tanvir Muhit.");
            printf("\n\n\t\t* Consultant:  Medicine Specialist.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 410)
        {
            printf("\n\n\t410. DR. Muhammad Moswood Ghoni.");
            printf("\n\n\t\t* Consultant:  Medicine Specialist.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 411)
        {
            printf("\n\n\t411.  DR. Albabur Rahmam.");
            printf("\n\n\t\t* Consultant:  Dermatology Specialist.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 412)
        {
            printf("\n\n\t412.  DR. Saleh Ahmed Shahe.");
            printf("\n\n\t\t* Consultant:  Dermatology Specialist.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 413)
        {
            printf("\n\n\t413. Prof. DR. Syed Mamoon.");
            printf("\n\n\t\t* Consultant: Dermatology Specialist.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 414)
        {
            printf("\n\n\t414. DR. Farhana.");
            printf("\n\n\t\t* Consultant: Dermatology Specialist.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 415)
        {
            printf("\n\n\t415.  DR. Jahir Ahmed. ");
            printf("\n\n\t\t* Consultant:  General Surgery.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 416)
        {
            printf("\n\n\t416.  Prof. DR. Rafiqus Salehin.");
            printf("\n\n\t\t* Consultant:  General Surgery.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 417)
        {
            printf("\n\n\t417.  Prof. DR. Syed Shamsuddin Ahmed.");
            printf("\n\n\t\t* Consultant:  General Surgery.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 418)
        {
            printf("\n\n\t418.  DR. Ahmed Moksud Hasan Lasker.");
            printf("\n\n\t\t* Consultant:  General Surgery.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 419)
        {
            printf("\n\n\t419. DR. Chowdhury Fayzur Rob (Zubayer).");
            printf("\n\n\t\t* Consultant: ORTHOPEDIC SURGERY");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 420)
        {
            printf("\n\n\t420. DR. M.A. Hannan.");
            printf("\n\n\t\t* Consultant: ORTHOPEDIC SURGERY.");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 421)
        {
            printf("\n\n\t421.  DR. Syed Abdur Subhan (Rahin).");
            printf("\n\n\t\t* Consultant: ORTHOPEDIC SURGERY");
            printf("\n\n\t\t* Time: 4.00.PM - 8.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +09636300300.");
        }
        if( doctorData[i]== 501)
        {
            printf("\n\n\t501. PROF. DR. Khokan Kanti Das.");
            printf("\n\n\t\t* Consultant: Medicine.");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +01714300300.");
        }
        if( doctorData[i]== 502)
        {
            printf("\n\n\t502. DR. A.S.M. Jahed .");
            printf("\n\n\t\t* Consultant: Medicine ");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +01714300300.");
        }
        if( doctorData[i]== 503)
        {
            printf("\n\n\t503.  DR. Mohammad Mainuddin Chowdhury.");
            printf("\n\n\t\t* Consultant: Medicine");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +01714300300.");
        }
        if( doctorData[i]== 504)
        {
            printf("\n\n\t504.  DR. Mohammad Rezaul Karim..");
            printf("\n\n\t\t* Consultant: Medicine");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +01714300300.");
        }
        if( doctorData[i]== 505)
        {
            printf("\n\n\t505.  DR. Saifuddin Mahmud.");
            printf("\n\n\t\t* Consultant: Medicine");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +01714300300.");
        }
        if( doctorData[i]== 506)
        {
            printf("\n\n\t506. DR. Istitak Ahmed.");
            printf("\n\n\t\t* Consultant: Medicine ");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +01714300300.");
        }
        if( doctorData[i]== 507)
        {
            printf("\n\n\t507. DR. Wakil Ahmed.");
            printf("\n\n\t\t* Consultant: ORTHOPEDICS");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 508)
        {
            printf("\n\n\t508. DR. A.T.M. Rezaul Karim.");
            printf("\n\n\t\t* Consultant: ORTHOPEDICS");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 509)
        {
            printf("\n\n\t509. DR. Mahamudur Rahman.");
            printf("\n\n\t\t* Consultant: ORTHOPEDICS");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 510)
        {
            printf("\n\n\t510.  DR. Muhammad Abdul Awal.");
            printf("\n\n\t\t* Consultant: ORTHOPEDICS");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 511)
        {
            printf("\n\n\t511.  DR. Mohammad Mohsin.");
            printf("\n\n\t\t* Consultant: ORTHOPEDICS");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 512)
        {
            printf("\n\n\t512. DR. Mohammad Mamun.");
            printf("\n\n\t\t* Consultant: ORTHOPEDICS");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 513)
        {
            printf("\n\n\t513. DR. H.S. Hobarak Hossen.");
            printf("\n\n\t\t* Consultant:  UROLOGY");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 514)
        {
            printf("\n\n\t514.  DR. Mohammad Omar Faruk.");
            printf("\n\n\t\t* Consultant:  UROLOGY\n");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 515)
        {
            printf("\n\n\t515.  DR. Nasir Uddin.");
            printf("\n\n\t\t* Consultant:  UROLOGY");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 516)
        {
            printf("\n\n\t516.  DR. Sayed Mohammad Shamseer Nahid.");
            printf("\n\n\t\t* Consultant:  SURGERY");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 517)
        {
            printf("\n\n\t517. DR. S.M. SARWAR.");
            printf("\n\n\t\t* Consultant:  SURGERY");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 518)
        {
            printf("\n\n\t518.  DR. Najma Mahbub.");
            printf("\n\n\t\t* Consultant:  SURGERY");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 519)
        {
            printf("\n\n\t519.  DR. S. M. Ishtiaque Ali (Rubel).");
            printf("\n\n\t\t* Consultant:  SURGERY");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 520)
        {
            printf("\n\n\t520.  DR. Tutul Talukder.");
            printf("\n\n\t\t* Consultant:  SURGERY");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 521)
        {
            printf("\n\n\t521.  DR. Morshed.");
            printf("\n\n\t\t* Consultant:  SURGERY");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 522)
        {
            printf("\n\n\t522. PROF A.M.M. Etheshamul Haque.");
            printf("\n\n\t\t* Consultant:  KIDNEY");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 523)
        {
            printf("\n\n\t523.  DR. Rafiqul Hasan.");
            printf("\n\n\t\t* Consultant:  KIDNEY");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 524)
        {
            printf("\n\n\t524. DR. Susmita Biswas.");
            printf("\n\n\t\t* Consultant:  KIDNEY");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 525)
        {
            printf("\n\n\t525. DR. Merina Atjumand.");
            printf("\n\n\t\t* Consultant:  KIDNEY.");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 526)
        {
            printf("\n\n\t526. Prof. DR. Monsurul Alam.");
            printf("\n\n\t\t* Consultant:   SKIN");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 527)
        {
            printf("\n\n\t527.  DR. MD. mZiaur Rahman Bhuiyan.");
            printf("\n\n\t\t* Consultant:   SKIN");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673");
        }
        if( doctorData[i]== 528)
        {
            printf("\n\n\t528.  DR. Shamin Ara Sizu.");
            printf("\n\n\t\t* Consultant:   SKIN");
            printf("\n\n\t\t* Time: 6.00.PM - 11.00 PM.");
            printf("\n\n\t\t* Contact for Serial: +8801834522673\n");
        }

    }
}



///----------------part 2



void Part2()
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

    char medicin[] = " M E D I C I N E   CE NT ER ";
    char mprice[] = "1. Medicine Price ";
    char purcha[] = "2. Purchase History";
    char ex[] = "3. E X I T";
    char bac[] ="'0' for Back: ";
    char opti[] = "Choice Option : ";

    printf("\n\n\t\t\t\t ");
    for( int x=0; medicin[x]!='\0'; x++)
    {
        printf("%c",medicin[x]);

        Sleep(10);
    }
    printf("\n\n\t\t\t\t ");
    for( int x=0; mprice[x]!='\0'; x++)
    {
        printf("%c",mprice[x]);

        Sleep(10);
    }
    printf("\n\n\t\t\t\t ");
    for( int x=0; purcha[x]!='\0'; x++)
    {
        printf("%c",purcha[x]);

        Sleep(10);
    }

     printf("\n\n\t\t\t\t ");
    for( int x=0; ex[x]!='\0'; x++)
    {
        printf("%c",ex[x]);
        Sleep(40);
    }
    printf("\n\n\t\t\t\t ");
    for( int x=0; bac[x]!='\0'; x++)
    {
        printf("%c",bac[x]);

        Sleep(10);
    }
    printf("\n\n\t\t\t\t ");
    for( int x=0; opti[x]!='\0'; x++)
    {
        printf("%c",opti[x]);

        Sleep(10);
    }

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
        case 3:
        {
            system("cls");
            gotoxy(0,7);

            x_exit();
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);

            subMainMenu();
        }

        default:
            printf("\n\t\tWrong Choice\n");
        }
        back3();//printf("\n\n\t\t\t'0' for Back : ");
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
        //printf("\n\t'0' For Back : \n");
        back3();
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

    printf("\t\t\t2. Payment.");
    // printf("\n\n\t\t\t'0' for Back. ");
    back3();
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

            payment();
            break;
        }
        case 0:
        {
            system("cls");

            gotoxy(0,7);
            printingMedicine();
            all_medicine_field();
            break;
        }
        default:
            printf("\n\t\t\tWrong Choice\n");
        }
        back3();//printf("\n\t\t\t'0' for Back : ");
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
    back1();//printf("\n\t\t'0' for Back: ");
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
    printf("\t\t\t2. Payment.");
    back3();// printf("\n\n\t\t\t'0' for Back. ");
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
            azrithmoycin();
            break;
        }
        case 2:
        {

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
        back1();//printf("\n\t\t'0' for Back.");
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
    back1();//printf("\n\t\t'0' for Back : ");
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
    printf("\t\t\t2. Payment.");
    back3();//printf("\n\n\t\t\t'0' for Back. ");
    printf("\n\n\t\t\tChoice Option :  ");
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
    back1();// printf("\n\t\t'0' for Back. ");
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

    printf("\t\t\t2. Payment.");
    back3();// printf("\n\n\t\t\t'0' for Back. ");
    printf("\n\n\t\t\tChoice Option :  ");



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
        back1();
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
    back1();// printf("\n\t\t'0' for Back .");
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
    printf("\n\n\n\t\t\t1. C O U G H \n\n");

    printf("\t\t\t2. Payment.");
    back3();// printf("\n\n\t\t\t'0' for Back. ");
    printf("\n\n\t\t\tChoice Option :  ");


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
        back1();// printf("\n\t\t'0' for Back . ");
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
    back1();// printf("\n\t\t'0' for back: ");
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
    printf("\t\t\t2. Payment.");
    back3();//  printf("\n\n\t\t\t'0' for Back. ");
    printf("\n\n\t\t\tChoice Option :  ");

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
        back1();//  printf("\n\t\t'0' for Back .");
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
    back1();//  printf("\n\t\t'0' for Back . ");
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

    printf("\t\t\t2. Payment.");
    back3();//  printf("\n\n\t\t\t'0' for Back. ");
    printf("\n\n\t\t\tChoice Option :  ");


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
        back1();// printf("\n\t\t'0' for Back . ");
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
    back1();// printf("\n\t\t\t'0' for Back . ");
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


    printf("\t\t\t2. Payment.");
    back3();//  printf("\n\n\t\t\t'0' for Back. ");
    printf("\n\n\t\t\tChoice Option :  ");

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
        back1(); //printf("\n\t\t'0' for Back .");
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
    back1();// printf("\n\t\t\t'0' for Back . ");
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

    printf("\t\t\t2. Payment.");
    back3();// printf("\n\n\t\t\t'0' for Back. ");
    printf("\n\n\t\t\tChoice Option :  ");

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
        back1();// printf("\n\t\t'0' for Back .");
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
    back1();//printf("\n\t\t'0' for Back . ");
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


    printf("\n\n\n\t\t\t1. O M E P R A Z O L\n\n");

    printf("\t\t\t2. Payment.");
    back3();//printf("\n\n\t\t\t'0' for Back. ");
    printf("\n\n\t\t\tChoice Option :  ");

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
        back1();//  printf("\n\t\t'0' for Back .");
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
    back1();// printf("\n\t\t'0' for Back . ");
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

    printf("\t\t\t2. Payment.");
    back3();//   printf("\n\n\t\t\t'0' for Back. ");
    printf("\n\n\t\t\tChoice Option :  ");

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
        back1();//printf("\n\t\t'0' for Back .");
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
    back1();//  printf("\n\t\t'0' for Back .");
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

    printf("\n\n\n\t\t\t 1. T H Y R O I D\n\n");

    printf("\t\t\t2. Payment.");
    back3();//  printf("\n\n\t\t\t'0' for Back. ");
    printf("\n\n\t\t\tChoice Option :  ");

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
        back1();//   printf("\n\t\t'0' for Back .");
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
    back1();// printf("\n\t\t'0' for Back .");
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

    printf("\t\t\t2. Payment.");
    back3();// printf("\n\n\t\t\t'0' for Back. ");
    printf("\n\n\t\t\tChoice Option :  ");
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
        back1();//      printf("\n\t\t'0' for Back .");
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
    back1();//  printf("\n\t\t'0' for Back . ");
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


void al_vitamin()
{

    // gotoxy(0,7);
    int haramain,i;

    printf("\n\n\n\t\t\t1. V I T A M I N \n\n");

    printf("\t\t\t2. Payment.");
    back3();//   printf("\n\n\t\t\t'0' for Back. ");
    printf("\n\n\t\t\tChoice Option :  ");


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
        back1();//    printf("\n\t\t'0' for Back .");
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
    back1();//   printf("\n\t\t'0' for Back . ");
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
        back3();//   printf("\n\t\t\t'0' for Back: ");
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
            printf("\n\n\t\tPlease wait a While.........");
            printf("\n\n");
            printf("\t\t");
            for(int i = 0 ; i <= 30 ; i++)
            {
                Sleep(13);
                //printf("%c",120);
                printf("%c",219);
            }

            printf("\n\tEnter Your B-kas Number : ");
            int bkas;
            scanf("%d",&bkas);

            printf("\n\tEnter your Pin Number : ");
            int pin;
            scanf("%d",&pin);
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
        calculation();
        printf("\n\n\n");
        more();
        printf("\n\n\n");
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


//-----


void Part3()
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
    printf("\t\t\t4. Exit\n");
    printf("\n\t\t\tChoice Option : ");
    for(i=1; scanf("%d",&data)>0; i++)
    {
        switch(data)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            testName();
            // printingMedicine();
            all_test_field();
            break;
        }
        case 2:
        {

            system("cls");
            gotoxy(0,7);
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

            system("cls");
            gotoxy(0,7);
            location();
            break;
        }
        case 4:
        {

            system("cls");
            gotoxy(0,7);
            x_exit();//location();
            break;
        }
        case 0:
            system("cls");
            gotoxy(0,7);
            // Part3();
            subMainMenu();
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
            system("cls");
            gotoxy(0,7);
            //hamatology();
            al_hamatology();
            break;
        }
        case 2:
        {
            system("cls");
            gotoxy(0,7);
            //biochemistry();
            al_biochemistry();
            break;
        }
        case 3:
        {
            system("cls");
            gotoxy(0,7);
            //serology();
            al_serology();
            break;
        }
        case 4:
        {
            system("cls");
            gotoxy(0,7);
            //urine();
            al_urine();
            break;
        }
        case 5:
        {
            system("cls");
            gotoxy(0,7);
            //stool();
            al_stool();
            break;
        }
        case 6:
        {
            system("cls");
            gotoxy(0,7);
            //microbiology();
            al_microbiology();
            break;
        }
        case 7:
        {
            system("cls");
            gotoxy(0,7);
            //cytopathology();
            al_cytopathology();
            break;
        }
        case 8:
        {
            system("cls");
            gotoxy(0,7);
            //hormones();
            al_hormones();
            break;
        }
        case 9:
        {
            system("cls");
            gotoxy(0,7);
            //ultrasonogram();
            al_ultrasonogram();
            break;
        }
        case 10:
        {
            system("cls");
            gotoxy(0,7);
            //xray();
            al_xray();
            break;
        }
        case 0:
        {
            system("cls");
            gotoxy(0,7);
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
    printf("\t\t\t'0' for Back\n\n");

    printf("\n\t\t\tChoice Option : ");

    for(i=1; scanf("%d", &data)>0; i++)
    {
        switch(data)
        {
        case 1:
        {
            system("cls");
            gotoxy(0,7);
            // printing();
            hamatology();
            break;
        }

        case 0:
        {
            system("cls");
            gotoxy(0,7);
            testName();
            all_test_field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice \n");
        }

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
                system("cls");
                gotoxy(0,7);
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
            system("cls");
            gotoxy(0,7);
            // printing();
            biochemistry();
            break;
        }

        case 0:
        {
            system("cls");
            gotoxy(0,7);
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
                system("cls");
                gotoxy(0,7);
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
            system("cls");
            gotoxy(0,7);
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
        system("cls");
        gotoxy(0,7);
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
                system("cls");
                gotoxy(0,7);
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
        system("cls");
        gotoxy(0,7);
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
                system("cls");
                gotoxy(0,7);
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
            system("cls");
            gotoxy(0,7);
            // printing();
            stool();
            break;
        }

        case 0:
        {
            system("cls");
            gotoxy(0,7);
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
            system("cls");
            gotoxy(0,7);
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
            system("cls");
            gotoxy(0,7);
            // printing();
            cytopathology();
            break;
        }

        case 0:
        {
            system("cls");
            gotoxy(0,7);
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
            system("cls");
            gotoxy(0,7);
            // printing();
            hormones();
            break;
        }

        case 0:
        {
            system("cls");
            gotoxy(0,7);
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
            system("cls");
            gotoxy(0,7);
            // printing();
            ultrasonogram();
            break;
        }

        case 0:
        {
            system("cls");
            gotoxy(0,7);
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
            system("cls");
            gotoxy(0,7);
            // printing();
            xray();
            break;
        }

        case 0:
        {
            system("cls");
            gotoxy(0,7);
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
            all_testName();
            // location();
        }
        else
        {
            printf("\n\n\twrong input\n\n\n");
        }
        printf("\n\n\t\t\t'0' for Back : ");
        //printf("\n\t\tCheck for another: ");
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
            printf("\n\t\t\t%d\tBiochemistry\t\t\t%.3f\n", TestCode[i],  TestPrice[i]);
            CT += TestPrice[i];
        }
        if( TestCode[i] >= 21 &&  TestCode[i] <= 30)
        {
            printf("\n\n\t%d\tSerology\t\t\t%.3f\n", TestCode[i],  TestPrice[i]);
            CT += TestPrice[i];
        }
        if( TestCode[i] >= 31 &&  TestCode[i] <= 36)
        {
            printf("\n\t\t\t%d\tUrine\t\t\t%.3f\n", TestCode[i],  TestPrice[i]);
            CT += TestPrice[i];
        }
        if( TestCode[i] >= 37 &&  TestCode[i] <= 40)
        {
            printf("\n\n\t%d\tStool\t\t\t%.3f\n", TestCode[i],  TestPrice[i]);
            CT += TestPrice[i];
        }
        if( TestCode[i] >= 41 &&  TestCode[i] <= 49)
        {
            printf("\n\t\t\t%d\tMicrobiology\t\t\t%.3f\n", TestCode[i],  TestPrice[i]);
            CT += TestPrice[i];
        }
        if( TestCode[i] >= 50 &&  TestCode[i] <= 52)
        {
            printf("\n\t\t\t%d\tCrytopatholgy\t\t\t%.3f\n", TestCode[i],  TestPrice[i]);
            CT += TestPrice[i];
        }
        if( TestCode[i] >= 53 &&  TestCode[i] <= 61)
        {
            printf("\n\t\t\t%d\tHormone\t\t\t%.3f\n", TestCode[i],  TestPrice[i]);
            CT += TestPrice[i];
        }
        if( TestCode[i] >= 62 &&  TestCode[i] <= 69)
        {
            printf("\n\t\t\t%d\tUltrasonogram\t\t\t%.3f\n", TestCode[i],  TestPrice[i]);
            CT += TestPrice[i];
        }
        if( TestCode[i] >= 70 &&  TestCode[i] <= 78)
        {
            printf("\n\t\t\t%d\tX-ray\t\t\t%.3f\n", TestCode[i],  TestPrice[i]);
            CT += TestPrice[i];
        }

    }
    printf("\n\n\n\t\t\tTOtoal Test Code : %.3f\n\n",CT);

}






///part part part part -----0444444444444444
//back1 call baki

void Part4()
{
    part4_menu();
}
void part4_menu()
{
    gotoxy(0,7);
    int amb,i;


    char ambu[] = "A M B U L A N C E     S E R V I C E  ";


    char hosHom[] = "1. Hospital to Home";


    char Homhos[] = "2. Home to Hospital";
    char ex[] = "3. E X I T";
    char opti[] = "Choice Option :  ";

    printf("\n\n\t\t\t\t");
    for( int x=0; ambu[x]!='\0'; x++)
    {
        printf("%c",ambu[x]);
        Sleep(40);
    }
    printf("\n\n\t\t\t\t");
    for( int x=0; hosHom[x]!='\0'; x++)
    {
        printf("%c",hosHom[x]);
        Sleep(40);
    }
    printf("\n\n\t\t\t\t");
    for( int x=0; Homhos[x]!='\0'; x++)
    {
        printf("%c",Homhos[x]);
        Sleep(40);
    }
    printf("\n\n\t\t\t\t");
    for( int x=0; ex[x]!='\0'; x++)
    {
        printf("%c",ex[x]);
        Sleep(40);
    }
    back();
    printf("\n\n\t\t\t\t");
    for( int x=0; opti[x]!='\0'; x++)
    {
        printf("%c",opti[x]);
        Sleep(40);
    }


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
        else if(amb == 3)
        {
            system("cls");
            gotoxy(0,6);
            x_exit(); //subMainMenu();
        }
        else if(amb == 0)
        {
            system("cls");
            gotoxy(0,6);
            subMainMenu();
        }
        else
        {
            printf("\n\n\t\t\t\t");
            printf("Worng Choice !!!");

        }
        back();

    }
}
void Hos_to_home()
{
    int hos;
    printf("\t\tSelect The Hospital name you want to get your service\n\n\n\n\t\t1. Popular Medical Centre and Hospital\n\n\t\t2. Ibn Sina Hospital\n\n\t\t3. Oasis Hospital\n\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\n\t\t5. Trust Medical Hospital\n\n\t\t6. Al Haramain Hospital\n\n\t\t7. Park View Medical College Hospital\n\n\t\t8. Womens Medical College and Hospital\n\n\t\t9. Noorjahan Hospital\n\n\t\t10. Jalalabad Ragib-Rabeya Medical College and Hospital\n\n\t\t11. Mount Adora Hospital\n\n");
    // printf("\n\t\t'0' for Back . ");
    back1();
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
        back1();
        // printf("\n\t\t\t'0' for Back : ");
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
            printf("\n\n\n");
            back1();

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
                back1();
                // printf("\n\n\t\t'0' For Back :  ");

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
            printf("\n\n\n");
            back1();
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
                back1();

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
            printf("\n\n\n");
            back1();
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
                back1();

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

            printf("\n\n\n");
            back1();
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
                back1();

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
            printf("\n\n\n");
            back1();
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
                back1();

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
            printf("\n\n\n");
            back1();
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
                back1();

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
            printf("\n\n\n");
            back1();
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
                back1();

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
            printf("\n\n\n");
            back1();
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
                back1();

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
            printf("\n\n\n");
            back1();
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
                back1();

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
            printf("\n\n");
            back1();
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
                back1();

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
        back();
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
            printf("\n\n");
            back1();
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
                back1();

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
            back1();
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
                back1();

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
            printf("\n\n\n");
            back1();
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
                back1();

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
            printf("\n\n\n");
            back1();
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
                back1();

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
            printf("\n\n\n");
            back1();
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
                back1();

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
            printf("\n\n\n");
            back1();
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
                back1();

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
            back1();
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
                back1();

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
            printf("\n\n\n");
            back1();
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
                back1();
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
        back();
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
            printf("\n\n\n");
            back1();
            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
            else
            {
                printf("\n\t\t\tWrong Choice\n");

                back1();

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
            printf("\n\n\n");
            back1();
            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
            else
            {
                printf("\n\t\t\tWrong Choice\n");

                back1();

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
            printf("\n\n\n");
            back1();
            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
            else
            {
                printf("\n\t\t\tWrong Choice\n");

                back1();

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
            printf("\n\n\n");
            back1();
            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
            else
            {
                printf("\n\t\t\tWrong Choice\n");

                back1();
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

            printf("\n\n\n");
            back1();
            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
            else
            {
                printf("\n\t\t\tWrong Choice\n");

                back1();

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
            printf("\n\n\n");
            back1();
            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
            else
            {
                printf("\n\t\t\tWrong Choice\n");

                back1();
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
            printf("\n\n\n");
            back1();
            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
            else
            {
                printf("\n\t\t\tWrong Choice\n");

                back1();

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
            printf("\n\n\n");
            back1();
            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
            else
            {
                printf("\n\t\t\tWrong Choice\n");

                back1();

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
            printf("\n\n\n");
            back1();
            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
            else
            {
                printf("\n\t\t\tWrong Choice\n");

                back1();

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
            printf("\n\n\n");
            back1();
            int r;
            scanf("%d", &r);
            if(r == 0)
            {
                system("cls");
                Oasis_Hospital1();
            }
            else
            {
                printf("\n\t\t\tWrong Choice\n");

                back1();

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
        back();
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


            printf("\n\n\n");
            back1();
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

                back1();

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


            printf("\n\n\n");
            back1();
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

                back1();

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

            printf("\n\n\n");
            back1();
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

                back1();

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


            printf("\n\n\n");
            back1();
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

                back1();

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

            printf("\n\n\n");
            back1();
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

                back1();

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


            printf("\n\n\n");
            back1();
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

                back1();

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


            printf("\n\n\n");
            back1();
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

                back1();

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

            printf("\n\n\n");
            back1();
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
                printf("\n\n\n");
                back1();

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


            printf("\n\n\n");
            back1();
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

                back1();

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

            printf("\n\n\n");
            back1();
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

                back1();
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
        back();
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
            printf("\n\t\tThe transfer cost will be: %d", a*v);


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
        back();
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
        //printf("\n\n\t\t'0' For Back : ");
        back();
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
        back(); //printf("\n\n\t\t'0' For Back : ");
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

        back();//    printf("\n\n\t\t'0' For Back : ");
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
            part4_menu();

        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
        }

        back(); //printf("\n\n\t\t'0' For Back : ");
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
            home_to_hos();

        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
        }
        back();//  printf("\n\n\t\t'0' For Back : ");
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
            home_to_hos();

        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
        }
        back();// printf("\n\n\t\t'0' For Back : ");
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
            home_to_hos();

        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
        }
        back();// printf("\n\n\t\t'0' For Back : ");
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
            home_to_hos();

        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
        }

        back();// printf("\n\n\t\t'0' For Back : ");
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
            printf("\n\t\tDistance from Kajolshah to Trust Medical Hospital = 0.4 k.m.\n\n\t\tAmbulance service won't be needed since the distance is below 1 k.m.\n\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
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
            home_to_hos();

        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
        }

        back();//printf("\n\n\t\t'0' For Back : ");
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
            home_to_hos();

        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
        }
        back();//printf("\n\n\t\t'0' For Back : ");
    }
}

void noyasharak()
{
    system("cls");
    gotoxy(0,7);
    int ns;
    printf("\n\t\tWhich hospital you want to go?\n\n\t\t1. Popular Medical Centre and Hospital\n\n\t\t2. Ibn Sina Hospital\n\n\t\t3. Oasis Hospital\n\n\t\t4. Sylhet MAG Osmani Medical Hospital\n\n\t\t5. Trust Medical Hospital\n\n\t\t6. Al Haramine Hospital\n\n\t\t7. Park View Medical College Hospital\n\n\t\t8. Womens Medical College and Hospital\n\n\t\t9. Noorjahan Hospital\n\n\t\t10. Jalalabad Ragib Rabeya Medical College and Hospital\n\n\t\t11. Mount Adora Hospital\n\n");
    //scanf("%d", &ns);
    printf("\t\t'0' For Back.\n\n\t\tChoice Option: ");
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
            printf("\n\t\tDistance from Nayasarak to Ibn Sina Hospital = 0.7 k.m.\n\n\t\tAmbulance service won't be needed since the distance is below 1 k.m.\n\n\t\tPatient can use other transport such as Rickshaw or CNG.\n");
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
            printf("\n\t\tDistance from Nayasarak to Mount Adora Hospital = 4.7 k.m.\n\n\t\tTransport cost will be: 60 Tk\n");
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
            home_to_hos();

        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
        }

        back();// printf("\n\n\t\t'0' For Back : ");
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
            printf("\n\t\tDistance from Tilagor to Popular Medical Centre and Hospital= 4 k.m.\n\n\t\tTransport cost will be: 50 Tk\n");
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
            printf("\n\t\tDistance from Tilagor to Ibn Sina Hospital = 4 k.m.\n\n\t\tTransport cost will be: 50 Tk\n");
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
            printf("\n\t\tDistance from Tilagor to Oasis Hospital = 4 k.m\n\n\t\tTransport cost will be: 50 Tk\n");
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
            printf("\n\t\tDistance from Tilagor to Sylhet MAG Osmani Medical Hospital = 6.1 k.m.\n\n\t\tTransport cost will be: 80 Tk\n");
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
            printf("\n\t\tDistance from Tilagor to Trust Medical Hospital = 6 k.m.\n\n\t\tTransport cost will be: 80 Tk\n");
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
            printf("\n\t\tDistance from Tilagor to Al Haramain Hospital = 3.9 k.m.\n\n\t\tTransport cost will be: 50 Tk\n");
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
            printf("\n\t\tDistance from Tilagor to Park View Medical College Hospital = 4.8 k.m.\n\n\t\tTransport cost will be: 65 Tk\n");
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
            printf("\n\t\tDistance from Tilagor to Womens Medical College and Hospital = 5 k.m.\n\n\t\tTransport cost will be: 65 Tk\n");
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
            printf("\n\t\tDistance from Tilagor to Noorjahan Hospital = 5 k.m.\n\n\t\tTransport cost will be: 65 Tk\n");
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
            printf("\n\t\tDistance from Tilagor to Jalalabad Ragib Rabeya Medical College and Hospital = 8.5 k.m.\n\n\t\tTransport cost will be: 110 Tk\n");
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
            printf("\n\t\tDistance from Tilagor to Mount Adora Hospital = 7.5 k.m.\n\n\t\tTransport cost will be: 95 Tk\n");
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
            home_to_hos();

        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
        }

        back();//printf("\n\n\t\t'0' For Back : ");
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
            printf("\n\t\tDistance from Dakshin Surma to Popular Medical Centre and Hospital= 16.7 k.m.\n\n\t\tTransport cost will be: 250 Tk\n");
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
            printf("\n\t\tDistance from Dakshin Surma to Ibn Sina Hospital = 17 k.m.\n\n\t\tTransport cost will be: 260 Tk\n");
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
            printf("\n\t\tDistance from Dakshin Surma to Oasis Hospital = 17.7 k.m.\n\n\t\tTransport cost will be: 265 Tk\n");
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
            printf("\n\t\tDistance from Dakshin Surma to Sylhet MAG Osmani Medical Hospital = 19.1 k.m.\n\n\t\tTransport cost will be: 285 Tk\n");
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
            printf("\n\t\tDistance from Dakshin Surma to Trust Medical Hospital = 19.5 k.m.\n\n\t\tTransport cost will be: 285 Tk\n");
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
            printf("\n\t\tDistance from Dakshin Surma to Al Haramain Hospital = 16.6 k.m.\n\n\t\tTransport cost will be: 250 Tk\n");
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
            printf("\n\t\tDistance from Dakshin Surma to Park View Medical College Hospital = 17.6 k.m.\n\n\t\tTransport cost will be: 265 Tk\n");
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
            printf("\n\t\tDistance from Dakshin Surma to Womens Medical College and Hospital = 18.5 k.m.\n\n\t\tTransport cost will be: 275 Tk\n");
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
            printf("\n\t\tDistance from Dakshin Surma to Noorjahan Hospital = 18.5 k.m.\n\n\t\tTransport cost will be: 275 Tk\n");
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
            printf("\n\t\tDistance from Dakshin Surma to Jalalabad Ragib Rabeya Medical College and Hospital = 23.5 k.m.\n\n\t\tTransport cost will be: 320 Tk\n");
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
            printf("\n\t\tDistance from Dakshin Surma to Mount Adora Hospital = 22.4 k.m.\n\n\t\tTransport cost will be: 310 Tk\n");
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
            home_to_hos();

        }
        else
        {
            printf("\n\t\t\tWrong Choice\n");
        }
        back();//printf("\n\n\t\t'0' For Back : ");
    }
}

void back()
{
    printf("\n\n\t\t\t\t");
    char back[] = "'0' for Back : ";
    for( int x=0; back[x]!='\0'; x++)
    {
        printf("%c",back[x]);
        Sleep(40);
    }
}
void back1()
{
    printf("\n\n\t\t");
    char back[] = "'0' for Back : ";
    for( int x=0; back[x]!='\0'; x++)
    {
        printf("%c",back[x]);
        Sleep(40);
    }
}
void back3()
{
    printf("\n\n\t\t\t");
    char back[] = "'0' for Back : ";
    for( int x=0; back[x]!='\0'; x++)
    {
        printf("%c",back[x]);
        Sleep(40);
    }
}


void about_work()
{
    FILE *file;
    char ch;
    file = fopen("About_work.txt","r");
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
void gotoxy(int x,int y)   //  use  cordinate
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void x_exit()
{

    char out [] = " Thank You  For Your Visiting ";
    char out1 [] = "Stay Safe Stay Positive : [c] Team Coder's Strikes ";
     char mess [] = " Special Thank you our beloved Teacher Md. Saidur Rahman Kohinoor sir ans Nasim Brother  ";
    printf("\n\n\t\t\t");
    for( int x=0; out[x]!='\0'; x++)
    {
        printf("%c",out[x]);
        Sleep(40);
    }
     printf("\n\n\n\t\t\t");
    for( int x=0; mess[x]!='\0'; x++)
    {
        printf("%c",mess[x]);
        Sleep(40);
    }
     printf("\n\n\t\t\t");
    for( int x=0; out1[x]!='\0'; x++)
    {
        printf("%c",out1[x]);
        Sleep(40);
    }
     printf("\n\n\t\t\t");

     exit(1);
}
