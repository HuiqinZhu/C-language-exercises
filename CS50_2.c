#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
// print arguments
for (int i = 0; i < argc; i++)
{
 for (int j = 0; argv[i][j] != '\0'; j++)
 {
 printf("%c\n", argv[i][j]);
 }
 }
} 
