#include <stdio.h>

int main()
{
    int item_id[10] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    char brand_name[10][20] = {"Arrow", "Peter England", "US Polo", "Zara", "H&M", "Armani", "Gucci", "chanel", "Snitch", "Levis"};
    char item_name[10][20] = {" Formal Shirt", "Jeans", "T-Shirt", "Jacket", "Sweater", "Suit", "Hoodie", "Top", "Shirts", "Shorts"};
    float price[10] = {1500.0, 1800.0, 2000.0, 2500.0, 1200.0, 5000.0, 4500.0, 5500.0, 4000.0, 3300.0};
    float discount[10] = {12.0, 15.0, 20.0, 10.0, 25.0, 30.0, 18.0, 33.0, 35.0, 28.0};
    int stock_quantity[10] = {20, 18, 8, 19, 7, 15, 12, 5, 10, 12};

    int choice;
    int selected_id;
    int selected_qty;
    int i;
    int found;
    float total_bill = 0.0;
    float item_final_price;

    printf("************************************************************\n");
    printf("================== WELCOME TO TRENDS =======================\n");
    printf("************************************************************\n");

    do
    {
        printf("\n\t\t\t\tTRENDS MENU\t\t\t\t \n");
        printf("\t\t\t\t1.Stock Available\t\t\t\t\n");
        printf("\t\t\t\t2.Purchase Items\t\t\t\t\n");
        printf("\t\t\t\t3.Checkout & Exit\t\t\t\t\n");
        printf("Enter your Choice: ");
        scanf("%d", &choice);

        while (choice < 1 || choice > 3)
        {
            printf("*************!!! You have entered Invalid Choice!!!**************\n");
            printf("Enter your Choice again: ");
            scanf("%d", &choice);
        }

        if (choice == 1)
        {
            printf("\nID\tBrand\t\tItem\t\tPrice\tDiscount\tStock\n");
            printf("--------------------------------------------------------------------\n");
            for (i = 0; i < 10; i++)
            {
                printf("%d\t%s\t\t%s\t\t%.2f\t%.2f\t\t%d\n", item_id[i], brand_name[i], item_name[i], price[i], discount[i], stock_quantity[i]);
            }
        }

        else if (choice == 2)
        {
            printf("****** enter item id to purchase ******: ");
            scanf("%d", &selected_id);

            found = 0;

            for (i = 0; i < 10; i++)
            {
                if (item_id[i] == selected_id)
                {
                    found = 1;
                    printf("enter quantity for %s %s: ", brand_name[i], item_name[i]);
                    scanf("%d", &selected_qty);

                    if (selected_qty <= 0)
                    {
                        printf("****!!!Invalid Quantity Entered!!!****\n");
                    }
                    else if (selected_qty > stock_quantity[i])
                    {
                        printf("****!!!Not enough stock available!!!****\n");
                    }
                    else
                    {

                        item_final_price = price[i] - (price[i] * discount[i] / 100.0);
                        float current_total = item_final_price * selected_qty;

                        printf("\n--- PURCHASE DETAILS ---\n");
                        printf("Original Price (Per Item): Rs. %.2f\n", price[i]);
                        printf("Discount Offered: %.2f%%\n", discount[i]);
                        printf("Price After Discount (Per Item): Rs. %.2f\n", item_final_price);
                        printf("Total for %d quantity: Rs. %.2f\n", selected_qty, current_total);
                        printf("------------------------\n");

                        total_bill = total_bill + current_total;
                        stock_quantity[i] = stock_quantity[i] - selected_qty;

                        printf("Successfully added to cart!\n");
                    }
                    break;
                }
            }
            if (found == 0)
            {
                printf("****!!!Item ID Not Found!!!****\n");
            }
        }

        else if (choice == 3)
        {
            printf("\n************************************************************\n");
            printf("====================== FINAL INVOICE =======================\n");
            printf("************************************************************\n");
            printf(" Total Amount to Pay: Rs. %.2f\n", total_bill);
            printf(" Thank you for shopping at TRENDS!\n");
            printf("************************************************************\n");
        }

    } while (choice != 3);

    return 0;
}