#ifndef INVOICETEST_H
#define INVOICETEST_H

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testConstructor();
        testAddServiceCost();
        testGetDollarsOwed();
        testGetInvoiceId();
        
    }

private:

    void testConstructor() {
        Invoice invoice("XYZ123");
        if (invoice.getInvoiceId() != "XYZ123") {
        std::cout << "Constructor test failed!" << std::endl;
        }
    }

    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
                invoice.addServiceCost(-5); 
                if (invoice.getDollarsOwed() != 0) {
                    std::cout << "Test 3 failed! Negative amount added." << std::endl;
                }
        }
    }

    void testGetDollarsOwed() {
        Invoice invoice("ABCD");
        invoice.addServiceCost(20);
        if (invoice.getDollarsOwed() != 20) {
            std::cout << "getDollarsOwed test failed!" << std::endl;
        }
    }

    void testGetInvoiceId() {
        Invoice invoice("ABCD");
        if (invoice.getInvoiceId() != "ABCD") {
            std::cout << "getInvoiceId test failed!" << std::endl;
        }
    }


    
};

#endif