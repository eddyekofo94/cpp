//
// Created by Eddy Ekofo on 22/06/2018.
//

#ifndef AKKADEMY_INTERVIEW_PRODUCT_H
#define AKKADEMY_INTERVIEW_PRODUCT_H


class Product {
private:
    double netPrice;
public:
    Product();

    explicit Product(double);
    ~Product();
    double VAT = 0.21;
    void setNetPrice(double);
    double grossPrice();
    double getVAT();
};


#endif //AKKADEMY_INTERVIEW_PRODUCT_H
