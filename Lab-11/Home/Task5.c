#include <stdio.h>
#include <string.h>

void reverseString(char str[50],int lp,int rp){
    if (lp>=rp){

        return;
    }
    char temp;
    temp = str[lp];
    str[lp] = str[rp];
    str[rp] = temp;
    reverseString(str,lp+1,rp-1);

}

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int length = strlen(str);
    int lp = 0;
    int rp = length - 1;
        
    
    printf("%s\n",str);
    reverseString(str,lp,rp);
    str[length] = '\0';

    printf("%s\n",str);


}