/*
 * Description: This program takes the name, quantity and price (perunit)
 * of items and displays the total bill in a tabular format.
 */

#include <stdio.h>
#include <string.h>

typedef struct {
  char name[50];
  int quantity;
  float price_per_unit;
  float total_amt;
} Item;

int main() {
  // first ask the total number of items in the list
  int total_items;
  float total_bill = 0.0;
  printf("Please enter the total number of items: ");
  scanf("%d", &total_items);
  getchar();

  // then create an array of datatype Item
  Item items[total_items];

  // Take the input and calculate the total side by side.
  for (int i = 0; i < total_items; i++) {
    printf("Enter the name of item no. %d: ", i + 1);
    fgets(items[i].name, 50, stdin);
    items[i].name[strcspn(items[i].name, "\n")] = 0;

    printf("Enter the quantity of the item bought: ");
    scanf("%d", &items[i].quantity);
    getchar();

    printf("Enter the price per unit of %s: ", items[i].name);
    scanf("%f", &items[i].price_per_unit);
    getchar();

    items[i].total_amt = items[i].price_per_unit * items[i].quantity;
    total_bill += items[i].total_amt; // calculate the total bill.
    printf("\n");
  }

  // Print the bill
  printf("\n\n");
  printf("\tItem \tQuantity \tPrice \tAmount\n");
  for (int i = 0; i < total_items; i++)
    printf("\n\t%s \t %-10d \t%-10.2f \t%-5.2f\n", items[i].name,
           items[i].quantity, items[i].price_per_unit, items[i].total_amt);

  printf("\nTotal bill amount: %.2f\n", total_bill);
  return 0;
}
