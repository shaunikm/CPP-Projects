#include <iostream>
using namespace std;

string solution(string str)
{
    string my_string = str;
    string vowels = "aeiouAEIOU";

    for (int index = 0; index < my_string.length(); index++)
      if (vowels.find(my_string[index]) != string::npos)
          my_string[index] = '*';

    return my_string;
}

int main() {
  /*
  Replace all vowels in string with '*'
  Then print new string
  */

  string my_string[3] = {"Hello", "Apple", "Watermelon"};

  for (string str : my_string)
    cout << solution(str) << endl;


  return 0;
  
}