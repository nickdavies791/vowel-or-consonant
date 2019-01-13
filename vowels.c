/*
 * Program: Vowel and Consonant Counter
 * Author: Nick Davies
 * Purpose: Displays the total count of vowels and consonants in a word
 * Usage: ./vowels [word]
 * Input: ./vowels hello
 * Output: Vowels: 2 Consonants: 3
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// Declare the function to check if value exists in array
bool existsInArray(char val, char *arr, int arrSize);

// Get the word from program runtime as argument
int main(int argc, char *argv[])
{
    // Store vowels in array
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    // Store word input into char variable
    char *word = argv[1];
    // Store number of vowels in word
    int vowelCount = 0;
    // Store number of consonants in word
    int consonantCount = 0;

    // Loop through each character of the word
    for (int i = 0; i < strlen(word); i++)
    {
        char letter = tolower(word[i]);

        // Check if the letter exists in the vowels array
        if (existsInArray(letter, vowels, 5))
        {
            vowelCount++;
        }
        // Check if letter is not in array but is still a letter
        else if (!existsInArray(letter, vowels, 5) && isalpha(letter))
        {
            consonantCount++;
        }
    }
    // Print the number of vowels and consonants
    printf("Vowels: %i\nConsonants: %i\n", vowelCount, consonantCount);
}

// Function to check if the value exists in an array
bool existsInArray(char val, char *arr, int arrSize)
{
    // Loop through each item in array
    for (int i = 0; i < arrSize; i++)
    {
        // If item i matches value in array return true
        if (arr[i] == val)
        {
            return true;
        }
    }
    // If it does not match, return false
    return false;
}
