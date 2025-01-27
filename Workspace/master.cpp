#include <iostream>
#include <string>
#include "storage.h" // Assuming this header contains functions like one(), two(), etc.
#include <cctype>
using namespace std;

int main()
{
    string word = "Pneumonoultramicroscopicsilicovolcanoconiosis";
    string dissapear(word.length(), '*');
    int lives = 6;
    int artData = 1;

    while (lives > 0 && dissapear != word)
    {
        cout << "Remaining letters: " << dissapear << endl;
        cout << "Chances: " << lives << endl;
        cout << "Guess a letter: ";

        char letter;
        cin >> letter;

        bool incorrectGuess = true;
        letter = tolower(letter);

        for (int i = 0; i < word.length(); ++i)
        {
            if (tolower(word[i]) == letter)
            {
                dissapear[i] = word[i];
                incorrectGuess = false;
            }
        }

        if (incorrectGuess)
        {
            cout << "Wrong" << endl;
            lives--;
            artData++;
            if (artData == 1)
            {
                one();
            }
            else if (artData == 2)
            {
                two();
            }
            else if (artData == 3)
            {
                three();
            }
            else if (artData == 4)
            {
                four();
            }
            else if (artData == 5)
            {
                five();
            }
            else if (artData == 6)
            {
                six();
            }
            else if (artData == 7)
            {
                seven();
            }
        }
        else
        {
            cout << "Right" << endl;
        }
    }

    if (lives == 0)
    {
        cout << "You died x_x the word was: " << word << endl;
    }
    else
    {
        cout << "You win!" << endl;
    }

    return 0;
}
