#include <stdio.h>
#include <stdlib.h>

struct Employee {

    float salary;
    float bonus;
    float deductions;
};

int main() {
    struct Employee employees[3];
    float total = 0.0;
    char *name[] = {"Ahmed","Amr","Waleed"};
    for (int i = 0; i < 3; i++) {
        printf("For %s \n",name[i]);

        printf("please Enter  Salary: ");
        scanf("%f", &employees[i].salary);

        printf("please Enter  Bonus: ");
        scanf("%f", &employees[i].bonus);

        printf("please Enter  Deductions: ");
        scanf("%f", &employees[i].deductions);

        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        total += employees[i].salary + employees[i].bonus - employees[i].deductions;
    }


    printf("Total value needed is : %.2f\n", total);

    return 0;
}
