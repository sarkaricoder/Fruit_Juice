#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

float h[30] = {20.00, 25.00, 25.00, 25.00, 25.00, 30.00, 30.00, 30.00, 30.00, 30.00, 35.00, 40.00, 40.00, 45.00, 50.00, 60.00, 60.00, 60.00, 60.00, 60.00, 60.00, 50.00, 50.00, 50.00, 50.00, 50.00, 50.00, 50.00, 50.00, 50.00};
float f[30] = {30.00, 40.00, 40.00, 40.00, 40.00, 50.00, 50.00, 50.00, 50.00, 50.00, 60.00, 70.00, 70.00, 80.00, 80.00, 100.00, 100.00, 100.00, 100.00, 100.00, 100.00, 90.00, 90.00, 90.00, 90.00, 90.00, 90.00, 90.00, 90.00, 90.00};

// function for clear screen
void clrscr()
{
    system("@cls||clear");
}
// function for back to main menu

int mainmenu();
// function for login or exit

int choice()
{
    printf("\n\n");
    char x; // variable for login or exit(x)
    printf("\t 1) LOGIN \n");
    printf("\n");
    printf("\t 2) EXIT \n");
    printf("\n\n");

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
            printf("\n\n");

            printf("Please enter a valide choice!");
            printf("\n\n");
        }
    }
}

// function for login
int login()
{
    clrscr();
    char x; // variable to store choice
    printf("\n\n");

    char user_name[] = "abc";
    char password[] = "123";
    char user_name1[50];
    char user_pass1[50];
    char ch;
    while (1)
    {
        printf("\t Enter Username :- ");
        scanf("%s", user_name1);
        int c = strlen(user_name1);
        printf("\n\n\n");
        int i = 0;
        printf("\t Enter Password :- ");
        // clrscr();
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
            clrscr();
            printf("\n\n");
            printf("\t\t\t\t\t\t\t***WELCOME***");
            printf("\n\n");
            return 1;
        }
        else
        {
            printf("\n\n");
            printf("Invalid Username/Password ");
            printf("\n\n");
            printf("\t 1) TRY AGAIN \n");
            printf("\n");
            printf("\t 2) EXIT \n");
            printf("\n\n");

            printf("Enter your choice :- ");
            scanf("%s", &x);
            printf("\n\n");

            if ((int)x == 50)
            {
                printf("\n\n");

                printf("\t\t\t\t\t\t *THANK YOU HAVE A NICE DAY* ");
                return 2;
            }
        }
    }
}

// Function for displaying main menu

int mainmenu()
{
    // clrscr();
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
    printf("1. Show Price Chart \t\t\t5. Add to inventory");
    printf("\n\n");
    printf("2. Check Price\t\t\t\t6. Delete from inventory");
    printf("\n\n");
    printf("3. Update Price\t\t\t\t7. Order/Make bill");
    printf("\n\n");
    printf("4. Show inventory\t\t\t8. Exit\n\n");
    printf("Enter Here : ");
    scanf("%d", &n);
    if (n > 0 && n < 8)
    {
        return n;
    }
    else
    {
        printf("\n\n");
        printf("\t\t\t\t\t\t!! INVALID INPUT !!");
        printf("\nPress any key to retry\n");
        getch();
        mainmenu();
    }
}
// function for price check

void pricechart()
{
    clrscr();
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
    printf("H(Half) ---> 200ml\t\t\tF(Full) ---> 400ml");
    printf("\n\n");

    printf("\t\t\t\tH(In Rs.)\tF(In Rs.)\t\t\t\t\t\tH(In Rs.)\tF(In Rs.)\n");
    printf("1. Lime/Soda\t\t--\t  %.2f\t\t %.2f\t\t16. Pomogranate_Pizzaz\t\t--\t  %.2f\t\t %.2f\n", h[0], f[0], h[15], f[15]);
    printf("2. Papaya\t\t--\t  %.2f\t\t %.2f\t\t17. Strawberry_Grape_Orange\t--\t  %.2f\t\t %.2f\n", h[1], f[1], h[16], f[16]);
    printf("3. Beet root\t\t--\t  %.2f\t\t %.2f\t\t18. Golden_spice\t\t--\t  %.2f\t\t %.2f\n", h[2], f[2], h[17], f[17]);
    printf("4. Banana\t\t--\t  %.2f\t\t %.2f\t\t19. Pink_Panther\t\t--\t  %.2f\t\t %.2f\n", h[3], f[3], h[18], f[18]);
    printf("5. Carrot\t\t--\t  %.2f\t\t %.2f\t\t20. Romaine_Apple_Orange\t--\t  %.2f\t\t %.2f\n", h[4], f[4], h[19], f[19]);
    printf("6. Mosumbi\t\t--\t  %.2f\t\t %.2f\t\t21. Sunset_Blend\t\t--\t  %.2f\t\t %.2f\n", h[5], f[5], h[20], f[20]);
    printf("7. Cantaloupe\t\t--\t  %.2f\t\t %.2f\t\t22. Beet_A-retreat\t\t--\t  %.2f\t\t  %.2f\n", h[6], f[6], h[21], f[21]);
    printf("8. Sapota\t\t--\t  %.2f\t\t %.2f\t\t23. Berry_A_Peeling\t\t--\t  %.2f\t\t  %.2f\n", h[7], f[7], h[22], f[22]);
    printf("9. Grape\t\t--\t  %.2f\t\t %.2f\t\t24. Apple_Cucumber\t\t--\t  %.2f\t\t  %.2f\n", h[8], f[8], h[23], f[23]);
    printf("10.Watermelon\t\t--\t  %.2f\t\t %.2f\t\t25. Pomogranate_Apple_Juice\t--\t  %.2f\t\t  %.2f\n", h[9], f[9], h[24], f[24]);
    printf("11.Pineapple\t\t--\t  %.2f\t\t %.2f\t\t26. Grapes_Orange\t\t--\t  %.2f\t\t  %.2f\n", h[10], f[10], h[25], f[25]);
    printf("12.Mango(Seasonal)\t--\t  %.2f\t\t %.2f\t\t27. Kiwi\t\t\t--\t  %.2f\t\t  %.2f\n", h[11], f[11], h[26], f[26]);
    printf("13.Orange\t\t--\t  %.2f\t\t %.2f\t\t28. Dragon_Orange\t\t--\t  %.2f\t\t  %.2f\n", h[12], f[12], h[27], f[27]);
    printf("14.Pomogranate\t\t--\t  %.2f\t\t %.2f\t\t29. Mexicon_Style_Jugo\t\t--\t  %.2f\t\t  %.2f\n", h[13], f[13], h[28], f[28]);
    printf("15.Apple\t\t--\t  %.2f\t\t %.2f\t\t30. Avocado_Juice\t\t--\t  %.2f\t\t  %.2f\n", h[14], f[14], h[29], f[29]);
    printf("\n\n");
    /*for (int i = 0; i < 130; i++)
    {
        printf("-");
    }
    printf("\n\n");*/
}
void checkprice()
{
    clrscr();
    int m, n;
    float p, q;
    int a[30];

    printf("\n\n1. Back to main menu :- Press 1 \n\n2. To continue :- press any integer");

    int bck;
    printf("\n\nEnter here :-");
    scanf("%d", &bck);
    if (bck == 1)
    {
        mainmenu();
    }
    else
    {
        printf("\t\t\t\t\t\t\t***WELCOME***");
        printf("\n\n");
        printf("Enter total number of items for price check"); // price checking
        printf("\n\n");
        printf("Enter here :- ");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("\n\n");
            printf("Enter code of item for price check");
            printf("\n\n");
            printf("Enter here :-");
            scanf("%d", &a[i]); // price checking
            p = f[a[i] - 1];
            q = h[a[i] - 1];
            printf("\n\n");

            printf("Full Price of item of code_%d  :- %.2f", a[i], p);
            printf("\n\n");
            printf("Half price of item of code_%d  :- %.2f", a[i], q);
            printf("\n\n");
            m = 0;
        }
    }
}
// funtion for inventory
void showinventory()
{

    clrscr();

    FILE *f1, *f2;
    int n;
    char ch;
    f1 = fopen("inventory.txt", "r");
    f2 = fopen("juice.txt", "r");
    printf("\n");
    for (int i = 0; i < 130; i++)
    {
        printf("-");
    }
    printf("\n\n\n\t\tFruit name                                No.of full glass left\n\n\n");
    printf("\n");
    for (int i = 0; i < 130; i++)
    {
        printf("-");
    }
    printf("\n");
    if (f1 == NULL || f2 == NULL)
    {
        printf("File not found\n");
        exit(1);
    }
    for (int i = 1; i <= 30; i++)
    {
        ch = fgetc(f2);
        while (ch != '$')
        {

            printf("%c", ch);
            ch = fgetc(f2);
        }

        printf("\t\t\t\t");
        fscanf(f1, "%d", &n);
        printf("%d", n);
        printf("\n");
    }
    fclose(f1);
    fclose(f2);
}
// function for add to inventory
void updateinventry()
{
    printf("\n\n");
    for (int i = 0; i < 130; i++)
    {
        printf("-");
    }

    printf("\n\n");
    int n, stock;
    printf("Enter the Fruit Code:-");
    scanf("%d", &n);
    printf("\n\n");
    printf("Enter the new stock:-");
    scanf("%d", &stock);
    printf("\n\n");
    int n1;
    FILE *f1, *f2;

    f1 = fopen("inventory.txt", "r");
    f2 = fopen("temp.txt", "a");
    if (f1 == NULL || f2 == NULL)
    {
        printf("\n Error: Cannot Open File");
        exit(1);
    }
    for (int i = 1; i < n; i++)
    {
        fscanf(f1, "%d", &n1);
        fprintf(f2, "%d\n", n1);
    }
    fscanf(f1, "%d", &n1);
    fprintf(f2, "%d\n", stock);
    for (int i = n + 1; i <= 30; i++)
    {
        fscanf(f1, "%d", &n1);
        fprintf(f2, "%d\n", n1);
    }
    fclose(f1);
    fclose(f2);
    remove("inventory.txt");
    rename("temp.txt", "inventory.txt");
    printf("\t\t\t\t\t\t\t***Stock updated***\n");
}
// delete from inventory
void deleteinventory()
{
    printf("\n\n");
    for (int i = 0; i < 130; i++)
    {
        printf("-");
    }
    printf("\n\n");
    int n, stock;
    printf("Enter the Fruit Code:-");
    scanf("%d", &n);
    int n1;
    FILE *f1, *f2;

    f1 = fopen("inventory.txt", "r");
    f2 = fopen("temp.txt", "a");
    if (f1 == NULL || f2 == NULL)
    {
        printf("\n Error: Cannot Open File");
        exit(1);
    }
    for (int i = 1; i < n; i++)
    {
        fscanf(f1, "%d", &n1);
        fprintf(f2, "%d\n", n1);
    }
    fscanf(f1, "%d", &n1);
    fprintf(f2, "%d\n", 0);
    for (int i = n + 1; i <= 30; i++)
    {
        fscanf(f1, "%d", &n1);
        fprintf(f2, "%d\n", n1);
    }
    fclose(f1);
    fclose(f2);
    remove("inventory.txt");
    rename("temp.txt", "inventory.txt");
    printf("\t\t\t\t\t\t\t***Stock deleted***\n");
}
// function for making bill

struct order
{
    int item;
    float price;
    int quantity_h;
    int quantity_f;
};
typedef struct order order;
order r[30];

void bill(order *r)
{
    clrscr();
    printf("\n\n");
    printf("\t\t\t\t\t\t\t*** BILLING ***");
    int n;
    float sum = 0;
    float s[30];
    printf("\n\n");
    printf("Please enter the number of different types of juice coustomer want to purchases : ");
    scanf("%d", &n);
    if (n > 0 && n < 31)
    {
        printf("\n");
        for (int i = 0; i < n; i++)
        {
            int c;
            printf("\n");
            printf("***Item serial number is  Item's code**");
            printf("\n\n");
            printf("Please enter the item_%d code : ", i + 1);
            scanf(" %d", &c);
            printf("\n");
            printf("Please enter the no. of half glass : ");
            scanf("%d", &r[i].quantity_h);
            printf("\n");
            printf("Please enter the no. of full glass : ");
            scanf("%d", &r[i].quantity_f);
            s[i] = (r[i].quantity_h) * (h[c - 1]) + (r[i].quantity_f) * (f[c - 1]);
            printf("\n");
            printf("Total price of the %d item is  : %.2f ", i + 1, s[i]); // unit price of juice
            printf("\n");

            for (int i = 0; i < 130; i++)
            {
                printf("-");
            }
            printf("\n");
        }
        for (int i = 0; i < n; i++)
        {
            sum += s[i];
        }
        printf("Total Bill Amount : %.2f ", sum);
        printf("\n");
        for (int i = 0; i < 130; i++)
        {
            printf("-");
        }
    }
    else
    {
        printf("\n\n");
        printf("\t\t\t\t\t\t!! INVALID INPUT !!");
        printf("\nPress any key to go back to main menu\n");
        getch();
        mainmenu();
    }
}
// Function for update price

struct update
{
    float half;
    float full;
};
typedef struct update update;
update u[30];
void updateprice(update *u)
{
    clrscr();
    int n, H, F, B, O;
    int m;
    int x = 1;

    printf("\n\n");
    printf("Enter the number of items in which you want to make changes");
    printf("\n");
    printf("Enter here :-");
    scanf(" %d", &n);
    if (n > 0 && n < 31)
    {

        printf("\n\n");
        for (int i = 0; i < n; i++)
        {
            printf("Enter the item_%d code in which you want to make change", i + 1);
            printf("\n");
            printf("Enter here :-");
            scanf(" %d", &m);
            printf("\n\n");

            printf("Please select your option :- "); // options for changes
            printf("\n\n");
            printf("1. Press '1' for make change in half.");
            printf("\n\n");

            printf("2. Press '2' for make change in full");
            printf("\n\n");

            printf("3. Press '3' for make changes in both half and full");
            printf("\n\n");

            printf("Enter here :- ");
            scanf("%d", &O);

            switch (O)
            {
            case 1:
                printf("\n\n"); // entering new price
                printf("Enter new price");
                printf("\n");
                printf("Enter here :- ");
                scanf(" %f", &u[i].half);
                h[m - 1] = u[i].half; // updating prices
                break;

            case 2:

                printf("Enter new price"); // entering new price
                printf("\n");
                printf("Enter here :- ");
                scanf(" %f", &u[i].full);
                f[m - 1] = u[i].full; // updating price
                break;

            case 3:

                printf("Enter new price for half");
                printf("\n");
                printf("Enter here :- ");
                scanf("%f", &u[i].half); // entering new prices
                h[m - 1] = u[i].half;
                printf("\n");
                printf("Enter new price for full");
                printf("\n");
                printf("Enter here :- ");
                scanf("%f", &u[i].full);
                f[m - 1] = u[i].full;
                printf("\n\n");
                break;
            }
        }
    }
    else
    {
        printf("\t\t\t\t\t\t!! INVALID INPUT !!");
        printf("\nPress any key to go back to main menu\n");
        getch();
        mainmenu();
    }
}

// main function

int main()
{

    for (int i = 0; i < 45; i++)
    {
        printf(" _ ");
    }
    printf("\n\n");

    printf("\t\t\t\t\t\t*** FRESH SQUEEZE JUICE & BAR ***\n");
    printf("\n");

    for (int i = 0; i < 45; i++)
    {
        printf(" _ ");
    }
    printf("\n\n");

    printf("\t\t\t\t\t- Don't take tension when fruit juice gives you a fit sensation!");
    printf("\n\n");

    int y = choice(); // variable to store return value of function choice
                      // int n=mainmenu();
    if (y == 1)       // enters if user choose to login
    {
        int z = login(); // variable to store return value of function login
        if (z == 1)      // enters if username and password is correct
        {
            int c;
            int n = 1;

            while (n)
            {
                // clrscr();
                n = mainmenu(); // function to display menu

                switch (n)
                {
                case 1:
                    pricechart();
                    break;
                case 2:
                    checkprice();
                    break;
                case 3:
                    updateprice(u);
                    break;
                case 4:
                    showinventory();
                    break;
                case 5:
                    updateinventry();
                    break;
                case 6:
                    deleteinventory();
                    break;

                case 7:
                    bill(r);
                    break;

                case 8:
                    printf("\n\n\n");
                    printf("\t\t\t\t\t\t *** THANK YOU HAVE A NICE DAY ***");

                    return 0;
                    break;
                }
            }
        }

        if (z == 2)
        {
            return 0;
        }

        if (y == 2)
        {
            return 0;
        }
    }
}