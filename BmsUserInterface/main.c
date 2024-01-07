#include <stdio.h>
#include <stdlib.h>

int choice,bdate[8],year,month,day,tpnumber;
char fullname[400],address[400],username[30],street,city,district,idnumber[12],username2,password2;

void create()
{
    printf("Full Name\n");
    scanf("%s",&fullname);//Get full name from the user and assign it to the 'fullname' variable in line number 5
    printf("\n");

    printf("Your National Identity Number\n");
    scanf("%s",&idnumber);//Get NIC number from the user and assign it to the 'idnumber' variable in line number 5
    printf("\n");

    printf("Your Mobile Phone Number\n");
    scanf("%s",&tpnumber);//Get Telephone number from the user and assign it to the 'tpnumber' variable in line number 4
    printf("\n");

    printf("Enter Address\n\n");

    printf("Street\n");
    scanf("%s",&street);//Get Street from the user and assign it to the 'street' variable in line number 5
    printf("\n");

    printf("City\n");
    scanf("%s",&city);//Get City from the user and assign it to the 'city' variable in line number 5
    printf("\n");

    printf("District\n");
    scanf("%s",&district);//Get District from the user and assign it to the 'district' variable in line number 5
    printf("\n");

    printf("Enter Birth Date\n\n");

    printf("Year\n");
    scanf("%d",&year);//Get Birth Year from the user and assign it to the 'year' variable in line number 4
    printf("\n");

    printf("Month\n");
    scanf("%d",&month);//Get Birth Month from the user and assign it to the 'month' variable in line number 4
    printf("\n");

    printf("Date\n");
    scanf("%d",&day);//Get Birth Date from the user and assign it to the 'day' variable in line number 4
    printf("\n");

    printf("Create a User name:\n");
    scanf("%d",&username2);//Create new User Name and assign it to the 'username2' variable in line number 5
    printf("\n");

    printf("Create a Password:\n");
    scanf("%d",&password2);//Create new Password and assign it to 'password2' variable in line number 5
    printf("\n");

    main();//After creating a new account, this function helps to login the bank account by switching to the first interface

}

void login()
{
    printf("user Name\n");
    scanf("%s",&username);//Get the existing username from the user and assign it to the 'username' variable in line no.5
    printf("\n");

    int i=0;
    char pwd;
    char password[30];//A variable named "password" is created
    printf("Password\n");
    while((pwd=_getch())!=13){
        password[i]=pwd;
        i++;
        printf("*");
    }
    password[i]='\0';
    printf("\n");
}

int main()//This is the first interface,the user can see
{
    printf("WELCOME TO DEVELOPMENT BANK\n\n");
    printf("Create New Account(Press 1)\n");
    printf("Login your Account(Press 2)\n");
    printf("Exit(Press 3)\n\n");
    printf("Enter your Choice: \n");
    scanf("%d",&choice);
    printf("\n");

if(choice==1)
{
    create();//If user selected 'Create new account(press 1)' the create() function will start working
}
else if(choice==2)
{
    login();//If user selected 'login your Account(Press 2)' login() function will start to working
}
else if(choice==3)
{
    printf("Thank You\n");//if user selected 'Exit(Press 3)',it will displayed 'Thank You'
}
else
{
    printf("Invalid Choice. Please select again\n\n");//if user selected other choice, it will be display 'Invalid Choice Please select again'
    main();//If the user selected an invalid choice, this function will show the first interface again and help to create new account or login existing account or exit.
}

    return 0;
}
