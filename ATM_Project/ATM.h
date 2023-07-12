#ifndef ATM_H
#define ATM_H
/*
 Function name: ATM_Init
 Function parameters: void
 Function return: void
 Function description: to check the card password
 and display the menue to the user
*/
void ATM_Init(void);

/*
 Function name: Balance
 Function parameters: void
 Function return: void
 Function description: to show the balance of the user
*/
void Show_Balance(void);

/*
 Function name: Withdraw
 Function parameters: void
 Function return: void
 Function description: to Enable the client from withdrawing from his balance
*/
void Withdraw(void);

/*
 Function name: Deposit
 Function parameters: void
 Function return: void
 Function description: to Enable the client from depositing to his balance
*/
void Deposit(void);

/*
 Function name: Exit
 Function parameters: void
 Function return: int
 Function description: to exit the card from the ATM
*/
int Exit(void);



#endif // ATM_H
