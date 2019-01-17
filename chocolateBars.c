#include <stdio.h>


int main(){

int fixedBars = 48;

int ohHenryBars, CoffeeCrispBars, aeroBars, Smarties, crunchieBars;

float fixedCostHenry = 0.65;
float fixedCostCoffeeCrisp = 0.80;
float fixedCostAero = 0.60;
float fixedCostSmarties = 0.70;
float fixedCostCrunchie = 0.75;

printf("1. Oh Henry             $0.65\n");
printf("2. Coffee Crisp         $0.80\n");
printf("3. Aero                 $0.60\n");
printf("4. Smarties             $0.70\n");
printf("5. Crunchie             $0.75\n");


printf("How many boxes of Oh Henry bars would you like (48 bars per box) ?\n");
scanf("%d", &ohHenryBars);
float henryCost = ohHenryBars * (fixedCostHenry * fixedBars);

printf("How many boxes of Coffee Crisp bars would you like (48 bars per box) ?\n");
scanf("%d", &CoffeeCrispBars);
float CoffeeCrispCost = CoffeeCrispBars * (fixedCostCoffeeCrisp * fixedBars);

printf("How many boxes of Aero bars would you like (48 bars per box) ?\n");
scanf("%d", &aeroBars);
float aeroBarsCost = aeroBars * (fixedCostAero * fixedBars);

printf("How many boxes of Smarties would you like (48 bars per box) ?\n");
scanf("%d", &Smarties);
float SmartiesCost = Smarties * (fixedCostSmarties* fixedBars);

printf("How many boxes of Crunchie bars would you like (48 bars per box) ?\n");
scanf("%d", &crunchieBars);
float crunchieBarsCost = crunchieBars * (fixedCostCrunchie * fixedBars);

printf("\n\n");
printf("%-5d boxes of Oh Henry    ($0.65 x 48)  = $%0.2f\n", ohHenryBars , henryCost);
printf("%-5d boxes of Coffe Crisp ($0.80 x 48)  = $%0.2f\n", CoffeeCrispBars, CoffeeCrispCost);
printf("%-5d boxes of Aero        ($0.60 x 48)  = $%0.2f\n", aeroBars , aeroBarsCost);
printf("%-5d boxes of Smarties    ($0.70 x 48)  = $%0.2f\n", Smarties, SmartiesCost);
printf("%-5d boxed of Crunchie    ($0.75 x 48)  = $%0.2f\n", crunchieBars, crunchieBarsCost);


float subTotal = henryCost + CoffeeCrispCost + aeroBarsCost + SmartiesCost + crunchieBarsCost;

float hst = subTotal * 0.13;

float amountDue = subTotal + hst;

printf("-------------------------------------------------------\n"); 
printf("Sub Total                                = $%0.2f\n", subTotal);

printf("HST                                      = $%0.2f\n", hst);

printf("=======================================================\n");

printf("Amount Due                               = $%0.2f\n\n", amountDue);


return(0);

}
