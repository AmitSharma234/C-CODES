#include<stdio.h>

int optionmenu();
int coffemenu();
int desertmenu();
int foodmenu();
 
int main()
{
	printf("\t\t\t\t\tWelcome To Cafe");
  printf("\n\n*********Menu*********\n");
	        int d;
	        printf(" 1.Coffe-Menu\n");
             printf(" 2.Desert-Menu\n");
            printf(" 3.Food-Menu\n");
	
	        switch(d)
        {
	        case 1:printf("You Choose Coffe-Menu\n");
			coffemenu();                 
                   break;
            case 2:printf("You order Desert-Menu\n");
			desertmenu();                  
                   break;
            case 3:printf("You order Food-Menu\n"); 
				foodmenu();             
                   break;
            default:printf("Please enter valid number for order your desert");
                  break;
                  printf("What Do You Want Order");
        scanf("%d",&d);
              }
	
	return 0; 
}

int coffemenu(){
    printf("\n\n*********Coffe-Menu*********\n");
	int a;
	    printf(" 1.Espresso\n");
        printf(" 2.Cappuccino\n");
        printf(" 3.Latte\n");
        printf(" 4.Americano\n");
        printf(" 5.Caffe mocha\n");
        printf("What Do You Want Order");
        scanf("%d",&a);
        switch(a)
        {
            case 1:printf("You order Espresso\n");
                   printf("Espresso price:250 rupees\n");
                   break;
            case 2:printf("You order Cappuccino\n");
                   printf("Cappuccion price:180 rupees\n");
                   break;
            case 3:printf("You order  Latte\n");
                   printf("Latte price:190 rupees\n");
                   break;
            case 4:printf("You order Americano\n");
                   printf("Americano price:280 rupees\n");
                   break;
            case 5:printf("You order Caffe mocha\n");
                   printf("Caffe mocha price:310 rupees\n");
                   break;
            default:printf("Please enter valid number for order your coffee\n");
                  break;
}
return a;
}
int desertmenu(){
    printf("\n\n*********Desert-Menu*********\n");
	int b;
	    printf(" 1.Cupcake\n");
        printf(" 2.ChessCake\n");
        printf(" 3.ChocolateCake\n");
        printf(" 4.Fruitsalad\n");
        printf(" 5.IcecreamCone\n");
        printf("What Do You Want Order");
        scanf("%d",&b);
        switch(b)
        {
            case 1:printf("You order Cupcake\n");
                   printf("Cupcake price:150 rupees");
                   break;
            case 2:printf("You order Chesscake\n");
                   printf("Chesscake price:180 rupees");
                   break;
            case 3:printf("You order  chocolatecake\n");
                   printf("Chocolateckae price:120 rupees");
                   break;
            case 4:printf("You order Fruitsalad\n");
                   printf("Fruitsalad price:100 rupees");
                   break;
            case 5:printf("You order Icecreamcone\n");
                   printf("Icecreamecone price:90 rupees");
                   break;
            default:printf("Please enter valid number for order your desert");
                  break;
}
return b;
}
int foodmenu(){
    printf("\n\n*********Food-Menu*********\n");
	int c;
	    printf(" 1.Ham Sandwich\n");
        printf(" 2.Tuna Sandwich\n");
        printf(" 3.Chees sandwich\n");
        printf(" 4.Soup\n");
        printf(" 5.Salad\n");
        printf("What Do You Want Order");
        scanf("%d",&c);
        switch(c)
        {
            case 1:printf("You order Ham Sandwich\n");
                   printf(" Ham Sandwich price:150 rupees");
                   break;
            case 2:printf("You order Tuna Sandwich\n");
                   printf("Tuna Sandwich price:120 rupees");
                   break;
            case 3:printf("You order  Chess Sandwich\n");
                   printf("Chess Sandwich price:180 rupees");
                   break;
            case 4:printf("You order Soup\n");
                   printf("Soup price:100 rupees");
                   break;
            case 5:printf("You order Salad\n");
                   printf("Salad price:90 rupees");
                   break;
            default:printf("Please enter valid number for order your Food");
                  break;
}
return c;
}
optionmenu(){
	        printf("\n\n*********Menu*********\n");
	        int d;
	        printf(" 1.Coffe-Menu\n");
             printf(" 2.Desert-Menu\n");
            printf(" 3.Food-Menu\n");
	
	        switch(d)
        {
	        case 1:printf("You Choose Coffe-Menu\n");
			coffemenu();                 
                   break;
            case 2:printf("You order Desert-Menu\n");
			desertmenu();                  
                   break;
            case 3:printf("You order Food-Menu\n"); 
				foodmenu();             
                   break;
            default:printf("Please enter valid number for order your desert");
                  break;
                  printf("What Do You Want Order");
        scanf("%d",&d);
              }
	return d;
}
