#pragma once
#include"stdafx.h"
#include"Constants.h"
void fillrand(int arr[], int const n, int minrand = 0, int maxrand = 100);
void fillrand(double arr[], int const n, int minrand = 0, int maxrand = 1000); // double
void fillrand(char arr[], int const n, int minrand = 0, int maxrand = 100); // char
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minrand = 0, int maxrand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minrand = 0, int maxrand = 1000);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, int minrand = 0, int maxrand = 100);
