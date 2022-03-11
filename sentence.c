#include <stdio.h>
int main()
{
   char str[50], word[10][20];
   int i, j, k;
   scanf("%[^\n]%*c", str);
   //printf("%s", str);
   j=0;
   k=0;
   while(str[i]!='\0'){
    if(str[i]!=' '||str[i]!='\0'){
        word[j][k]=str[i];
        k++;
    }
    else{
        word[j][k]=' ';
        j++;
        k=0;
    }
    //printf("%c", str[i]);

    i++;
   }
    for(i=0; i<j; i++){
        printf("%s", word[i]);
    }


   return 0;
}
