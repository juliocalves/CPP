#include <string> 

using namespace std;


//implementação da classe Account
class Account{
    
    public:

        Account (int id, string name, float balance, float credit, float debit);

        void setIdAccount(int);
        int getIdAccount();

        void setCustomerName(string);
        string getCustomerName();

        void setBalance (float);
        float getBalance();
        
        void setCredit(float);
        float getCredit();
        
        void setDebit (float);
        float getDebit();


        void displayMessage();

    private:

        int idAccount;
        string customerName;
        float balance;
         
};

