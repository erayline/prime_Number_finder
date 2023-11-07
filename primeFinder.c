// Online C compiler to run C program online
#include <stdio.h>

int isPrime(int myNum){
    int kontrolNum = 2;
    int checkNum=0;
    while (kontrolNum<myNum){
        if((myNum%kontrolNum)==0){
            checkNum++;
        }
        kontrolNum++;
    }
    if (checkNum==0){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    // Write C code here
    int myNum;
    int whileKontrol =0;
    printf("numara gir: ");scanf("%i",&myNum);
    while(whileKontrol<100){
        if (isPrime(myNum)){
            printf("%i \n",myNum);
            whileKontrol++;
        }
        myNum++;
    }
    return 0;
}
