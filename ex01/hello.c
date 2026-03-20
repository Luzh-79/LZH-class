#include <stdio.h>
#include <string.h>

int main() {
    printf("Hello World!\n");
    
    char user_input[100];
    
    printf("请输入一些内容: ");
    fgets(user_input, sizeof(user_input), stdin);
    user_input[strcspn(user_input, "\n")] = 0;
    
    printf("你输入的内容是: %s\n", user_input);
    
    return 0;
}