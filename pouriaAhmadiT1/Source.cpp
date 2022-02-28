#include <GLFW/glfw3.h>

int main(void)
{
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "Pouria Ahmadi", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);

		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(.7, .7, .7, 0);

		glColor3f(.1, .9, 0);
		glRectf(-.8, -.8, .8, .8);
		glColor3f(.7, .7, .7);
		glRectf(-.5, -.5, .5, .5);


		glColor3f(1, 1, 1);
		glLineWidth(5);
		glBegin(GL_LINE_STRIP);
		glVertex2f(.5, .5);
		glVertex2f(-.8, .8);
		glVertex2f(-.5, .5);
		glVertex2f(-.8, -.8);
		glEnd();

		glColor3f(1, 1, 1);
		glLineWidth(5);
		glBegin(GL_LINE_STRIP);
		glVertex2f(-.8, -.8);
		glVertex2f(-.5, -.5);
		glVertex2f(.8, -.8);
		glVertex2f(.5, -.5);
		glEnd();

		glColor3f(1, 1, 1);
		glLineWidth(5);
		glBegin(GL_LINE_STRIP);
		glVertex2f(.5, -.5);
		glVertex2f(.8, .8);
		glVertex2f(.5, .5);
		glEnd();

		glfwSwapBuffers(window);

		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}