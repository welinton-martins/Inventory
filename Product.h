#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    int id;
    std::string name;
    int quantity;
    double price;

public:
    Product(int id, const std::string &name, int quantity, double price);

    int getId() const;
    std::string getName() const;
    int getQuantity() const;
    double getPrice() const;

    void setQuantity(int quantity);
    void setPrice(double price);

    void display() const;
};

#endif // PRODUCT_H

