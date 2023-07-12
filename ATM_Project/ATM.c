#include <stdio.h>
#include <stdlib.h>
#include "ATM.h"

/****** variables************/
double Balance=10000;
int Deposit_value=0;
int Withdraw_value=0;
int Card_password=1111;
int Max_Trial=3; // password maximum trials
/****** End of variables *****/

void ATM_Init(void)
{
    /*** variables ***/
    int local_password; // to take the password from the user
    int choice=0; // option for different operations
    int trials=0; // to store the actual trials of the user
    /*** end of variables***/

    printf("******* Welcome to the ATM *********\n\n");
    printf("Please enter your password\n\n");
    scanf("%i",&local_password);
    printf("\n\n");
    do{
    if(local_password==Card_password)
    {

        /**** display the menue ****/
        printf("1 : Balance\t\t 2 : Withdraw\n");
        printf("3 : Deposit\t\t 4 : Exit\n");
        printf("\n\n");
        scanf("%i",&choice);
        switch(choice)
        {
            //scanf("%i",&choice);
            case 1: Show_Balance();break;
            case 2: Withdraw();break;
            case 3: Deposit();break;
            case 4: Exit();break;
            default:printf("Wrong Option\n");
        }//end of switch
        //printf("do you want to do another operation?\n");
    }//end of if
    else
    {
        int option=0;
        trials++;
        printf("Incorrect password.. do you want to try again?\n");
        printf("1: Try again\t\t 0: Exit\n");
        scanf("%i",&option);
        if(option==1)
        {
            trials++;
            printf("Enter the password\n\n");
            scanf("%i",&local_password);
            printf("\n");
        }
        else if (option==0)
        {
            choice=4;
        }
        else
        {
            /* return error */
        }

    }
     }while( (choice<4) && (trials<Max_Trial) );

     if(trials>=Max_Trial)
     printf(" Sorry,You exceeded the maximum trials of password\n");
     else
        printf("\nThank you\n");

}//end of the function

void Show_Balance(void)
{
  printf("Your balance is %lf\n",Balance);
}
void Withdraw(void)
{
 printf("Please enter the required amount\n");
 scanf("%i",&Withdraw_value);
 if(Withdraw_value<0) // when a negative amount is entered
 {
     printf("please enter allowed amount\n");
 }
 else if(Withdraw_value>Balance)
 {
     printf("your balance is not enough\n");
 }
 else if (Withdraw_value<=Balance)
 {
     Balance=Balance-Withdraw_value;
     printf("Withdraw Successful\n");
 }
 else
 {
     /* return error */
 }
}

void Deposit(void)
{
  printf("Please enter the deposit amount\n ");
  scanf("%i",&Deposit_value);
  if(Deposit_value<0) // when a negative amount is entered
  {
      printf("please enter allowed amount\n");
  }
  else
  {
      Balance=Balance+Deposit_value;
      printf("Deposit Successful\n\n");
      printf(" Now, your balance is %lf\n",Balance);
  }
}

int Exit(void)
{
 return -1;
}
