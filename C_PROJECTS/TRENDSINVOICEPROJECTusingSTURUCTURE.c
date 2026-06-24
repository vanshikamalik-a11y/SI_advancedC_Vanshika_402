#include <stdio.h>

// 1. Sabse pehle humne ek structure define kiya (Jaise aaj class mein padha)
struct Item {
    int item_id;
    char brand_name[20];
    char item_name[20];
    float price;
    float discount;
    int stock_quantity;
};

int main()
{
    // 2. Ab alag-alag arrays ki jagah, humne structure ka ek SINGLE ARRAY banaya
    // Aur isme wahi saara data bilkul simple tarike se initialize kar diya.
    struct Item shop[10] = {
        {101, "Arrow", " Formal Shirt", 1500.0, 12.0, 20},
        {102, "Peter England", "Jeans", 1800.0, 15.0, 18},
        {103, "US Polo", "T-Shirt", 2000.0, 20.0, 8},
        {104, "Zara", "Jacket", 2500.0, 10.0, 19},
        {105, "H&M", "Sweater", 1200.0, 25.0, 7},
        {106, "Armani", "Suit", 5000.0, 30.0, 15},
        {107, "Gucci", "Hoodie", 4500.0, 18.0, 12},
        {108, "chanel", "Top", 5500.0, 33.0, 5},
        {109, "Snitch", "Shirts", 4000.0, 35.0, 10},
        {110, "Levis", "Shorts", 3300.0, 28.0, 12}
    };

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
                // Yahan variable access karne ke liye dot (.) operator ka use kiya hai
                printf("%d\t%s\t\t%s\t\t%.2f\t%.2f\t\t%d\n", 
                       shop[i].item_id, 
                       shop[i].brand_name, 
                       shop[i].item_name, 
                       shop[i].price, 
                       shop[i].discount, 
                       shop[i].stock_quantity);
            }
        }

        else if (choice == 2)
        {
            printf("****** enter item id to purchase ******: ");
            scanf("%d", &selected_id);

            found = 0;

            for (i = 0; i < 10; i++)
            {
                // Sab jagah purane arrays ko hata kar 'shop[i].' laga diya hai
                if (shop[i].item_id == selected_id)
                {
                    found = 1;
                    printf("enter quantity for %s %s: ", shop[i].brand_name, shop[i].item_name);
                    scanf("%d", &selected_qty);

                    if (selected_qty <= 0)
                    {
                        printf("****!!!Invalid Quantity Entered!!!****\n");
                    }
                    else if (selected_qty > shop[i].stock_quantity)
                    {
                        printf("****!!!Not enough stock available!!!****\n");
                    }
                    else
                    {
                        item_final_price = shop[i].price - (shop[i].price * shop[i].discount / 100.0);
                        float current_total = item_final_price * selected_qty;

                        printf("\n--- PURCHASE DETAILS ---\n");
                        printf("Original Price (Per Item): Rs. %.2f\n", shop[i].price);
                        printf("Discount Offered: %.2f%%\n", shop[i].discount);
                        printf("Price After Discount (Per Item): Rs. %.2f\n", item_final_price);
                        printf("Total for %d quantity: Rs. %.2f\n", selected_qty, current_total);
                        printf("------------------------\n");

                        total_bill = total_bill + current_total;
                        shop[i].stock_quantity = shop[i].stock_quantity - selected_qty;

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