#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <iostream>
#include <stack>

class USBConnection{

    private:

    int ID;

    static std::stack<int> ids;

    static bool initialized;

    USBConnection(int ID): ID(ID){}

    static void initializeUSBIds() {
    if (!initialized) { 
        ids.push(3);
        ids.push(2);
        ids.push(1);
        initialized = true; 
    }
}

    public:

    static USBConnection* CreateUsbConnection(){
        initializeUSBIds();


        if (ids.empty()){
            return nullptr;
        }

        int availableID = ids.top();
        ids.pop();
        return new USBConnection(availableID);

       
    }

     ~USBConnection(){
        if (ID >= 1 && ID <= 3) { 
            ids.push(ID); 
        }
    }

    int get_id() const{
        return ID;
    }

};

std::stack<int> USBConnection::ids;
bool USBConnection::initialized = false;

#endif