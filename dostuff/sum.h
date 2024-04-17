#pragma once
#include"stdafx.h"
#include"Constants.h"
int sum(const int arr[], const int n);
double sum(const double arr[], const int n); // double
int sum(const char arr[], const int n); // char
int sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double sum(const double arr[ROWS][COLS], const int ROWS, const int COLS);
int sum(const char arr[ROWS][COLS], const int ROWS, const int COLS);