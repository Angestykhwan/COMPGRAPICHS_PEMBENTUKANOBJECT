//#include "dda.h"
//void main(int argc, char **argv)
//{

//	glutInit(&argc, argv);
//	window_x = (glutGet(GLUT_SCREEN_WIDTH) - window_width) / 2;
//	window_y = (glutGet(GLUT_SCREEN_HEIGHT) - window_height) / 2;
//	glutInitWindowSize(window_width, window_height);
//	glutInitWindowPosition(window_x, window_y);

//	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
//	glutCreateWindow(judul_window);

//	init();
//	glutDisplayFunc(display);
//	glutMainLoop();
//}

#include "bressenham.h"
int main(int argc, char** argv)
{
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("bresenham");
	display();
	glutDisplayFunc(drawMyLine);
	glutMainLoop();
	return 0;
}

