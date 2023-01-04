#include<stdio.h>
#include<stdlib.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main(){
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum = sum_composite_numbers(n,a);
  output(sum);
}

int input_array_size(){
  int a;
  printf("Enter the size of the array\n");
  if (scanf("%d",&a) !=1){
     printf("Error in user input no point continuing");
    exit (0);
  }
  return a;
}

void input_array(int n, int a[n]){
  int i;
  printf("Enter the numbers\n");
  for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
}

int sum_composite_numbers(int n, int a[n]){
  int i, count = 0,sum=0;
 for(i= 1;i <=n;i++)
{
 if (n%i == 0)
 count = count+1; 
  sum=sum+a[i];
   
 }
   return (count,sum); 
} 

void output(int sum){
  int i,n,a[n];
  for(i = 0;i<n-1;i++){
    printf("%d + ", a[i]);
  }
  printf("%d = %d",a[n-1],sum);
}


