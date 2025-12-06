#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// ---------- Function Prototypes ----------
bool login();
void showMenu();
void balanceInquiry(float balance);
float deposit(float balance);
float withdraw(float balance);

// ---------- Main Function ----------
int main() {
    float balance = 1000.0;   // Initial account balance

    printf("====== Welcome to the ATM System ======\n\n");

    // Login
    if (!login()) {
        printf("\nAccess Denied. Exiting...\n");
        return 0;
    }

    int choice;
    while (1) {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                balanceInquiry(balance);
                break;

            case 2:
                balance = deposit(balance);
                break;

            case 3:
                balance = withdraw(balance);
                break;

            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;

            default:
                printf("Invalid option. Try again.\n");
        }

        printf("\n----------------------------------------\n");
    }

    return 0;
}

// ---------- Function Definitions ----------

// 1. Login / PIN Verification Function
bool login() {
    const int storedPIN = 8084;
    int enteredPIN;
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter PIN: ");
        scanf("%d", &enteredPIN);

        if (enteredPIN == storedPIN) {
            printf("Login successful!\n\n");
            return true;
        } else {
            printf("Incorrect PIN. Try again. Access denied\n");
        }

        attempts++;
    }

    return false;
}

// 2. Show ATM Menu
void showMenu() {
    printf("\n========== ATM MENU ==========\n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("================================\n");
}

// 3. Balance Inquiry
void balanceInquiry(float balance) {
    printf("Your current balance is: %.2f\n", balance);
}

// 4. Deposit Function
float deposit(float balance) {
    float amount;

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount.\n");
        return balance;
    }

    balance += amount;
    printf("Deposit successful. New balance: %.2f\n", balance);

    return balance;
}

// 5. Withdraw Function
float withdraw(float balance) {
    float amount;

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount.\n");
        return balance;
    }

    if (amount > balance) {
        printf("Insufficient balance. Withdrawal failed.\n");
        return balance;
    }

    balance -= amount;
    printf("Withdrawal successful. New balance: %.2f\n", balance);

    return balance;
}
