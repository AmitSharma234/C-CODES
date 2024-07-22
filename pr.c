#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int choise = 0, cash, b = 1, q, s, d, t, c, i, m1, n1, o1, p1, a1, s1, d1, t1, c1, i1, tBill = 0, m, n, o, p, a;
int rCash;
void menu()
{
    printf("::MENU::\n");
    printf("1.SAMOSA 20/-\n");
    printf("2.MASALA DOSA 35/-\n");
    printf("3.TEA 10/-\n");
    printf("4.COFFEE 50/-\n");
    printf("5.ICE CREAM 30/-\n");
    printf("6.DABELI 30/-\n");
    printf("7.VADAPAV 30/-\n");
    printf("8. VEGETABLE SANDWICH WITH GRILL 50/-\n");
    printf("9.KACHORI 30/-\n");
    printf("10. AALU  MATTAR SANDWICH WITH GRILL 120/-\n");
    printf("0.EXIT\n");
}
void quantity(int choise)
{
    switch (choise)
    {
    case 1:
        printf("PLATE=");
        break;
    case 2:
        printf("PLATE =");
        break;
    case 3:
        printf("CUP=");
        break;
    case 4:
        printf("CUP=");
        break;
    case 5:
        printf("CUPS=");
        break;
    case 6:
        printf("PLATE=");
        break;
    case 7:
        printf("PLATE=");
        break;
    case 8:
        printf("PLATE=");
        break;
    case 9:
        printf("PLATE=");
        break;
    case 10:
        printf("PLATE=");
        break;
    }
}

void billing(int cBill)
{
    tBill += cBill;
}

void printBill()
{
    printf("G Total = %d\n", tBill);
}
void order()
{
    while (b)
    {
        menu();
        printf("ENTER YOUR ORDER HERE\n");
        scanf("%d", &choise);
        printf("\n----------------------------------------------\n");
        switch (choise)
        {
        case 1:
            printf("YOU HAVE ORDERED SAMOSA\n");
            printf("\n----------------------------------------------\n");
            printf("HOW MANY ");
            quantity(choise);
            scanf("%d", &s);
            printf("\n----------------------------------------------\n");
            s1 += s;
            printf("YOU ORDERED %d PLATE OF SAMOSA \n", s);
            printf("\n----------------------------------------------\n");
            printf("YOUR ORDER WILL READY AS SOON AS POSSIBLE\n");
            printf("\n----------------------------------------------\n");
            billing(s * 20);

            break;

        case 2:
            printf("YOU HAVE ORDERED MASALA DOSA\n");
            printf("\n----------------------------------------------\n");
            printf("HOW MANY ");
            quantity(choise);
            scanf("%d", &d);
            printf("\n----------------------------------------------\n");
            d1 += d;
            printf("YOU ORDERED %d PLATE OF MASALA DOSA\n", d);
            printf("\n----------------------------------------------\n");
            printf("YOUR ORDER WILL READY AS SOON AS POSSIBLE\n");
            printf("\n----------------------------------------------\n");
            billing(d * 35);

            break;

        case 3:
            printf("YOU HAVE ORDERED TEA\n");
            printf("\n----------------------------------------------\n");
            printf("HOW MANY ");
            quantity(choise);
            scanf("%d", &t);
            printf("\n----------------------------------------------\n");
            t1 += t;
            printf("YOU ORDERED %d CUP OF TEA\n", t);
            printf("\n----------------------------------------------\n");
            printf("YOUR ORDER WILL READY AS SOON AS POSSIBLE\n");
            printf("\n----------------------------------------------\n");
            billing(t * 10);

            break;

        case 4:
            printf("YOU HAVE ORDERED COFFEE\n");
            printf("\n----------------------------------------------\n");
            printf("HOW MANY ");
            quantity(choise);
            scanf("%d", &c);
            printf("\n----------------------------------------------\n");
            c1 += c;
            printf("YOU ORDERED %d CUP OF COFFEE\n", c);
            printf("\n----------------------------------------------\n");
            printf("YOUR ORDER WILL READY AS SOON AS POSSIBLE\n");
            printf("\n----------------------------------------------\n");
            billing(c * 50);

            break;

        case 5:
            printf("YOU HAVE ORDERED ICE-CREAM\n");
            printf("\n----------------------------------------------\n");
            printf("HOW MANY ");
            quantity(choise);
            scanf("%d", &i);
            printf("\n----------------------------------------------\n");
            i1 += i;
            printf("YOU ORDERED %d CUP OF ICE-CREAM\n", i);
            printf("\n----------------------------------------------\n");
            printf("YOUR ORDER WILL READY AS SOON AS POSSIBLE\n");
            printf("\n----------------------------------------------\n");
            billing(i * 30);

            break;

        case 6:
            printf("YOU HAVE ORDERED DABELI \n");
            printf("\n----------------------------------------------\n");
            printf("HOW MANY ");
            quantity(choise);
            scanf("%d", &m);
            printf("\n----------------------------------------------\n");
            m1 += m;
            printf("YOU ORDERED %d PLATE OF DABELI\n", m);
            printf("\n----------------------------------------------\n");
            printf("YOUR ORDER WILL READY AS SOON AS POSSIBLE\n");
            printf("\n----------------------------------------------\n");
            billing(m * 30);

            break;

        case 7:
            printf("YOU HAVE ORDERED VADAPAV \n");
            printf("\n----------------------------------------------\n");
            printf("HOW MANY ");
            quantity(choise);
            scanf("%d", &n);
            printf("\n----------------------------------------------\n");
            n1 += n;
            printf("YOU ORDERED %d PLATE OF VADAPAV\n", n);
            printf("\n----------------------------------------------\n");
            printf("YOUR ORDER WILL READY AS SOON AS POSSIBLE\n");
            printf("\n----------------------------------------------\n");
            billing(n * 30);

            break;

        case 8:
            printf("YOU HAVE ORDERED VEGETABLE SANDWICH WITH GRILL \n");
            printf("\n----------------------------------------------\n");
            printf("HOW MANY ");
            quantity(choise);
            scanf("%d", &o);
            printf("\n----------------------------------------------\n");
            o1 += o;
            printf("YOU ORDERED %d PLATE OF VEGETABLE SANDWICH WITH GRILL\n", o);
            printf("\n----------------------------------------------\n");
            printf("YOUR ORDER WILL READY AS SOON AS POSSIBLE\n");
            printf("\n----------------------------------------------\n");
            billing(o * 50);

            break;

        case 9:
            printf("YOU HAVE ORDERED KACHORI \n");
            printf("\n----------------------------------------------\n");
            printf("HOW MANY ");
            quantity(choise);
            scanf("%d", &p);
            printf("\n----------------------------------------------\n");
            p1 += p;
            printf("YOU ORDERED %d PLATE OF KACHORI\n", p);
            printf("\n----------------------------------------------\n");
            printf("YOUR ORDER WILL READY AS SOON AS POSSIBLE\n");
            printf("\n----------------------------------------------\n");
            billing(p * 30);

            break;

        case 10:
            printf("YOU HAVE ORDERED AALU MATTAR SANDWICH WITH GRILL \n");
            printf("\n----------------------------------------------\n");
            printf("HOW MANY ");
            quantity(choise);
            scanf("%d", &a);
            printf("\n----------------------------------------------\n");
            a1 += a;
            printf("YOU ORDERED %d PLATE OF AALU  MATTAR SANDWICH WITH GRILL\n", a);
            printf("\n----------------------------------------------\n");
            printf("YOUR ORDER WILL READY AS SOON AS POSSIBLE\n");
            printf("\n----------------------------------------------\n");
            billing(a * 120);

            break;

        case 0:
            printf("EXIT\n");
            b = 0;

            break;
        }
    }
}

void table()
{
    if (s1)
    {
        printf(" SAMOSA    | %d  | 20  | %d\n", s1, s1 * 20);
    }
    if (d1)
    {
        printf(" MASALA DOSA      | %d  | 35  | %d\n", d1, d1 * 35);
    }
    if (t1)
    {
        printf(" TEA       | %d  | 10  | %d\n", t1, t1 * 10);
    }
    if (c1)
    {
        printf(" COFFEE    | %d  | 50  | %d\n", c1, c1 * 50);
    }
    if (i1)
    {
        printf(" ICE-CREAM | %d  | 30  | %d\n", i1, i1 * 20);
    }
    if (m1)
    {
        printf(" DABELI | %d  | 30  | %d\n", m1, m1 * 30);
    }
    if (n1)
    {
        printf(" VADAPAV | %d  | 30  | %d\n", n1, n1 * 30);
    }
    if (o1)
    {
        printf(" VEGETABLE SANDWICH WITH GRILL | %d  | 50  | %d\n", o1, o1 * 50);
    }
    if (p1)
    {
        printf(" KACHORI | %d  | 30  | %d\n", p1, p1 * 30);
    }
    if (a1)
    {
        printf(" AALU  MATTAR SANDWICH WITH GRILL | %d  | 120  | %d\n", a1, a1 * 120);
    }
}
void money()
{
    int rCash;
    printf("ENTER CASH GIVEN BY THE CUSTOMER : ");
    scanf("%d", &cash);
    rCash = cash - tBill;
    printf("RETURN CASH = %d\n\n", rCash);
    int note;
    for (int i = 100; i != 0; i = i / 2)
    {
        note = rCash / i;
        if (note == 0)
        {
            printf("");
        }
        else
        {
            printf("THERE ARE %d NOTE(s) OF %d\n", note, i);
        }
        rCash = rCash % i;
        if (i == 50)
        {
            i = 40;
        }
    }
}
void make()
{
    int paymentMethod;

    printf("CHOOSE PAYMENT METHOD:\n");
    printf("1. ONLINE PAYMENT\n");
    printf("2. OFFILNE PAYMENT\n");
    scanf("%d", &paymentMethod);

    if (paymentMethod == 1)
    {
        printf("ONLINE PAYMENT SUCCESSFUL!\n");
    }
    else if (paymentMethod == 2)
    {

        printf("");
        money();
    }
    else
    {
        printf("INVALID PAYMENT METHOD payment method selected.\n");
    }
}

void login()
{

    char name[25], email[25], pwd[25], ver[25];

    int i, a, digi = 0, up = 0, low = 0, schar = 0;

    char loginemail[25], loginpass[25];
    printf("REGISTRATION PAGE\n");

    printf("Enter your Name: ");

    scanf("%s", name);
    printf("Enter your E-mail\n");
    scanf("%s", email);
    printf("Hello %s, Enter your password:\n", name);

    scanf("%s", pwd);

    a = strlen(pwd);

    if (a < 5)

    {

        printf("Error: Password should contain minimum 5 characters ");
    }

    else if (a > 12)

    {

        printf("Error: Password shouldn't exceed 12 characters ");
    }

    else

    {

        for (i = 0; pwd[i] != 0; i++)

        {

            if (pwd[i] >= 'A' && pwd[i] <= 'Z')

                up++;

            if (pwd[i] >= 'a' && pwd[i] <= 'z')

                low++;

            if (pwd[i] >= '0' && pwd[i] <= '9')

                digi++;

            if (pwd[i] == '@' || pwd[i] == '#' || pwd[i] == '$')

                schar++;
        }
    }

    if (up == 0)
    {
        printf("There must be at least one Uppercase\n");
        exit(0);
    }
    if (low == 0)
    {
        printf("There must be at least one Lowercase\n");
        exit(0);
    }
    if (digi == 0)
    {
        printf("There must be at least one Digit\n");
        exit(0);
    }
    if (schar == 0)
    {
        printf("There must be at least one Special Character\n");
        exit(0);
    }
    else

        printf("Confirm your Password\n");

    scanf("%s", ver);

    if (strcmp(pwd, ver) == 0)

        printf("Welcome %s, your Password is Verified\n", name);

    else
    {
        printf("Password did not match\n");
        exit(0);
    }

    printf("LOGIN PAGE\n");
    printf("Enter your E-mail\n");
    scanf("%s", loginemail);
    printf("Enter your Password\n");
    scanf("%s", loginpass);
    if (strcmp(email,loginemail) == 0 && strcmp(pwd,loginpass) == 0)
    {
        printf("Login successful. Welcome, %s!\n", name);
    }
    else
    {
        printf("Invalid email or password\n Access denied.\n");
        exit(1);
    }
}

int main()
{

     login();
    printf("---------------------------------------------------\n");
    printf("::WELCOME TO A&M CAFE::\n");
    order();
    printf(" Item      | Qty  | Rate | Total\n");
    printf("---------------------------------------------------\n");
    table();
    printf("---------------------------------------------------\n");
    printBill();
    printf("---------------------------------------------------\n");
    make();
    printf("\n-------------------------------------------------\n");
    printf("THANK YOU FOR VISTING OUR CAFE\n");
    printf("I HOPE YOU ARE SATISFIED WITH OUR SERVICE AND THE FOOD\n");
    return 0;
}