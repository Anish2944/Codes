#include <stdio.h>
#define max 5
void push();
void pop();
void display();
int stack[max];
int TOS = -1;
void main() {
  int choice;
  char ch;
  printf("1.Push\n2.Pop\n3.Display\n");
  do{
    printf("Enter choice\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:
      push();
      break;
      case 2:
      pop();
      break;
      case 3:
      display();
      break;
      default:
      printf("Enter a correct choice\n");
    }
      printf("Do you wish to continue\n");
      fflush(stdin);
      scanf("%c",&ch);
  }
    while(ch == 'y' || ch == 'Y');
}
  void push(){
  int item;
  if(TOS == max-1){
    printf("Stack is Full\n");
  }
  else{
    printf("Enter a element\n");
    scanf("%d",&item);
    TOS+=1;
    stack[TOS] = item;
  }
}
void pop(){
  int item;
  if(TOS == 1){
    printf("Stack is Empty\n");
  }
  else{
    item = stack[TOS];
    TOS -= 1;
  }
  printf("Deleted Item: %d\n",item);
}
void display(){
  int i;
  if(TOS == -1){
    printf("No Elements in stack\n");
  }
  else{
    for(i = TOS;i >= 0;i--){
      printf("%d\n",stack[i]);
    }
  }
}