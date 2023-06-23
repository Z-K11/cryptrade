
#include<string>
#include<vector>
#include<iostream>
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
class app_main
{
    public:
    app_main()=default;
    void init();
    private:
    std::vector<orderbookentry> orders;
    void printmenu();
    void loaddata();
    int input();
    bool processinput(int &userop);
    void printhelp();
    void stats();
    void ask();
    void bid();
    void wallet();
    void gonext();
};