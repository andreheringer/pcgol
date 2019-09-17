#pragma once
#include <stdbool.h>
#include <stdint-gcc.h>

typedef enum  cellState {
    DEAD,
    ALIVE,
    SELECTED
} cellState;

typedef struct cell {
    int64_t pos_x;
    int64_t pos_y;
    cellState state;
    cell * hood[8];
} cell;


//All functions that return a cell pointer
cell * new_cell(int64_t pos_x, int64_t pos_y);
cell * get_cell_hood(cell * this_cell, int_fast8_t hood_pos);

//All functions that receive a cell pointer as a parameter
cellState get_cell_state(cell * this_cell);
void set_cell_state(cell * this_cell, cellState state);
void destruct_cell(cell * this_cell);
void set_cell_hood(cell * this_cell, cell * hood_cell, int_fast8_t hood_pos);