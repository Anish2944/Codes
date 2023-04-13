#include <stdio.h>
#include <malloc.h>
void insertatstart();
void insertatend();
void insertatspec();
void deleteatstart();
void deleteatend();
void deleteatspec();
void display();
///////////////////////
struct node {
  int info;
  struct node *next;
};
typedef struct node NODE;
NODE *START = NULL;
///////////////////////
void main() {
  printf("1. Insert the element at BEGINING.\n");
  printf("2. Insert the element at END.\n");
  printf("3. Insert the element at SPECIFIC LOCATION.\n");
  printf("4. Delete FIRST ELEMENT.\n");
  printf("5. Delete LAST ELEMENT.\n");
  printf("6. Delete the element at SPECIFIC LOCATION.\n");
  printf("7. TRAVERSE the LIST.\n");
  int choice, item;
  int ch;
  do {
    printf("Enter the CHOICE:\n");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      insertatstart();
      break;
    case 2:
      insertatend();
      break;
    case 3:
      insertatspec();
      break;
    case 4:
      deleteatstart();
      break;
    case 5:
      deleteatend();
      break;
    case 6:
      deleteatspec();
      break;
    case 7:
      display();
      break;
    default:
      printf("Enter the CORRECT CHOICE.\n");
    }
    fflush(stdin);
    printf("\nDo you wish to continue(1/0)?\n");
    scanf("%d", &ch);
  }
  // while(ch=='Y'||ch=='y');
  while (ch == 1);
}
///////////////////////////
void insertatstart() {
  NODE *P;
  P = (NODE *)malloc(sizeof(NODE));
  int item;
  printf("Enter the ELEMENT to be inserted:\n");
  scanf("%d", &item);
  P->info = item;
  if (START == NULL) {
    P->next = NULL;
    START = P;
  } else {
    P->next = START;
    START = P;
  }
}
///////////////////////////
void insertatend() {
  NODE *P, *LOC;
  P = (NODE *)malloc(sizeof(NODE));
  int item;
  printf("Enter the ELEMENT to be inserted:\n");
  scanf("%d", &item);
  P->info = item;
  P->next = NULL;
  if (START == NULL) {
    START = P;
  } else {
    LOC = START;
    while (LOC->next != NULL) {
      LOC = LOC->next;
    }
    LOC->next = P;
    P->next = NULL;
  }
}
/////////////////////////////////
void insertatspec() {
  NODE *P, *LOC;
  P = (NODE *)malloc(sizeof(NODE));
  int item, loc, k;
  printf("Enter the ELEMENT to be inserted:\n");
  scanf("%d", &item);
  printf("Enter the LOCATION:\n");
  scanf("%d", &loc);
  P->info = item;
  LOC = START;
  for (k = 1; k < loc - 1; k++) {
    LOC = LOC->next;
  }
  P->next = LOC->next;
  LOC->next = P;
}
///////////////////////////////////
void deleteatstart() {
  NODE *P;
  if (START == NULL) {
    printf("LIST IS EMPTY.\n");
  } else {
    P = START;
    START = START->next;
    printf("Deleted ITEM:%d", P->info);
    free(P);
  }
}
///////////////////////////////////
void deleteatend() {
  NODE *P, *LOC;
  if (START == NULL) {
    printf("LIST is EMPTY.\n");
  } else if (START->next == NULL) {
    P = START;
    START = NULL;
    printf("Deleted ITEM:%d", P->info);
    free(P);
  } else {
    LOC = START;
    P = START->next;
    while (P->next != NULL) {
      LOC = P;
      P = P->next;
    }
    LOC->next = NULL;
    printf("Deleted ITEM:%d", P->info);
    free(P);
  }
}
//////////////////////////////////
void deleteatspec() {
  NODE *P, *TEMP;
  int loc;
  printf("Enter the LOCATION:\n");
  scanf("%d", &loc);
  if (START == NULL) {
    printf("LIST is EMPTY.\n");
  } else {
    P = START;
    for (int i = 0; i < loc - 1; i++) {
      TEMP = P;
      P = P->next;
    }
    printf("Delected ITEM:%d", P->info);
    TEMP->next = P->next;
    free(P);
  }
}
//////////////////////////////////
void display() {
  NODE *P;
  P = START;
  while (P != NULL) {
    printf("%d\t", P->info);
    P = P->next;
  }
}
