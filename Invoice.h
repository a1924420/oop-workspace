#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
#include <string>

class Invoice{

    private:

    std::string invoiceID;

    int dollarsOwed;

    public:

    Invoice(std::string invoiceId);

    void addServiceCost(int costDollars);

    int getDollarsOwed();

    std::string getInvoiceId();

};

#endif