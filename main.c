#include <stdio.h>
#include <stdlib.h>

int main()
{
    int userPin, PIN=1234;
    printf("Enter Pin");
    scanf("%d",&userPin);
    if(userPin==PIN) {
         printf("ACCESS GRANTED\n");
         int choice;
          printf("Enter your choice (1,2,3,4)");

    printf("1.open door\n");
    printf("2.change user_name\n");
    printf("3.change pin\n");
    printf("4.exit\n");
    scanf("%d",&choice);

    switch(choice){
            case 1:
                printf("open door");
                break;
            case 2:
                printf("change user_name");
                break;
            case 3:
                printf("change pin");
                break;
            case 4:
                printf("exit");
                break;
            default:
                printf("invalid choice.access denied");
    }

}else{
        printf("ACCESS DENIED!");
    }
    if(PIN<444){
        printf("PIN is too short");
    if(PIN>4444){
        printf("PIN is too long");
    }
 }
return 0;
}
