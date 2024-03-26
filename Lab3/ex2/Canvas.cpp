#include "Canvas.h"
using namespace std;
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
Canvas::Canvas(int width, int height) {
	this->width = width;
	this->height = height;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			pixels[i][j] = ' ';
		}
	}
}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {
        int cx = ray;
        int cy = 0;
        int radiusError = 1 - cx;

        while (cx >= cy) {
            SetPoint(cx + x, cy + y, ch);
            SetPoint(cy + x, cx + y, ch);
            SetPoint(-cx + x, cy + y, ch);
            SetPoint(-cy + x, cx + y, ch);
            SetPoint(-cx + x, -cy + y, ch);
            SetPoint(-cy + x, -cx + y, ch);
            SetPoint(cx + x, -cy + y, ch);
            SetPoint(cy + x, -cx + y, ch);

            cy++;
            if (radiusError < 0) {
                radiusError += 2 * cy + 1;
            }
            else {
                cx--;
                radiusError += 2 * (cy - cx + 1);
            }
        }

    for (int i = 0; i <= 360; ++i) {
        float angle = i * M_PI / 180.0;
        int cx = static_cast<int>(round(ray * cos(angle)));
        int cy = static_cast<int>(round(ray * sin(angle)));
        SetPoint(cx + x, cy + y, ch);
    }
}
void Canvas::SetPoint(int x, int y, char ch) {
	if (x >= 0 && y >= 0 && x < width && y < height) {
		pixels[y][x] = ch;
	}
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
    for (int i = 0; i < height-1; ++i) {
        for (int j = 0; j < width-1; ++j) {
            int dx = j - x;
            int dy = i - y;
            if (dx * dx + dy * dy <= ray * ray) {
                pixels[i][j] = ch;
            }
        }
    }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
    for (int i = top; i <= bottom; i++) {
        pixels[i][left] = ch;
        pixels[i][left + (right - left)] = ch;
    }

    for (int j = left; j <= right; j++) {
        pixels[top][j] = ch;
        pixels[bottom][j] = ch;
    }

}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
    for (int i = top + 1; i <= bottom - 1; i++) {
        for (int j = left + 1; j < right - 1; j++) {
            pixels[i][j] = ch;
        }
    }

}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int sx = (x1 < x2) ? 1 : -1;
    int sy = (y1 < y2) ? 1 : -1;
    int err = dx - dy;

    while (true) {
        SetPoint(x1, y1, ch);
        if (x1 == x2 && y1 == y2) break;
        int e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x1 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y1 += sy;
        }
    }
}

void Canvas::Print() {
	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < width; ++j) {
			cout << pixels[i][j];
		}
		cout << endl;
	}
}

void Canvas::Clear() {
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            pixels[i][j] = ' ';
        }
    }
}
//public:
//    Canvas(int width, int height);
//    void DrawCircle(int x, int y, int ray, char ch);
//    void FillCircle(int x, int y, int ray, char ch);
//    void DrawRect(int left, int top, int right, int bottom, char ch);
//    void FillRect(int left, int top, int right, int bottom, char ch);
//    void SetPoint(int x, int y, char ch);
//    void DrawLine(int x1, int y1, int x2, int y2, char ch);
//    void Print(); // shows what was printed
//    void Clear(); // clears the canvas