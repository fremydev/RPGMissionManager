#include <stdio.h>
#include <raylib.h>

int main(void) {
	const int SCREEN_WIDTH = 1920;
	const int SCREEN_HEIGHT = 1080;

	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "RPG Mission Manager");
	SetTargetFPS(60);

	while(!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RED);
		EndDrawing();
	}

	CloseWindow();
	return 0;
}
