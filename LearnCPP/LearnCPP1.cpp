#include <iostream>

using std::string;

/*
 * Tutorial by Caleb Nurry
 * https://www.youtube.com/watch?v=9Myk2vcK8s8&list=PL_c9BZzLwBRIwEnaRU2LC4GkqxUbD0Auc&index=1&pp=iAQB
 */
void main1()
{

  
  std::cout << "Do you want to play a game? (y/n): ";

  const char response = static_cast<char>(std::tolower(std::getchar()));
  
  std::cout << "You entered: " << response << std::endl;

  if (response == 'y') // poop
  {
    std::cout << "Let's play a game, then..." << '\n';
  }
  
    
}
