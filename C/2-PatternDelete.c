#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *delete(char *str, char *delStr, char *replaceStr) {
    char *ans = (char*)malloc(40);
    int i, j, k = 0;
    int flag = 0;
    while(str[i] != '\0') {
        j = 0;
        flag = 0;
        while(str[i] == delStr[j] && delStr[j] != '\0') {
            i++; j++;
            flag = 1;
        }
        if (flag) {
            j = 0;
            while(replaceStr[j] != '\0') {
                ans[k] = replaceStr[j];
                j++;
                k++; 
            }
        }
        ans[k] = str[i];
        i++;
        k++;
    }
    return ans;
}
int main()
{
    char str[20] = "This is my text";
    char s[10] = "my";
    char w[10] = "your";
    char *ptr = delete(str, s, w);
    printf("String: ");
    puts(ptr);
    free(ptr);
    return 0;
}

