#include<stdio.h>
#include<math.h>
int main(){

float a1,a2,a3; int m,lambda;
printf("Enter a number of lambda in nm: ");
scanf("%d",&lambda);
if(lambda>=380&&lambda<=750){
float sum=lambda*0.000000001;
printf("Enter a value of order: m = ");
scanf("%d",&m);
printf("Enter three value of width of the slit in micrometer: ");

    scanf("%f%f%f",&a1,&a2,&a3);
     float mul1=a1*0.000001;
       float mul2=a2*0.000001;
         float mul3=a3*0.000001;
   float result1 = asin(m*sum/mul1);
   printf("Theta1: %f radian\n",result1);

float result2 = asin(m*sum/mul2);
printf("Theta2: %f radian\n",result2);
float result3 = asin(m*sum/mul3);
printf("Theta3: %f radian\n",result3);

if(result1>=result2&&result1>result3){
    printf("%f radian the larger theta for light bent more\n",result1);
}

if(result2>=result1&&result2>result3){
    printf("%f radian the larger theta for light bent more\n",result2);
}
else if(result3>=result1&&result3>result2){
    printf("%f radian the larger theta for light bent more\n",result3);
}
    if(result1==result2&&result2==result3){
        printf("There is no larger theta. So no light bent more);
            }

}
else{printf("Out of the range. Please enter a valid number.");}

}
