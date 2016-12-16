#include "stdio.h"
int main(int argc, char const *argv[]) {
  int i,j,k,no = 1;

  for (i = 0; i < 10; i++) {
      for (j = 0; j < 10; j++) {
          for (k = 0; k < 10; k++) {
              no = no + (i * j + k);
                if (no >= 2000){
                    break; //k
                }
                printf("break: k\n\n ~i:%d j:%d k:%d ~\n no:%d \n\n",i,j,k ,no);
              }
              if (no >= 2000){
                  break; //j
              }
              printf("break: j\n\n ~i:%d j:%d k:%d~\n no:%d \n\n",i,j,k ,no);
            }
            if (no >= 2000){
                break; //i
            }
          }
          printf("i:%d j:%d k:%d\n no:%d \n",i,j,k ,no);
          return 0;
}
