#include <iostream>

using namespace std;

class Game
{
    private:
        string gameName;
        double price;
        int totalTimesPlayed;
    public:
        Game(string n, double p, int t) : gameName(n), price(p), totalTimesPlayed(t) {}
        //Game() : gameName(gameName), price(price), totalTimesPlayed(totalTimesPlayed) {}
        Game() : gameName(""), price(0), totalTimesPlayed(0) {}

        void enterDetails()
        {
            cout << "Enter game name: ";
            //getline(cin, gameName);
            cin >> gameName;
            //cin.get();
            cout << "Enter price: ";
            cin >> price;
            cout << "Enter total times played: ";
            cin >> totalTimesPlayed;
        }

        void displayDetails()
        {
            cout << "Game name: " << gameName << endl;
            cout << "Game price: " << price << endl;
            cout << "Game total times played: " << totalTimesPlayed << endl;
        }
};

void enterGame(Game games[], int n)
{
    for (int i = 0; i < n; i++)
    {
        games[i].enterDetails();
    }
}

void displayGame(Game games[], int n)
{
    for (int i = 0; i < n; i++)
    {
        games[i].displayDetails();
    }
}

int main()
{
    int n = 5;

    Game games[n];

    enterGame(games, n);
    displayGame(games, n);
}