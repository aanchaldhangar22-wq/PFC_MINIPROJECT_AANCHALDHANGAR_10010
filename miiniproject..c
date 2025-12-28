#include <stdio.h>
//declarations//
//AANCHAL DHANGAR RU 25 10010//
void printNumbers();
void printEven();
void printOdd();
int main() {
int choice;
printf("\n--- MENU ---\n");
printf("1. Print numbers from 1 to N\n");
printf("2. Print even numbers up to N\n");
printf("3. Print odd numbers up to N\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch(choice) {
case 1:
printNumbers();
break;
case 2:
break;
case 3:
printOdd();
case 4:
printf("Program terminated.\n");
break;
default:
printf("Invalid choice!\n");
}
return 0;
}
// Function to print numbers from 1 to N//
void printNumbers() {
int n, i;
printf("Enter N: ");
scanf("%d", &n);
for(i = 1; i <= n; i++) {
printf("%d ", i);
}
printf("\n");
}
// Function to print even numbers up to N//
void printEven() {
int n, i;
printf("Enter N: ");
scanf("%d", &n);
for(i = 2; i <= n; i += 2) {
printf("%d ", i);
}
printf("\n");
}
// Function to print odd numbers up to N//
void printOdd() {
int n, i;
printf("Enter N: ");
scanf("%d", &n);
for(i = 1; i <= n; i += 2) {
printf("%d ", i);
}
printf("\n");
}
//OUTPUT//
//--- MENU ---//
//1. Print numbers from 1 to N//
//2. Print even numbers up to N//
//3. Print odd numbers up to N//
//4. Exit//
//Enter your choice: 1//
//Enter N: 22//
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22// 
//Enter your choice: 2//
//Enter N: 22//
//2 4 6 8 10 12 14 16 18 20 22// 
//Enter your choice: 3//
//Enter N: 22//
//1 3 5 7 9 11 13 15 17 19 21// 
//Enter your choice: 4//
//Program terminated.//