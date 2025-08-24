#include <stdio.h>

int main(void){
    char raw[] = "AAABBCCDCCDDBBA";
    char RLE[20] = {0}; 
    char current = raw[0];
    int count = 1; 
    int RLE_index = 0;   

    for(int i = 1; raw[i] != '\0'; i++){
        if(current==raw[i]){
            count++;
        } else {
            if (count <= 2) {
                RLE[RLE_index] = current;
                RLE_index+=(count-1);
                RLE[RLE_index] = current;
                RLE_index++;
            } else {
                RLE[RLE_index] = current;
                
                RLE_index++;
                RLE[RLE_index] = count + '0'; 
                RLE_index++;
            }
            current = raw[i];
            count=1;
        }
    }

    if (count <= 2) {
        RLE[RLE_index] = current;
        RLE_index += (count-1);
        RLE[RLE_index] = current;
        RLE_index++;
    } else {
        RLE[RLE_index] = current;
        RLE_index++;
        RLE[RLE_index] = count + '0';
        RLE_index++;
    }
    RLE[RLE_index] = '\0';             

    printf("%s\n", RLE);
    return 0;
}
