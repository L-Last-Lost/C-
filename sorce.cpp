#include<graphics.h>

#include<iostream>

int main() {
	initgraph(1280, 840);

	int x = 300;
	int y = 300;

	BeginBatchDraw();

	while (true) {
		ExMessage msg;

		while (peekmessage(&msg)) {
			x = msg.x;
			y = msg.y;
		}

		cleardevice();
		solidcircle(x, y, 100);
		FlushBatchDraw();
	}
	
	EndBatchDraw();

	return 0;
}