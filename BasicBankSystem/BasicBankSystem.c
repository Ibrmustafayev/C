#include <stdio.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char type[10];
    float amount;
    Date date;
} Transaction;

typedef struct{
    char owner[50];
    float balance;
    Transaction history[50];
    int trans_count;
} Account;

void create_account(Account *account);
void deposit(Account *account);
void withdraw(Account *account);
void show_balance(Account *account);
void show_trans_history(Account *account);

int main() {
    Account account = {0};
    int option;
    while (1) {
        printf("=== Menu ===\n1. Create account\n2. Deposit\n3. Withdraw\n4. Show balance\n5. Show transaction history\n6. Exit\n");
        printf("\nOption: ");
        scanf("%d", &option);
        if (option == 6) {
            printf("\nGoodbye!!!");
            break;
        } else if (option == 1) {
            create_account(&account);
        } else if (option == 2) {
            deposit(&account);
        } else if (option == 3) {
            withdraw(&account);
        } else if (option == 4) {
            show_balance(&account);
        } else if (option == 5) {
            show_trans_history(&account);
        }
        printf("\n");
    }

    return 0;
}

void create_account(Account *account) {
    if (account -> owner[0] != '\0') {
        printf("\nThere is already an account. You cannot create a new one.\n");
    } else {
        printf("\nOwner: ");
        while (getchar() != '\n');
        fgets(account -> owner, 50, stdin);
        account -> owner[strcspn(account -> owner, "\n")] = '\0';
        account -> balance = 0;
        account -> trans_count = 0;
        printf("Balance: $%.2f\n", account -> balance);
    }
}

void deposit(Account *account) {
    if (account -> owner[0] == '\0') {
        printf("\nCreate an account first!\n");
        return;
    }
    float amount;
    printf("\nDeposit amount: ");
    scanf("%f", &amount);
    account -> balance += amount;
    Transaction *t = &account -> history[account -> trans_count];
    strcpy(t -> type, "Deposit");
    t -> amount = amount;
    printf("Day: ");
    scanf("%d", &t -> date.day);
    printf("Month: ");
    scanf("%d", &t -> date.month);
    printf("Year: ");
    scanf("%d", &t -> date.year);
    account -> trans_count++;
}

void withdraw(Account *account) {
    if (account -> owner[0] == '\0') {
        printf("\nCreate an account first!\n");
        return;
    }
    float amount;
    printf("\nWithdraw amount: ");
    scanf("%f", &amount);
    if (amount > account -> balance) {
        printf("Balance: $%.2f\nNot enough fund!\n", account -> balance);
        return;
    }
    account -> balance -= amount;
    Transaction *t = &account -> history[account -> trans_count];
    strcpy(t -> type, "Withdraw");
    t -> amount = amount;
    printf("Day: ");
    scanf("%d", &t -> date.day);
    printf("Month: ");
    scanf("%d", &t -> date.month);
    printf("Year: ");
    scanf("%d", &t -> date.year);
    account -> trans_count++;
}

void show_balance(Account *account) {
    if (account -> owner[0] == '\0') {
        printf("\nCreate an account first!\n");
        return;
    }
    printf("\n--- Balance ---\nOwner: %s\nBalance: $%.2f\n", account -> owner, account -> balance);
}

void show_trans_history(Account *account) {
    if (account -> owner[0] == '\0') {
        printf("\nCreate an account first!\n");
        return;
    }
    if (account -> trans_count == 0) {
        printf("\nNo transaction!\n");
        return;
    }
    printf("\n--- Transaction History ---\n");
    for (int i = 0; i < account -> trans_count; i++) {
        printf("%d. %s %c$%.2f [%02d/%02d/%04d]\n", i + 1, account -> history[i].type, (strcmp(account -> history[i].type, "Deposit") == 0) ? '+' : '-', account -> history[i].amount, account -> history[i].date.day, account -> history[i].date.month, account -> history[i].date.year);
    }
}
