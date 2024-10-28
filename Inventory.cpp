#include "Inventory.h"
#include <iostream>

void Inventory::addProduct(const Product &product) {
    products.push_back(product);
}

void Inventory::removeProduct(int id) {
    for (auto it = products.begin(); it != products.end(); ++it) {
        if (it->getId() == id) {
            products.erase(it);
            std::cout << "Product with ID " << id << " removed.\n";
            return;
        }
    }
    std::cout << "Product with ID " << id << " not found.\n";
}

void Inventory::listProducts() const {
    if (products.empty()) {
        std::cout << "Inventory is empty.\n";
    } else {
        for (const auto &product : products) {
            product.display();
        }
    }
}

Product* Inventory::searchProduct(int id) {
    for (auto &product : products) {
        if (product.getId() == id) {
            return &product;
        }
    }
    return nullptr;
}

