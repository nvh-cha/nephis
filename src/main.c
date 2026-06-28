#include <stdio.h>
#include <raylib.h>

int main() {
  InitWindow(1280, 720, "nephis");

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
