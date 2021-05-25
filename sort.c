#include <stdio.h>

int main(const int argc, const char** argv){
    int arr[12] = {0, 2, 8, 3, 4, 6, 5, 9, 8, 2, 7, 3};
    for (int i = 0; i < 12; i++) { // читаем массив
        for (int j = 11; j > i; j--) { // идем назад
            if ((arr[i] % 2 == 0) && (arr[j] % 2 == 0) && (arr[i] > arr[j])) { // проверка на четность
                swapInt(&arr[i], &arr[j]); // меняем местами, но происходит ошибка
            }
        }
    }
    for (int i = 0; i < 12; i++){
        printf("%d", arr[i]); // переписываем массив
    }
return 0;
}