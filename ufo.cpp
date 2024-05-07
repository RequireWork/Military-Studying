#include <iostream>
#include "ufo_functions.hpp"

int main() {
  greet();

  std::string codeword = "codeacademy";
  std::string answer = "___________";
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;
  char letter;
  while(answer != codeword && misses < 7)
  {
    end_game(answer,codeword);
    display_misses(misses);
    display_status(incorrect, answer);
    std::cout << "Please enter your guess: ";
    std::cin >> letter;
    for(int s = 0; s < codeword.size();s++)
    {
      if(letter == codeword[s])
      {
        answer[s] = letter;
        guess = true;
      }
    } 
      if (guess) 
      {
        std::cout << "\nCorrect!\n";
      } 
      else 
      {
        std::cout << "\nIncorrect! The tractor beam pulls the person  in further.\n";
        incorrect.push_back(letter);
        misses++;
      }
    }guess = false;
  }

