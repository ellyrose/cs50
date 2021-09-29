#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])

{
    if (argc == 2) //only applies if user has included 1 command line argument
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (argv[1][i] < '0' || argv[1][i] > '9') // if commandline argument isn't numeric
            {
                printf("Usage: ./caeser key\n");
                return 1;

            }
            else
            {
                break; // if it is numeric, break the loop

            }
        }

       string plain= get_string("Plaintext: ");

        int k = atoi(argv[1]); // changes string (which must be a digit) to int

        for (int i = 0, n = strlen(plain); i < n; i++) // iterates string

        {
            if (isupper(plain[i])) // if character is uppercase
            {
                plain[i] = (((plain[i] + k) - 65) % 26) + 65;
                //character is converted to the character k steps along. Will wrap around if k takes it past Z
            }
            else if (islower(plain[i]))
            {
                plain[i] = (((plain[i] + k) - 97) % 26) + 97;
            }
            else
            {
                plain[i] = plain[i];
            }
        }
        printf("ciphertext: %s\n", plain);
    }

    else
    {
        printf("Usage: ./caeser key\n");
        return 1;
    }
}