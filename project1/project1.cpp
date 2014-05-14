#include "io.h"
#include "iostream"

int main(){
    int T, i;
    double r, B, NB, P, Interest, Principle;


    P=GetParam ("Please enter the monthly payment: ", 0, 100000);
    r=GetParam ("Please enter the interest rate: ", 0, 1);
    T=GetParam ("Please enter the duration of the loan, in years: ", 0, 100);

    PrintHeader();

    NB=0;

    for (i = 0; i < T; i++){
        B = (NB+P)/(1+r/12);
        Interest = B*r/12;
        Principle = P-Interest;
        NB = B;
        PrintMonthlyData (i+1, Principle, Interest, B);
    }


    return 0;

}

