#include <stdio.h>

int main(void){
    char raw[] = "AABBCCDCCDDBBA";
    char RLE[100];
    char current = raw[0];

    int count = 1; 
    for(int i = 1; raw[i] != '\0'; i++){

        int RLE_index = 0;
        if(current==raw[i]){
            count++;
        } else {
            printf("%c", current);
            printf("%d", count);
            RLE[RLE_index] = count;
            RLE_index++;
            RLE[RLE_index] = current;
            RLE_index++;
            current = raw[i];
            count=1;
        }
    }
    

    return 0;
}
