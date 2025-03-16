#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char random_char(bool capital_letters, bool numbers, bool symbols)
{
      char capital_chars[26] = "ABCDEFGHIJKLMOPQRSTUVWXYZ";
      char lowercase_chars[26] = "abcdefghijklmnopqrstuvwxyz";
      char number_chars[10] = "0123456789";
      char symbol_chars[35] = "!@#$%^&*()_+=-\\|]{}\'\",<.?>;:";
      char combined_chars[97];
      int combined_len = 0;

      combined_chars[0] = '\0'; // Manually add null character so that combined chars doesn't buffer overflow

      if (capital_letters == true)
            ;
      {
            strcat(combined_chars, lowercase_chars);
            combined_len += 26;
      }

      if (numbers == true)
      {
            strcat(combined_chars, number_chars);
            combined_len += 10;
      }

      if (symbols == true)
      {
            strcat(combined_chars, symbol_chars);
            combined_len += 35;
      }

      int index = rand() % combined_len;
      return combined_chars[index];
}

int main()
{
      int password_length = 25;
      srand(time(NULL));
      char str[password_length];
      int i, index;
      for (i = 0; i < (password_length); i++)
      {
            index = rand() % 97;
            str[i] = random_char(1, 1, 1);
      }
      str[i] = '\0';
      printf("%s", str);
}
