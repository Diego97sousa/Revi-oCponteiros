/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int m_63=6;
   int *p=&m_63;
   
   int a_63=3;
   int *p1=&a_63;
   
if (p>p1){
   printf("O maior endereço da variável com resultado: %d endereço %p\n",m_63,p);
   }else{
   printf("O maior endereço da variável com resultado: %d endereço %p\n",a_63,p1);
   }
}
