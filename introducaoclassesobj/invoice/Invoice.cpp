#include <iostream>

using namespace std;

#include "Invoice.h"

Invoice::Invoice(string id, string description, int quantity, int priceItem, int purchasePrice){
    setIdInvoice(id);
    setDescription(description);
    setQuantity(quantity);
    setPriceItem(priceItem);
    setPurchasePrice(purchasePrice);
}

void Invoice::setIdInvoice(string id){
    idInvoice = id;
}

void Invoice::setDescription(string description){
    description = description;
}


void Invoice::setQuantity(int quantity){
    quantity = quantity;
}

void Invoice::setPriceItem(int priceItem){
    priceItem = priceItem;
}

void Invoice::setPurchasePrice(int purchasePrice){
    if (quantity <=0){
        cout << "Compra inválida! Verifique a quantidade de itens" << endl;
        purchasePrice = 0;
    }
    purchasePrice = quantity * priceItem;
}

string Invoice::getIdInvoice(){
    return idInvoice;
}

string Invoice::getDescription(){
    return description;
}

int Invoice::getQuantity(){
    return quantity;
}

int Invoice::getPriceItem(){
    return priceItem;
}

int Invoice::getPurchasePrice(){
    return purchasePrice;
}

void Invoice::displayMessage(){
    
    cout << "bem vindo!" << endl;

}


