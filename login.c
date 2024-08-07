#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){

  char ch;
  char pass[40];
  char saved_pass[40];
  printf("\nEnter your password : ");
  int i=0;
  start:
  while(1){
  ch=getch();
  if(i==13){
    pass[i]='\0';
    break;
  }
  else{
    pass[i++]=ch;
    printf("*");

  }
  }
  printf("\nYou Entered : %s\n",pass);

  FILE *ptr;
  ptr=fopen("password.txt","x");
  fscanf(ptr,"%s",saved_pass);

  fclose(ptr);

printf("Saved Password %s\n",saved_pass);
  int l=strcmp(pass,saved_pass);
  if(l==0){
    printf("LOGIN SUCCESSFULLY\n");
  }
  else{
    printf("INCORRECT PASSWORD\n");
    goto start;
  }



}