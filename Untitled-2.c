#include <stdio.h>
#include <conio.h>
int main(void)
{
  float vteste;
  printf(" tamanho do bicepis|--- BYTES ---\n");
  printf(" tamanho do bicepis: %d bytes\n", sizeof(char));
  printf(" tamanho do bicepis: %d bytes\n", sizeof(short));
  printf(" tamanho do bicepis: %d bytes\n", sizeof(int));
  printf(" tamanho do bicepis: %d bytes\n", sizeof(long));
  printf(" tamanho do bicepis: %d bytes\n", sizeof(float));
  printf(" tamanho do bicepis: %d bytes\n", sizeof(double));
  printf(" tamanho do bicepis: %d bytes\n\n", sizeof(long double));
  printf("\nO tamanho de vteste e...: %d \n\n",sizeof vteste);
  
  getch();
  return 0;
}
