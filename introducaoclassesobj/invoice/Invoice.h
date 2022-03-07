/*
(Classe Invoice ) Crie uma classe chamada Invoice que uma loja de suprimentos de informática possa utilizar para representar uma
fatura de um item vendido na loja. Uma Invoice (fatura) deve incluir quatro partes das informações como membros de dados — um
número identificador (tipo string ), uma descrição (tipo string ), a quantidade comprada de um item (tipo int ) e o preço por item (tipo
int ).Sua classe deve ter um construtor que inicializa os quatro membros
de dados. Forneça uma função set e uma função get para cada membro de dados. Além disso, forneça uma função-membro chamada
getInvoiceAmount que calcula a quantia da fatura (isto é, multiplica a quantidade pelo preço por item) e depois retorna a quantidade
como um valor int . Se a quantidade não for positiva, ela deve ser configurada como 0 . Se o preço por item não for positivo, ele deve ser
configurado como 0 . Escreva um programa de teste que demonstre as capacidades da classe Invoice .
*/



#include<string>
#include<iostream>

using namespace std;

class Invoice{
    
    private:
        string idInvoice;
        string description;
        int quantity;
        int priceItem;
        int purchasePrice;

    public:
        Invoice(string id, string description, int quantity, int priceItem, int purchasePrice);

        void setIdInvoice(string);
        string getIdInvoice();

        void setDescription(string);
        string getDescription();

        void setQuantity(int);
        int getQuantity();

        void setPriceItem(int);
        int getPriceItem();

        void setPurchasePrice(int);
        int getPurchasePrice();

        void displayMessage();
        
};




