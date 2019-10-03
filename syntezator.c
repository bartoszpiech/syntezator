#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_OF_LETTERS 500
int main(){
   char spacja = ' ';
   char cmd[2 * NUM_OF_LETTERS + 15] = "cat ";
   char wynik[2 * NUM_OF_LETTERS];
   char zdanie[NUM_OF_LETTERS];
   printf("Co bys chcial powiedziec? : ");
   fgets(zdanie,500,stdin);
   for (int i=0; i < NUM_OF_LETTERS; i++){
      if (zdanie[i] == '\n')
         break;
      else if (zdanie[i] == ' '){
         wynik[i*2] = 'q';
         wynik[i*2-1] = ' ';
         continue;
      }
      else{
         wynik[i*2] = zdanie[i];
         wynik[i*2-1] = ' ';
      }
   }
   strcat(cmd, wynik);
   strcat(cmd, " > .temp.mp3");
//   printf("%s", wynik);
   system(cmd);
   system("mpv .temp.mp3");
   return 0;
}
   
