#include <stdio.h>
#include <stdlib.h>

struct cart{

    int orderno;
    char emailaddress[30];
    char password[30];

};


int main()
{
    struct cart mycart;
    struct cart* ptrcart;

    printf("Enter the value of order no.:\n");
    scanf("%d",&mycart.orderno);
    printf("Enter the email address:\n");
    scanf("%s",mycart.emailaddress);
    printf("Enter the password:\n");
    scanf("%s",mycart.password);

    ptrcart = &mycart;

    printf("Your order no. is: %d\n",ptrcart->orderno);
    printf("Your email address is: %s\n",ptrcart->emailaddress);
    printf("Your password is: %s\n",ptrcart->password);

    printf("--------------------------------------\n");

    printf("Enter the new value of order no.:\n");
    scanf("%d",&ptrcart->orderno);
    printf("Enter the new email address:\n");
    scanf("%s",ptrcart->emailaddress);
    printf("Enter the new password:\n");
    scanf("%s",ptrcart->password);

    printf("Your new order no. is: %d\n",mycart.orderno);
    printf("Your new email address is: %s\n",mycart.emailaddress);
    printf("Your new password is: %s\n",mycart.password);

    printf("---------------------------------------------------------\n");
    struct cart* ptrcust;
    ptrcust = (struct cart*)malloc(sizeof(struct cart));
    printf("Enter the value of order no.:\n");
    scanf("%d",&ptrcust->orderno);
    printf("Enter the email address:\n");
    scanf("%s",ptrcust->emailaddress);
    printf("Enter the password:\n");
    scanf("%s",ptrcust->password);

    printf("Your order no. is: %d\n",ptrcust->orderno);
    printf("Your email address is: %s\n",ptrcust->emailaddress);
    printf("Your password is: %s\n",ptrcust->password);

    return 0;
}
