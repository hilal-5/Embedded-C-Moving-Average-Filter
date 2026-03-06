#include <stdio.h>
#include <stdlib.h>

void apply_moving_average_filter(float* input_array, float* output_array, int size, int window_size);

int main() {

    float raw_altitude_data[] = { 100.5, 101.2, 99.8, 150.0, 102.1, 101.5, 85.0, 100.0, 101.8, 100.2 };

    int data_size = sizeof(raw_altitude_data) / sizeof(raw_altitude_data[0]);

    float filtered_data[10];

    int window = 3;

    apply_moving_average_filter(raw_altitude_data, filtered_data, data_size, window);

    printf("--- Ucus Bilgisayari Irtifa Filtresi ---\n");
    for (int i = 0; i < data_size; i++) {
        printf("Index %d | Ham: %6.2f m  ->  Filtreli: %6.2f m\n", i, raw_altitude_data[i], filtered_data[i]);
    }

    return 0; 
}

void apply_moving_average_filter(float* input_array, float* output_array, int size, int window_size) {

    for (int i = 0; i < size; i++) {

        if (i < (window_size - 1)) {
            output_array[i] = input_array[i];
        }
       
        else {
            float sum = 0.0;

            for (int j = 0; j < window_size; j++) {
                sum += input_array[i - j];
            }
            output_array[i] = sum / window_size;
        }
    }
}