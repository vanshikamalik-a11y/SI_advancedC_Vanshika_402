#include <stdio.h>
#include <string.h>

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
    
    struct Item shop[10] = {
        {101, "Arrow", "Formal_Shirt", 1500.0, 12.0, 20},
        {102, "Peter_England", "Jeans", 1800.0, 15.0, 18},
        {103, "US_Polo", "T-Shirt", 2000.0, 20.0, 8},
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
    
    
    int amt;
    int admin_choice;
    char password[20];
    FILE *fp;

    
    fp = fopen("shop_data.txt", "r");
    if (fp != NULL) 
    {
        for (i = 0; i < 10; i++) 
        {
            fscanf(fp, "%d %s %s %f %f %d", &shop[i].item_id, shop[i].brand_name, shop[i].item_name, &shop[i].price, &shop[i].discount, &shop[i].stock_quantity);
        }
        fclose(fp);
    }

    printf("************************************************************\n");
    printf("================== WELCOME TO TRENDS =======================\n");
    printf("************************************************************\n");

    do
    {
        printf("\n\t\t\t\tTRENDS MENU\t\t\t\t \n");
        printf("\t\t\t\t1.Stock Available\t\t\t\t\n");
        printf("\t\t\t\t2.Purchase Items\t\t\t\t\n");
        printf("\t\t\t\t3.Checkout & Exit\t\t\t\t\n");
        printf("\t\t\t\t4.Owner / Admin Panel\t\t\t\t\n"); 
        printf("Enter your Choice: ");
        scanf("%d", &choice);

        while ((choice < 1 || choice > 3) && choice != 4)
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
                printf("%d\t%s\t\t%s\t\t%.2f\t%.2f\t\t%d\n", 
                       shop[i].item_id, shop[i].brand_name, shop[i].item_name, shop[i].price, shop[i].discount, shop[i].stock_quantity);
            }
        }

        else if (choice == 2)
        {
            printf("****** enter item id to purchase ******: ");
            scanf("%d", &selected_id);

            found = 0;
            for (i = 0; i < 10; i++)
            {
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

                        
                        fp = fopen("shop_data.txt", "w");
                        for (int j = 0; j < 10; j++) 
                        {
                            fprintf(fp, "%d %s %s %.2f %.2f %d\n", shop[j].item_id, shop[j].brand_name, shop[j].item_name, shop[j].price, shop[j].discount, shop[j].stock_quantity);
                        }
                        fclose(fp);

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

        
        else if (choice == 4)
        {
            printf("Enter Admin Password: ");
            scanf("%s", password);

            if (strcmp(password, "admin123") == 0)
            {
                do {
                    printf("\n--- WELCOME OWNER ---\n");
                    printf("1. Refill Stock Quantity\n");
                    printf("2. Change Price & Discount\n");
                    printf("3. Back to Main Menu\n");
                    printf("Enter your choice: ");
                    scanf("%d", &admin_choice);

                    if (admin_choice == 1) 
                    {
                        printf("Enter Item ID to refill: ");
                        scanf("%d", &selected_id);
                        for(i = 0; i < 10; i++) 
                        {
                            if(shop[i].item_id == selected_id) 
                            {
                                printf("Enter quantity to add: ");
                                scanf("%d", &amt);
                                shop[i].stock_quantity += amt;
                                printf("Stock updated!\n");
                            }
                        }
                    }
                    else if (admin_choice == 2) 
                    {
                        printf("Enter Item ID to change rates: ");
                        scanf("%d", &selected_id);
                        for(i = 0; i < 10; i++) 
                        {
                            if(shop[i].item_id == selected_id) 
                            {
                                printf("Enter New Price: ");
                                scanf("%f", &shop[i].price);
                                printf("Enter New Discount: ");
                                scanf("%f", &shop[i].discount);
                                printf("Rates updated!\n");
                            }
                        }
                    }

                    
                    if (admin_choice == 1 || admin_choice == 2) 
                    {
                        fp = fopen("shop_data.txt", "w");
                        for (int j = 0; j < 10; j++) 
                        {
                            fprintf(fp, "%d %s %s %.2f %.2f %d\n", shop[j].item_id, shop[j].brand_name, shop[j].item_name, shop[j].price, shop[j].discount, shop[j].stock_quantity);
                        }
                        fclose(fp);
                    }

                } while(admin_choice != 3);
            }
            else 
            {
                printf("Wrong Password! Access Denied.\n");
            }
        }

    } while (choice != 3);

    return 0;
}