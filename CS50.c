#include <stdio.h>
#include <cs50.h>

void cough(int n)


int main(void)
{
printf("hello, world\n");
 
int x = 10;
int y = 11;
if (x < y)
 {
 printf("x is less than y\n");
 }
 else if (x > y)
 {
 printf("x is greater than y\n");
 }
 else
 {
 printf("x is equal to y\n");
 } 

if ( X>=0 && X<=10)
 {
 printf("x is a number between 0 and 10\n");
 }
 if ( y>11 || y<11)
 {
 printf("y is not 11\n");
 } 
 
string name;
name = get_string();
printf("hello, Koto\n"); 

string name1;
printf("What is your name?");
name1 = get_string();
printf("how are you, %s?\n", name1); 
printf("Your lucky letter is %c\n", get_char());
printf("Your lucky number is %i\n", get_int());
printf("Your lucky fraction number is %f\n", get_float());
printf("Your lucky fraction number is %d\n", get_double());
printf("Your lucky word is %s\n", get_string()); 
 //get_char() get_string() get_int() get_long() get_float() get_double() 
 //%s %c %i %li %f
 
printf("you are at least %i days old", get_string("what's your age\n"*365));
 

int n; 
if( n%2 == 0) 
{
printf("odd\n");
}
 else
{
 printf("even\n");
} 
 
 
 
 
int counter = 0;
while (true)
{
printf("%i\n", counter);
counter++;
}
  
while (true) 
 {
printf("I am a buggy program");
}
 
do
 {
 printf(x);
}
 while (x<11);  
 
 
 
for (int i = 0; i < 100; i++)
{
printf("I can count to %i\n", i);
} 
 
 
cough(3); 
 
 
 
 
 
 
 
} 
 

//to make a void parameterized below the main void
void cough(int n)
{
for(int i = 0; i <n; i++)
{
printf("cough\n");
}
}







 
