#include<iostream>
using namespace std;

class DairyBill
{
    int choice;
    string Ptype;
    float quantum;
    float total;
    float price[4][4]={{85, 95 , 115 , 105},
                      { 81, 89,  111,  100},
                      { 76, 84,  108,  96},
                      { 70, 78,  105,  92}};

public:

    DairyBill()
{
    Ptype="";
    quantum=0;
    total=0;
}
    DairyBill(string a, float b, float c)
{
    Ptype=a;
    quantum=b;
    total=c;
    displayFinal_Bill(total);
}

    void displayMenu();
    void showChoice(int p);
    void SkimmedMilk();
    void Non_skimmedMilk();
    void Sweet_Curd();
    void Regular_Curd();
    void calculateBill_SkimmedMilk(float p);
    void calculateBill_NonskimmedMilk(float p);
    void calculateBill_SweetCurd(float p);
    void calculateBill_RegularCurd(float p);
    void displayFinal_Bill(float total);


};

void DairyBill:: displayMenu()
{
    cout<<"**************WELCOME TO MANISHA'S DAIRY**************"<<endl;
    cout<<"OUR PRODUCTS"<<endl;
    cout<<"1.Skimmed Milk"<<endl<<"2.Non-Skimmed Milk"<<endl<<"3.Sweet Curd"<<endl<<"4.Regular Curd"<<endl;
    cout<<"PLEASE SELECT PRODUCT OF YOUR CHOICE::";
    cin>>choice;
    showChoice(choice);
}


void DairyBill::showChoice(int p)
{
    switch(p)
    {
        case 1:
            SkimmedMilk();
            break;

        case 2:
            Non_skimmedMilk();
            break;

        case 3:
            Sweet_Curd();
            break;

        case 4:
            Regular_Curd();
            break;

        default:
            cout<<"Sorry this is Invalid Input.Please enter valid input.";
            displayMenu();
            break;
    }
}
void DairyBill::SkimmedMilk()
{
    cout<<"Please enter the quantity of Product::";
    cin>>quantum;
    calculateBill_SkimmedMilk(quantum);
}

void DairyBill::Non_skimmedMilk()
{
    cout<<"Please enter the quantity of Product:";
    cin>>quantum;
    calculateBill_NonskimmedMilk(quantum);
}

void DairyBill::Sweet_Curd()
{
    cout<<"Please enter the quantity of Product:";
    cin>>quantum;
    calculateBill_SweetCurd(quantum);
}

void DairyBill::Regular_Curd()
{
    cout<<"Please enter the quantity of Product:";
    cin>>quantum;
    calculateBill_RegularCurd(quantum);
}

void DairyBill::calculateBill_SkimmedMilk(float quantum)
{
    if(quantum<=1){
        total=quantum*price[0][0];
    }
    else if(quantum>1&&quantum<=5){
        total=quantum*price[1][0];
    }
    else if(quantum>5&&quantum<=10){
        total=quantum*price[2][0];
    }
    else if(quantum>10){
        total=quantum*price[3][0];
    }
    else{
        cout<<"SORRY! INVALID INPUT";
    }
    displayFinal_Bill(total);
}

void DairyBill::calculateBill_NonskimmedMilk(float quantum)
{
   if(quantum<=1){
        total=quantum*price[0][1];
    }
    else if(quantum>1&&quantum<=5){
        total=quantum*price[1][1];
    }
    else if(quantum>5&&quantum<=10){
        total=quantum*price[2][1];
    }
    else if(quantum>10){
        total=quantum*price[3][1];
    }
    else{
        cout<<"SORRY! INVALID INPUT";
    }
    displayFinal_Bill(total);
}

void DairyBill::calculateBill_SweetCurd(float quantum)
{
    if(quantum<=1){
        total=quantum*price[0][2];
    }
    else if(quantum>1&&quantum<=5){
        total=quantum*price[1][2];
    }
    else if(quantum>5&&quantum<=10){
        total=quantum*price[2][2];
    }
    else if(quantum>10){
        total=quantum*price[3][2];
    }
    else{
        cout<<"SORRY! INVALID INPUT";
    }
    displayFinal_Bill(total);
}

void DairyBill::calculateBill_RegularCurd(float quantum)
{
    if(quantum<=1){
        total=quantum*price[0][3];
    }
    else if(quantum>1&&quantum<=5){
        total=quantum*price[1][3];
    }
    else if(quantum>5&&quantum<=10){
        total=quantum*price[2][3];
    }
    else if(quantum>10){
        total=quantum*price[3][3];
    }
    else{
        cout<<"SORRY! INVALID INPUT";
    }
    displayFinal_Bill(total);
}
void DairyBill::displayFinal_Bill(float total)
{
    float tax=total*0.12;
 cout<<"**************MANISHA'S DAIRY**************"<<endl<<"**********Bhaktapur************************"<<endl<<"*******Abbreviated Tax Invoice**************"<<endl;
 cout<<"----------------------------------------------"<<endl;
 cout<<"Quantity of Product in Liter::" <<quantum<<endl;
 cout<<"----------------------------------------------"<<endl;
 cout<<"Gross Total::" <<total<<endl;
 cout<<"----------------------------------------------"<<endl;
 cout<<"----------------------------------------------"<<endl;
 cout<<"Grand total::"  <<total<<endl;
 cout<<"TAX::"  <<tax<<endl;
 cout<<"----------------------------------------------"<<endl;
 cout<<"Final Bill Amount::" <<total+tax<<endl;
 cout<<"----------------------------------------------"<<endl;
 cout<<"THANK YOU FOR SHOPPING"<<endl<<"SEE YOU AGAIN"<<endl;
 cout<<"Do you Want to Continue your order?"<<endl<<"Please enter y or Y if you want to continue."<<endl;
 char input;
 cin>>input;
 if (input=='Y'||input=='y')
    {
      displayMenu();
    }
}

int main()
{
    DairyBill D1;
    D1.displayMenu();
    DairyBill D2("Sweet Curd",5,500);
    return 0;
}




