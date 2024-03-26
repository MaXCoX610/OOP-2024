#ifndef CANVAS_H
#define CANVAS_H
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <windows.h>
class Canvas {
    int width, height;
    char pixels[1000][1000];
public:
    Canvas(int width, int height);
    void DrawCircle(int x, int y, int r, char ch);
    void FillCircle(int x, int y, int ray, char ch);
    void DrawRect(int left, int top, int right, int bottom, char ch);
    void FillRect(int left, int top, int right, int bottom, char ch);
    void SetPoint(int x, int y, char ch);
    void DrawLine(int x1, int y1, int x2, int y2, char ch);
    void Print(); // shows what was printed
    void Clear(); // clears the canvas
};
#endif