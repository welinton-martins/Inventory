#include "Inventory.h"
#include <iostream>

void displayMenu() {
    std::cout << "Inventory Management System\n";
    std::cout << "1. Add Product\n";
    std::cout << "2. Remove Product\n";
    std::cout << "3. List Products\n";
    std::cout << "4. Search Product\n";
    std::cout << "5. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    Inventory inventory;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int id, quantity;
                double price;
                std::string name;

                std::cout << "Enter Product ID: ";
                std::cin >> id;
                std::cout << "Enter Product Name: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                std::cout << "Enter Quantity: ";
                std::cin >> quantity;
                std::cout << "Enter Price: ";
                std::cin >> price;

                inventory.addProduct(Product(id, name, quantity, price));
                std::cout << "Product added successfully.\n";
                break;
            }
            case 2: {
                int id;
                std::cout << "Enter Product ID to remove: ";
                std::cin >> id;
                inventory.removeProduct(id);
                break;
            }
            case 3:
                inventory.listProducts();
                break;
            case 4: {
                int id;
                std::cout << "Enter Product ID to search: ";
                std::cin >> id;

                Product* product = inventory.searchProduct(id);
                if (product) {
                    std::cout << "Product found:\n";
                    product->display();
                } else {
                    std::cout << "Product not found.\n";
                }
                break;
            }
            case 5:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid option. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

