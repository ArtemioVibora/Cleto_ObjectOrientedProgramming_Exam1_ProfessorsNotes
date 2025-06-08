#include <iostream>

using namespace std;

class Game
{
    private:
        string gameName;
        double price;
        double timesPlayed;
    public:
        Game(string p_name, double p_price, double p_tplayed) : 
            gameName(p_name), price(p_price), timesPlayed(p_tplayed) {}
        Game() : gameName(""), price(0), timesPlayed(0) {}

        void enterDetails()
        {
            cout << "What is name of the game: ";
            getline(cin, gameName);
            cout << "What is the price of the game: ";
            cin >> price;
            cin.get();
            cout << "How many times played: ";
            cin >> timesPlayed;
            cin.get();
        }

        void displayDetails()
        {
            cout << "Name of the game: " << gameName << endl;
            cout << "Price of the game: " << price << endl;
            cout << "Times played: " << timesPlayed << endl;
        }

};

int main()
{
    Game g1, g2("Last of us", 100, 100);
    g1.enterDetails();
    g1.displayDetails();
    g2.displayDetails();

    // Arrayed class
    cout << endl << endl;

    cout << "Array of this class" << endl;

    Game g3[3];
    for (int i = 0; i < 3; i++)
    {
        g3[i].enterDetails();
    }
    cout << endl << endl;
    for (int j = 0; j < 3; j++)
    {
        g3[j].displayDetails();
    }


}
