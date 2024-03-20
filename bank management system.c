#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
#define MAX_STRING_LENGTH 12








void create_account();
void create_account()
{
  FILE *fp=NULL;
  char str11[50]="Name";
  char str22[50]="Gender";
  char str33[50]="Age";
  char str44[50]="Aadhar";


  char str1[50];
  char str2[50];
  char str3[50];
  char str4[50];

  char tmp[50];


  srand(time(NULL));
 char nineDigitNumber[MAX_STRING_LENGTH];
 char elevenDigitNumber[MAX_STRING_LENGTH];
 sprintf(nineDigitNumber, "%09d", rand() % 1000000000);
 sprintf(elevenDigitNumber, "%011d", rand() % 10000000000);
 char str6[50],str7[50];
 strcpy(str6,elevenDigitNumber);
 strcpy(str7,nineDigitNumber);

 char null[50];


  printf("Enter Your Full Name");
  gets(null);
  gets(str1);
  printf("Enter Your Gender");

  gets(str2);
  printf("Enter Your Age");

  gets(str3);
  printf("Enter Your Aadhar Number");
  gets(str4);

  char str5[50];

   strcpy(str5,elevenDigitNumber);


 strcat(tmp,str5);
 strcat(tmp,str11);

  fp=fopen(tmp,"w");
  if(fp==NULL)
  {
    printf("ERROR");

  }
  fputs(str1,fp);
  fputs("\n",fp);
  strcpy(tmp,str5);
  fclose(fp);



  strcat(tmp,str22);
  fp=fopen(tmp,"w");
  if(fp==NULL)
  {
    printf("ERROR");

  }
  fputs(str2,fp);
  fputs("\n",fp);
 strcpy(tmp,str5);
  fclose(fp);


  strcat(tmp,str33);
  fp=fopen(tmp,"w");
  if(fp==NULL)
  {
    printf("ERROR");

  }
  fputs(str3,fp);
  fputs("\n",fp);
  strcpy(tmp,str5);
  fclose(fp);


  strcat(tmp,str44);
  fp=fopen(tmp,"w");
  if(fp==NULL)
  {
    printf("ERROR");

  }
  fputs(str4,fp);
  fputs("\n",fp);
 strcpy(tmp,str5);

 fp=fopen(str5,"w");
  if(fp==NULL)
  {
    printf("ERROR");

  }
  fputs(str5,fp);
  fputs("\n",fp);

  fclose(fp);


  char cid[]="cusid";
  strcpy(str6,elevenDigitNumber);
  strcat(str6,cid);
  fp=fopen(str6,"w");
  strcpy(str7,nineDigitNumber);
  fputs(str7,fp);
  fclose(fp);
  strcpy(str6,elevenDigitNumber);

  printf("Congratulations Account Successfully Created\n");
  printf("Your Bank Account Number is %s\n",str6);
   printf("Your Customer Id is %s\n",str7);

}

void Amount_deposit()
{

    printf("Enter the Account Number\n");
    char str20[50];
    char null2[50];
    gets(null2);
    gets(str20);

    FILE *fp=NULL;
    fp=fopen(str20,"r");
    if(fp==NULL)
    {
        printf("Account Not Found Create A New One\n");
    }
    else
    {
      printf("Account Found Data Successfully Fetched\n");
      fclose(fp);
      char str21[50]="balance";
      char str23[50];
      char str24[50];
      char str25[50];
      strcpy(str23,str20);
      strcat(str20,str21);


     fopen(str20,"r");
     fgets(str25,15,fp);

     fclose(fp);


      fopen(str20,"w");
      printf("Enter the Amount To Be Deposited\n");
      label1:
      gets(str24);
      gets(null2);
      int a=atoi(str25);
      int b=atoi(str24);
      if(b<=0)
      {
        printf("Please Deposit Amount Greater Than Zero");
        goto label1;
      }
      int ret=a+b;

      sprintf(str25, "%d", ret);

      fputs(str25,fp);
      printf("Rupees %s Has Been Succesfully Deposited To Account Number %s\n",str24,str23);
    }

}



  void check_balance();
  void check_balance()
  {
   FILE *fp = NULL;
    char str9[] = "balance";
    char bal[20];
    char str[50];
    char null3[50];
printf("Enter Your Account Number: ");
gets(null3);
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char zero[] = "0";
    char minus[] = "-0";
    int x, y;
    x = strcmp(str, zero);
    y = strcmp(str, minus);

    if (x == 0 || y == 0 || x == -1 || y == -1) {
        printf("Invalid account number\n");
        return;
    }

    fp = fopen(str, "r");
    if (fp == NULL) {
        printf("Account Not Found. Please Create One\n");
        return;
    } else {
        printf("Account Found And Balance Successfully Fetched\n");
        fclose(fp);
    }

    strcat(str, str9);
    fp = fopen(str, "r");
    if (fp == NULL) {
        printf("Error fetching balance.\n");
        return;
    }
    fgets(bal, 20, fp);
    printf("Balance: %s\n", bal);
    fclose(fp);
}


void Amount_Withdraw();

void Amount_Withdraw()
{
    printf("Enter The Account Number: ");

    char str13[50];
    char null4[50];
    gets(null4);
    fgets(str13, sizeof(str13), stdin);
    str13[strcspn(str13, "\n")] = '\0';
    char str17[50];
    strcpy(str17, str13);
    FILE *fp = fopen(str13, "r");
    if (fp == NULL) {
        printf("Account Not Found Create A New One\n");
    } else {
        printf("Account Found And Data Successfully Fetched\n");
        fclose(fp);

        char str15[] = "balance";
        char str16[50];
        strcpy(str16, str13);
        strcat(str16, str15);

        fp = fopen(str16, "r");
        if (fp == NULL) {
            printf("Error opening balance file\n");
            return;
        }
        fgets(str16, sizeof(str16), fp);
        int amt1 = atoi(str16);
        fclose(fp);

        char str14[20];
        int amt2;
    label2:
        printf("Enter The Amount To Be Withdrawn: ");
        label:
        fgets(str14, sizeof(str14), stdin);
        gets(null4);
        amt2 = atoi(str14);
        if(amt2<=0)
    {
      printf("Please Withdraw Amount Greater Than Zero");
      goto label;
    }
        if (amt2 > amt1 || amt2 == amt1) {
            printf("Please Withdraw Cash Less Than Balance Amount\n");
            goto label2;
        } else {
            printf("Rupees %s Has Been Successfully Withdrawn From Account NO. %s\n", str14, str17);
            fp = fopen(str16, "w");
            int ret = amt1 - amt2;
            fprintf(fp, "%d", ret);
            fclose(fp);

            printf("\tWITHDRAWAL RECEIPT:\n");
            char name[50];
            char age[50];
            char gender[50];
            char adno[50];
            char bal[20];
            char name1[] = "Name";
            char age1[] = "Age";
            char gender1[] = "Gender";
            char adno1[] = "Aadhar";
            char tmp2[50];

            strcpy(tmp2, str17);
            strcat(tmp2, name1);
            fp = fopen(tmp2, "r");
            if (fp == NULL) {
                printf("Error opening file\n");
                return;
            }
            fgets(name, sizeof(name), fp);
            fclose(fp);

            strcpy(tmp2, str17);
            strcat(tmp2, age1);
            fp = fopen(tmp2, "r");
            if (fp == NULL) {
                printf("Error opening file\n");
                return;
            }
            fgets(age, sizeof(age), fp);
            fclose(fp);

            strcpy(tmp2, str17);
            strcat(tmp2, gender1);
            fp = fopen(tmp2, "r");
            if (fp == NULL) {
                printf("Error opening file\n");
                return;
            }
            fgets(gender, sizeof(gender), fp);
            fclose(fp);

            strcpy(tmp2, str17);
            strcat(tmp2, adno1);
            fp = fopen(tmp2, "r");
            if (fp == NULL) {
                printf("Error opening file\n");
                return;
            }
            fgets(adno, sizeof(adno), fp);
            fclose(fp);


            char cid1[50]="cusid";
            char cid2[50];
            strcpy(str17, str13);
            strcat(str17,cid1);
             fp=fopen(str17,"r");
              fgets(cid2,10,fp);
            fclose(fp);


            printf("Account No: %s\n\n",str13);
            printf("Customer id: %s\n\n",cid2);
            printf("Name: %s\n", name);
            printf("Age: %s\n", age);
            printf("Gender: %s\n", gender);
            printf("Aadhar Number: %s\n", adno);
            printf("Withdrawn Amount: %d\n\n", amt2);
            printf("Account Remaining Balance: %d\n", ret);
            char tempp[50];
            char tempp1[50];
            sprintf(tempp1, "%d", ret);
            strcpy(tempp,str13);
            strcat(tempp,str15);
            fp=fopen(tempp,"w");
            fputs(tempp1,fp);
            fclose(fp);

        }
    }
}


void Account_update()
{
  FILE *fp=NULL;
  char str101[50]="Name";
  char str202[50]="Gender";
  char str303[50]="Age";
  char str404[50]="Aadhar";

  int stran;

  char str5[50];
  char null9[50];
  char tmp[50];
  char name10[50];
  char age10[50];
  char gender10[50];
  char adno10[50];
  printf("Enter Your Account Number");
  gets(null9);
  gets(str5);
  strcpy(tmp,str5);
  printf("Select What You Want to Edit/Update\n1.Name\n2.Gender\n3.Age\n4.Aadhar");
  scanf("%d",&stran);
  if(stran==1)
  {
    printf("Enter The New Name To be Replaced");
    gets(null9);
    gets(name10);
    strcat(tmp,str101);
    fp=fopen(tmp,"w");
    fputs(name10,fp);
    strcpy(tmp,str5);
    fclose(fp);
  }

  if(stran==2)
  {
    printf("Enter The New  Gender To be Replaced");
    gets(null9);
    gets(gender10);
    strcat(tmp,str202);
    fp=fopen(tmp,"w");
    fputs(gender10,fp);
    strcpy(tmp,str5);
    fclose(fp);
  }

  if(stran==3)
  {
    printf("Enter The New Age To be Replaced");
    gets(null9);
    gets(age10);
    strcat(tmp,str303);
    fp=fopen(tmp,"w");
    fputs(age10,fp);
    strcpy(tmp,str5);
    fclose(fp);
  }


  if(stran==4)
  {
    printf("Enter The New Aadhar Number To be Replaced");
    gets(null9);
    gets(adno10);
    strcat(tmp,str404);
    fp=fopen(tmp,"w");
    fputs(adno10,fp);
    strcpy(tmp,str5);
    fclose(fp);
  }

 printf("Details Successfully updated");
}


void main()
{
 int a;



  printf("WELCOME TO BANK\nEnter Your Choice\n1.Create An Customer Account\n2.Check Balance\n3.Deposit\n4.Withdraw\n5.Update Customer Details\n6.Exit");
  scanf("%d",&a);
 if(a==1)
  {
    create_account();

  }
  if(a==2)
  {
    check_balance();
  }
  if(a==3)
  {
     Amount_deposit();

  }
  if(a==4)
  {
    Amount_Withdraw();
  }


    if(a==5)
  {
   Account_update();
  }

   if(a==6)
  {
    printf("THANK YOU VISIT AGAIN");
    exit(0);
  }

}
