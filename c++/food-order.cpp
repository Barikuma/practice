#include <iostream>
#include<string>
#include <cstdlib>

using namespace std;

int order, quantity;
int price;

void clearScreen(){
    system("cls");
}
void goBackMenu();                  //To return back to the main menu

//defining all functions
void burger();
void pizza();
void pie();
void rolls();
void fries();
void doughnuts();

//Returning back to the food menus
void goBackBurger(){
    burger();
}

void goBackPizza(){
    pizza();
}

void goBackPie(){
    pie();
}

void goBackRolls(){
    rolls();
}

void goBackFries(){
    fries();
}

void goBackDoughnuts(){
    doughnuts();
}
//End of return menu

void menu(){                        //Order main menu
cout<<"\t\t==================="<<endl;
cout<<"\t\t\tMENU\n\n"<<endl;
cout<<"\t\t1. Pizza"<<endl;
cout<<"\t\t2. Burger"<<endl;
cout<<"\t\t3. Pie"<<endl;
cout<<"\t\t4. Rolls"<<endl;
cout<<"\t\t5. Fries"<<endl;
cout<<"\t\t6. Doughnuts\n\n"<<endl;
cout<<"\t\tEnter 0 to exit"<<endl;
cout<<"\t\t==================="<<endl;
}

//Burger function
void burger(){
    string burger[8]={"Beef Burger", "Turkey Burger", "Veggie Burger", "Salmon Burger", "Elk Burger",
                    "Portobello Mushroom Burger", "Bison Burger", "Black Bean Burger" };

    double price[8] = {5.20, 6.30, 4.20, 3.90, 4.50, 4.00, 3.50, 3.99};

        for(int b=0; b<=7; b++){
            cout<<"\t"<<b+1<<". "<<burger[b]<<" ($"<<price[b]<<")"<<endl;
        }
    cout<<"\n\n\tWhat burger will you like to order(enter 0 to go back to main menu): "<<endl;
    cin>>order;

    clearScreen();

    switch(order){
    case 0:
        goBackMenu();
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        cout<<"\t"<<burger[order-1]<<" ($"<<price[order-1]<<")"<<endl;
        cout<<"\n\tQuantity(9 to go back to burger menu or 0 to exit): "<<endl;
        cin>>quantity;
        clearScreen();
        if(quantity == 9){
            goBackBurger();
        }
        else if(quantity == 0){
            cout<<"\n\tThank you";
            exit(0);
        }
        else{
        price[order-1] *= quantity;
        cout<<"\t--------Your Order---------\n\n\n";
        cout<<"\t"<<burger[order-1];
        cout<<"\n\tYour Total Bill is: "<<"$"<<price[order-1]<<endl;
        }
        break;

    default:
        cout<<"\n\tInvalid order"<<endl;
    }
}

//Pizza function
void pizza(){
    string pizza[8] = {"Cheese Pizza", "BBQ Chicken Pizza", "Meat Pizza", "Veggie Pizza",
                    "Pepperoni Pizza", "Margherita Pizza", "Hawaiin Pizza", "Buffalo Pizza"};

    double price[8] = {10.00, 12.50, 11.99, 12.99, 15.00, 11.50, 11.50, 12.99};

    for(int p=0; p<=7; p++){
        cout<<"\t"<<p+1<<". "<<pizza[p]<<" ($"<<price[p]<<")"<<endl;
    }

    cout<<"\n\n\tWhat pizza will you like to order(enter 0 to go back to main menu): "<<endl;
    cin>>order;
    clearScreen();
    switch(order){
    case 0:
        goBackMenu();
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        cout<<"\t"<<pizza[order-1]<<": $"<<price[order-1]<<")"<<endl;
        cout<<"\n\tQuantity(9 to go back to pizza menu or 0 to exit): "<<endl;
        cin>>quantity;
        clearScreen();
        if(quantity == 9){
            goBackPizza();
        }
        else if(quantity == 0){
            cout<<"\n\tThank you";
            exit(0);
        }
        else{
        price[order-1] *= quantity;
        cout<<"\t--------Your Order---------\n\n\n";
        cout<<"\t"<<pizza[order-1];
        cout<<"\n\tYour Total Bill is: "<<"$"<<price[order-1]<<endl;
        }
        break;

    default:
        cout<<"\n\tInvalid order"<<endl;
    }
}

//Pie function
void pie(){
    string pie[8] = {"Cream Pie", "Custard Pie", "Apple Pie", "Galette Pie",
                        "Tart Pie", "Chiffon Pie", "Pumpkin Pie", "Cherry Pie"};

    double price[8] = {8.00, 9.00, 7.00, 5.99, 6.50, 5.50, 6.00, 4.00};

    for(int pi=0; pi<=7; pi++){
        cout<<"\t"<<pi+1<<". "<<pie[pi]<<" ($"<<price[pi]<<")"<<endl;
    }

    cout<<"\n\n\tWhat pie will you like to order(enter 0 to go back): "<<endl;
    cin>>order;

    clearScreen();

    switch(order){
    case 0:
        goBackMenu();
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        cout<<"\t"<<pie[order-1]<<": $"<<price[order-1]<<endl;
        cout<<"\n\tQuantity(9 to go back to pie menu or 0 to exit): "<<endl;
        cin>>quantity;
        clearScreen();
        if(quantity == 9){
            goBackPie();
        }
        else if(quantity == 0){
            cout<<"\n\tThank you";
            exit(0);
        }
        else{
        price[order-1] *= quantity;
        cout<<"\t--------Your Order---------\n\n\n";
        cout<<"\t"<<pie[order-1];
        cout<<"\n\tYour Total Bill is: "<<"$"<<price[order-1]<<endl;
        }
        break;

    default:
        cout<<"\n\tInvalid order"<<endl;
    }
}

//Rolls function
void rolls(){
    string rolls[5]={"Egg Rolls", "Fish Rolls", "Beef Rolls", "Veggie Rolls",
                        "Chicken Rolls"};

    double price[5] = {1.99, 2.00, 2.50, 3.50, 4.00};

        for(int r=0; r<=4; r++){
            cout<<"\t"<<r+1<<". "<<rolls[r]<<" ($"<<price[r]<<")"<<endl;
        }
    cout<<"\n\n\tWhat rolls would you like to order(Enter 0 to go back to main menu): "<<endl;
    cin>>order;

    clearScreen();

    switch(order){
    case 0:
        goBackMenu();
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        cout<<"\t"<<rolls[order-1]<<": $"<<price[order-1]<<endl;
        cout<<"\n\tQuantity(Enter 9 to go back to rolls menu or 0 to exit): "<<endl;
        cin>>quantity;
        if(quantity == 9){
            goBackRolls();
        }
        else if(quantity == 0){
            cout<<"\n\tThank you";
            exit(0);
        }
        else{
        price[order-1] *= quantity;
        cout<<"\t--------Your Order---------\n\n\n";
        cout<<"\t"<<rolls[order-1];
        cout<<"\n\tYour Total Bill is: "<<"$"<<price[order-1]<<endl;
        }
        break;

    default:
        cout<<"\n\tInvalid order"<<endl;
    }
}

//Fries function
void fries(){
    string fries[5] = {"Sweet Potato Fries", "Poutline Fries", "Potato Wedges", "Chili Fries", "Potato Wedges"};

    double price[5] = {3.00, 2.80, 2.50, 2.70, 3.20};

        for(int f=0; f<=4; f++){
            cout<<"\t"<<f+1<<". "<<fries[f]<<" ($"<<price[f]<<")"<<endl;
        }
    cout<<"\n\n\tWhat Fries will you like to order(enter 0 to go back to main menu): "<<endl;
    cin>>order;

    clearScreen();

    switch(order){
    case 0:
        goBackMenu();
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout<<"\t"<<fries[order-1]<<" ($"<<price[order-1]<<")"<<endl;
        cout<<"\n\tQuantity(9 to go back to fries menu or 0 to exit): "<<endl;
        cin>>quantity;
        clearScreen();

        if(quantity == 9){
            goBackFries();
        }
        else if(quantity == 0){
            cout<<"\n\tThank you";
            exit(0);
        }
        else{
        price[order-1] *= quantity;
        cout<<"\t--------Your Order---------\n\n\n";
        cout<<"\t"<<fries[order-1];
        cout<<"\n\tYour Total Bill is: "<<"$"<<price[order-1]<<endl;
        }
        break;

    default:
        cout<<"\n\tInvalid order"<<endl;
    }
}

//doughnuts function
void doughnuts(){
    string doughnuts[8] = {"Chocolate Frosted Doughnuts", "Cinnamon Twist Doughnuts", "Cruller Doughnuts",
                        "Jelly Doughnuts", "Old Fashion Doughnuts", "Blueberry Doughnuts", "Glazed Doughnuts"};

    double price[8] = {2.00, 1.99, 3.00, 2.50, 4.90, 3.00, 2.50};

        for(int p=0; p<=6; p++){
            cout<<"\t"<<p+1<<". "<<doughnuts[p]<<" ($"<<price[p]<<")"<<endl;
        }
    cout<<"\n\n\tWhat Doughnut will you like to order(enter 0 to go back to main menu): "<<endl;
    cin>>order;

    clearScreen();

    switch(order){
    case 0:
        goBackMenu();
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        cout<<"\t"<<doughnuts[order-1]<<" ($"<<price[order-1]<<")"<<endl;
        cout<<"\n\tQuantity(9 to go back to doughnuts menu or 0 to exit): "<<endl;
        cin>>quantity;
        clearScreen();
        if(quantity == 9){
            goBackDoughnuts();
        }
        else if(quantity == 0){
            cout<<"\n\tThank you"<<endl;
            exit(0);
        }
        else{
        price[order-1] *= quantity;
        cout<<"\t--------Your Order---------\n\n\n";
        cout<<"\t"<<doughnuts[order-1];
        cout<<"\n\tYour Total Bill is: "<<"$"<<price[order-1]<<endl;
        }
        break;

    default:
        cout<<"\n\tInvalid order"<<endl;
    }
}

int main()
{
    //do{
        menu();
        cout<<"\n\tWhat would you like to order?: "<<endl;
        cin>>order;

    clearScreen();

        switch(order){
        case 0:
            exit(0);
            break;
        case 1:
            pizza();
            break;
        case 2:
            burger();
            break;
        case 3:
            pie();
            break;
        case 4:
            rolls();
            break;
        case 5:
            fries();
            break;
        case 6:
            doughnuts();
            break;
        default:
            cout<<"\n\tPlease Select A Valid Option"<<endl;
            main();
        }


    char answer;
    cout<<"\n\tWould you like to order again?(Y/N): "<<endl;
    cin>>answer;

    while(answer!='Y'&&answer!='y'&&answer!='N'&&answer!='n'){
    cout<<"\n\tWould you like to order again?(Y/N): "<<endl;
    cin>>answer;
    }

    if(answer=='Y' || answer=='y'){
        clearScreen();
        main();
    }
    if(answer=='N' || answer=='n'){
        cout<<"\n\tThank you for your patronage!"<<endl;
    }

    return 0;
}

void goBackMenu(){
    main();
}
