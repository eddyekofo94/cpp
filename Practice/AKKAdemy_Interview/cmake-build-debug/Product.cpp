//
// Created by Eddy Ekofo on 22/06/2018.
//

#include "Product.h"


void Product::setNetPrice(double newNetPrice) {
    netPrice = newNetPrice;
}

double Product::grossPrice() {
    return 0;
}

double Product::getVAT() {
    return 0;
}

Product::Product(double newNetPrice) {
    netPrice = newNetPrice;
}

Product::~Product() = default;

Product::Product() = default;
