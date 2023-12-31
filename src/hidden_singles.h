#pragma once

#include "sudoku.h"

typedef struct HiddenSingle_impl
{
    Cell *p_cell;
    int value;
} HiddenSingle;

<<<<<<< HEAD
<<<<<<< HEAD
// find hidden single values (the value that is unique among all the candidates for a row, a collumn, or a box)
int find_hidden_single_values(Cell **p_cells, int *hidden_single_values);

// find hidden single cells in a row, in a collumn or in a box
void find_hidden_single(Cell **p_cells, HiddenSingle *p_hidden_singles, int *p_counter,HiddenSingle *processed_cells,int *processed_count);

// find hidden single cells in a board, return the number of hidden single cells
int hidden_singles(SudokuBoard *p_board);
<<<<<<< HEAD
bool is_in_Hidden(HiddenSingle*p_hidden_single, int *size,Cell*p );
bool is_candidate(Cell *cell, int value);
=======
=======
// find hidden single values (the value that is unique among all the candidates for a row, a collumn, or a box)
>>>>>>> 8b19c97 (added description)
int find_hidden_single_values(Cell **p_cells, int *hidden_single_values);

// find hidden single cells in a row, in a collumn or in a box
void find_hidden_single(Cell **p_cells, HiddenSingle *p_hidden_singles,
                        int *p_counter);
<<<<<<< HEAD
int hidden_singles(SudokuBoard *p_board, Cell ***p_solved_cells);
=======

// find hidden single cells in a board, return the number of hidden single cells
int hidden_singles(SudokuBoard *p_board);
>>>>>>> 8b19c97 (added description)
=======
>>>>>>> 976cbf9 (test)
