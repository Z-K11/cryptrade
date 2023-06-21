#include<string>
enum class ordertype
{
    bid,ask
};
class orderbookentry
{
    public:
    orderbookentry(double price,double amount,std::string timestamp, std::string product,ordertype type);
    double price;
    double amount;
    std::string product;
    std::string timestamp;
    ordertype type;


};