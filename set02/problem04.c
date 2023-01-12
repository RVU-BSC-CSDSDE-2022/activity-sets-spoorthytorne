#include<stdio.h>
#include<stdlib.h>
int input_array_size();
void input_array(int n, int a[n]);
int is_composite(int x);
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

int is_composite(int x){
  int count=0;
  for(int i = 1;i<=x;i++){
    if(x%i == 0){
      count++;
      if(count == 3){
        return(1);
      }
    }
  }
  return(0);
}

int sum_composite_numbers(int n, int a[n]){
  int i, count = 0,sum=0;
  for(i= 0;i < n;i++){
    count = is_composite(a[i]);
    if(count == 1)
      sum = sum+a[i];
    }
  return(sum);
}
void output(int sum){
  printf("Sum of all the composite number is %d\n",sum);
}


