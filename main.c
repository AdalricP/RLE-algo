#include <stdio.h>

int main(void){
    char raw[] = "AABBCCDCCDDBBA";
    char RLE[20] = {0}; 
    char current = raw[0];
    int count = 1; 
    int RLE_index = 0;   

    for(int i = 1; raw[i] != '\0'; i++){
        if(current==raw[i]){
            count++;
        } else {
            RLE[RLE_index] = current;
               
            RLE_index++;
            RLE[RLE_index] = count + '0'; 
            RLE_index++;
            current = raw[i];
            count=1;
        }
    }

    
    RLE[RLE_index] = current;
    RLE_index++;
    RLE[RLE_index] = count + '0';
    RLE[RLE_index + 1] = '\0';             

    printf("%s\n", RLE);
    return 0;
}
