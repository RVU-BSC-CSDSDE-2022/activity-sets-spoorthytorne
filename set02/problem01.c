#include<stdio.h>
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main(){
   float base,height,area;
   input(base,height);
   return 0;
}

void input(float base, float height) {
     float area;
     printf("Enter the value of base\n");
     scanf("%f",&base);
     printf("Enter the value of height\n");
     scanf("%f",&height);
     find_area(base,height,&area);
     output(base,height,area);
  }

void find_area(float base , float height, float *area) {
     *area=0.5*base*height;
}

void output(float base, float height, float area){
 printf("the area of triangle with base %2.1f and height %2.1f is %2.1f",base,height,area);
}