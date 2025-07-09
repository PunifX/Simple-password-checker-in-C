#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int main(){
    char password[100];
    int length=0;
    int upercase=0;
    int number=0;
    int symbol=0;
    int i;
    
    printf("please enter your password to check if it is strong enough : ");
    
    while (true) {
        fgets(password,sizeof(password),stdin);
        password[strcspn(password, "\n")] ='\0';
        for (i=0;password[i];i++) {
            if (isupper((unsigned char)password[i]))
            { upercase=1 ; }
            if (isdigit((unsigned char)password[i]))
            { number=1 ; }
            if (!isalnum((unsigned char)password[i]))
            { symbol =1 ; }
        }
        length=i;
        if (upercase && number && symbol && length >= 10) {
            printf("your password is strong you can use it !");
            break;
        } else {
        printf("please provide a password that contains at least \none upercase \none symbol \none number \nand at least bigger than 10 characters ");
        }
        printf("\nEnter another password : ");
        
    } 
    return 0;
}