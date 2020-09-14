#include<stdio.h>
#include<math.h>
int main(){
	float x ;
	printf("Enter the number: ");
	scanf("%f",&x);
	printf("The floor vlaue of %.2f is %.1f\n",x,floor(x));
	printf("The ceiling vlaue of %.2f is %.1f\n",x,ceil(x));
}
