#include"crypt_app.h"
#include<iostream>
#include<string>
#include<vector>

/* double compute_avg(std::vector<orderbookentry>& orders);
double compute_low(std::vector<orderbookentry>& orders);
double compute_hig(std::vector<orderbookentry>& orders); */
int main(){
    /* double highest = compute_hig(orders);
    double avg=compute_avg(orders);
    double lowest = compute_low(orders); */
    /* std::cout<<"Lowest :"<<lowest<<std::endl
    <<"avg :"<<avg<<std::endl
    <<"Highest :"<<highest<<std::endl; */
    app_main app{};
    app.init();
    
    return 0;
}

/* double compute_avg(std::vector<orderbookentry>& orders)
{   double tot=0;
    double avg;
    for (orderbookentry& ord : orders)
    {
        tot+=ord.price;
    }
    avg =tot/orders.size();
    return avg;
}
double compute_low(std::vector<orderbookentry>& orders)
{   double lowest = orders[0].price;
    for (orderbookentry& ord : orders)
    {   if(lowest>ord.price)
        {
            lowest=ord.price;
        }

    }
    return lowest;
}
double compute_hig(std::vector<orderbookentry>& orders)
{   double highest = orders[0].price;
    for (orderbookentry& ord : orders)
    {   if(highest<ord.price)
        {
            highest=ord.price;
        }

    }
    return highest;
}
 */