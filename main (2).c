#include <stdio.h>

int main(){

int vec_63[]={52,13,12,14,16,80,90};

printf("Endereço de vetor %p",&vec_63);
printf("vec_63[0]%p\n,vec_63[1]%p\n,vec_63[2]%p\n,vec_63[3]%p\n,vec_63[4]%p\n,vec_63[5]%p\n,vec_63[6]%p\n", &vec_63[0],&vec_63[1],&vec_63[2],&vec_63[3],&vec_63[4],&vec_63[5],&vec_63[6]);

return 0;

}
