#include <iostream>
#include <string>

using namespace std;

bool palindrome(string word)
{
    /* If the length of a word is 1. Meaning it is just one letter then it is palindrome*/
    if(word.length() == 1)
    {
        return true;
    }
    /* Get the length of the word. This will be used to  index letters at the end (or the tail) of the word*/
    int back_indx = word.length() - 1;
    
    /* This loop will run the number of times equal to the length of the word*/
    for(int i = 0; i < word.length(); i++)
    {
            /* Check if the last letter is equal to the first, the second to second last, and so on..*/
            if(word[i] == word[back_indx])
            {
                /* if the last and the firt match move to the next index*/
                back_indx -= 1;
                continue;
            }
            /* if the if-statement fails then the word is not palindrome*/
            return false;
    }
    return true;
}