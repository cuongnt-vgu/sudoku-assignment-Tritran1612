#pragma once

#include "sudoku.h"

typedef struct HiddenSingle_impl
{
    Cell *p_cell;
    int value;
} HiddenSingle;

<<<<<<< HEAD
// find hidden single values (the value that is unique among all the candidates for a row, a collumn, or a box)
int find_hidden_single_values(Cell **p_cells, int *hidden_single_values);

// find hidden single cells in a row, in a collumn or in a box
void find_hidden_single(Cell **p_cells, HiddenSingle *p_hidden_singles,
                        int *p_counter);

// find hidden single cells in a board, return the number of hidden single cells
int hidden_singles(SudokuBoard *p_board);
bool is_in_Hidden(HiddenSingle*p_hidden_single, int *size,Cell*p );
bool is_candidate(Cell *cell, int value);
=======
int find_hidden_single_values(Cell **p_cells, int *hidden_single_values);
void find_hidden_single(Cell **p_cells, HiddenSingle *p_hidden_singles,
                        int *p_counter);
int hidden_singles(SudokuBoard *p_board, Cell ***p_solved_cells);
>>>>>>> efe80b5 (added hidden single description)
