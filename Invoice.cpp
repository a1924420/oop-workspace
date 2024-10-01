#include <iostream>
#include <string>
#include "Invoice.h"

Invoice::Invoice(std::string invoiceId): invoiceID(invoiceID), dollarsOwed(0){}

void Invoice::addServiceCost(int costDollars){
    if (costDollars > 0){
        dollarsOwed += costDollars;
    }
}

int Invoice::getDollarsOwed(){
    return dollarsOwed;
}

std::string Invoice::getInvoiceId(){
    return invoiceID;
}