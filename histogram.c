#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_NUMBER 100
#define MAX_HISTOGRAM 10

int main(){

char ArrayOne[100];
int highestNumber = 0;

int numZero  = 0;
int numOne   = 0;
int numTwo   = 0; 
int numThree = 0;
int numFour  = 0;
int numFive  = 0;
int numSix   = 0;
int numSeven = 0;
int numEight = 0;
int numNine  = 0;



//STAGE 1 - Generate Random Numbers

srand(time(NULL));
for(int i = 0; i < MAX_NUMBER; i++){

    ArrayOne[i] = (int)(rand()/(double)RAND_MAX * 10);
}

for (int j = 0; j < sizeof(ArrayOne); j++){


    int number = sizeof(ArrayOne) /sizeof(ArrayOne[0]);

    if(ArrayOne[j] == 0){
        numZero = numZero + 1;
    }
    if(ArrayOne[j] == 1){
        numOne = numOne + 1;
    }
    if(ArrayOne[j] == 2){
        numTwo = numTwo + 1;
    }
    if(ArrayOne[j] == 3){
        numThree = numThree + 1;
    }
    if(ArrayOne[j] == 4){
        numFour = numFour + 1;
    }
    if(ArrayOne[j] == 5){
        numFive = numFive + 1;
    }
    if(ArrayOne[j] == 6){
        numSix = numSix + 1;
    }
    if(ArrayOne[j] == 7){
        numSeven = numSeven + 1;
    }
    if(ArrayOne[j] == 8){
        numEight = numEight + 1;
    }
    if(ArrayOne[j] == 9){
        numNine = numNine + 1;
    }
}

//STAGE 2 = NUMBERS IN SECOND ARRAY

//ArrayTwo Contains the number of times the numbers:(0 - 9) were generated
char ArrayTwo[MAX_HISTOGRAM] = {numZero, numOne, numTwo, numThree, numFour, numFive, numSix, numSeven, numEight, numNine};


printf("\n");

for(int i = 0; i < sizeof(ArrayTwo)/sizeof(ArrayTwo[0]); i++){
    //find the highest number from the Array
    if(highestNumber <= ArrayTwo[i]){highestNumber = ArrayTwo[i];}
}


printf("\n");


//STAGE 3 = CREATE HISTOGRAM 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


for(int i = 0; i < highestNumber; i++){
    
    printf("%-2d|", highestNumber - i);
    
    for(int j = 0; j < (sizeof(ArrayTwo)/sizeof(ArrayTwo[0])); j++){
        

        if((highestNumber - i) <= ArrayTwo[j]){
            printf(" * ");
        }else{
            printf("   ");
        }
        
    }
    printf("\n");
}

printf("   ");
for(int i = 0; i < (sizeof(ArrayTwo)/sizeof(ArrayTwo[0])); i++){
    printf("___");
}
printf("\n");
printf("   ");
for(int i = 0; i < (sizeof(ArrayTwo)/sizeof(ArrayTwo[0])); i++){
    printf(" %d ", i);
}
printf("\n");

return (0);

}
