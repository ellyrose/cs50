#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

float count_letters(string s);
float count_words(string s);
float count_sent(string s);
int main(void)

{

    string text = get_string("Enter your text: ");
    float letters = count_letters(text);
    float words = count_words(text);
    float sent = count_sent(text);
    float L = letters/words*100;
    float S = sent/words*100;
    float grade = 0.0588*L- 0.296*S -15.8;
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.0f\n", grade);
    }
}


float count_letters(string s)

{   float j = 0;

    for(int i = 0,  n = strlen(s); i < n; i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z')||( s[i] >= 'a' && s[i] <='z'))
        {
            j++;
        }
    }return j;
}

float count_words(string s)

{
    float j = 0;
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        if((int)s[i]== 32)
        {
            j++;
        }
    }return j+1;
}

float count_sent(string s)
{
    float j= 0;
    for(int i=0, n= strlen(s); i<n; i++)
    {
        if(s[i]== '.' || s[i]== '!' || s[i]== '?' )
        {
            j++;
        }
    }return j;

}
