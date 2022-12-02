#include <stdio.h>
int import();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main(){
  int a,b,c,l;
  a = input();
  b = input();
  c = input();
  compare(a,b,c,&l);
  output(a,b,c,l);
  
}

int input(){
  int x;
  printf("enter a number\n");
  scanf("%d", &x);
  return(x);  
}

void compare(int a,int b,int c,int *largest){
    {
	if (  a>=b && a>=c) 
		return a;
	if ( b>=c)
		return b;
	return c;
}

void output(int a, int b, int c, int largest){
  printf("the largest of %d,%d and %d is %d" ,a,b,c,largest); 
} 