#include <SFML/Graphics.hpp>
#include <iostream>
#include "Monopoly.h"
#include "card.h"
using namespace std;
sf::Color op1(sf::Color::White);
sf::Color op2(sf::Color::Green);
void note_sale_of_card(sf::RenderWindow& window)
{
    sf::Font font;
    font.loadFromFile("arial.ttf");
    sf::Text Enter;
    Enter.setCharacterSize(20);
    Enter.setFillColor(sf::Color::White);
    Enter.setFont(font);

    Enter.setString("Open Console for the action for jail card");
    Enter.setPosition(1350, 210);
    window.draw(Enter);
}
void note_releasejail(sf::RenderWindow& window)
{
    sf::Font font;
    font.loadFromFile("arial.ttf");
    sf::Text Enter;
    Enter.setCharacterSize(20);
    Enter.setFillColor(sf::Color::White);
    Enter.setFont(font);

    Enter.setString("You have been released from jail \n wait for your turn!");
    Enter.setPosition(1350, 210);
    window.draw(Enter);
}
void note_chest(sf::RenderWindow& window, int type)
{
    sf::Font font;
    font.loadFromFile("arial.ttf");
    sf::Text Enter;
    Enter.setCharacterSize(12);
    Enter.setFillColor(sf::Color::Black);
    Enter.setFont(font);
    Enter.setPosition(330, 355);
    if (type == 1)
    {
        Enter.setString("Advance to Go and Collect\n 400 PKR");
      
    }
    if (type == 2)
    {
        Enter.setString("Bank will pay you 200 PKR");
       
    }
    if (type == 3)
    {
        Enter.setString("Pay Doctor Fee 200 PKR");
        
    }
    if (type == 4)
    {
        Enter.setString("From Sale you got 50 PKR");
        
    }
    if (type == 5)
    {
        Enter.setString("Get out of Jail. May\n be kept until needed or\n sold for 500 PKR.");
     
    }
    if (type == 6)
    {
        Enter.setString("Income Tax refund collect 150 PKR");
       
    }
    if (type == 7)
    {
        Enter.setString("Your health insurance matures \ncollect 200 PKR");
       
    }
    if (type == 8)
    {
        Enter.setString("Pay donation to Hospital 100 PKR");
     
    }
    if (type == 9)
    {
        Enter.setString("Pay Student tax of 200 PKR");
       
    }
    if (type == 10)
    {
        Enter.setString("Collect 50 PKR for your services.");
       
    }
    if (type == 11)
    {
        Enter.setString("Pay 100 PKR per property");
      
    }
    if (type == 12)
    {
        Enter.setString("You won prize money of 300 PKR");
    }
    if (type == 13)
    {
        Enter.setString("Pay water bill of 50 PKR");
       
    }
    if (type == 14)
    {
        Enter.setString("Pay electricity bill of 80 PKR");
       
    }
    if (type == 15)
    {
        Enter.setString("Pay internet bill 50 PKR.");
       
    }
    window.draw(Enter);
}
void note_chance(sf::RenderWindow& window, int type)
{
    sf::Font font;
    font.loadFromFile("arial.ttf");
    sf::Text Enter;
    Enter.setCharacterSize(12);
    Enter.setFillColor(sf::Color::Black);
    Enter.setFont(font);
    Enter.setPosition(590,650);
    if (type == 1)
    {
        Enter.setString("Advance to Go and Collect\n 300 PKR");
    }
    if (type == 2)
    {
        Enter.setString("Advance to DHA Phase 1.");
    }
    if (type == 3)
    {
        Enter.setString("Advance token to nearest utility.\n If unowned buy from Bank. \nIf owned, pay to owner \n5X the amount shown on dice.");
    }
    if (type == 4)
    {
        Enter.setString("Advance token to nearest Station.\n If unowned by from Bank. \nIf owned, pay to owner the \ndouble amount.");
    }
    if (type == 5)
    {
        Enter.setString("Advance token to nearest Station.\n If unowned by from Bank. \nIf owned, pay to owner the\n double amount.");
    }
    if (type == 6)
    {
        Enter.setString("Advance to Model Town 1. \nIf you pass Go collect 300 PKR");
    }
    if (type == 7)
    {
        Enter.setString("Bank pay you 100 PKR");
    }
    if (type == 8)
    {
        Enter.setString("Get out of Jail. May\n be kept until needed or\n sold for 500 PKR");
    }
    if (type == 9)
    {
        Enter.setString("Go back 4 blocks.");
    }
    if (type == 10)
    {
        Enter.setString("Pay 100 PKR per property");
    }
    if (type == 11)
    {
        Enter.setString("Pay small Tax of 25 PKR");
    }
    if (type == 12)
    {
        Enter.setString("You have been elected as chairperson.\n Pay 25 PKR to each player.");
    }
    if (type == 13)
    {
        Enter.setString("Collect 150 PKR from the Bank.");
    }
    if (type == 14)
    {
        Enter.setString("Advance to Airport and not pay\n any Tax there.");
    }
    if (type == 15)
    {
        Enter.setString("Advance token to Metro Station.");
    }
    window.draw(Enter);
}
void note_bankmoney(sf::RenderWindow& window, string money)
{
    sf::Font font;
    font.loadFromFile("arial.ttf");
    sf::Text Enter;
    Enter.setCharacterSize(15);
    Enter.setFillColor(sf::Color::White);
    Enter.setFont(font);

    Enter.setString("Bank Budget: "+ money);
    Enter.setPosition(950, 40);
    window.draw(Enter);
}
void note_emptyoneline(sf::RenderWindow& window, string line)
{
    sf::Font font;
    font.loadFromFile("arial.ttf");
    sf::Text Enter;
    Enter.setCharacterSize(20);
    Enter.setFillColor(sf::Color::White);
    Enter.setFont(font);

    Enter.setString(line);
    Enter.setPosition(1350, 150);
    window.draw(Enter);
}
void note_mortgage_radeemline(sf::RenderWindow& window)
{
    sf::Font font;
    font.loadFromFile("arial.ttf");
    sf::Text Enter;
    Enter.setCharacterSize(20);
    Enter.setFillColor(sf::Color::White);
    Enter.setFont(font);

    Enter.setString("Also Available optionss M)Mortgage R)Radeem \nOpen Console for implementation \nenter -1 to exit ");
    Enter.setPosition(1350, 500);
    window.draw(Enter);
}
void note_unownedproperty(sf::RenderWindow& window, string property_name, string property_price, string property_rent)
{
    sf::Font font;
    font.loadFromFile("arial.ttf");
    sf::Text Enter;
    Enter.setCharacterSize(20);
    Enter.setFillColor(sf::Color::White);
    Enter.setFont(font);

    Enter.setString("Property:"+ property_name);
    Enter.setPosition(1350, 150);
    window.draw(Enter);
    
    Enter.setString("Purchasing cost: "+property_price);
    Enter.setPosition(1350, 180);
    window.draw(Enter);

    Enter.setString("Rent: " +property_rent);
    Enter.setPosition(1350, 210);
    window.draw(Enter);

    Enter.setString("Available options : 1) Purchase 2)Pass");
    Enter.setPosition(1350, 240);
    window.draw(Enter);
    


}
void note_ownedresproperty(sf::RenderWindow& window, int type, string property_name, string property_rent, string house, string hotel, string shop, string wifi, string gas, string electicity)// 0 by other, 1 by currplayer
{
    if (type == 0)
    {
        sf::Font font;
        font.loadFromFile("arial.ttf");
        sf::Text Enter;
        Enter.setCharacterSize(20);
        Enter.setFillColor(sf::Color::White);
        Enter.setFont(font);

        Enter.setString("Property:" + property_name);
        Enter.setPosition(1350, 150);
        window.draw(Enter);

        Enter.setString("Rent: " + property_rent);
        Enter.setPosition(1350, 180);
        window.draw(Enter);

        Enter.setString("Available options : 1) Pay Rent ");
        Enter.setPosition(1350, 210);
        window.draw(Enter);
    
    }
    if (type == 1)
    {

        sf::Font font;
        font.loadFromFile("arial.ttf");
        sf::Text Enter;
        Enter.setCharacterSize(20);
        Enter.setFillColor(sf::Color::White);
        Enter.setFont(font);

        Enter.setString("Property:" + property_name);
        Enter.setPosition(1350, 150);
        window.draw(Enter);

        Enter.setString("Rent: " + property_rent);
        Enter.setPosition(1350, 180);
        window.draw(Enter);

        Enter.setString("No of houses: " + house);
        Enter.setPosition(1350, 210);
        window.draw(Enter);

        Enter.setString("No of hotels: " + hotel);
        Enter.setPosition(1350, 240);
        window.draw(Enter);

        Enter.setString("No of shops: " + shop);
        Enter.setPosition(1350, 270);
        window.draw(Enter);

        Enter.setString("Electricity: " + electicity);
        Enter.setPosition(1350, 300);
        window.draw(Enter);

        Enter.setString("Gas: " + gas);
        Enter.setPosition(1350, 330);
        window.draw(Enter);

        Enter.setString("Wifi: " + wifi);
        Enter.setPosition(1350, 360);
        window.draw(Enter);
        
        Enter.setString("Available options:\n 1) Add House (PKR 100) 2) Add Hotel(4 Houses+2 Shops)\n 3) Add Shop(3 House) 4) Add Shop(PKR 300),\n 5) Add Wifi(PKR 30) 6) Add Electricity(PKR 50)\n 7) Add Gas(PKR 50)");
        Enter.setPosition(1350, 390);
        window.draw(Enter);
      

    }
}
void note_ownedunresproperty(sf::RenderWindow& window, int type, string property_name, string property_rent)// 0 by other, 1 by currplayer
{
    if (type == 0)
    {
        sf::Font font;
        font.loadFromFile("arial.ttf");
        sf::Text Enter;
        Enter.setCharacterSize(20);
        Enter.setFillColor(sf::Color::White);
        Enter.setFont(font);

        Enter.setString("Property:" + property_name);
        Enter.setPosition(1350, 150);
        window.draw(Enter);

        Enter.setString("Rent: " + property_rent);
        Enter.setPosition(1350, 180);
        window.draw(Enter);

        Enter.setString("Available options 1) Pay Rent ");
        Enter.setPosition(1350, 210);
        window.draw(Enter);

    }
    if (type == 1)
    {

        sf::Font font;
        font.loadFromFile("arial.ttf");
        sf::Text Enter;
        Enter.setCharacterSize(20);
        Enter.setFillColor(sf::Color::White);
        Enter.setFont(font);

        Enter.setString("Property:" + property_name);
        Enter.setPosition(1350, 150);
        window.draw(Enter);

        Enter.setString("Rent: " + property_rent);
        Enter.setPosition(1350, 180);
        window.draw(Enter);

        Enter.setString("Available options 1) Pass ");
        Enter.setPosition(1350, 210);
        window.draw(Enter);
             
    }
}
void note_taxblock(sf::RenderWindow& window, string name, string tax)
{
    sf::Font font;
    font.loadFromFile("arial.ttf");
    sf::Text Enter;
    Enter.setCharacterSize(20);
    Enter.setFillColor(sf::Color::White);
    Enter.setFont(font);

    Enter.setString("Tax Label:" + name);
    Enter.setPosition(1350, 150);
    window.draw(Enter);

    Enter.setString("Tax Associated: " + tax);
    Enter.setPosition(1350, 180);
    window.draw(Enter);

    Enter.setString("Available options: 1) Continue");
    Enter.setPosition(1350, 210);
    window.draw(Enter);
}
void curplayerrectangles(sf::RenderWindow& window, int cur_player)
{
    sf::RectangleShape square;
    square.setSize(sf::Vector2f(70,70));
    if (cur_player == 1)
    {
        square.setFillColor(sf::Color::Magenta);
    }
    else  
    square.setFillColor(sf::Color::White);
    square.setPosition(sf::Vector2f(1200, 150));
    window.draw(square);

    if (cur_player == 2)
    {
        square.setFillColor(sf::Color::Magenta);
    }
    else
        square.setFillColor(sf::Color::White);
    square.setPosition(sf::Vector2f(1200, 230));
    window.draw(square);

    if (cur_player == 3)
    {
        square.setFillColor(sf::Color::Magenta);
    }
    else
        square.setFillColor(sf::Color::White);
    square.setPosition(sf::Vector2f(1200, 310));
    window.draw(square);

    if (cur_player == 4)
    {
        square.setFillColor(sf::Color::Magenta);
    }
    else
        square.setFillColor(sf::Color::White);
    square.setPosition(sf::Vector2f(1200, 390));
    window.draw(square);

    if (cur_player == 5)
    {
        square.setFillColor(sf::Color::Magenta);
    }
    else
        square.setFillColor(sf::Color::White);
    square.setPosition(sf::Vector2f(1200, 470));
    window.draw(square);


}
void dicestring(sf::RenderWindow& window)
{
    sf::Font font;
    font.loadFromFile("arial.ttf");
    sf::Text Enter;
    Enter.setString("Enter 'D' to roll the dice ");
    Enter.setCharacterSize(20);
    Enter.setFillColor(sf::Color::White);
    Enter.setFont(font);
    Enter.setPosition(1100, 100);
    window.draw(Enter);
}
void printdice(sf::RenderWindow& window, int value)
{
    sf::RectangleShape dicerec;
    sf::Image diceimg;
    if(value==1)
        diceimg.loadFromFile("1.png");
    if(value==2)
        diceimg.loadFromFile("2.png");
    if (value == 3)
        diceimg.loadFromFile("3.png");
    if (value == 4)
        diceimg.loadFromFile("4.png");
    if (value == 5)
        diceimg.loadFromFile("5.png");
    if (value == 6)
        diceimg.loadFromFile("6.png");
    if (value == 0)
        diceimg.loadFromFile("0.png");
    sf::Texture dicetex;
    dicetex.loadFromImage(diceimg);
    dicerec.setSize(sf::Vector2f(100, 100));
    dicerec.setTexture(&dicetex);
    dicerec.setPosition(330,655);
    window.draw(dicerec);
}
int num_of_players = 0;
void player_budget(sf::RenderWindow& window, string money, int position)
{
    sf::Font font;
    font.loadFromFile("arial.ttf");
    sf::Text Enter;
    Enter.setCharacterSize(15);
    Enter.setFillColor(sf::Color::White);
    Enter.setFont(font);
    Enter.setString("PKR" + money);
    if (position == 0)
    {   
        Enter.setPosition(1090, 150);
    }
    if (position == 1)
    {
        Enter.setPosition(1090, 230);
    }
    if (position == 2)
    {
        Enter.setPosition(1090, 310);
    }
    if (position == 3)
    {
        Enter.setPosition(1090, 390);
    }
    if (position == 4)
    {
        Enter.setPosition(1090, 470);
    }
    window.draw(Enter);
}
void tokensprite(sf::RenderWindow& window)
{
    sf::RectangleShape Tokens[5];
    sf::Image pictures[5];
    sf::Texture tuxtures[5];
    pictures[0].loadFromFile("token-1.png");
    tuxtures[0].loadFromImage(pictures[0]);
    Tokens[0].setSize(sf::Vector2f(60, 60));
    Tokens[0].setTexture(&tuxtures[0]);
    pictures[1].loadFromFile("token-2.png");
    tuxtures[1].loadFromImage(pictures[1]);
    Tokens[1].setSize(sf::Vector2f(60, 60));
    Tokens[1].setTexture(&tuxtures[1]);
    pictures[2].loadFromFile("token-3.png");
    tuxtures[2].loadFromImage(pictures[2]);
    Tokens[2].setSize(sf::Vector2f(60, 60));
    Tokens[2].setTexture(&tuxtures[2]);
    pictures[3].loadFromFile("token-4.png");
    tuxtures[3].loadFromImage(pictures[3]);
    Tokens[3].setSize(sf::Vector2f(60, 60));
    Tokens[3].setTexture(&tuxtures[3]);
    pictures[4].loadFromFile("token-5.png");
    tuxtures[4].loadFromImage(pictures[4]);
    Tokens[4].setSize(sf::Vector2f(60, 60));
    Tokens[4].setTexture(&tuxtures[4]);
    Tokens[0].setPosition(1205, 150);
    Tokens[1].setPosition(1205, 230);
    Tokens[2].setPosition(1205, 310);
    Tokens[3].setPosition(1205, 390);
    Tokens[4].setPosition(1205, 470);
    for (int i = 0; i < 5; i++)
    {
        if (i >= num_of_players)
        {
            pictures[i].loadFromFile("q.png");
            tuxtures[i].loadFromImage(pictures[i]);
            Tokens[i].setTexture(&tuxtures[i]);
        }
        window.draw(Tokens[i]);
    
    }
}
void give_turn(int &turn)
{
    
    if (num_of_players == 2)
    {
        if (turn == 0)
            turn = 1;
        else if (turn == 1)
            turn = 2;
        else if (turn == 2)
            turn = 1;
    }
    else if (num_of_players == 3)
    {
        if (turn == 0)
            turn = 1;
        else if (turn == 1)
            turn = 2;
        else if (turn == 2)
            turn = 3;
        else if (turn == 3)
            turn = 1;
    }
    else if (num_of_players == 4)
    {
        if (turn == 0)
            turn = 1;
        else if (turn == 1)
            turn = 2;
        else if (turn == 2)
            turn = 3;
        else if (turn == 3)
            turn = 4;
        else if (turn == 4)
            turn = 1;
    }
    else if (num_of_players == 5)
    {
        if (turn == 0)
            turn = 1;
        else if (turn == 1)
            turn = 2;
        else if (turn == 2)
            turn = 3;
        else if (turn == 3)
            turn = 4;
        else if (turn == 4)
            turn = 5;
        else if (turn == 5)
            turn = 1;
    }
}
void menufunc(sf::RenderWindow& window, sf::RectangleShape& menu)
{
    window.draw(menu);
    sf::Text Enter;
    sf::Font font;
    font.loadFromFile("arial.ttf");
    Enter.setFont(font);
    Enter.setFillColor(sf::Color::White);
    Enter.setCharacterSize(50);
    Enter.setString("PRESS ANYTHING TO CONTINUE");
    Enter.setPosition(570, 600);
    window.draw(Enter);
   
}
// second menu draw
void menufunc2(sf::RenderWindow& window, sf::RectangleShape& menu)
{
    window.draw(menu);
  
}
// board draw
void boardfun(sf::RenderWindow& window, sf::RectangleShape& menu)
{
    window.draw(menu);
}
// it will change the current position with respect to the dice value and move the token on board 
void movementonboard(int dicevalue, int cur_pos, sf::RectangleShape& token)
{

    if (cur_pos == 0)
        token.setPosition(200, 50);
    if (cur_pos == 1)
        token.setPosition(250, 50);
    if (cur_pos == 2)
        token.setPosition(320, 50);
    if (cur_pos == 3)
        token.setPosition(390, 50);
    if (cur_pos == 4)
        token.setPosition(460, 50);
    if (cur_pos == 5)
        token.setPosition(520, 50);
    if (cur_pos == 6)
        token.setPosition(590, 50);
    if (cur_pos == 7)
        token.setPosition(640, 50);
    if (cur_pos == 8)
        token.setPosition(715, 50);
    if (cur_pos == 9)
        token.setPosition(780, 50);
    if (cur_pos == 10)
        token.setPosition(880, 50);
    if (cur_pos == 11)
        token.setPosition(990, 240);
    if (cur_pos == 12)
        token.setPosition(990, 300);
    if (cur_pos == 13)
        token.setPosition(990, 370);
    if (cur_pos == 14)
        token.setPosition(990, 430);
    if (cur_pos == 15)
        token.setPosition(990, 500);
    if (cur_pos == 16)
        token.setPosition(990, 570);
    if (cur_pos == 17)
        token.setPosition(990, 630);
    if (cur_pos == 18)
        token.setPosition(990, 700);
    if (cur_pos == 19)
        token.setPosition(990, 770);
    if (cur_pos == 20)
        token.setPosition(880, 970);
    if (cur_pos == 21)
        token.setPosition(780, 970);
    if (cur_pos == 22)
        token.setPosition(715, 970);
    if (cur_pos == 23)
        token.setPosition(650, 970);
    if (cur_pos == 24)
        token.setPosition(590, 970);
    if (cur_pos == 25)
        token.setPosition(520, 970);
    if (cur_pos == 26)
        token.setPosition(460, 970);
    if (cur_pos == 27)
        token.setPosition(390, 970);
    if (cur_pos == 28)
        token.setPosition(320, 970);
    if (cur_pos == 29)
        token.setPosition(250, 970);
    if (cur_pos == 30)
        token.setPosition(200, 970);
    if (cur_pos == 31)
        token.setPosition(50, 770);
    if (cur_pos == 32)
        token.setPosition(50, 700);
    if (cur_pos == 33)
        token.setPosition(50, 640);
    if (cur_pos == 34)
        token.setPosition(50, 570);
    if (cur_pos == 35)
        token.setPosition(50, 500);
    if (cur_pos == 36)
        token.setPosition(50, 430);
    if (cur_pos == 37)
        token.setPosition(50, 370);
    if (cur_pos == 38)
        token.setPosition(50, 300);
    if (cur_pos == 39)
        token.setPosition(50, 240);

}
void move_to_jail(sf::RectangleShape& token)
{
    token.setPosition(880, 50);
}
void lock_pos(sf::RectangleShape& token)
{
    token.setPosition(2000, 2000);
}
int main()
{
    srand(time(NULL));
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");
    sf::RectangleShape menu;
    sf::Image image;
    image.loadFromFile("MENU.jpg");
    sf::Texture texture;
    texture.loadFromImage(image);
    menu.setSize(sf::Vector2f(1920, 1080));
    menu.setTexture(&texture);
    sf::RectangleShape menu_2;
    sf::Image image_2;
    image_2.loadFromFile("menu2.jpg");
    sf::Texture texture_2;
    texture_2.loadFromImage(image_2);
    menu_2.setSize(sf::Vector2f(1920, 1080));
    menu_2.setTexture(&texture_2);
    sf::RectangleShape boardrec;
    sf::Image board;
    board.loadFromFile("board2.jpg");
    sf::Texture texture_3;
    texture_3.loadFromImage(board);
    boardrec.setSize(sf::Vector2f(1920, 1080));
    boardrec.setTexture(&texture_3);
  
   
    int turn = 0;
    bool inmenu = true;
    bool menu2 = false;
    bool ingame = false;
    bool gamewon = false;
   
    bool onetime = true;
    bool check1 = false;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) //close button on window
                window.close();
        
        if (onetime == true)
        {
            if (inmenu == true)
            {
                menufunc(window, menu);
                window.display();
                if (event.type == sf::Event::KeyPressed)  //Press any key to continue
                {
                    menu2 = true;
                    inmenu = false;
                }
            }
            else if (menu2 == true)
            {
                menufunc2(window, menu_2);
                if (event.type == sf::Event::KeyPressed)
                {
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1)) //first option
                    {
                        num_of_players = 2;
                        ingame = true;
                        menu2 = false;
                        onetime = false;
                    }
                    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2)) //second optiomn
                    {
                        num_of_players = 3;   
                        ingame = true;
                        menu2 = false;
                        onetime = false;
                    }
                    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3)) //third
                    {
                        num_of_players = 4;
                        ingame = true;
                        menu2 = false;
                        onetime = false;
                    }
                    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4)) //fourth
                    {
                        num_of_players = 5;
                        ingame = true;
                        menu2 = false;
                        onetime = false;
                    }
                }
            }
        }
        }
        if (onetime == false)
        {
            check1 = true;
            window.close();
        }
        window.display();
       
            
    }

    if (check1 == true)
    {
        sf::RectangleShape* Tokens = new sf::RectangleShape[num_of_players]; //rectangles for token
        sf::Image* pictures = new sf::Image[num_of_players]; // images for token
        sf::Texture* tuxtures = new sf::Texture[num_of_players]; // textures for token
        // Here we will create players list (player.cpp)
        // Following are for linking the token shapes for token with the textures acc to the total num of players 
        monopoly m(num_of_players);
        if (num_of_players == 2)
        {
            pictures[0].loadFromFile("token-1.png");
            tuxtures[0].loadFromImage(pictures[0]);
            Tokens[0].setSize(sf::Vector2f(60, 60));
            Tokens[0].setTexture(&tuxtures[0]);
            pictures[1].loadFromFile("token-2.png");
            tuxtures[1].loadFromImage(pictures[1]);
            Tokens[1].setSize(sf::Vector2f(60, 60));
            Tokens[1].setTexture(&tuxtures[1]);
            Tokens[0].setPosition(40, 50);
            Tokens[1].setPosition(80, 50);
        }
        if (num_of_players == 3)
        {
            pictures[0].loadFromFile("token-1.png");
            tuxtures[0].loadFromImage(pictures[0]);
            Tokens[0].setSize(sf::Vector2f(60, 60));
            Tokens[0].setTexture(&tuxtures[0]);
            pictures[1].loadFromFile("token-2.png");
            tuxtures[1].loadFromImage(pictures[1]);
            Tokens[1].setSize(sf::Vector2f(60, 60));
            Tokens[1].setTexture(&tuxtures[1]);
            pictures[2].loadFromFile("token-3.png");
            tuxtures[2].loadFromImage(pictures[2]);
            Tokens[2].setSize(sf::Vector2f(60, 60));
            Tokens[2].setTexture(&tuxtures[2]);
            Tokens[0].setPosition(40, 50);
            Tokens[1].setPosition(80, 50);
            Tokens[2].setPosition(120, 50);
        }
        if (num_of_players == 4)
        {
            pictures[0].loadFromFile("token-1.png");
            tuxtures[0].loadFromImage(pictures[0]);
            Tokens[0].setSize(sf::Vector2f(60, 60));
            Tokens[0].setTexture(&tuxtures[0]);
            pictures[1].loadFromFile("token-2.png");
            tuxtures[1].loadFromImage(pictures[1]);
            Tokens[1].setSize(sf::Vector2f(60, 60));
            Tokens[1].setTexture(&tuxtures[1]);
            pictures[2].loadFromFile("token-3.png");
            tuxtures[2].loadFromImage(pictures[2]);
            Tokens[2].setSize(sf::Vector2f(60, 60));
            Tokens[2].setTexture(&tuxtures[2]);
            pictures[3].loadFromFile("token-4.png");
            tuxtures[3].loadFromImage(pictures[3]);
            Tokens[3].setSize(sf::Vector2f(60, 60));
            Tokens[3].setTexture(&tuxtures[3]);
            Tokens[0].setPosition(40, 50);
            Tokens[1].setPosition(80, 50);
            Tokens[2].setPosition(120, 50);
            Tokens[3].setPosition(160, 50);
        }
        if (num_of_players == 5)
        {
            pictures[0].loadFromFile("token-1.png");
            tuxtures[0].loadFromImage(pictures[0]);
            Tokens[0].setSize(sf::Vector2f(60, 60));
            Tokens[0].setTexture(&tuxtures[0]);
            pictures[1].loadFromFile("token-2.png");
            tuxtures[1].loadFromImage(pictures[1]);
            Tokens[1].setSize(sf::Vector2f(60, 60));
            Tokens[1].setTexture(&tuxtures[1]);
            pictures[2].loadFromFile("token-3.png");
            tuxtures[2].loadFromImage(pictures[2]);
            Tokens[2].setSize(sf::Vector2f(60, 60));
            Tokens[2].setTexture(&tuxtures[2]);
            pictures[3].loadFromFile("token-4.png");
            tuxtures[3].loadFromImage(pictures[3]);
            Tokens[3].setSize(sf::Vector2f(60, 60));
            Tokens[3].setTexture(&tuxtures[3]);
            pictures[4].loadFromFile("token-5.png");
            tuxtures[4].loadFromImage(pictures[4]);
            Tokens[4].setSize(sf::Vector2f(60, 60));
            Tokens[4].setTexture(&tuxtures[4]);
            Tokens[0].setPosition(40, 50);
            Tokens[1].setPosition(80, 50);
            Tokens[2].setPosition(120, 50);
            Tokens[3].setPosition(160, 50);
            Tokens[4].setPosition(200, 50);
        }
        sf::RenderWindow window2(sf::VideoMode(1920, 1080), "MONOPOLY");
        int turn_ofPlayer=0;
        bool wait = true; //dice
        bool wait2 = false; //block_operations
        bool wait3 = false; //mortgage/radeem
        int dice=0;
        int cardid = 0;
        while (window2.isOpen())
        {
           static sf::Clock Timer;
           sf::Time Time1;
            
           boardfun(window2, boardrec);
           printdice(window2, dice);
           curplayerrectangles(window2, turn_ofPlayer);
           tokensprite(window2);
           note_bankmoney(window2, m.getbankcash());
            for (int turn_ofplayer = 0; turn_ofplayer < num_of_players; turn_ofplayer++)
            {
                window2.draw(Tokens[turn_ofplayer]);
            }
            
            m.draw_cards(window2, cardid, 900, 700);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            {
                cardid++;
                if (cardid > 25)
                {
                    cardid = 0;
                }
                m.draw_cards(window2, cardid, 900, 700);
                window2.display();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            {
                cardid--;
                if (cardid < 2)
                {
                    cardid = 25;
                }
                m.draw_cards(window2, cardid, 900, 700);
                window2.display();
            }
           
            for (int i = 0; i < num_of_players; i++)
            {
                string money =m.give_budget(i);
                player_budget(window2, money, i);
            }
            sf::Event event;
            for (int turn_ofplayer = 0; turn_ofplayer < num_of_players; turn_ofplayer++)
            {
                window2.draw(Tokens[turn_ofplayer]);
            }
            while (window2.pollEvent(event))
            {
                if (event.type == sf::Event::Closed) //close button on window
                 window2.close();
            }
           
            if (wait2 == true)
            {
                int type = m.type_ofblock(m.position_ofPlayer(turn_ofPlayer-1));
                if (type == 1)// empty blocks
                {
                    if (m.get_emptyblocktype(m.position_ofPlayer(turn_ofPlayer - 1), 4) == true) // gotojail
                    {
                        m.gotojail(turn_ofPlayer - 1);
                        m.set_jail_interval(turn_ofPlayer - 1);
                        note_emptyoneline(window2, "GO TO JAIL \n 1)Continue");
                        note_mortgage_radeemline(window2);
                        window2.display();
                        while (1)
                        {
                           if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
                           {
                                 
                                    for (int i = 0; i < 39; i++)
                                    {
                                        int type = m.type_ofblock(i);
                                        if (type == 2)
                                        {
                                            if (m.is_propertyMortgaged(i) == false && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                            {
                                                cout << i<<"->" <<m.give_blockname(i) << endl;
                                                
                                            }

                                        }
                                    }
                                  
                                    cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                    int id;
                                    cin >> id;
                                    if (id == -1)
                                    {
                                        break;
                                    }
                                    m.mortgage_property(id, turn_ofPlayer - 1);
                                  
                           }
                           if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                           {

                               for (int i = 0; i < 39; i++)
                               {
                                   int type = m.type_ofblock(i);
                                   if (type == 2)
                                   {
                                       if (m.is_propertyMortgaged(i) == true && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                       {
                                           cout << i << "->" << m.give_blockname(i) << endl;
                                       }

                                   }
                               }

                               cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                               int id;
                               cin >> id;
                               if (id == -1)
                               {
                                   break;
                               }
                               m.reedem_property(id, turn_ofPlayer - 1);

                           }
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
                            {

                                move_to_jail(Tokens[turn_ofPlayer - 1]);
                                break;

                            }
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                            {
                                cardid++;
                                if (cardid > 25)
                                {
                                    cardid = 0;
                                }
                                
                                note_mortgage_radeemline(window2);
                                note_emptyoneline(window2, "GO TO JAIL");
                                m.draw_cards(window2, cardid, 900, 700);
                                window2.display();
                            }
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                            {
                                cardid--;
                                if (cardid < 2)
                                {
                                    cardid = 25;
                                }
                                note_mortgage_radeemline(window2);
                                note_emptyoneline(window2, "GO TO JAIL");
                                m.draw_cards(window2, cardid, 900, 700);
                                window2.display();
                            }

                        }
                    }

                    if (m.get_emptyblocktype(m.position_ofPlayer(turn_ofPlayer - 1), 1) == true)//GO
                    {
                            note_emptyoneline(window2, "GO and Collect 500 (on completing a single round)\n 1) Continue");
                            note_mortgage_radeemline(window2);
                            window2.display();
                            while (1)
                            {

                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
                                {

                                    for (int i = 0; i < 39; i++)
                                    {
                                        int type = m.type_ofblock(i);
                                        if (type == 2)
                                        {
                                            if (m.is_propertyMortgaged(i) == false && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                            {
                                                cout << i<<"->"<<m.give_blockname(i) << endl;
                                            }

                                        }
                                    }
                                   
                                    cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                    int id;
                                    cin >> id;
                                    if (id == -1)
                                    {
                                        break;
                                    }
                                    m.mortgage_property(id, turn_ofPlayer - 1);

                                }
                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                                {

                                    for (int i = 0; i < 39; i++)
                                    {
                                        int type = m.type_ofblock(i);
                                        if (type == 2)
                                        {
                                            if (m.is_propertyMortgaged(i) == true && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                            {
                                                cout << i << "->" << m.give_blockname(i) << endl;
                                            }

                                        }
                                    }

                                    cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                    int id;
                                    cin >> id;
                                    if (id == -1)
                                    {
                                        break;
                                    }
                                    m.reedem_property(id, turn_ofPlayer - 1);

                                }
                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
                                {

                                    break;

                                }
                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                                {
                                    note_emptyoneline(window2, "GO and Collect 500 (on completing a single round)");
                                    cardid++;
                                    if (cardid > 25)
                                    {
                                        cardid = 0;
                                    }
                                    note_mortgage_radeemline(window2);
                                    m.draw_cards(window2, cardid, 900, 700);
                                    window2.display();
                                }
                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                                {
                                    cardid--;
                                    if (cardid < 2)
                                    {
                                        cardid = 25;
                                    }
                                    note_mortgage_radeemline(window2);
                                    note_emptyoneline(window2, "GO and Collect 500 (on completing a single round)");
                                    m.draw_cards(window2, cardid, 900, 700);
                                    window2.display();
                                }

                            }
                    }
                    if (m.get_emptyblocktype(m.position_ofPlayer(turn_ofPlayer - 1), 2) == true) // jail
                    {
                        bool rel = false;
                        note_mortgage_radeemline(window2);
                        string s;
                        
                       
                      
                        if (m.check_injail(turn_ofPlayer - 1) == true)
                        {
                            move_to_jail(Tokens[turn_ofPlayer - 1]);
                            s = "JAIL(enabled) \n1) Continue \n2) Pay 400 for your release";
                            m.decrement_jail_interval(turn_ofPlayer - 1);
                            if (m.get_jailcards(turn_ofPlayer - 1) >= 1)
                            {
                                m.release_fromjail(turn_ofPlayer - 1);
                                m.remove_jailcard(turn_ofPlayer - 1);
                                rel = true;
                                m.reset_jail_interval(turn_ofPlayer - 1);
                            }
                            else if (m.get_jail_interval(turn_ofPlayer - 1) == 0)
                            {
                                m.release_fromjail(turn_ofPlayer - 1);
                            }
                           
                        }
                        if (m.check_injail(turn_ofPlayer - 1) != true)
                        {
                            s = "JAIL(disabled) \n1) Continue ";
                        }
                        note_emptyoneline(window2, s);
                        if (rel == true)
                        {
                            note_releasejail(window2);
                        }
                        window2.display();
                        while (1)
                        {

                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
                            {

                                for (int i = 0; i < 39; i++)
                                {
                                    int type = m.type_ofblock(i);
                                    if (type == 2)
                                    {
                                        if (m.is_propertyMortgaged(i) == false && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                        {
                                            cout << i << "->" << m.give_blockname(i) << endl;
                                        }

                                    }
                                }
                               
                                cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                int id;
                                cin >> id;
                                if (id == -1)
                                {
                                    break;
                                }
                                m.mortgage_property(id, turn_ofPlayer - 1);

                            }
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                            {

                                for (int i = 0; i < 39; i++)
                                {
                                    int type = m.type_ofblock(i);
                                    if (type == 2)
                                    {
                                        if (m.is_propertyMortgaged(i) == true && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                        {
                                            cout << i << "->" << m.give_blockname(i) << endl;
                                        }

                                    }
                                }

                                cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                int id;
                                cin >> id;
                                if (id == -1)
                                {
                                    break;
                                }
                                m.reedem_property(id, turn_ofPlayer - 1);

                            }
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
                            {

                                break;

                            }
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
                            {

                                m.pay_yourrelease(turn_ofPlayer - 1);
                                m.reset_jail_interval(turn_ofPlayer - 1);
                                break;
                            }
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                            {
                                note_emptyoneline(window2, s);
                                if (rel == true)
                                {
                                    note_releasejail(window2);
                                }
                                cardid++;
                                if (cardid > 25)
                                {
                                    cardid = 0;
                                }
                                note_mortgage_radeemline(window2);
                                m.draw_cards(window2, cardid, 900, 700);
                                window2.display();
                            }
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                            {
                                cardid--;
                                if (cardid < 2)
                                {
                                    cardid = 25;
                                }
                                note_mortgage_radeemline(window2);
                                if (rel == true)
                                {
                                    note_releasejail(window2);
                                }
                                note_emptyoneline(window2, s);
                                m.draw_cards(window2, cardid, 900, 700);
                                window2.display();
                            }
                        }
                    }
                    if (m.get_emptyblocktype(m.position_ofPlayer(turn_ofPlayer - 1), 3) == true) // freeparking
                    {
                        note_emptyoneline(window2, "FREE PARKING \n 1)Continue");
                        note_mortgage_radeemline(window2);
                        window2.display();
                        while (1)
                        {

                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
                            {

                                for (int i = 0; i < 39; i++)
                                {
                                    int type = m.type_ofblock(i);
                                    if (type == 2)
                                    {
                                        if (m.is_propertyMortgaged(i) == false && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                        {
                                            cout << i << "->" << m.give_blockname(i) << endl;
                                        }

                                    }
                                }
                           
                                cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                int id;
                                cin >> id;
                                if (id == -1)
                                {
                                    break;
                                }
                                m.mortgage_property(id, turn_ofPlayer - 1);

                            }
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                            {

                                for (int i = 0; i < 39; i++)
                                {
                                    int type = m.type_ofblock(i);
                                    if (type == 2)
                                    {
                                        if (m.is_propertyMortgaged(i) == true && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                        {
                                            cout << i << "->" << m.give_blockname(i) << endl;
                                        }

                                    }
                                }

                                cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                int id;
                                cin >> id;
                                if (id == -1)
                                {
                                    break;
                                }
                                m.reedem_property(id, turn_ofPlayer - 1);

                            }
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
                            {

                                break;

                            }
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                            {
                                note_mortgage_radeemline(window2);
                                note_emptyoneline(window2, "FREE PARKING");
                                cardid++;
                                if (cardid > 25)
                                {
                                    cardid = 0;
                                }
                                m.draw_cards(window2, cardid, 900, 700);
                                window2.display();
                            }
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                            {
                                cardid--;
                                if (cardid < 2)
                                {
                                    cardid = 25;
                                }
                                note_mortgage_radeemline(window2);
                                note_emptyoneline(window2, "FREE PARKING");
                                m.draw_cards(window2, cardid, 900, 700);
                                window2.display();
                            }
                        }
                    }
                }
                
                if (type == 2) //property blocks
                {
                    int subtype = m.get_propertyblocktype(m.position_ofPlayer(turn_ofPlayer - 1));
                    if (subtype == 1)
                    {
                    //residential
                        if (m.is_propertyOwned(m.position_ofPlayer(turn_ofPlayer - 1)) == false)
                        {
                         // property not owned by anyone
                            note_mortgage_radeemline(window2);
                            note_unownedproperty(window2,m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.priceOf_property(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)));
                            window2.display();
                         //call for function to implement the instructions
                            while (1)
                            {

                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
                                {

                                    for (int i = 0; i < 40; i++)
                                    {
                                        int type = m.type_ofblock(i);
                                        if (type == 2)
                                        {
                                            if (m.is_propertyMortgaged(i)==false && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                            {
                                                cout << i << "->" << m.give_blockname(i) << endl;
                                            }

                                        }
                                    }
                                   
                                    cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                    int id;
                                    cin >> id;
                                    if (id == -1)
                                    {
                                        break;
                                    }
                                    m.mortgage_property(id, turn_ofPlayer - 1);

                                }
                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                                {

                                    for (int i = 0; i < 40; i++)
                                    {
                                        int type = m.type_ofblock(i);
                                        if (type == 2)
                                        {
                                            if (m.is_propertyMortgaged(i) == true && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                            {
                                                cout << i << "->" << m.give_blockname(i) << endl;
                                            }

                                        }
                                    }

                                    cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                    int id;
                                    cin >> id;
                                    if (id == -1)
                                    {
                                        break;
                                    }
                                    m.reedem_property(id, turn_ofPlayer - 1);

                                }
                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
                                {
                                    m.buyproperty(turn_ofPlayer - 1, m.position_ofPlayer(turn_ofPlayer - 1));
                                    break;
                                }
                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
                                {
                                   break;
                                }
                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                                {
                                    note_mortgage_radeemline(window2);
                                    note_unownedproperty(window2, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.priceOf_property(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)));
                                    cardid++;
                                    if (cardid >25)
                                    {
                                        cardid = 0;
                                    }
                                    m.draw_cards(window2, cardid, 900, 700);
                                    window2.display();
                                }
                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                                {
                                    note_mortgage_radeemline(window2);
                                    note_unownedproperty(window2, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.priceOf_property(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)));
                                    cardid--;
                                    if (cardid < 2)
                                    {
                                        cardid = 25;
                                    }
                                    m.draw_cards(window2, cardid, 900, 700);
                                    window2.display();
                                }
                            }
                        }
                        else
                        {
                        //property owned by someone
                        // check if owned by the current player or not
                       
                            if (m.get_owner(m.position_ofPlayer(turn_ofPlayer - 1)) == turn_ofPlayer - 1)
                            {
                                int houses = m.get_house(m.position_ofPlayer(turn_ofPlayer - 1));
                                int hotels = m.get_hotel(m.position_ofPlayer(turn_ofPlayer - 1));
                                int shop = m.get_shop(m.position_ofPlayer(turn_ofPlayer - 1));
                                bool elec = m.get_elec(m.position_ofPlayer(turn_ofPlayer - 1));
                                bool wifi = m.get_wifi(m.position_ofPlayer(turn_ofPlayer - 1));
                                bool gas = m.get_gas(m.position_ofPlayer(turn_ofPlayer - 1));
                                string h;
                                stringstream hs;
                                hs << houses;
                                hs >> h;

                                string h2;
                                stringstream hs2;
                                hs2 << hotels;
                                hs2 >> h2;
                                
                                string sh;
                                stringstream shs;
                                shs << shop;
                                shs>> sh;

                                string els;
                                stringstream elss;
                                elss << elec;
                                elss >> els;
                                
                                string gs;
                                stringstream gss;
                                gss << gas;
                                gss >> gs;
                              
                                string wis;
                                stringstream wiss;
                                wiss << wifi;
                                wiss>> wis;
                                note_mortgage_radeemline(window2);
                                note_ownedresproperty(window2, 1, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)), h, h2, sh, wis, gs, els);
                                window2.display();
                                while (1)
                                {
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
                                    {

                                        for (int i = 0; i < 40; i++)
                                        {
                                            int type = m.type_ofblock(i);
                                            if (type == 2)
                                            {
                                                if (m.is_propertyMortgaged(i) == false && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                                {
                                                    cout << i << "->" << m.give_blockname(i) << endl;
                                                }

                                            }
                                        }
                                      
                                        cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                        int id;
                                        cin >> id;
                                        if (id == -1)
                                        {
                                            break;
                                        }
                                        m.mortgage_property(id, turn_ofPlayer - 1);

                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                                    {

                                        for (int i = 0; i < 40; i++)
                                        {
                                            int type = m.type_ofblock(i);
                                            if (type == 2)
                                            {
                                                if (m.is_propertyMortgaged(i) == true && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                                {
                                                    cout << i << "->" << m.give_blockname(i) << endl;
                                                }

                                            }
                                        }

                                        cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                        int id;
                                        cin >> id;
                                        if (id == -1)
                                        {
                                            break;
                                        }
                                        m.reedem_property(id, turn_ofPlayer - 1);

                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
                                    {
                                        m.add_housse(turn_ofPlayer - 1, m.position_ofPlayer(turn_ofPlayer - 1));
                                        break;
                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
                                    {
                                        m.add_hotel(turn_ofPlayer - 1, m.position_ofPlayer(turn_ofPlayer - 1));
                                        break;
                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
                                    {
                                        m.add_shop(turn_ofPlayer - 1, m.position_ofPlayer(turn_ofPlayer - 1),1);
                                        break;
                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
                                    {
                                        m.add_shop(turn_ofPlayer - 1, m.position_ofPlayer(turn_ofPlayer - 1), 2);
                                        break;
                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
                                    {
                                        m.add_wifi(turn_ofPlayer - 1, m.position_ofPlayer(turn_ofPlayer - 1));
                                        break;
                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
                                    {
                                        m.add_electricity(turn_ofPlayer - 1, m.position_ofPlayer(turn_ofPlayer - 1));
                                        break;
                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
                                    {
                                        m.add_gas(turn_ofPlayer - 1, m.position_ofPlayer(turn_ofPlayer - 1));
                                        break;
                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                                    {
                                        note_ownedresproperty(window2, 1, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)), h, h2, sh, wis, gs, els);
                                        note_mortgage_radeemline(window2);
                                        cardid++;
                                        if (cardid > 25)
                                        {
                                            cardid = 0;
                                        }
                                        m.draw_cards(window2, cardid, 900, 700);
                                        window2.display();
                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                                    {
                                        note_ownedresproperty(window2, 1, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)), h, h2, sh, wis, gs, els);
                                        note_mortgage_radeemline(window2);
                                        cardid--;
                                        if (cardid < 2)
                                        {
                                            cardid = 25;
                                        }
                                        m.draw_cards(window2, cardid, 900, 700);
                                        window2.display();
                                    }
                                }
                                //ask for upgradation
                            }
                        // if not owned then ask for rent
                            else
                            {
                            note_mortgage_radeemline(window2);
                            note_ownedresproperty(window2, 0, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)), "Houses", "Hotels", "Shops", "wifi", "Gas", "Electricity");
                                window2.display();
                                m.pay_rent(turn_ofPlayer - 1, m.position_ofPlayer(turn_ofPlayer - 1));
                                while (1)
                                {
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
                                    {

                                        for (int i = 0; i < 40; i++)
                                        {
                                            int type = m.type_ofblock(i);
                                            if (type == 2)
                                            {
                                                if (m.is_propertyMortgaged(i) == false && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                                {
                                                    cout << i << "->" << m.give_blockname(i) << endl;
                                                }

                                            }
                                        }
                                      
                                        cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                        int id;
                                        cin >> id;
                                        if (id == -1)
                                        {
                                            break;
                                        }
                                        m.mortgage_property(id, turn_ofPlayer - 1);

                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                                    {

                                        for (int i = 0; i < 40; i++)
                                        {
                                            int type = m.type_ofblock(i);
                                            if (type == 2)
                                            {
                                                if (m.is_propertyMortgaged(i) == true && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                                {
                                                    cout << i << "->" << m.give_blockname(i) << endl;
                                                }

                                            }
                                        }

                                        cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                        int id;
                                        cin >> id;
                                        if (id == -1)
                                        {
                                            break;
                                        }
                                        m.reedem_property(id, turn_ofPlayer - 1);

                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
                                    {
                                        break;
                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                                    {
                                        note_mortgage_radeemline(window2);
                                        note_ownedresproperty(window2, 0, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)), "Houses", "Hotels", "Shops", "wifi", "Gas", "Electricity");
                                        cardid++;
                                        if (cardid > 25)
                                        {
                                            cardid = 0;
                                        }
                                        m.draw_cards(window2, cardid, 900, 700);
                                        window2.display();
                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                                    {
                                        note_mortgage_radeemline(window2);
                                        cardid--;
                                        if (cardid < 2)
                                        {
                                            cardid = 25;
                                        }
                                        note_ownedresproperty(window2, 0, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)), "Houses", "Hotels", "Shops", "wifi", "Gas", "Electricity");
                                        m.draw_cards(window2, cardid, 900, 700);
                                        window2.display();
                                    }
                                }
                            }
                        }
                    }
                    else if (subtype == 0)
                    {
                    //non residential  
                        if (m.is_propertyOwned(m.position_ofPlayer(turn_ofPlayer - 1)) == false)
                        {
                            // property not owned by anyone
                            note_unownedproperty(window2, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.priceOf_property(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)));
                            note_mortgage_radeemline(window2);
                            window2.display();
                            //call for function to print instruction  to buy or pass the property
                            while (1)
                            {

                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
                                {

                                    for (int i = 0; i < 40; i++)
                                    {
                                        int type = m.type_ofblock(i);
                                        if (type == 2)
                                        {
                                            if (m.is_propertyMortgaged(i) == false && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                            {
                                                cout << i << "->" << m.give_blockname(i) << endl;
                                            }

                                        }
                                    }
                                   
                                    cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                    int id;
                                    cin >> id;
                                    if (id == -1)
                                    {
                                        break;
                                    }
                                    m.mortgage_property(id, turn_ofPlayer - 1);

                                }
                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                                {

                                    for (int i = 0; i < 40; i++)
                                    {
                                        int type = m.type_ofblock(i);
                                        if (type == 2)
                                        {
                                            if (m.is_propertyMortgaged(i) == true && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                            {
                                                cout << i << "->" << m.give_blockname(i) << endl;
                                            }

                                        }
                                    }

                                    cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                    int id;
                                    cin >> id;
                                    if (id == -1)
                                    {
                                        break;
                                    }
                                    m.reedem_property(id, turn_ofPlayer - 1);

                                }
                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
                                {
                                    m.buyproperty(turn_ofPlayer - 1, m.position_ofPlayer(turn_ofPlayer - 1));
                                    break;
                                }
                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
                                {
                                    break;
                                }
                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                                {
                                    note_mortgage_radeemline(window2);
                                    note_unownedproperty(window2, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.priceOf_property(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)));
                                    cardid++;
                                    if (cardid > 25)
                                    {
                                        cardid = 0;
                                    }
                                    m.draw_cards(window2, cardid, 900, 700);
                                    window2.display();
                                }
                                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                                {
                                    note_mortgage_radeemline(window2);
                                    note_unownedproperty(window2, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.priceOf_property(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)));
                                    cardid--;
                                    if (cardid < 2)
                                    {
                                        cardid = 25;
                                    }
                                    m.draw_cards(window2, cardid, 900, 700);
                                    window2.display();
                                }
                            }
                        }
                        else
                        {
                            //property owned by someone
                            // check if owned by the current player
                            if (m.get_owner(m.position_ofPlayer(turn_ofPlayer - 1)) == turn_ofPlayer - 1)
                            {
                                note_mortgage_radeemline(window2);
                                note_ownedunresproperty(window2, 1, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)));
                                window2.display();
                                while (1)
                                {
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
                                    {

                                        for (int i = 0; i < 40; i++)
                                        {
                                            int type = m.type_ofblock(i);
                                            if (type == 2)
                                            {
                                                if (m.is_propertyMortgaged(i) == false && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                                {
                                                    cout << i << "->" << m.give_blockname(i) << endl;
                                                }

                                            }
                                        }
                                      
                                        cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                        int id;
                                        cin >> id;
                                        if (id == -1)
                                        {
                                            break;
                                        }
                                        m.mortgage_property(id, turn_ofPlayer - 1);

                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                                    {

                                        for (int i = 0; i < 40; i++)
                                        {
                                            int type = m.type_ofblock(i);
                                            if (type == 2)
                                            {
                                                if (m.is_propertyMortgaged(i) == true && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                                {
                                                    cout << i << "->" << m.give_blockname(i) << endl;
                                                }

                                            }
                                        }

                                        cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                        int id;
                                        cin >> id;
                                        if (id == -1)
                                        {
                                            break;
                                        }
                                        m.reedem_property(id, turn_ofPlayer - 1);

                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
                                    {
                                      break;
                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                                    {
                                        note_mortgage_radeemline(window2);
                                        note_ownedunresproperty(window2, 1, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)));
                                        cardid++;
                                        if (cardid > 25)
                                        {
                                            cardid = 0;
                                        }
                                        m.draw_cards(window2, cardid, 900, 700);
                                        window2.display();
                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                                    {
                                        note_mortgage_radeemline(window2);
                                        note_ownedunresproperty(window2, 1, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)));
                                        cardid--;
                                        if (cardid < 2)
                                        {
                                            cardid = 25;
                                        }
                                        m.draw_cards(window2, cardid, 900, 700);
                                        window2.display();
                                    }
                                }
                                
                            }
                            // if not owned then ask for rent
                            else 
                            {
                                note_ownedunresproperty(window2, 0, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)));
                                m.pay_rent(turn_ofPlayer - 1, m.position_ofPlayer(turn_ofPlayer - 1));
                                note_mortgage_radeemline(window2);
                                window2.display();
                                while (1)
                                {
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
                                    {

                                        for (int i = 0; i < 40; i++)
                                        {
                                            int type = m.type_ofblock(i);
                                            if (type == 2)
                                            {
                                                if (m.is_propertyMortgaged(i) == false && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                                {
                                                    cout << i << "->" << m.give_blockname(i) << endl;
                                                }

                                            }
                                        }
                                     
                                        cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                        int id;
                                        cin >> id;
                                        if (id == -1)
                                        {
                                            break;
                                        }
                                        m.mortgage_property(id, turn_ofPlayer - 1);

                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                                    {

                                        for (int i = 0; i < 40; i++)
                                        {
                                            int type = m.type_ofblock(i);
                                            if (type == 2)
                                            {
                                                if (m.is_propertyMortgaged(i) == true && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                                {
                                                    cout << i << "->" << m.give_blockname(i) << endl;
                                                }

                                            }
                                        }

                                        cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                        int id;
                                        cin >> id;
                                        if (id == -1)
                                        {
                                            break;
                                        }
                                        m.reedem_property(id, turn_ofPlayer - 1);

                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
                                    {
                                        
                                        break;
                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                                    {
                                        note_ownedunresproperty(window2, 0, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)));
                                        note_mortgage_radeemline(window2);
                                        cardid++;
                                        if (cardid > 25)
                                        {
                                            cardid = 0;
                                        }
                                        m.draw_cards(window2, cardid, 900, 700);
                                        window2.display();
                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                                    {
                                        note_ownedunresproperty(window2, 0, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), m.rentOf_Property(m.position_ofPlayer(turn_ofPlayer - 1)));
                                        cardid--;
                                        note_mortgage_radeemline(window2);
                                        if (cardid < 2)
                                        {
                                            cardid = 25;
                                        }
                                        m.draw_cards(window2, cardid, 900, 700);
                                        window2.display();
                                    }
                                }
                            }
                        }
                    }
                
                }
                if (type == 3) // treasure blocks
                {
                    int subtype = m.get_treasureblocktype(m.position_ofPlayer(turn_ofPlayer - 1));
                    if(subtype==0)
                    {
                        //chance
                        int event_is = m.chance_action(turn_ofPlayer - 1, m.position_ofPlayer(turn_ofPlayer - 1),dice);
                        note_chance(window2, event_is);
                        note_mortgage_radeemline(window2);
                        note_emptyoneline(window2, "CHANCE \n 1) Continue");
                        movementonboard(0, m.position_ofPlayer(turn_ofPlayer - 1), Tokens[turn_ofPlayer - 1]);
                        window2.display();
                        if (event_is == 8)
                        {
                            note_sale_of_card(window2);
                            window2.display();
                            cout << " 1)sell the jail card to bank for 500PKR\n2)continue" << endl;
                            int opt = 0;
                            cin >> opt;
                            if (opt == 1)
                                m.sell_jail(turn_ofPlayer - 1);

                        }
                        while (1)
                        {
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
                            {

                                for (int i = 0; i < 40; i++)
                                {
                                    int type = m.type_ofblock(i);
                                    if (type == 2)
                                    {
                                        if (m.is_propertyMortgaged(i) == false && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                        {
                                            cout << i << "->" << m.give_blockname(i) << endl;
                                        }

                                    }
                                }

                                cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                int id;
                                cin >> id;
                                if (id == -1)
                                {
                                    break;
                                }
                                m.mortgage_property(id, turn_ofPlayer - 1);

                            }
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                            {

                                for (int i = 0; i < 40; i++)
                                {
                                    int type = m.type_ofblock(i);
                                    if (type == 2)
                                    {
                                        if (m.is_propertyMortgaged(i) == true && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                        {
                                            cout << i << "->" << m.give_blockname(i) << endl;
                                        }

                                    }
                                }

                                cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                                int id;
                                cin >> id;
                                if (id == -1)
                                {
                                    break;
                                }
                                m.reedem_property(id, turn_ofPlayer - 1);

                            }
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
                            {
                                break;
                            }
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                            {
                                note_chance(window2, event_is);
                                note_emptyoneline(window2, "CHANCE \n 1) Continue");
                                note_mortgage_radeemline(window2);
                                cardid++;
                                if (cardid > 25)
                                {
                                    cardid = 0;
                                }
                                m.draw_cards(window2, cardid, 900, 700);
                                window2.display();
                            }
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                            {
                                note_chance(window2, event_is);
                                note_emptyoneline(window2, "CHANCE \n 1) Continue");
                                note_mortgage_radeemline(window2);
                                cardid--;
                                if (cardid < 2)
                                {
                                    cardid = 25;
                                }
                                m.draw_cards(window2, cardid, 900, 700);
                                window2.display();
                            }
                        }
                    }
                    else if (subtype == 1)
                    {
                    //chest
                      int event_is=  m.chest_action(turn_ofPlayer - 1, m.position_ofPlayer(turn_ofPlayer - 1));
                      note_chest(window2, event_is);
                      note_mortgage_radeemline(window2);
                      note_emptyoneline(window2, "COMMUNITY CHEST\n 1) Continue");
                      movementonboard(0, m.position_ofPlayer(turn_ofPlayer - 1), Tokens[turn_ofPlayer - 1]);
                      window2.display();
                      if (event_is == 5)
                      {
                          note_sale_of_card(window2);
                          window2.display();
                          cout << " 1)sell the jail card to bank for 500PKR\n2)continue" << endl;
                          int opt = 0;
                          cin >> opt;
                          if (opt == 1)
                              m.sell_jail(turn_ofPlayer - 1);
                          
                      }
                      while (1)
                      {
                          if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
                          {

                              for (int i = 0; i < 40; i++)
                              {
                                  int type = m.type_ofblock(i);
                                  if (type == 2)
                                  {
                                      if (m.is_propertyMortgaged(i) == false && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                      {
                                          cout << i << "->" << m.give_blockname(i) << endl;
                                      }

                                  }
                              }

                              cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                              int id;
                              cin >> id;
                              if (id == -1)
                              {
                                  break;
                              }
                              m.mortgage_property(id, turn_ofPlayer - 1);

                          }
                          if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                          {

                              for (int i = 0; i < 40; i++)
                              {
                                  int type = m.type_ofblock(i);
                                  if (type == 2)
                                  {
                                      if (m.is_propertyMortgaged(i) == true && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                      {
                                          cout << i << "->" << m.give_blockname(i) << endl;
                                      }

                                  }
                              }

                              cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                              int id;
                              cin >> id;
                              if (id == -1)
                              {
                                  break;
                              }
                              m.reedem_property(id, turn_ofPlayer - 1);

                          }
                          if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
                          {
                              break;
                          }
                          if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                          {
                              note_chest(window2, event_is);
                              note_emptyoneline(window2, "COMMUNITY CHEST\n 1) Continue");
                              note_mortgage_radeemline(window2);
                              cardid++;
                              if (cardid > 25)
                              {
                                  cardid = 0;
                              }
                              m.draw_cards(window2, cardid, 900, 700);
                              window2.display();
                          }
                          if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                          {
                              note_chest(window2, event_is);
                              note_emptyoneline(window2, "COMMUNITY CHEST\n 1) Continue");
                              note_mortgage_radeemline(window2);
                              cardid--;
                              if (cardid < 2)
                              {
                                  cardid = 25;
                              }
                              m.draw_cards(window2, cardid, 900, 700);
                              window2.display();
                          }

                      }

                    }
                
                }
                if (type == 4)// tax blocks
                {
                    if (m.position_ofPlayer(turn_ofPlayer - 1) == 9)
                    {
                        m.deduct_landtax(turn_ofPlayer - 1);
                    }
                    if (m.position_ofPlayer(turn_ofPlayer - 1) == 26)
                    {
                        m.deduct_propertytax(turn_ofPlayer - 1);
                    }
                    string s = m.give_tax(m.position_ofPlayer(turn_ofPlayer - 1));
                    note_taxblock(window2, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)),s);
                    note_mortgage_radeemline(window2);
                    window2.display();
                    while (1)
                    {

                        if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
                        {

                            for (int i = 0; i < 40; i++)
                            {
                                int type = m.type_ofblock(i);
                                if (type == 2)
                                {
                                    if (m.is_propertyMortgaged(i) == false && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                    {
                                        cout << i << "->" << m.give_blockname(i) << endl;
                                    }

                                }
                            }
                          
                            cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                            int id;
                            cin >> id;
                            if (id == -1)
                            {
                                break;
                            }
                            m.mortgage_property(id, turn_ofPlayer - 1);

                        }
                        if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                        {

                            for (int i = 0; i < 40; i++)
                            {
                                int type = m.type_ofblock(i);
                                if (type == 2)
                                {
                                    if (m.is_propertyMortgaged(i) == true && m.is_propertyOwned(i) == true && m.get_owner(i) == turn_ofPlayer - 1)
                                    {
                                        cout << i << "->" << m.give_blockname(i) << endl;
                                    }

                                }
                            }

                            cout << "Please enter the exact block id(0,1,2,...) for the property" << endl;
                            int id;
                            cin >> id;
                            if (id == -1)
                            {
                                break;
                            }
                            m.reedem_property(id, turn_ofPlayer - 1);

                        }
                        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
                        {
                            break;
                        }
                        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                        {
                            note_taxblock(window2, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), s);
                            note_mortgage_radeemline(window2);
                            cardid++;
                            if (cardid > 25)
                            {
                                cardid = 0;
                            }
                            m.draw_cards(window2, cardid, 900, 700);
                            window2.display();
                        }
                        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                        {
                            note_taxblock(window2, m.give_blockname(m.position_ofPlayer(turn_ofPlayer - 1)), s);
                            note_mortgage_radeemline(window2);
                            cardid--;
                            if (cardid < 2)
                            {
                                cardid = 25;
                            }
                            m.draw_cards(window2, cardid, 900, 700);
                            window2.display();
                        }

                    }
                }
              
            }

            if (wait == true)
            {
                dicestring(window2);
                window2.display();
                give_turn(turn_ofPlayer);
                bool bankrupt =m.is_bankrupt(turn_ofPlayer - 1);
                if (bankrupt == true)
                {
                    lock_pos(Tokens[turn_ofPlayer - 1]);
                    give_turn(turn_ofPlayer);
                }
               
                while (1)
                {
                    
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                    {
                       
                        dice = m.roll_dice(turn_ofPlayer-1);
                        movementonboard(dice, m.position_ofPlayer(turn_ofPlayer-1), Tokens[turn_ofPlayer-1]);
                        wait = false;
                        Timer.restart();
                        
                        break;

                    }
                   

                }
               
            }
           
                
            
            Time1 = Timer.getElapsedTime();
            if (Time1.asSeconds() >= 0.5)
            {
                if (wait2 == false)
                {
                    wait2 = true;
                    wait = false;
                }
                else if (wait2 == true)
                {
                    wait2 = false;
                    wait = true;
                }
            }
           

           
           
            window2.display();
            window2.clear();

        }
    }

      
    return 0;
}
