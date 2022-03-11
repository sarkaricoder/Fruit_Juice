#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// function for login or exit

int choice()
{
    printf("\n");
    printf("\n");
    char x; // variable for login or exit(x)
    printf("\t 1) LOGIN \n");
    printf("\n");
    printf("\t 2) EXIT \n");
    printf("\n");
    printf("\n");

    while (1)

    {

        printf("Enter your choice :- ");
        scanf(" %s", &x);

        if ((int)x == 50)
        {
            return 2;
        }
        else if ((int)x == 49)
        {
            return 1;
        }
        else
        {
            printf("\n");
            printf("\n");
            printf("Please enter a valide choice!");
            printf("\n");
            printf("\n");
        }
    }
}
// function for login
int login()
{
    char x; // variable to store choice
    printf("\n");
    printf("\n");

    char user_name[] = "Cashier";
    char password[] = "123456789";
    char user_name1[50];
    char user_pass1[50];
    char ch;
    while (1)
    {
        printf("\t Enter Username :- ");
        scanf("%s", user_name1);
        printf("\n");
        printf("\n");
        printf("\n");
        int i = 0;
        printf("\t Enter Password :- ");
        while ((ch = getch()) != 13)
        {
            user_pass1[i] = ch; // mask password
            i++;
            printf(" * ");
        }
        // scanf("%s", user_pass1);

        int a = strlen(user_name);
        int b = strlen(password);
        int ctr = 0;
        for (int i = 0; i < a; i++)
        {
            if (user_name[i] == user_name1[i])
            {
                ctr++;
            }
        }
        for (int i = 0; i < b; i++)
        {
            if (password[i] == user_pass1[i])
            {
                ctr++;
            }
        }

        if (ctr == (a + b))
        {
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\t\t\t\t\t\t\t***WELCOME***");
            printf("\n");
            printf("\n");
            printf("\n");

            return 1;
        }
        else
        {
            printf("\n");
            printf("\n");
            printf("\n");
            printf("Invalid Username/Password ");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\t 1) TRY AGAIN \n");
            printf("\n");
            printf("\t 2) EXIT \n");
            printf("\n");
            printf("\n");
            printf("Enter your choice :- ");
            scanf("%s", &x);
            printf("\n");
            printf("\n");

            if ((int)x == 50)
            {
                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t *THANK YOU HAVE A NICE DAY* ");
                return 2;
            }
        }
    }
}
// Function for displaying main menu

int mainmenu()
{
    for (int i = 0; i < 130; i++)
    {
        printf("-");
    }
    printf("\n");
    printf("\t\t\t\t\t\t\t*** MAIN MENU ***");
    printf("\n");
    for (int i = 0; i < 130; i++)
    {
        printf("-");
    }
    printf("\n");
    int n;
    printf("\n");
    printf("Select options:-\n");
    printf("\n\n");
    printf("1. Check Prices\t\t\t4. Add to inventory");
    printf("\n\n");
    printf("2. Update Prices\t\t5. Delete from inventory");
    printf("\n\n");
    printf("3. Make new bill\n");
    printf("\n\n");
    printf("Enter Here : ");
    scanf("%d", &n);
    return n;
}
// function for price check

void checkprice()
{

    for (int i = 0; i < 130; i++)
    {
        printf("-");
    }

    printf("\t\t\t\t\t\t\t\t\t\t\t*** FRUIT JUICE MENU ***\n");
    for (int i = 0; i < 130; i++)
    {
        printf("-");
    }

    printf("\n");
    printf("\t\t\t\tH(In Rs.)\tF(In Rs.)\t\t\t\t\t\tH(In Rs.)\tF(In Rs.)\n");
    printf("1. Lime/Soda\t\t--\t  20.00\t\t 30.00\t\t16. Pomogranate_Pizzaz\t\t--\t  60.00\t\t 100.00\n");
    printf("2. Papaya\t\t--\t  25.00\t\t 40.00\t\t17. Strawberry_Grape_Orange\t--\t  60.00\t\t 100.00\n");
    printf("3. Beet root\t\t--\t  25.00\t\t 40.00\t\t18. Golden_spice\t\t--\t  60.00\t\t 100.00\n");
    printf("4. Banana\t\t--\t  25.00\t\t 40.00\t\t19. Pink_Panther\t\t--\t  60.00\t\t 100.00\n");
    printf("5. Carrot\t\t--\t  25.00\t\t 40.00\t\t20. Romaine_Apple_Orange\t--\t  60.00\t\t 100.00\n");
    printf("6. Mosumbi\t\t--\t  30.00\t\t 50.00\t\t21. Sunset_Blend\t\t--\t  60.00\t\t 100.00\n");
    printf("7. Cantaloupe\t\t--\t  30.00\t\t 50.00\t\t22. Beet_A-retreat\t\t--\t  50.00\t\t  90.00\n");
    printf("8. Sapota\t\t--\t  30.00\t\t 50.00\t\t23. Berry_A_Peeling\t\t--\t  50.00\t\t  90.00\n");
    printf("9. Grape\t\t--\t  30.00\t\t 50.00\t\t24. Apple_Cucumber\t\t--\t  50.00\t\t  90.00\n");
    printf("10.Watermelon\t\t--\t  30.00\t\t 50.00\t\t25. Pomogranate_Apple_Juice\t--\t  50.00\t\t  90.00\n");
    printf("11.Pineapple\t\t--\t  35.00\t\t 60.00\t\t26. Grapes_Orange\t\t--\t  50.00\t\t  90.00\n");
    printf("12.Mango(Seasonal)\t--\t  40.00\t\t 70.00\t\t27. Strawberry_Pineapple_Orange\t--\t  50.00\t\t  90.00\n");
    printf("13.Orange\t\t--\t  40.00\t\t 70.00\t\t28. Green_Ginger_Ale\t\t--\t  50.00\t\t  90.00\n");
    printf("14.Pomegranate\t\t--\t  45.00\t\t 80.00\t\t29. Mexicon_Style_Jugo\t\t--\t  50.00\t\t  90.00\n");
    printf("15.Apple\t\t--\t  50.00\t\t 80.00\t\t30. Strawberry_Pineaplle\t--\t  50.00\t\t  90.00\n");
    printf("\n\n");
    for (int i = 0; i < 130; i++)

    {
        printf("-");
    }
}

// function for inventry

struct order
{
    char item[50];
    float price;
    float quantity;
};
typedef struct order order;
order r[30];

void inventory(order *r)
{
    int n;
    printf("\n\n");
    printf("Please enter the number of items : ");
    scanf("%d", &n);
    // order odr[n];
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf("Please enter the item_%d : ", i + 1);
        scanf("%s", r[i].item);
        printf("\n");
        printf("Please enter the quantity : ");
        scanf("%f", &r[i].quantity);
        printf("\n");
        printf("Please enter the unit price : "); // unit price of juice
        scanf("%f", &r[i].price);
        printf("\n");
        for (int i = 0; i < 130; i++)
        {
            printf("-");
        }
        printf("\n");
    }
}

// main function

int main()
{

    for (int i = 0; i < 45; i++)
    {
        printf(" _ ");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t\t\t*** FRESH SQUEEZE JUICE & BAR ***\n");
    printf("\n");

    for (int i = 0; i < 45; i++)
    {
        printf(" _ ");
    }
    printf("\n");
    printf("\n");
    printf("\t\t\t\t\t- Don't take tension when fruit juice gives you a fit sensation!");
    printf("\n");
    printf("\n");
    int y = choice(); // variable to store return value of function choice
    int n;
    if (y == 1) // enters if user choose to login
    {
        int z = login(); // variable to store return value of function login
        if (z == 1)      // enters if username and password is correct
        {

           mainmenu();

           // if (n == 1)
            checkprice();
           // if (n == 2)
            inventory(r);
        }
        if (z == 2)
        {
            return 0;
        }
    }
    if (y == 2)
    {
        return 0;
    }
}