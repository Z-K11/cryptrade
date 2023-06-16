#include<iostream>
int main(){
    int userop;
    int bid;
    while(true){
    std::cout<<"Press :"<<std::endl;
    std::cout<<"1: Print help."<<std::endl
    <<"2: Print exchange stats."<<std::endl
    <<"3: Place an ask."<<std::endl
    <<"4: Place a bid."<<std::endl
    <<"5: Print Wallet."<<std::endl
    <<"6: continue."<<std::endl;
    std::cin>>userop;
    
    switch (userop){
        case 1:
        std::cout<<"You Pressed: "<<userop<<std::endl;
        std::cout<<"Choose options from the menu and follow the instructions"<<std::endl;
        break;
        case 2:
        std::cout<<"You Pressed: "<<userop<<std::endl;
        std::cout<<"The Exchange stats are 1023$/1 B$"<<std::endl;
        break;
        case 3:
        std::cout<<"You Pressed: "<<userop<<std::endl;
        std::cout<<"Warning!--- No currencies in wallet to sell"<<std::endl;
        break;
        case 4:
        std::cout<<"You Pressed: "<<userop<<std::endl;
        std::cout<<"Current bidding 196,234 USD for 5.23 Etherium, Place your offer"<<std::endl;
        std::cin>>bid;
        std::cout<<"Bid registered--Warning! wallet empty deposit the bid ammount within 2 hours or bid cancelled!"<<std::endl;
        break;
        case 5:
        std::cout<<"You Pressed: "<<userop<<std::endl;
        std::cout<<"Wallet Empty!!!"<<std::endl;
        break;
        case 6:
        std::cout<<"You Pressed: "<<userop<<std::endl;
        std::cout<<"Thank you for using our services"<<std::endl;
        break;
        default:
        std::cout<<"You Pressed: "<<userop<<std::endl;
        std::cout<<"Invalid Input"<<std::endl;
        break;
    }
    }
    return 0;
}