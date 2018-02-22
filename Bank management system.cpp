/***
    Muntasher Morshed
    Email: ijeshourav1409@gmail.com
    Dept. Of CSE
    Spring, 2014
    University of Asia Pacific
                              ***/

/*
    It's a simple Bank Management System. Technically there are only one feature (view) here.
    But you can view user accounts and also employees accounts.
    You need to create files before execute the process.
*/


/***    Header files    ***/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/***    Codes starts here    ***/
//      structure of the data for savings accounts
struct user_savings
{
    char account_no_s[100];
    char name_s[100];
    char age_s[10];
    char gender_s[10];
    char blood_group_s[6];
    char passport_no_s[100];
    char last_deposit_amount_s[100];
    char last_deposit_date_s[15];
    char current_amount_s[100];
}u_s[15];


//      structure of the data for current accounts
struct user_current
{
    char account_no_c[100];
    char name_c[100];
    char age_c[10];
    char gender_c[10];
    char blood_group_c[6];
    char passport_no_c[100];
    char last_deposit_amount_c[100];
    char last_deposit_date_c[15];
    char last_withdraw_amount_c[100];
    char last_withdraw_date_c[15];
    char current_amount_c[100];
}u_c[15];


//      structure of the data for the bank employees
struct officer
{
    char bank_id_o[100];
    char name_o[100];
    char age_o[10];
    char gender_o[10];
    char blood_group_o[10];
    char passport_id_o[100];
}of[10];

//      showing user info
void user_savings_info(user_savings s)
{
    printf("Account no: ");
    puts(s.account_no_s);
    printf("Name: ");
    puts(s.name_s);
    printf("Age: ");
    puts(s.age_s);
    printf("Gender: ");
    puts(s.gender_s);
    printf("Blood group: ");
    puts(s.blood_group_s);
    printf("Passport no: ");
    puts(s.passport_no_s);
    printf("Last deposit amount: ");
    puts(s.last_deposit_amount_s);
    printf("Last deposit date: ");
    puts(s.last_deposit_date_s);
    printf("Current amount: ");
    puts(s.current_amount_s);
}

void user_current_info(user_current t)
{
    printf("Account no: ");
    puts(t.account_no_c);
    printf("Name: ");
    puts(t.name_c);
    printf("Age: ");
    puts(t.age_c);
    printf("Gender: ");
    puts(t.gender_c);
    printf("Blood group: ");
    puts(t.blood_group_c);
    printf("Passport no: ");
    puts(t.passport_no_c);
    printf("Last deposit amount: ");
    puts(t.last_deposit_amount_c);
    printf("Last deposit date: ");
    puts(t.last_deposit_date_c);
    printf("Last withdraw amount: ");
    puts(t.last_withdraw_amount_c);
    printf("Last withdraw date: ");
    puts(t.last_withdraw_date_c);
    printf("Current amount: ");
    puts(t.current_amount_c);
}

void officer_info(officer a)
{
    printf("Bank id: ");
    puts(a.bank_id_o);
    printf("Name: ");
    puts(a.name_o);
    printf("Age: ");
    puts(a.age_o);
    printf("Gender: ");
    puts(a.gender_o);
    printf("Blood group: ");
    puts(a.blood_group_o);
}

void file_user_savings_info()
{
    FILE *s;
    s=fopen("Savings.txt","r");
    int i;
    char ch[100];
    for(i=0; i<15; i++)     // taking data from file to struct
    {
        fscanf(s,"%s %s",ch,u_s[i].account_no_s);
        fscanf(s,"%s %s",ch,u_s[i].name_s);
        fscanf(s,"%s %s",ch,u_s[i].age_s);
        fscanf(s,"%s %s",ch,u_s[i].gender_s);
        fscanf(s,"%s %s",ch,u_s[i].blood_group_s);
        fscanf(s,"%s %s",ch,u_s[i].passport_no_s);
        fscanf(s,"%s %s",ch,u_s[i].last_deposit_amount_s);
        fscanf(s,"%s %s",ch,u_s[i].last_deposit_date_s);
        fscanf(s,"%s %s",ch,u_s[i].current_amount_s);
    }
}

void file_user_current_info()
{
    FILE *c;
    c=fopen("Current.txt","r");
    int i;
    char ch[100];
    for(i=0; i<15; i++)
    {
        fscanf(c,"%s %s",ch,u_c[i].account_no_c);
        fscanf(c,"%s %s",ch,u_c[i].name_c);
        fscanf(c,"%s %s",ch,u_c[i].age_c);
        fscanf(c,"%s %s",ch,u_c[i].gender_c);
        fscanf(c,"%s %s",ch,u_c[i].blood_group_c);
        fscanf(c,"%s %s",ch,u_c[i].passport_no_c);
        fscanf(c,"%s %s",ch,u_c[i].last_deposit_amount_c);
        fscanf(c,"%s %s",ch,u_c[i].last_deposit_date_c);
        fscanf(c,"%s %s",ch,u_c[i].last_withdraw_amount_c);
        fscanf(c,"%s %s",ch,u_c[i].last_withdraw_date_c);
        fscanf(c,"%s %s",ch,u_c[i].current_amount_c);
    }
}

void file_officer_info()
{
    FILE *o;
    o=fopen("Officer.txt","r");
    int i;
    char ch;
    for(i=0; i<=10; i++)
    {
        fscanf(o,"%s %s",ch,of[i].bank_id_o);
        fscanf(o,"%s %s",ch,of[i].name_o);
        fscanf(o,"%s %s",ch,of[i].age_o);
        fscanf(o,"%s %s",ch,of[i].gender_o);
        fscanf(o,"%s %s",ch,of[i].blood_group_o);
    }
}

int main()
{
    printf("\n\n\t\t  *****   Bank Management System   *****\n\n\n");

    while(1)    //  continous loop
    {
        int i,n;
        /**     m e n u     **/
        printf("Search options:\n\n");
        printf("\t\t1. User Accounts\n");
        printf("\t\t2. Officer accounts\n");
        printf("\t\t3. Exit\n");

        scanf("%d",&n);     //      enter choice here
        if(n==1)    //  choose user accounts
        {
            /**     u s e r   a c c o u n t   t y p e    **/
            printf("Account type: \n");
            printf("\t\t1. Savings\n");
            printf("\t\t2. Current\n");

            int m;

            scanf("%d",&m);     //  enter user account type

            if(m==1)    //  choose savings
            {
                file_user_savings_info();   //  calling all the info
                char account_no[100];

                printf("Enter account no: ");   // enter an account number to search!
                scanf("%s",account_no);

                for(i=0; i<=15; i++)
                {
                    // printing function for the selected user savings account
                    if(strcmp(account_no,u_s[i].account_no_s)==0)
                    {
                        user_savings_info(u_s[i]);
                        break;
                    }
                    /*else
                    {
                        printf("\nAccount doesn't exists\n");
                        break;
                    }*/
                }
            }
            else if(m==2)   //  choose current
            {
                char account[100];

                printf("\nEnter account no: ");     // enter an account number to search
                scanf("%s",account);
                file_user_current_info();   //  calling all info
                int i;

                for(i=0; i<=15; i++)
                {
                    // printing function for the selected user current account
                    if(strcmp(account,u_c[i].account_no_c)==0)
                    {
                        user_current_info(u_c[i]);
                        break;
                    }
                    /*else
                    {
                        printf("\nAccount doesn't exists\n");
                        break;
                    }*/
                }
            }
        }
        else if(n==2)       //  choose officer account
        {
            char bank[100];

            printf("Enter officer's id: ");   //  type name
            scanf("%s",bank);
            file_officer_info();        //  processing officer data from file to struct
            for(i=0; i<=10; i++)
            {
                // printing function for the selected officer
                if(strcmp(bank,of[i].bank_id_o)==0)
                {
                    officer_info(of[i]);
                    break;
                }
                /*else
                {
                    printf("\nName dosen't exists\n");
                }*/
            }
        }
        else    //      choose to terminate the program. while(1) breaks here.
        {
            break;
        }
        printf("\n\n");
    }

    return 0;
}
