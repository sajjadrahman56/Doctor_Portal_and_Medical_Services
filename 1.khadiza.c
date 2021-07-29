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

int doctorData[1000],dr = 0 ;
int main()
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
//use for consol design nothing else  32 - 50
    int x;
    double y;
    char name1[]=    "\n\n\t\t\t1. H O S P I T A L  L I S T \n";
    char name3[] =  "\n\n\t\t\t2.  T I C K E T   H I T O R Y  \n";
    char name2[]=    "\n\n\t\t\tChoice Option : ";
    printf("\n\n");
    for(x=0; name1[x]!=NULL; x++)
    {
        printf("%c",name1[x]);
        for(y=0; y<=7777777; y++)
        {
        }
    }
    for(x=0; name3[x]!=NULL; x++)
    {
        printf("%c",name3[x]);
        for(y=0; y<=7777777; y++)
        {
        }
    }
    for(x=0; name2[x]!=NULL; x++)
    {
        printf("%c",name2[x]);
        for(y=0; y<=7777777; y++)
        {
        }
    }
    getch();
    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls"); gotoxy(0,7);
            medicalName();
            allMedicalFeild();
            break;
        }
        case 2:
        {
            if(dr == 0)
            {
                printf("\n\n\t\tNo ticket Purchase ,Yet !");

            }
            else
            {
                system("cls");
                printf("\n\n\n");
                printf("\n\n\t\t\tTotoal Ticket Buy : %d",dr);
                // for(int i =  0 ; i < dr ; i++)
                // {
                //    printf("%4d",doctorCode[i]);
                //}
                doctorList();

            }

            printf("\n\t\t\t'0' for Back . ");
            int t ;
            scanf("%d",&t);
            if(t == 0)
            {
                system("cls");
                //gotoxy(0,7);
                allMedical();
            }
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

    printf("\n\t\t\t'0' for Back.");
    printf("\n\t\t\tChoice Option  = ");
    for(i=1; scanf("%d", &alharamain_field)>0; i++)
    {
        switch(alharamain_field)
        {
        case 1:
        {
            system("cls"); gotoxy(0,7);
            al_haramain_medical();
            break;
        }
        case 2:
        {
            system("cls"); gotoxy(0,7);
            popular_medical();
            break;
        }
        case 3:
        {
            system("cls"); gotoxy(0,7);
            Mount_Adora_medical();
            break;
        }
        case 4:
        {
            system("cls"); gotoxy(0,7);
            Oasis_medical();
            break;
        }
        case 5:
        {
            system("cls"); gotoxy(0,7);
            IBN_SINA_medical();
            break;
        }
        case 6:
        {
            system("cls"); gotoxy(0,7);
            ParkView_medical();
            break;
        }
        case 0:
        {
            system("cls"); gotoxy(0,7);
            allMedical();
            break;
        }
        default:
            printf("\n\t\t\tWrong Choice.\n");
        }
        printf("\n\t\t\t'0' for Back.");
        printf("\n\n\t\t\tCheck for another: ");
    }
}
void al_haramain_medical()
{
    int haramain,i;

    printf("\n\n\t\t1. A L    H A R A M A I N \n\n");
    printf("\n\t\t'0' for Back.");
   // printf("\n\n\t\tPress 1 for Go : ");
    printf("\n\n\t\tChoice Option : ");

    for(i=1; scanf("%d", &haramain)>0; i++)
    {
        switch(haramain)
        {
        case 1:
        {
            system("cls"); gotoxy(0,7);
            printing();
            al_haramain_medical_Field();
            break;
        }
        case 0:
        {
            system("cls"); gotoxy(0,7);
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

    printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &alharamain_field)>0; i++)
    {
        switch(alharamain_field)
        {
        case 1:
        {
            gotoxy(0,7); GYNAE();
            break;
        }
        case 2:
        {
             gotoxy(0,7);medicine();
            break;
        }
        case 3:
        {
             gotoxy(0,7);CRITICAL();
            break;
        }
        case 4:
        {
             gotoxy(0,7);PATHOLOGY();
            break;
        }
        case 5:
        {
             gotoxy(0,7);ANESTHEIOLOGY();
            break;
        }
        case 0:
        {
            system("cls"); gotoxy(0,7);
            al_haramain_medical();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back.");
        printf("\n\n\t\tCheck for another: ");
    }
}
void  GYNAEReturn()
{
    int a ;
    printf("\n\t\t'0' for Back.");
    scanf("%d",&a);
    if(a==0)
        GYNAE();
    else
    {
        printf("\n\t\t'0' for Back.");
        scanf("%d",&a);
        if(a==0)
            GYNAE();
    }
}
void GYNAE()
{
    system("cls"); gotoxy(0,7);
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
    printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. PROF. DR. Shamsun Nahar Begum (Hena).\n\n");
            dr_hena();
            GYNAEReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. Lubna Yesmin.\n\n");
            dr_Lubna();
            GYNAEReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Dipu Das.\n\n");
            dr_dipu();
            GYNAEReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. DR. Rabeya Nashrin.\n\n");
            dr_rabeya();
            GYNAEReturn();
            break;
        }
        case 5:
        {
            system("cls"); gotoxy(0,7);
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
                system("cls"); gotoxy(0,7);
                printing();
                //al_haramain_medical_Field();
                GYNAE();
            }
            break;
        }
        case 0:
        {
            system("cls"); gotoxy(0,7);
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
    printf("\n\t\t'0' for Back.");
    scanf("%d",&a);
    if(a==0)
        medicine();
    else
    {
        printf("\n\t\t'0' for Back.");
        scanf("%d",&a);
        if(a==0)
            medicine();
    }
}
void medicine()
{
    system("cls");gotoxy(0,7);
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
    printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. PROF. DR. Prodoyot Kumar Bhattacharyya.\n\n");
            dr_kumar();
            medicineReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. Soumitra Roy.\n\n");
            dr_soumitra();
            medicineReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Shahed Ahmad.\n\n");
            dr_shahed();
            medicineReturn();

            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. DR. Bilkis Sultana.\n\n");
            dr_bilkis();
            medicineReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);
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
            printf("\n\t\t'0' for back .");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");gotoxy(0,7);
                printing();
                //al_haramain_medical_Field();
                medicine();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
            printing();
            al_haramain_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back.");
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
    printf("\n\t\t'0' for Back.");
    scanf("%d",&a);
    if(a==0)
        CRITICAL();
    else
    {
        printf("\n\t\t'0' for Back.");
        scanf("%d",&a);
        if(a==0)
            CRITICAL();
    }
}
void CRITICAL()
{
    system("cls");gotoxy(0,7);
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
    printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Sheikh Muhammad Munir Hussain.\n\n");
            dr_munir();
            CRITICALReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. Sharmin Jahan Quader.\n\n");
            dr_sharmin();
            CRITICALReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Syed Ohidul Haq (Ratul).\n\n");
            dr_ohi();
            CRITICALReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t109. DR. Sheikh Muhammad Munir Hussain.");
            printf("\n\n\t\t110. DR. Sharmin Jahan Quader.");
            printf("\n\n\t\t111. DR. Syed Ohidul Haq (Ratul).");


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
                system("cls");gotoxy(0,7);
                printing();
                //al_haramain_medical_Field();
                CRITICAL();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
            printing();
            al_haramain_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back.");
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
    printf("\n\t\t'0' for Back.");
    scanf("%d",&a);
    if(a==0)
        PATHOLOGY();
    else
    {
        printf("\n\t\t'0' for Back.");
        scanf("%d",&a);
        if(a==0)
            PATHOLOGY();
    }
}
void PATHOLOGY()
{
    system("cls");gotoxy(0,7);
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
    printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. AQM Abdul Hye.\n\n");
            dr_aqm();
            PATHOLOGYReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. MD Zakir Hossain.\n\n");
            dr_zakir();
            PATHOLOGYReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Shantanu Das.\n\n");
            dr_das();
            PATHOLOGYReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
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
        printf("\n\t\t'0' for Back.");
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
    printf("\n\t\t'0' for Back.");
    scanf("%d",&a);
    if(a==0)
        ANESTHEIOLOGY();
    else
    {
        printf("\n\t\t0' for Back.");
        scanf("%d",&a);
        if(a==0)
            ANESTHEIOLOGY();
    }
}
void ANESTHEIOLOGY()
{
    system("cls");gotoxy(0,7);
    printf("\n\n\t\t\tA N E S T H E I O L O G Y.\n\n");
    printf("\t\t1. DR. Abdul Kadir.\n\n");
    printf("\t\t2. DR. MD Helal Uddin.\n\n");
    printf("\t\t3. DR. Abedah Begum Fazlur.\n\n");
    int POP_field,i;
    printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Abdul Kadir.\n\n");
            dr_kadir();
            ANESTHEIOLOGYReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. MD Helal Uddin.\n\n");
            dr_helal();
            ANESTHEIOLOGYReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Abedah Begum Fazlur.\n\n");
            dr_abeda();
            ANESTHEIOLOGYReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
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
                system("cls");gotoxy(0,7);
                printing();
                //al_haramain_medical_Field();
                ANESTHEIOLOGY();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
            printing();
            al_haramain_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back.");
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
    printf("\n\t\t'0' for back. ");
    printf("\n\n\t\tChoice Option : ");
    for(i=1; scanf("%d", &POPULAR)>0; i++)
    {
        switch(POPULAR)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            popular_printing();
            popular_medical_Field();
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
    printf("\n\t\t'0' for Back. ");
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
        printf("\n\t\t'0' for back.");
        printf("\n\n\t\tCheck for another: ");
    }
}
//previous step go
void popular_medicineReturn()
{
    int a ;
    printf("\n\t\t'0' for back.");
    scanf("%d",&a);
    if(a==0)
        popular_medicine();
    else
    {
        printf("\n\t\t'0' for back.");
        scanf("%d",&a);
        if(a==0)
            popular_medicine();
    }
}
void popular_medicine()
{
    system("cls");gotoxy(0,7);
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
    printf("\n\t\t'0' for back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Shirshir R Chakraborti.\n\n");
            dr_shishir();
            popular_medicineReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. Ranjon Roy.\n\n");
            dr_ronjon();
            popular_medicineReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Z.H.M. NaZmul Alam.\n\n");
            dr_najmul();
            popular_medicineReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. DR. Goutam Talukder.\n\n");
            dr_goutam();
            popular_medicineReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t5. DR. Muhammad Hezbullah (Jeebon).\n\n");
            dr_hezbullah();
            popular_medicineReturn();
            break;
        }
        case 6:
        {
            system("cls");gotoxy(0,7);
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
            printf("\n\t\t'0' for back .");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");gotoxy(0,7);
                printing();
                popular_medicine();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
            popular_printing();  //back to previous step
            popular_medical_Field(); ////back to previous step
            break;
        }
        default:
            printf("\n\\ttWrong Choice.\n");
        }
        printf("\n\t\t'0' for back.");
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
    printf("\n\t\t'0' for back.");
    scanf("%d",&a);
    if(a==0)
        popular_urology();
    else
    {
        printf("\n\t\t'0' for Back.");
        scanf("%d",&a);
        if(a==0)
            popular_urology();
    }
}
void popular_urology()
{
    system("cls");gotoxy(0,7);
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
    printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. Prof. DR. M. A. Julkifl.\n\n");
            dr_julkifl();
            popular_urologyReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. Prof. DR. Promofe Ranjan Singh.\n\n");
            dr_promode();
            popular_urologyReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. Prof. DR. Pranashish Shaha.\n\n");
            dr_shaha();
            popular_urologyReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. DR. MD. Shafiqul Islam (Leon).\n\n");
            dr_shafiq();
            popular_urologyReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);
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
            printf("\n\t\t'0' for back .");

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
        printf("\n\t\t'0' for Back.");
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
    printf("\n\t\t'0' for Back.");
    scanf("%d",&a);
    if(a==0)
        popular_cardiology();
    else
    {
        printf("\n\tEnter '0' for back.");
        scanf("%d",&a);
        if(a==0)
            popular_cardiology();
    }
}
void popular_cardiology()
{
    system("cls");gotoxy(0,7);
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
    printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. MD Faruque Uddin.\n\n");
            dr_faruk();

            popular_cardiologyReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. G M Mohiuddin.\n\n");
            dr_mohiuddin();
            popular_cardiologyReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Hironmoy Das.\n\n");
            dr_hironmoy();

            popular_cardiologyReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. DR. Farzana Tazin.\n\n");
            dr_farzana();
            popular_cardiologyReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);
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
            printf("\n\t'0' for Back .");

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
            system("cls");gotoxy(0,7);
            popular_printing();  //back to previous step
            popular_medical_Field(); ////back to previous step
            break;
        }

        default:
            printf("\n\t\tWrong Choice\n\n");

        }
        printf("\n\t\t'0' for Back.");
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
    printf("\n\t\t'0' for Back.");
    scanf("%d",&a);
    if(a==0)
        popular_gynae();
    else
    {
        printf("\n\t\t'0' for Back.");
        scanf("%d",&a);
        if(a==0)
            popular_gynae();
    }
}
void popular_gynae()
{
    system("cls");gotoxy(0,7);
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
    printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Homaira Begum.\n\n");
            dr_homaira();
            popular_cardiologyReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. Maya Rani Das.\n\n");
            dr_maya();
            popular_cardiologyReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Fahmina Akther Fahmi.\n\n");
            dr_fahmina();
            popular_cardiologyReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. DR. Nasima Akther.\n\n");
            dr_nasima();
            popular_cardiologyReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t5. DR. Arpita Bhattacharjee.\n\n");
            dr_arpita();
            popular_cardiologyReturn();
            break;
        }
        case 6:
        {
            system("cls");gotoxy(0,7);
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
            printf("\n\t\t'0' for Back .");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");gotoxy(0,7);
                printing();
                popular_gynae();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
            popular_printing();  //back to previous step
            popular_medical_Field(); ////back to previous step
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n\n");

        }
        printf("\n\t\t'0' for Back.");
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
    printf("\n\t\t'0' for Back.");
    scanf("%d",&a);
    if(a== 0)
        popular_orthopeadic();
    else
    {
        printf("\n\t\t'0' for Back.");
        scanf("%d",&a);
        if(a==0)
            popular_orthopeadic();
    }
}
void popular_orthopeadic()
{
    system("cls");gotoxy(0,7);
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
    printf("\n\t\t'0' for Back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Mukul Ranjan Gush.\n\n");
            dr_mukul();
            popular_cardiologyReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. Sumon Mollik.\n\n");
            dr_sumon();
            popular_cardiologyReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Alamgir Adil Samdany.\n\n");
            dr_adil();
            popular_cardiologyReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
        printf("\n\n\t\t219. DR. Mukul Ranjan Gush.\n\n");
            printf("\t\t220. DR. Sumon Mollik.\n\n");
            printf("\t\t221. DR. Alamgir Adil Samdany.\n\n");

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
                system("cls");gotoxy(0,7);
                printing();
                popular_orthopeadic();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
            popular_printing();  //back to previous step
            popular_medical_Field(); ////back to previous step
            break;
        }
        default:
            printf("\n\t\tWrong Choice\n");
        }
        printf("\n\t\t'0' for Back.");
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
   gotoxy(0,7); int adora,i;

    printf("\n\n\t\t1. M O U N T  A D O R A\n\n");
    printf("\n\t\t'0' for back.");
    printf("\n\n\t\tChoice Option : ");
    for(i=1; scanf("%d", &adora)>0; i++)
    {
        switch(adora)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            mount__printing();
            Mount_adora_medical_Field();
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
    printf("\n\t\t'0' for Back.");
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
            system("cls");gotoxy(0,7);
            Mount_Adora_medical();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back.");
        printf("\n\n\t\tCheck for another: ");
    }
}
void mount__Gynae_obsReturn()
{
    int a ;
    printf("\n\t\t'0' for Back.");
    scanf("%d",&a);
    if(a==0)
        mount__Gynae_obs();
    else
    {
        printf("\n\t\t'0' for back.");
        scanf("%d",&a);
        if(a==0)
            mount__Gynae_obs();
    }
}
void mount__Gynae_obs()
{
    system("cls");gotoxy(0,7);
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
    printf("\n\t\t'0' for back.");
    printf("\n\t\tChoice Option  = ");
    for(i=1; scanf("%d", &POP_field)>0; i++)
    {
        switch(POP_field)
        {
        case 1:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Kishuar Parveen.\n\n");
            dr_parveen();
            mount__Gynae_obsReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\t\t2. DR. Ishrat Jahan Karim.\n\n");
            dr_ishrat();
            mount__Gynae_obsReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\t\t3. DR. Fahim Ara Khanom (Jenny).\n\n");
            dr_jenny();
            mount__Gynae_obsReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\t\t4. DR. Fatematuz Zuhora.\n\n");
            dr_fatema();
            mount__Gynae_obsReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);
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
            printf("\n\t\t'0' for Back .");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");gotoxy(0,7);
                printing();
                mount__Gynae_obs();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
            mount__printing();
            Mount_adora_medical_Field();
            break;
        }
        default:
            printf("\n\t\tWrong Choice.\n");
        }
        printf("\n\t\t'0' for Back.");
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
    system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Mohammad Abdul Quadir.\n\n");
            dr_quadir();
            mount__Surgery_obsReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. Showkat Uddin Ahmed.\n\n");
            dr_showkat();
            mount__Surgery_obsReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Tapos Singha.\n\n");
            dr_tapos();
            mount__Surgery_obsReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
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
                system("cls");gotoxy(0,7);
                printing();
                mount__Surgery();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
    system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Akhlaq Ahmed.\n\n");
            dr_akhlaq();
            mount__PAEDIATRICS_Return();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. MD Muazzem Hossain (Harun).\n\n");
            dr_muazzen();
            mount__PAEDIATRICS_Return();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\t\t3. DR. Naznin Akther.\n\n");
            dr_naznin();
            mount__PAEDIATRICS_Return();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
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
                system("cls");gotoxy(0,7);
                printing();
                mount__PAEDIATRICS();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
    system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Alamgir Chowdhary.\n\n");
            dr_alamgir();
            mount__Nephrology_Return();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. Nazmus Saqib.\n\n");
            dr_nazmus();
            mount__Nephrology_Return();
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            OOasis_printing();
            oasis_medical_Field();
            break;
            case 0:
            {
                system("cls");gotoxy(0,7);
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
            OOasis_Heart();gotoxy(0,7);
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
    system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Muhammad Ruhul Kabir.\n\n");
            dr_ruhul();

            OOasis_medicineReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. Wilson Deb.\n\n");
            dr_wilson();
            OOasis_medicineReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Muhammad Ashfakul Islam Sharfin.\n\n");
            dr_ashfak();
            OOasis_medicineReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. DR. MD. Enayet Hussain.\n\n");
            dr_enayet();
            OOasis_medicineReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);
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
                system("cls");gotoxy(0,7);
                printing();
                OOasis_medicine();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
    system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. Professor. DR. Ayesha Rahim.\n\n");
            dr_ayesha();
            OOasis_Gynae_obsReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. Nujhat Sharmin Urmi.\n\n");
            dr_nujhat();
            OOasis_Gynae_obsReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Saiqa Rehnuma.\n\n");
            dr_saiqa();
            OOasis_Gynae_obsReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. Professor. DR. Nadira Begum.\n\n");
            dr_nadira();
            OOasis_Gynae_obsReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);
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
                system("cls");gotoxy(0,7);
                printing();
                OOasis_Gynae_obs();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
    system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. Professor. DR. Saiyad Musa M. A. Qaiyum.\n\n");
            dr_musa();
            OOasis_PAEDIATRICSReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. MD. Zakariya Hussain.\n\n");
            dr_zakaria();
            OOasis_PAEDIATRICSReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. MD. Emdadur Rahman.\n\n");
            dr_emdad();
            OOasis_PAEDIATRICSReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
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
                system("cls");gotoxy(0,7);
                printing();
                OOasis_PAEDIATRICS();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
    system("cls");gotoxy(0,7);
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
            system("cls"); gotoxy(0,7);
            printf("\n\n\t\t1. DR. Sekh Abdullah Muhammad.\n\n");
            dr_sekh();
            OOasis_DENTISTReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. Anamika Paul.\n\n");
            dr_anamila();
            OOasis_DENTISTReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
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
                system("cls");gotoxy(0,7);
                printing();
                OOasis_DENTIST();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
    system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. SaleH Ahmed Tahlil.\n\n");
            dr_saleh();
            OOasis_HeartReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. Sulaiman Ahmed.\n\n");
            dr_sulaiman();
            OOasis_HeartReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            ibnsina_printing();
            IBN_SINA_medical_Field();
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
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
    system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Farzana Hamid.\n\n");
            dr_farzana1();
            ibnsina_paediatric_medicineReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. M.A. Hai.\n\n");
            dr_hai();
            ibnsina_paediatric_medicineReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Rashedul Haque.\n\n");
            dr_rashed();
            ibnsina_paediatric_medicineReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. Prof. DR. Syed Moosa.\n\n");
            dr_moosa();
            ibnsina_paediatric_medicineReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t5. DR. Mohammad Shohel.\n\n");
            dr_shohel();
            ibnsina_paediatric_medicineReturn();
            break;
        }
        case 6:
        {
            system("cls");gotoxy(0,7);
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
                system("cls");gotoxy(0,7);
                printing();
                ibnsina_paediatric_medicine();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
    system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. PROF. DR. Faizul Islam Chowdhury.\n\n");
            dr_faizul();
            ibnsina_medicineReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. Iqbal Ahmed Chowdhury.\n\n");
            dr_iqbal();
            ibnsina_medicineReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. MD Ashfaqul Islam.\n\n");
            dr_ashfaq();
            ibnsina_medicineReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. DR. MD Tanvir Muhit.\n\n");
            dr_muhit();
            ibnsina_medicineReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t5. DR. Muhammad Moswood Ghoni.\n\n");
            dr_moswood();
            ibnsina_medicineReturn();
            break;
        }
        case 6:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t406. PROF. DR. Faizul Islam Chowdhury.");
            printf("\n\n\t\t407. DR. Iqbal Ahmed Chowdhury.");
            printf("\n\n\t\t408. DR. MD Ashfaqul Islam. ");
            printf("\n\n\t\t409. DR. MD Tanvir Muhit.");
            printf("\n\n\t\t410. DR. Muhammad Moswood Ghoni.");

            int code;gotoxy(0,7);
            printf("\n\t\tChoice Code Number : ");
            scanf("%d",&code);
            doctorData[dr] = code;
            dr++;

            int num;
            printf("\n\t'0' for Back. ");

            scanf("%d",&num);
            if(num == 0)
            {
                system("cls");gotoxy(0,7);
                printing();
                ibnsina_medicine();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Albabur Rahmam\n\n");
            dr_rahman();
            ibnsina_dermatologyReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. Saleh Ahmed Shahe.\n\n");
            dr_saleh11();
            ibnsina_dermatologyReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. Prof. DR. Syed Mamoon.\n\n");
            dr_mamun();
            ibnsina_dermatologyReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. DR. Farhana.\n\n");
            dr_farhana();
            ibnsina_dermatologyReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);
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
                system("cls");gotoxy(0,7);
                printing();
                ibnsina_dermatology();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
    system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Jahir Ahmed.\n\n");
            dr_jahir();
            ibnsina_general_surgeryReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. Prof. DR. Rafiqus Salehin.\n\n");
            dr_rafiq();
            ibnsina_general_surgeryReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. Prof. DR. Syed Shamsuddin Ahmed.\n\n");
            dr_shamsuddin();
            ibnsina_general_surgeryReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. DR. Ahmed Moksud Hasan Lasker.\n\n");
            dr_moksud();
            ibnsina_general_surgeryReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);
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
                system("cls");gotoxy(0,7);
                printing();
                ibnsina_general_surgery();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
    system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Chowdhury Fayzur Rob (Zubayer).\n\n");
            dr_foyzur();
            ibnsina_orthopeadic_surgeryReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. M.A. Hannan.\n\n");
            dr_hannan();
            ibnsina_orthopeadic_surgeryReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Syed Abdur Subhan (Rahin).\n\n");
            dr_subhan();
            ibnsina_orthopeadic_surgeryReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
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
                system("cls");gotoxy(0,7);
                printing();
                ibnsina_orthopeadic_surgery();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            parkview_printing();
            parkview_medical_Field();
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
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
    system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. PROF. DR. Khokan Kanti Das.\n\n");
            dr_khokan();
            parkview_medicineReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. A.S.M. Jahed.\n\n");
            dr_jahed();
            parkview_medicineReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Mohammad Mainuddin Chowdhury.\n\n");
            dr_mainuddin();
            parkview_medicineReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. DR. Mohammad Rezaul Karim.\n\n");
            dr_rezaul();
            parkview_medicineReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t5. DR. Saifuddin Mahmud.\n\n");
            dr_saifuddin();
            parkview_medicineReturn();
            break;
        }
        case 6:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t6. DR. Istitak Ahmed.\n\n");
            dr_istiak();
            parkview_medicineReturn();
            break;
        }
        case 7:
        {
            system("cls");gotoxy(0,7);
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
                system("cls");gotoxy(0,7);
                printing();
                parkview_medicine();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
    system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Wakil Ahmed.\n\n");
            dr_wakil();
            parkview_orthopeadicReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. A.T.M. Rezaul Karim.\n\n");
            dr_rezaulkarim();
            parkview_orthopeadicReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Mahamudur Rahman.\n\n");
            dr_mahamudur();
            parkview_orthopeadicReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. DR. Muhammad Abdul Awal.\n\n");
            dr_awal();
            parkview_orthopeadicReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t5. DR. Mohammad Mohsin.\n\n");
            dr_mohsin();
            parkview_orthopeadicReturn();
            break;
        }
        case 6:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t6. DR. Mohammad Mamun.\n\n");
            dr_mamun12();
            parkview_orthopeadicReturn();
            break;
        }
        case 7:
        {
            system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
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
    system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Mohammad Hussen.\n\n");
            dr_jamal();
            parkview_entReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. DR. Nasir Uddin.\n\n");
            dr_nasir();

            parkview_entReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);

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
                system("cls");gotoxy(0,7);
                printing();
                parkview_ent();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
    system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. DR. Sayed Mohammad Shamseer Nahid.\n\n");
            dr_nahid();

            parkview_SurgeryReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. S.M. SARWAR.\n\n");
            dr_sarwar();
            parkview_SurgeryReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Najma Mahbub.\n\n");
            dr_najma();
            parkview_SurgeryReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. DR. S. M. Ishtiaque Ali (Rubel).\n\n");
            dr_rubel();
            parkview_SurgeryReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t5. DR. Tutul Talukder.\n\n");
            dr_tutul();
            parkview_SurgeryReturn();
            break;
        }
        case 6:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t6. DR. Morshed.\n\n");
            dr_morshed();
            parkview_SurgeryReturn();
            break;
        }
        case 7:
        {
            system("cls");gotoxy(0,7);

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
                system("cls");gotoxy(0,7);
                printing();
                parkview_surgery();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. PROF A.M.M. Etheshamul Haque\n\n");
            dr_haque();
            parkview_kidneyReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. Rafiqul Hasan.\n\n");
            dr_rafiq22();
            parkview_kidneyReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Susmita Biswas.\n\n");
            dr_susmita();
            parkview_kidneyReturn();

            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t4. DR. Merina Atjumand.\n\n");
            dr_Merina();
            parkview_kidneyReturn();
            break;
        }
        case 5:
        {
            system("cls");gotoxy(0,7);


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
                system("cls");gotoxy(0,7);
                printing();
                parkview_kidney();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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
    system("cls");gotoxy(0,7);
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
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t1. Prof. DR. Monsurul Alam.\n\n");
            dr_monsur();
            parkview_skinReturn();
            break;
        }
        case 2:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t2. DR. MD. mZiaur Rahman Bhuiyan.\n\n");
            dr_zia();
            parkview_skinReturn();
            break;
        }
        case 3:
        {
            system("cls");gotoxy(0,7);
            printf("\n\n\t\t3. DR. Shamin Ara Sizu.\n\n");
            dr_sizu();
            parkview_skinReturn();
            break;
        }
        case 4:
        {
            system("cls");gotoxy(0,7);


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
                system("cls");gotoxy(0,7);
                printing();
                parkview_skin();
            }
            break;
        }
        case 0:
        {
            system("cls");gotoxy(0,7);
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

