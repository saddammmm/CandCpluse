#include <float.h>
#include<stdio.h>
int main(){
int Digs = DECIMAL_DIG;
double OneSeventh = 1.0/7.0;
printf("%.*e\n", Digs, OneSeventh);
}
