#ifndef BASHUTILS_C1_CAT_CAT_H_
#define BASHUTILS_C1_CAT_CAT_H_

#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>

#include "../headers/data_t.h"
#include "../headers/flags_t.h"

void input_handler(int argc, char *argv[]);
void out_file(FILE *file);
void flag_list(int argc, char *argv[], FILE *file, __data *Data,
               __flags *Flags);
void empty_flag();
void flag_number_nonblank(FILE *file);
void flag_number(FILE *file);
void flag_squeeze_blank(FILE *file);

void flag_E(FILE *file);
void flag_T(FILE *file);
void flag_b(FILE *file);
void flag_e(FILE *file);
void flag_n(FILE *file);
void flag_s(FILE *file);
void flag_v(FILE *file);
void flag_t(FILE *file);
void check_OS(FILE *file, __data *, __flags *);

#endif  // BASHUTILS_C1_CAT_CAT_H_