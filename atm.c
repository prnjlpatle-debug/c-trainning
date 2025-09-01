#include <stdio.h>
#include <conio.h>
int main (){
    int ch;
    float balance=1000,withdraw,deposit;
    while(1){
        printf("\n****Welcome to ATM****\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Choose the operation you want to perform:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter money to be withdrawn:");
                scanf("%f",&withdraw);
                if(withdraw>balance){
                    printf("Insufficient Balance");
                }
                else{
                    balance=balance-withdraw;
                    printf("Please collect your money");
                }
                break;
            case 2:
                printf("Enter money to be deposited:");
                scanf("%f",&deposit);
                balance=balance+deposit;
                printf("Your Money has been successfully deposited");
                break;
            case 3:
                printf("Balance : %.2f",balance);
                break;
            case 4:
                printf("Thank you for using ATM");
                getch();
                return 0;
            default:
                printf("Invalid Choice");
        }
    }
    return 0;
}            