#include <stdio.h>

#define MAX_MEALS 100

enum MealType { BUFFET, TAKEOUT, DRINK };

struct DailySales {
  enum MealType mealType;
  float weight;
  float price;
};

float getMealPrice(struct DailySales dailySales) {
  float mealPrice = 0.0;
  switch (dailySales.mealType) {
    case BUFFET:
      mealPrice = dailySales.weight * dailySales.price;
      break;
    case TAKEOUT:
      mealPrice = 20.0 + 0.5;  // fixed takeout meal price
      break;
    case DRINK:
      mealPrice = dailySales.price;
      break;
  }
  return mealPrice;
}

float calculateTotalSales(struct DailySales dailySales[MAX_MEALS], int numMeals) {
  float totalSales = 0.0;
  for (int i = 0; i < numMeals; i++) {
    totalSales += getMealPrice(dailySales[i]);
  }
  return totalSales;
}

void printDailyReport(struct DailySales dailySales[MAX_MEALS], int numMeals) {
  printf("Daily report\n");
  printf("------------\n");
  for (int i = 0; i < numMeals; i++) {
    printf("Meal %d:\n", i + 1);
    printf("  Type: ");
    switch (dailySales[i].mealType) {
      case BUFFET:
        printf("Buffet\n");
        printf("  Weight: %.2f kg\n", dailySales[i].weight);
        printf("  Price per kg: R$%.2f\n", dailySales[i].price);
        break;
      case TAKEOUT:
        printf("Takeout\n");
        printf("  Price: R$%.2f\n", 20.0);
        break;
      case DRINK:
        printf("Drink\n");
        printf("  Price: R$%.2f\n", dailySales[i].price);
        break;
    }
    printf("  Total price: R$%.2f\n", getMealPrice(dailySales[i]));
  }
  printf("Total sales: R$%.2f\n\n", calculateTotalSales(dailySales, numMeals));
}

void printMonthlyReport(float monthlySales[], int numMonths) {
  printf("Monthly report\n");
  printf("--------------\n");
  for (int i = 0; i < numMonths; i++) {
    printf("Month %d: R$%.2f\n", i + 1, monthlySales[i]);
  }
  printf("\n");
}

void bubbleSort(float arr[], int n) {
  int i, j;
  float temp;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] < arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int numDays = 30;  // number of days in a month
struct DailySales dailySales[numDays];
float monthlySales[numDays];
for (int i = 0; i < numDays; i++) {
// Simulating sales for each day
dailySales[i].mealType = BUFFET;
dailySales[i].weight = 0.5;
dailySales[i].price = 35.0;
monthlySales[i] = calculateTotalSales(dailySales, MAX_MEALS);
}

// Printing daily report for each day
for (int i = 0; i < numDays; i++) {
printf("Day %d\n", i + 1);
printf("-----\n");
printDailyReport(dailySales, MAX_MEALS);
}

// Printing monthly report
printMonthlyReport(monthlySales, numDays);

// Sorting monthly sales in descending order
bubbleSort(monthlySales, numDays);

// Printing monthly sales in descending order
printf("Monthly sales in descending order\n");
printf("---------------------------------\n");
for (int i = 0; i < numDays; i++) {
printf("%d. R$%.2f\n", i + 1, monthlySales[i]);
}

return 0;
}
