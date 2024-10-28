#include "Product.h"
#include <iostream>

Product::Product(int id, const std::string &name, int quantity, double price)
    : id(id), name(name), quantity(quantity), price(price) {}

int Product::getId() const {
    return id;
}

std::string Product::getName() const {
    return name;
}

int Product::getQuantity() const {
    return quantity;
}

double Product::getPrice() const {
    return price;
}

void Product::setQuantity(int quantity) {
    this->quantity = quantity;
}

void Product::setPrice(double price) {
    this->price = price;
}

void Product::display() const {
    std::cout << "ID: " << id << ", Name: " << name << ", Quantity: "
              << quantity << ", Price: $" << price << std::endl;
}

