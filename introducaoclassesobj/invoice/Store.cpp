#include <iostream>
#include "Invoice.cpp"

using namespace std;

int main (){


    Invoice purchase1 {"","",0,0,0};

    purchase1.displayMessage();
    purchase1.setIdInvoice("001");
    purchase1.setDescription("café");
    purchase1.setQuantity(20);
    purchase1.setPriceItem(16);
    

    cout << "Compra nº" << purchase1.getIdInvoice() << endl;
    cout << "Você comprou " << purchase1.getQuantity() << " " << purchase1.getDescription() << " custando " << purchase1.getPriceItem() << endl;
    cout << "O total de sua compra foi " << purchase1.getPurchasePrice() << endl;

    Invoice purchase2 {"","",0,0,0};

    purchase2.displayMessage();
    purchase2.setIdInvoice("002");
    purchase2.setDescription("leite");
    purchase2.setQuantity(20);
    purchase2.setPriceItem(6);



    cout << "Compra nº" << purchase2.getIdInvoice() << endl;
    cout << "Você comprou " << purchase2.getQuantity() << " " << purchase2.getDescription() << " custando " << purchase2.getPriceItem() << endl;
    cout << "O total de sua compra foi " << purchase2.getPurchasePrice() << endl;

    return 0;
}