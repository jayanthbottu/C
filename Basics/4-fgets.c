#include<stdio.h>
int main(){
char name[20];
puts("Enter Your name :");
fgets(name,sizeof(name), stdin);
printf("Your name : %s",name);
return 0;
}
// Output : 
Enter Your name :
Jayanth Bottu
Your name : Jayanth Bottu
