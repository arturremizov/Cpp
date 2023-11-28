#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include <climits>

void print_vector(std::vector<int> vector) 
{
    for (int i = 0; i < vector.size(); i++) 
    {
        std::cout << vector[i] << "\t";
    }
    std::cout << "\n";
}

void save_best_score(int count) 
{
    const std::string file_name = "best_score.txt";
    std::ifstream input(file_name);
            
    int best_score;
    if (input.is_open())
    {
        input >> best_score;
    }
    else 
    {
        best_score = INT_MAX;
    }

    std::ofstream output(file_name);
    if (count < best_score)
    {
        output << count;
    } 
    else 
    {
        output << best_score;
    }
}

void play_game() 
{
    std::vector<int> guesses;
    int count = 0;

    int random = rand() % 251;
    std::cout << random << "\n";
    std::cout << "Guess a number: ";
    while(true) 
    {
        int guess;
        std::cin >> guess;

        count++;
        guesses.push_back(guess);

        if (guess == random) 
        {
            std::cout << "You win!\n";
            break;
        }
        else if (guess < random)
        {
            std::cout << "Too low\n";
        }
        else if (guess > random)
        {
            std::cout << "Too high\n";
        }
    }

    save_best_score(count);
    print_vector(guesses);
}

int main() 
{
    srand(time(NULL));
    int choice;
    do 
    {
        std::cout << "0. Quit" << std::endl << "1. Play Game\n"; 
        std::cin >> choice;

        switch (choice)
        {
            case 0:
                std::cout << "Thanks for nothing\n";
                return 0;
            case 1:
                play_game();
                break;
        } 
    }
    while (choice != 0);
}
