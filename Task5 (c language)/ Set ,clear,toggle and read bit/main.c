#include <stdio.h>
#include <stdlib.h>

void setBit(int num, int bitNum){
    int Num;
    Num =(num | (1 << bitNum));
    printf("SET-BIT (%d, %d) -> %d ",num,bitNum, Num );
}
void clearBit(int num, int bitNum){
    int Num;
    Num = num & ~(1 << bitNum);
    printf("CLEAR-BIT (%d, %d) -> %d ",num,bitNum, Num );
}
void toggleBit(int num, int bitNum){
    int Num;
    Num = num ^(1 << bitNum);
    printf("TOGGLE-BIT (%d, %d) -> %d ",num,bitNum, Num );
}
void readBit(int num, int bitNum){
    int Num;
    Num = (num >> bitNum) & 1;
    printf("READ-BIT (%d, %d) -> %d ",num,bitNum, Num );
}

void main(){
    int num;
    printf("Enter unsigned number: ");
    scanf("%d",&num);

    int bitNum;
    printf("Enter bit number: ");
    scanf("%d",&bitNum);
    if(bitNum<1||bitNum>7){
        printf("Error bitNumber ");
    }

    int funId,choice;
    printf("Choose:\n1-Set \n2-Clear \n3-Toggle \n4-Read\n");
    printf("Enter function id: ");
    scanf("%d",&funId);
    if(choice<1||choice>4){
        printf("Error choice \n ");

    switch(funId) {
    case 1:
        setBit(num, bitNum);
        break;
    case 2:
        clearBit(num, bitNum);
        break;
    case 3:
        toggleBit(num, bitNum);
        break;
    case 4:
        readBit(num, bitNum);
        break;
    default:
    printf("bitNum");
}
}
}
