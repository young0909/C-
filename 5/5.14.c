#include <stdio.h>
int main()
{ 
    double guess=1.5;
    int i;
    for(i=1;i<=1000;++i)
    {
       guess=(6*guess*guess*guess*guess-8*guess*guess*guess+6)/(8*guess*guess*guess-12*guess*guess+3);
    }
    printf("1.5附近的根是 %f\n", guess);
    return 0;
}
