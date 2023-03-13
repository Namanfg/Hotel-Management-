#include<iostream>
#include<string.h>
using namespace std;
char yesno;
float total=0,taxes=0,fares=0,food,foodtax,tax1=18,tax2=20;
class Room
{
    public:
        int Studio()
        {
            cout<<"You have choosen Studio room."<<endl;
            cout<<"In this package you will get services like Wifi and Coffee Maker. You can avail have a free single bed inorder to accommodate a extra person"<<endl;
            cout<<"The Room Service No. 9 and Reception No. 1 on the speed dial"<<endl;
            fares = fares + 5000;
        }
        int Apartment()
        {
            cout<<"You have choosen Apartment room."<<endl;
            cout<<"In this package you will get services like Wifi,Personal compact Kitchen and we provide complimentary breakfast. You can avail have a free double bed inorder to accommodate a extra persons"<<endl;
            cout<<"The Room Service No. 9 and Reception No. 1 on the speed dial"<<endl;
            cout<<"We have arranged some fun activities in this package. You will be informed about them shortly."<<endl;
            fares = fares + 9000;
        }
        int Suite()
        {
            cout<<"You have chosen Suite room"<<endl;
            cout<<"These are one of the most Luxirious rooms in our hotel which can accommodate about 5 to 6 personal"<<endl;
            cout<<"In this package we provide Wifi , Personal compact kitchen , Complimentary Dinner. You will be provided with a Chef which bring food to your room and attend to you personally."<<endl;
            cout<<"The Room Service No. 9 and Reception No. 1 on the speed dial"<<endl;
            fares = fares + 12000;
        }
        int Penthouse()
        {
            cout<<"You have chosen Suite room"<<endl;
            cout<<"These are one of the most Luxirious rooms in our hotel which can accommodate about 4 to 5 personal"<<endl;
            cout<<"In this package we provide Wifi , Personal compact kitchen , Personal Swimming pool, Complimentary Dinner ,a Zaccuzi and a Marvalous view of the city. You will be provided with a Chef which bring food to your room and attend to you personally."<<endl;
            cout<<"The Room Service No. 9 and Reception No. 1 on the speed dial"<<endl;
            fares = fares + 20000;
        }
};
class Service
{
    protected:
    string place;
    public:
        int French();
        int Indian();
        int movie()
        {
            do
            {
            string a;
            cout<<"Pls enter the movie name"<<endl;
            cin>>a;
            cout<<"Hall Number 1 has been alloted to you"<<endl;
            cout<<"Enjoy the movie"<<endl;
            fares = fares + 800;
            for(double i=0;i<99999999;i++)
            {
                i++;
                i--;
            }
            cout<<"Do you wish to watch another movie"<<endl;
            cin>>yesno;
            }while(yesno=='Y' || yesno=='y');
        }
        int Diner()
        {
            int ch1;
            do{
            cout<<"Welcome to our fine dine"<<endl;
            cout<<"We offer 2 types of cuisine"<<endl;
            cout<<"1.Indian"<<endl;
            cout<<"2.French"<<endl;
            cout<<"Pls choose one :-"<<endl;
            cin>>ch1;
            switch(ch1)
            {
                case 1:
                Indian();
                break;
                case 2:
                French();
                break;
                default:
                cout<<"Pls enter the right input"<<endl;
                break;
            }
            cout<<"Do you wish to order something else also"<<endl;
            cin>>yesno;
            }while(yesno=='Y' || yesno=='y');
        }
        int tour()
        {
            cout<<"We have a professional driver waiting for you at the gate"<<endl;
            cout<<"Car No. is 1234"<<endl;
            cout<<"A black Mercedes AMG"<<endl;
            cout<<"Do you want to make changes pls contact reception"<<endl;
            fares = fares + 700;
        }
        int drop()
        {
            cout<<"Pls enter the location to be droped"<<endl;
            cin>>place;
            cout<<"A driver has been assigned to drop you at "<<place<<endl;
            cout<<"Car No. is 4321"<<endl;
            cout<<"A black Mercedes AMG"<<endl;
            fares = fares + 500;
        }
        string library()
        {
            do{
            int ch3;
            string bookname;
            string author;
            cout<<"Do you wnat to search a book by 1.author or 2.title"<<endl;
            cin>>ch3;
            if(ch3==1)
            {
                cout<<"Pls enter the Author name"<<endl;
                cin>>author;
                cout<<"The respective books will be shown to you by our staff in library"<<endl;
                fares = fares + 600;
            }
            else if(ch3==2)
            {
                cout<<"Pls enter the Title of the book"<<endl;
                cin>>bookname;
                cout<<"The book will be given to you by our staff"<<endl;
                fares = fares + 600;
            }
            else
            {
                cout<<"Wrong Input"<<endl;
            }
            for(double i=0;i<99999999;i++)
            {
                i++;
                i--;
            }
            cout<<"Do you wish to read another book4"<<endl;
            cin>>yesno;
            }while(yesno=='Y' || yesno=='y');
        }
};
int Service :: Indian()
    {
        int r,quan;
        cout<<"We serve 5 dishes in this cuisine"<<endl;
        cout<<"1. Chicken Makhani (Butter Chicken)..............................$290"<<endl;
        cout<<"2. Samosas (Deep-Fried Potato/Veggie Dumpling)..........$200"<<endl;
        cout<<"3.  Aloo Gobi (Potato and Cauliflower)............................$310"<<endl;
        cout<<"4. Naan (Flatbread)........................................................$370"<<endl;
        cout<<"5. Matar Paneer (Peas and Cooked Cottage Cheese).......$500"<<endl;
        cin>>r;
        switch(r)
        {
            case 1:
            cout<<"You have choosen Chicken Makhani"<<endl;
            cout<<"Pls enter the quantity you require"<<endl;
            cin>>quan;
            food = food + 290 * quan;
            break;
            case 2:
            cout<<"You have choosen Samosas"<<endl;
            cout<<"Pls enter the quantity you require"<<endl;
            cin>>quan;
            food = food + 200 * quan;
            break;
            case 3:
            cout<<"You have choosen Aloo Gobi"<<endl;
            cout<<"Pls enter the quantity you require"<<endl;
            cin>>quan;
            food = food + 310 * quan;
            break;
            case 4:
            cout<<"You have choosen Naan"<<endl;
            cout<<"Pls enter the quantity you require"<<endl;
            cin>>quan;
            food = food + 370 * quan;
            break;
            case 5:
            cout<<"You have choosen Matar Panner"<<endl;
            cout<<"Pls enter the quantity you require"<<endl;
            cin>>quan;
            food = food + 500 * quan;
            break;
            default:
            cout<<"Please enter a valid number"<<endl;
            break;
        }
    }
int Service :: French()
{
    int r,quan;
    cout<<"We serve 5 dishes in this cuisine"<<endl;
    cout<<"1.Soupe à l’oignon...................$200"<<endl;
    cout<<"2.Coq au vin.............................$150"<<endl;
    cout<<"3.Cassoulet..............................$250"<<endl;
    cout<<"4.Bœuf bourguignon.................$130"<<endl;  
    cout<<"5.Chocolate soufflé...................$165"<<endl;
    cin>>r;
    switch(r)
    {
        case 1:
        cout<<"You have choosen Soupe à l’oignon"<<endl;
        cout<<"Pls enter the quantity you require"<<endl;
        cin>>quan;
        food = food + 200 * quan;
        break;
        case 2:
        cout<<"You have choosen Coq au vin"<<endl;
        cout<<"Pls enter the quantity you require"<<endl;
        cin>>quan;
        food = food + 150 * quan;
        break;
        case 3:
        cout<<"You have choosen Cassoulet"<<endl;
        cout<<"Pls enter the quantity you require"<<endl;
        cin>>quan;
        food = food + 250 * quan;
        break;
        case 4:
        cout<<"You have choosen Bœuf bourguignon"<<endl;
        cout<<"Pls enter the quantity you require"<<endl;
        cin>>quan;
        food = food + 130 * quan;
        break;
        case 5:
        cout<<"You have choosen Chocolate soufflé"<<endl;
        cout<<"Pls enter the quantity you require"<<endl;
        cin>>quan;
        food = food + 165 * quan;
        break;
        default:
        cout<<"Please enter a valid number"<<endl;
        break;
    }
}
int main()
{
    Room r;
    Service s;
    int type,service,age;
    cout<<"Welcome to Hotel NIRVANA"<<endl;
    cout<<"------------------------"<<endl;
    cout<<"We have acoomodation in four types of room:-"<<endl;
    cout<<"1.Studio..................$5000 per/night      Recommened for 2 to 3 person"<<endl;
    cout<<"2.Apartment...............$9000 per/night      Recommened for family of 4 to 5 person"<<endl;
    cout<<"3.Suite...................$12000 per/night"<<endl;
    cout<<"4.Penthouse...............$20000 per/night"<<endl;
    cout<<"Pls choose one"<<endl;
    cin>>type;
    switch(type)
    {
        case 1:
        r.Studio();
        break;
        case 2:
        r.Apartment();
        break;
        case 3:
        r.Suite();
        break;
        case 4:
        r.Penthouse();
        break;
        default:
        cout<<"Pls enter a valid in put"<<endl;
    }
    label:
    for(double i=0;i<99999999;i++)
        {
            i++;
            i--;
        }
    for(double i=0;i<99999999;i++)
        {
            i++;
            i--;
        }
     for(double i=0;i<99999999;i++)
        {
            i++;
            i--;
        }   
    cout<<"Would you like to avail our service"<<endl;
    cout<<"1.Order Food from our Diner"<<endl;
    cout<<"2.Book a cab"<<endl;
    cout<<"3.Fun zone (For children fram age 3 to age 15)"<<endl;
    cout<<"4.Movie Time (Movie with family)........$800"<<endl;
    cout<<"5.Library...............................$600"<<endl;
    cin>>service;
    switch(service)
    {
        case 1:
        s.Diner();
        break;
        case 2:
        int a;
        cout<<"Do you require the cab for:-"<<endl;
        cout<<"1.For a tour around the city........$700"<<endl;
        cout<<"2.For reaching at desired location..$500"<<endl;
        cin>>a;
        switch(a)
        {
            case 1:
            s.tour();
            break;
            case 2:
            s.drop();
            break;
            default:
            cout<<"Wrong Input"<<endl;
            break;
        }
        break;
        case 3:
        cout<<"Pls enter the age of the child"<<endl;
        cin>>age;
        if(age<3 && age>15)
        cout<<"Sorry! The child is not of the appropiate age for this service"<<endl;
        cout<<"This service is available till 10pm"<<endl;
        break;
        case 4:
        s.movie();
        break;
        case 5:
        s.library();
        break;
        default:
        cout<<"Pls enter a valid input"<<endl;
        break;
    }
    for(double i=0;i<99999999;i++)
        {
            i++;
            i--;
        }
    for(double i=0;i<99999999;i++)
        {
            i++;
            i--;
        }
     for(double i=0;i<99999999;i++)
        {
            i++;
            i--;
        }    
    cout<<"do you wish to checkout(Y/N)"<<endl;
    cin>>yesno;
    float tip;
    if(yesno=='N' || yesno=='n')
    {
        goto label;
    }
    else if(yesno=='Y' || yesno=='y')
    {
        cout<<"Your bill for staying and availed service is $"<<fares<<endl;
        cout<<"your bill for food is $"<<food<<endl;
        cout<<"You you wish to give tip to our staff (optional)"<<endl;
        cin>>tip;
        cout<<"After the including taxes"<<endl;
        foodtax=food*tax1/100;
        food=food+foodtax;
        taxes=fares*tax2/100;
        fares=fares+taxes;
        total=fares+food+tip;
        cout<<"Total = $"<<total<<endl;
        cout<<"Thank you for staying at Hotel NIRVANA"<<endl;
        cout<<"Please do visit again"<<endl;
    }
    else
    {
        cout<<"Wrong Input"<<endl;
    }
}