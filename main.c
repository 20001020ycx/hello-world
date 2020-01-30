#include <stdio.h>
#include<math.h>

/**
 * Student Name: ChenXing Yang
 * Student Number:1005734001
 * Date:
 * Program Purpose: 
    Developing a load calculator to directly demonstrate the monthly payment
 */

int main(void){
    //Declaration of the variable 
    double purchasePrice,downPayment,interestRate;
    int financeTerm;
    const double percentage = 0.01;
    
    //Section of input 
    printf("Enter the purchase price P : ");
    scanf("%lf",&purchasePrice);
    
    printf("Enter the amount of down payment D : ");
    scanf("%lf",&downPayment);
    
    printf("Enter the finance term (in months) :  ");
    scanf("%d",&financeTerm);
    
    printf("Enter the monthly interest rate (in percent) : ");
    scanf("%lf",&interestRate);
	
    //Calculation of monthly payment
    double payment = ((purchasePrice-downPayment)*interestRate*percentage*pow((1+interestRate*percentage),financeTerm))
                    /(pow((1+interestRate*percentage),financeTerm)-1);
    
    printf("The monthly payment is : %.2lf\n", rint(payment*100)/100);
    
    return 0;
}


