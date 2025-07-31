#include<stdio.h>
#define pi  3.1416
#include<math.h>
int main(){
int wavelength3 = 530;
int wavelength2 = 700;
int third_order = 3;
int second_order = 2;
float rad= pi/180;
float mul = wavelength3*0.000000001*3;
float mul1 = wavelength2*0.000000001*2;
float result= sin(65.0*rad);
float div = result/mul;
float reverse = asin(div*mul1);
//printf("%f",reverse);

printf("The angle of %f radian will the second order bright spot be for red light",reverse);





}
