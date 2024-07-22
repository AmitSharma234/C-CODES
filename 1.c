#include <stdio.h>
int choise = 0, b = 1, q, s, d, t, c, i, s1, d1, t1, c1, i1, tBill = 0;
void menu()
{
    printf("::MENU::\n");
    printf("1.SAMOSA 20/-\n");
    printf("2.MASALA DOSA 40/-\n");
    printf("3.TEA 10/-\n");
    printf("4.COFFEE 50/-\n");
    printf("5.ICE CREAM 30/-\n");
    printf("0.EXIT\n");
}
int coffemenu(){
    printf("\n\n*********Coffe-Menu*********\n");
	int a;
	    printf(" 1.Espresso 150/-\n");
        printf(" 2.Cappuccino 180/-\n");
        printf(" 3.Latte 130/-\n");
        printf(" 4.Americano 150/-\n");
        printf(" 5.Caffe mocha 180/-\n");
         printf("\n----------------------------------------------\n");
        switch (choise)
        {
        case 1:
            printf("YOU HAVE ORDERED Espresso \n");
            printf("\n----------------------------------------------\n");
            printf("HOW MANY ");
            quantity(choise);
             scanf("%d", &s);
            printf("\n----------------------------------------------\n");
            s1 += s;
            printf("YOU ORDERED %d PLATE OF Espresso \n",s);
            printf("\n----------------------------------------------\n");
            printf("YOUR ORDER WILL READY AS SOON AS POSSIBLE\n");
            printf("\n----------------------------------------------\n");
            billing(s * 150);

            break;

        case 2:
            printf("YOU HAVE ORDERED Cappuccino\n");
            printf("\n----------------------------------------------\n");
            printf("HOW MANY ");
            quantity(choise);
            scanf("%d", &d);
            printf("\n----------------------------------------------\n");
            d1 += d;
            printf("YOU ORDERED %d PLATE OF Cappuccino\n",d);
            printf("\n----------------------------------------------\n");
            printf("YOUR ORDER WILL READY AS SOON AS POSSIBLE\n");
            printf("\n----------------------------------------------\n");
            billing(d * 180);

            break;

        case 3:
            printf("YOU HAVE ORDERED Latte\n");
            printf("\n----------------------------------------------\n");
            printf("HOW MANY ");
            quantity(choise);
            scanf("%d", &t);
            printf("\n----------------------------------------------\n");
            t1 += t;
            printf("YOU ORDERED %d CUP OF Latte\n",t);
            printf("\n----------------------------------------------\n");
            printf("YOUR ORDER WILL READY AS SOON AS POSSIBLE\n");
            printf("\n----------------------------------------------\n");
            billing(t * 130);

            break;

        case 4:
            printf("YOU HAVE ORDERED Americano\n");
            printf("\n----------------------------------------------\n");
            printf("HOW MANY ");
            quantity(choise);
            scanf("%d", &c);
            printf("\n----------------------------------------------\n");
            c1 += c;
            printf("YOU ORDERED %d CUP OF Americano\n",c);
            printf("\n----------------------------------------------\n");
            printf("YOUR ORDER WILL READY AS SOON AS POSSIBLE\n");
            printf("\n----------------------------------------------\n");
            billing(c * 150);

            break;

        case 5:
            printf("YOU HAVE ORDERED Caffe mocha\n");
            printf("\n----------------------------------------------\n");
            printf("HOW MANY ");
            quantity(choise);
            scanf("%d", &i);
            printf("\n----------------------------------------------\n");
            i1 += i;
            printf("YOU ORDERED %d CUP OF Caffe mocha\n",i);
            printf("\n----------------------------------------------\n");
            printf("YOUR ORDER WILL READY AS SOON AS POSSIBLE\n");
            printf("\n----------------------------------------------\n");
            billing(i * 180);

            break;
        }
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
        printf("CUPS=");
        break;
    case 4:
        printf("CUPS =");
        break;
    case 5:
        printf("CUPS=");
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
            printf("YOU ORDERED %d PLATE OF SAMOSA \n",s);
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
            printf("YOU ORDERED %d PLATE OF MASALA DOSA\n",d);
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
            printf("YOU ORDERED %d CUP OF TEA\n",t);
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
            printf("YOU ORDERED %d CUP OF COFFEE\n",c);
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
            printf("YOU ORDERED %d CUP OF ICE-CREAM\n",i);
            printf("\n----------------------------------------------\n");
            printf("YOUR ORDER WILL READY AS SOON AS POSSIBLE\n");
            printf("\n----------------------------------------------\n");
            billing(i * 30);

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
}
void money()
{

    int cash, rCash;
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

int main()
{
    printf("::WELCOME TO A&M CAFE::\n");
    order();
    printf(" Item      | Qty  | Rate | Total\n");
    printf("---------------------------------------------------\n");
    table();
    printf("---------------------------------------------------\n");
    printBill();
    printf("---------------------------------------------------\n");
    money();
    printf("\n-------------------------------------------------\n");
    printf("THANK YOU FOR VISTING OUR CAFE\n");
    printf("I HOPE YOU ARE SATISFIED WITH OUR SERVICE AND THE FOOD\n");
    return 0;
}