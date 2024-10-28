#ifndef INVENTORY_H
#define INVENTORY_H

#include "Product.h"
#include <vector>

class Inventory {
private:
    std::vector<Product> products;

public:
    void addProduct(const Product &product);
    void removeProduct(int id);
    void listProducts() const;
    Product* searchProduct(int id);
};

#endif // INVENTORY_H

