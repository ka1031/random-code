#include <stdio.h>
#include <string.h>

#define NUM_ITEMS 10

typedef struct
{
    float price;
    const char *name;
} item;

item menu[NUM_ITEMS];

void add_items(void)
{
    menu[0].name = "burger";
    menu[0].price = 11;

    menu[1].name = "hotdog";
    menu[1].price = 5;

    menu[2].name = "fries";
    menu[2].price = 5;

    menu[3].name = "water";
    menu[3].price = 2;

    menu[4].name = "cheesefries";
    menu[4].price = 6;
}

float get_cost(char *it)
{
    for (int i = 0; i <= 4; i++)
    {
        if (strcmp(it, menu[i].name) == 0)
        {
            return menu[i].price;
        }
    }
}

int main(void)
{
    add_items();
    char k[50];
    float sum = 0;
    do
    {
        printf("enter food item:");
        scanf("%s", &k);
        if (strcmp(k, "exit") == 0)
        {
            break;
        }
        float cost = get_cost(k);
        sum += cost;
    } while (1);
    printf("total bill:%f", sum);
}