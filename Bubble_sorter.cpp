#include <iostream>

void sort(int Numbers[], int sizeNumbers);

int main(){

    int Numbers[] = {6, 2, 10, 8, 3, 5, 1, 4, 7, 9};
    int sizeNumbers = sizeof(Numbers)/sizeof(Numbers[0]);

    sort(Numbers, sizeNumbers);

    for(int number : Numbers){
        std::cout << number << ' ' ;
    }

    return 0;
}

void sort(int Numbers[], int sizeNumbers){
    int temp;
    for(int i = 0; i < sizeNumbers - 1; i++){
        for(int j = 0; j < sizeNumbers - i - 1; j++){
            if(Numbers[j] > Numbers[j + 1]){
                temp = Numbers[j];
                Numbers[j] = Numbers[j + 1];
                Numbers[j + 1] = temp;
            }
        }
    }
}