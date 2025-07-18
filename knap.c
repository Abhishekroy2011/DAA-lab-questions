#include <stdio.h>

struct Item {
    int weight;
    int profit;
    float ratio;
};

void sortItems(struct Item items[], int n) {
    struct Item temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(items[j].ratio > items[i].ratio) {
                temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
}

void fractionalKnapsack(struct Item items[], int n, int capacity) {
    sortItems(items, n);

    float totalProfit = 0.0;
    int remainingCapacity = capacity;

    for(int i = 0; i < n; i++) {
        if(items[i].weight <= remainingCapacity) {
            // Take whole item
            remainingCapacity -= items[i].weight;
            totalProfit += items[i].profit;
        } else {
            // Take fraction of item
            float fraction = (float)remainingCapacity / items[i].weight;
            totalProfit += items[i].profit * fraction;
            break;
        }
    }

    printf("Maximum profit: %.2f\n", totalProfit);
}

int main() {
    int n, capacity;

    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item items[n];

    printf("Enter profit and weight of each item:\n");
    for(int i = 0; i < n; i++) {
        printf("Item %d - Profit: ", i + 1);
        scanf("%d", &items[i].profit);
        printf("Item %d - Weight: ", i + 1);
        scanf("%d", &items[i].weight);
        items[i].ratio = (float)items[i].profit / items[i].weight;
    }

    printf("Enter knapsack capacity: ");
    scanf("%d", &capacity);

    fractionalKnapsack(items, n, capacity);

    return 0;
}
