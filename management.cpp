#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    //QUANTITY
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
    //FOOD ITEMS SOLD
    int Srooms=0,Spasta=0,Sburger,Snoodle=0,Sshake=0,Schicken=0;
    //TOTAL PROCE OF ITEM
    int Total_rooms=0,Total_pasta=0,Total_burger,Total_noodles=0,Total_shake=0,Total_chicken=0;

    cout<<"\n\t  Quantity of items we have";
    cout<<"\n\t  Rooms avaliable : ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta :";
    cin>>Qpasta;
    cout<<"\n Quantity of Burger:";
    cin>>Qburger;
    cout<<"\n Quantity of noodles :";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake :";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll:";
    cin>>Qchicken;

    menu:
    cout<<"\n\t\t\t Please select from the menu option ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chicken-roll";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter your choice! ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n\n Enter the number of room you want: ";

            cin>>quant;
            if(Qrooms-Srooms >=quant)
            {
                Srooms=Srooms+quant;
                Total_rooms=Total_rooms+(quant*1200);
                cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";
                break;
            }
            else
            {
                cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel";
                break;
            }
        case 2:
            cout<<"\n\n Enter Pasta quantity: ";

            cin>>quant;
            if(Qpasta-Spasta >=quant)
            {
                Spasta=Spasta+quant;
                Total_pasta=Total_pasta+(quant*250);
                cout<<"\n\n\t\t"<<quant<<"pasta is the order!";
                break;
            }
            else
            {
                cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta remaining in hotel";
                break;
            } 
        case 3:
            cout<<"\n\n Enter Burger quantity: ";

            cin>>quant;
            if(Qburger-Sburger >=quant)
            {
                Sburger=Sburger+quant;
                Total_burger=Total_burger+(quant*120);
                cout<<"\n\n\t\t"<<quant<<"Burger is the order!";
                break;
            }
            else
            {
                cout<<"\n\tOnly"<<Qburger-Sburger<<"Burger remaining in hotel";
                break;
            }
        case 4:
            cout<<"\n\n Enter Noodle quantity: ";

            cin>>quant;
            if(Qnoodles-Snoodle >=quant)
            {
                Snoodle=Snoodle+quant;
                Total_noodles=Total_noodles+(quant*140);
                cout<<"\n\n\t\t"<<quant<<"Noodle is the order!";
                break;
            }
            else
            {
                cout<<"\n\tOnly"<<Qnoodles-Snoodle<<"Noodle remaining in hotel";
                break;
            }
        case 5:
            cout<<"\n\n Enter Shakes quantity: ";

            cin>>quant;
            if(Qshake-Sshake >=quant)
            {
                Sshake=Sshake+quant;
                Total_shake=Total_shake+(quant*120);
                cout<<"\n\n\t\t"<<quant<<"Shakes is the order!";
                break;
            }
            else
            {
                cout<<"\n\tOnly"<<Qshake-Sshake<<"Shakes remaining in hotel";
                break;
            }
        case 6:
            cout<<"\n\n Enter Chicken-rolls quantity: ";

            cin>>quant;
            if(Qchicken-Schicken >=quant)
            {
                Schicken=Schicken+quant;
                Total_chicken=Total_chicken+(quant*150);
                cout<<"\n\n\t\t"<<quant<<"Chicken roll is the order!";
                break;
            }
            else
            {
                cout<<"\n\tOnly"<<Qchicken-Schicken<<"Chicken roll remaining in hotel";
                break;
            }
        case 7:
            cout<<"\n\t\tDetalis of sales and collection";
            cout<<"\n\n Number of rooms we had : "<<Qrooms;
            cout<<"\n\n Number of rooms we gave for rent" <<Srooms;
            cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
            cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;

            cout<<"\n\n Number of Pastas we had : "<<Qpasta;
            cout<<"\n\n Number of Pastas we sold" <<Spasta;
            cout<<"\n\n Remaining Pastas : "<<Qpasta-Spasta;
            cout<<"\n\n Total Pasta collection for the day : "<<Total_pasta;
            
            cout<<"\n\n Number of Burgers we had : "<<Qburger;
            cout<<"\n\n Number of Burger we sold" <<Sburger;
            cout<<"\n\n Remaining Burgers : "<<Qburger-Sburger;
            cout<<"\n\n Total Pasta collection for the day : "<<Total_burger;
            
            cout<<"\n\n Number of Noodles we had : "<<Qnoodles;
            cout<<"\n\n Number of Noodles we sold" <<Snoodle;
            cout<<"\n\n Remaining Noodles : "<<Qnoodles-Snoodle;
            cout<<"\n\n Total Noodle collection for the day : "<<Total_noodles;

            cout<<"\n\n Number of Shakes we had : "<<Qshake;
            cout<<"\n\n Number of Shakes we sold" <<Sshake;
            cout<<"\n\n Remaining Shakes : "<<Qshake-Sshake;
            cout<<"\n\n Total Shake collection for the day : "<<Total_shake;

            cout<<"\n\n Number of Chicken-roll we had : "<<Qchicken;
            cout<<"\n\n Number of Chicken-roll we sold" <<Schicken;
            cout<<"\n\n Remaining Chicken-roll : "<<Qchicken-Schicken;
            cout<<"\n\n Total Chicken-roll collection for the day : "<<Total_chicken;

            cout<<"\n\n\n Total Collection for the day: "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
            break;

         case 8:
            exit(0);

            default:
                cout<<"\n Please select the number mentioned above!";
        
    }
    goto menu;

}