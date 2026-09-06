#include <stdio.h>

// Структура для хранения чисел до и после запятой
typedef struct {
    long int before;
    long int after;
} RationalNumber;

// Бинарный поиск в отсортированной последовательности
int binarySearch(RationalNumber arr[], int low, int high, RationalNumber key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid].before == key.before && arr[mid].after == key.after) {
            return mid + 1; // Найдено, возвращаем порядковый номер
        } else if (arr[mid].before < key.before || 
                  (arr[mid].before == key.before && arr[mid].after < key.after)) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return 0; // Элемент не найден
}

// Сортировка массива чисел
void sortArray(RationalNumber arr[], int size) {
	int i, j;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i].before > arr[j].before ||
                (arr[i].before == arr[j].before && arr[i].after > arr[j].after)) {
                // Обмен элементов для сортировки
                RationalNumber temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int N, M, i;

    // Ввод размера последовательности
    scanf("%d", &N);

    // Объявление и ввод массива для хранения чисел
    RationalNumber sequence[N];
    for (i = 0; i < N; i++) {
        scanf("%ld,%ld", &sequence[i].before, &sequence[i].after);
    }

    // Сортировка массива
    sortArray(sequence, N);

    // Ввод количества искомых чисел
    scanf("%d", &M);

    // Поиск и вывод результатов
    for (i = 0; i < M; i++) {
        RationalNumber searchNumber;
        scanf("%ld,%ld", &searchNumber.before, &searchNumber.after);

        // Поиск с использованием бинарного поиска
        int result = binarySearch(sequence, 0, N - 1, searchNumber);
        if (result != 0) {
            printf("%d\n", result);
        } else {
            printf("0\n");
        }
    }

    return 0;
}

