#include<iostream>
using namespace std;
char repeat;
int quanitity,pizza,burger,sandwich,roll,biryani;;
class custumer_name //enter custumer dityle
{
public:
    string n;
    void name()
    {
        cout<<"                                    -------------------Tops Tech. Fast Food-------------------";
        cout<<"\nPlase Enter Your Name: ";
        cin>>n;
        cout<<"Hello "<<n;
        cout<<endl;
    }
};
class order //show menu
{
public:
    int choice;
    void orde()
    {
        cout<<"what would you like to order?";
        cout<<endl<<"                                    -------------------Menu-------------------";
        cout<<"\n1) Pizzas\n2) Burgers\n3) Sandwich\n4) Rolls \n5) Biryani"<<endl;
        cout<<endl<<endl<<"Please Enter your Choice:";
        cin>>choice;
    }
};
class menu : public order
{
public:
    int pizzas()    //show type of pizza
    {
        cout<<"1    Sicilian pizza  Rs.100\n2    Greek pizza    Rs.120\n3    Margherita pizza   Rs.150";
        cout<<endl<<"Please Enter wich Pizza you would like to have?:";
        cin>>pizza;
    }
    int burgers()   //show type of burgers
    {
        cout<<"\n1    beef burgers  Rs.120\n2    chicken burgers     Rs.150\n3    lamb burgers   Rs.200";
        cout<<endl<<"Please Enter wich Burger you would like to have?:";
        cin>>burger;
    }
    int sandwichs()    //show type of sandwich
    {
        cout<<"1    Grilled Cheese  Rs.80\n2    Ham Sandwich    Rs.100\n3    Nutella Sandwich   Rs.120";
        cout<<endl<<"Please Enter wich Sandwich you would like to have?:";
        cin>>sandwich;
    }
    int rolls() //show type of rolls
    {
        cout<<"1    Potato Bread Rolls  Rs.130\n2    Honey Wheat Rolls  Rs.150\n3    Easy Dinner Rolls  Rs.170";
        cout<<endl<<"Please Enter wich Roll you would like to have?:";
        cin>>roll;
    }
    int biryanis()  //show type of biryanis
    {
        cout<<"1    Hyderabadi Biryani  Rs.70\n2    Lucknowi Biryani    Rs.90\n3    Dindigul Biryani    Rs.100";
        cout<<endl<<"Please Enter wich Biryani you would like to have?:";
        cin>>biryani;
    }
    int main_manu() //select main menu
    {
        switch (choice)
        {
            case 1:
                pizzas();
                break;
            case 2:
                burgers();
                break;
            case 3:
                sandwichs();
                break;
            case 4:
                rolls();
                break;
            case 5:
                biryanis();
                break;
        }
    }
};
class submenu: public menu  //sub menu function
{
public:
    int Quanitity()
    {
        cout<<"Please Enter Quanitity:";    //show messages enter Qunaitity
        cin>>quanitity; //enter food quantitiy
    }
    int Sicilianpizza()
    {
        return quanitity*100;  //totale amunt of Bill
    }
    int Greekpizza()
    {
        return quanitity*120;
    }
    int Margheritapizza()
    {
        return quanitity*150;
    }
    int beefburgers()
    {
        return quanitity*120;
    }
    int chickenburgers()
    {
        return quanitity*150;
    }
    int lambburgers()
    {
        return quanitity*200;
    }
    int GrilledCheese()
    {
        return quanitity*80;
    }
    int HamSandwich()
    {
        return quanitity*100;
    }
    int NutellaSandwich()
    {
        return quanitity*120;
    }
    int PotatoBreadRolls()
    {
        return quanitity*130;
    }
    int HoneyWheatRolls()
    {
        return quanitity*150;
    }
    int EasyDinnerRolls()
    {
        return quanitity*170;
    }
    int HyderabadiBiryani()
    {
        return quanitity*70;
    }
    int LucknowiBiryani()
    {
        return quanitity*90;
    }
    int DindigulBiryani()
    {
        return quanitity*100;
    }
    int Submenu()   //select sub menu
    {
    if(choice==1)   //chek wich main menu ex.1.pizza
    {
        switch (pizza)  //select submanu item
        {
        case 1:
            cout<<"1    Sicilian pizza";    //show food name
            cout<<endl<<"Your Total  Bill is:"<<Sicilianpizza();
            break;
        case 2:
            cout<<"2    Greek pizza";
            cout<<endl<<"Your Total  Bill is:"<<Greekpizza();
            break;
        case 3:
            cout<<"3    Margherita pizza";
            cout<<endl<<"Your Total  Bill is:"<<Margheritapizza();
            break;
        }
    }
    else if (choice==2)
    {
        switch (burger)
        {
        case 1:
            cout<<"1    beef burgers";
            cout<<endl<<"Your Total  Bill is:"<<beefburgers();
            break;
        case 2:
            cout<<"2    chicken burgers";
            cout<<endl<<"Your Total  Bill is:"<<chickenburgers();
            break;
        case 3:
            cout<<"3    lamb burgers";
            cout<<endl<<"Your Total  Bill is:"<<lambburgers();
            break;
        }
    }
    else if (choice==3)
    {
        switch (sandwich)
        {
        case 1:
            cout<<"1    Grilled Cheese";
            cout<<endl<<"Your Total  Bill is:"<<HamSandwich();
            break;
        case 2:
            cout<<"2    Ham Sandwich";
            cout<<endl<<"Your Total  Bill is:"<<NutellaSandwich();
            break;
        case 3:
            cout<<"3    Nutella Sandwich";
            cout<<endl<<"Your Total  Bill is:"<<NutellaSandwich();
            break;
        }
    }
    else if (choice==4)
    {
        switch (roll)
        {
        case 1:
            cout<<"1    Potato Bread Rolls";
            cout<<endl<<"Your Total  Bill is:"<<PotatoBreadRolls();
            break;
        case 2:
            cout<<"2    Honey Wheat Rolls";
            cout<<endl<<"Your Total  Bill is:"<<HoneyWheatRolls();
            break;
        case 3:
            cout<<"3    Easy Dinner Rolls";
            cout<<endl<<"Your Total  Bill is:"<<EasyDinnerRolls();
            break;
        }
    }
    else
    {
        switch (biryani)
        {
        case 1:
            cout<<"1    Hyderabadi Biryani";
            cout<<endl<<"Your Total  Bill is:"<<HyderabadiBiryani();
            break;
        case 2:
            cout<<"2    Lucknowi Biryani";
            cout<<endl<<"Your Total  Bill is:"<<LucknowiBiryani();
            break;
        case 3:
            cout<<"3    Dindigul Biryani";
            cout<<endl<<"Your Total  Bill is:"<<DindigulBiryani();
            break;
        }
    }
}
};
class print :public submenu
{
public:
    int your_oder()
    {
        cout<<endl<<endl<<"               ----------------Your Order----------------"<<endl;
    }
    int prin() //print order dityel
    {
        cout<<endl<<"Your Order Will be delivered in 40 Minutes";   //your foode delivererd time
        cout<<endl<<"Thank you FOr Ordering From Tops Tech Fast Food";
        cout<<endl<<"Would you like to order anything else?Y/N:";
        cin>>repeat;
    }
};
int main(int argc, char const *argv[])
{
    custumer_name n1;
    //char Y='y';
    n1.name();
    top:
    order o1;
    submenu s1;
    print p1;
    s1.orde();
    s1.main_manu();
    s1.Quanitity();
    p1.your_oder();
    s1.Submenu();
    p1.prin();
    if(repeat==tolower('Y')||'y')
    {
        goto top;
    }
    return 0;
}