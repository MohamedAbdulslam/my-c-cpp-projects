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

void Withdraw(void);

void Deposit(void);

int Exit(void);



#endif // ATM_H
