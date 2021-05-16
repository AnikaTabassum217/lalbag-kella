#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846


GLfloat position = 0.0f;

GLfloat position1 = 0.0f;

GLfloat speed = 0.09f;
//GLfloat speed1 = 0.06f;

GLfloat position4 = 0.0f;


GLfloat position3 = 0.0f;
GLfloat position2 = 0.0f;
GLfloat position5 = 0.0f;

//GLfloat position1 = 0.0f;

//GLfloat speed = 0.09f;
//GLfloat speed1 = 0.06f;



//GLfloat position1 = 0.0f;


//GLfloat speed1 = 0.06f;



void springnightupdate2(int value) {

    if(position4 >1.0)
        position4 =- 1.0f;

    position4 += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(200, springnightupdate2, 0);
}


void springnight() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


	 glBegin(GL_QUADS); // SKY in night
    glColor3ub(0,0,0);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();





    GLfloat x17=0.76f; GLfloat y17=0.85f; GLfloat radius23 =0.0099f; //  Star


	int i;
	int triangleamount = 15; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x17,y17);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x17 + (radius23 * cos(i *  twicePi / triangleamount)),
			    y17 + (radius23* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x18=0.74f; GLfloat y18=0.85f; GLfloat radius24 =0.0099f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x18,y18);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x18 + (radius24 * cos(i *  twicePi / triangleamount)),
			    y18 + (radius24* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




	GLfloat x19=0.75f; GLfloat y19=0.86f; GLfloat radius25 =0.0099f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x19,y19);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x19 + (radius25 * cos(i *  twicePi / triangleamount)),
			    y19 + (radius25* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



	GLfloat x20=0.75f; GLfloat y20=0.84f; GLfloat radius26 =0.009999f; //Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x20,y20);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x20 + (radius26 * cos(i *  twicePi / triangleamount)),
			    y20 + (radius26* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();







    glLoadIdentity();

    glTranslatef(-0.25,0.27,0);
    glScalef(.8,.8,0);





    GLfloat x21=0.76f; GLfloat y21=0.85f; GLfloat radius27 =0.0095f; //  Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x21,y21);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x21 + (radius27 * cos(i *  twicePi / triangleamount)),
			    y21 + (radius27* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x22=0.74f; GLfloat y22=0.85f; GLfloat radius28 =0.0095f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x22,y22);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x22 + (radius28 * cos(i *  twicePi / triangleamount)),
			    y22 + (radius28* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




	GLfloat x23=0.75f; GLfloat y23=0.86f; GLfloat radius29 =0.0099f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x23,y23);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x23 + (radius29 * cos(i *  twicePi / triangleamount)),
			    y23 + (radius29* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



	GLfloat x24=0.75f; GLfloat y24=0.84f; GLfloat radius30 =0.009999f; //Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x24,y24);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x24 + (radius30 * cos(i *  twicePi / triangleamount)),
			    y24 + (radius30* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



    glLoadIdentity();

    glLoadIdentity();

    glTranslatef(-0.65,0.25,0);
    glScalef(.8,.8,0);





    GLfloat x25=0.76f; GLfloat y25=0.85f; GLfloat radius31=0.0095f; //  Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x25,y25);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x25 + (radius31 * cos(i *  twicePi / triangleamount)),
			    y25 + (radius31* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x26=0.74f; GLfloat y26=0.85f; GLfloat radius32 =0.0095f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x26,y26);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x26 + (radius32 * cos(i *  twicePi / triangleamount)),
			    y26 + (radius32* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




	GLfloat x27=0.75f; GLfloat y27=0.86f; GLfloat radius33 =0.0099f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x27,y27);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x27 + (radius33 * cos(i *  twicePi / triangleamount)),
			    y27 + (radius33* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



	GLfloat x28=0.75f; GLfloat y28=0.84f; GLfloat radius34 =0.009999f; //Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x28,y28);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x28 + (radius34 * cos(i *  twicePi / triangleamount)),
			    y28 + (radius34* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

   glLoadIdentity();




    glLoadIdentity();

    glTranslatef(-0.80,0.20,0);
    glScalef(.8,.8,0);





    GLfloat x29=0.76f; GLfloat y29=0.85f; GLfloat radius35=0.0095f; //  Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x29,y29);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x29 + (radius35 * cos(i *  twicePi / triangleamount)),
			    y29 + (radius35* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x30=0.74f; GLfloat y30=0.85f; GLfloat radius36 =0.0095f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x30,y30);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x30 + (radius36 * cos(i *  twicePi / triangleamount)),
			    y30 + (radius36* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




	GLfloat x31=0.75f; GLfloat y31=0.86f; GLfloat radius37 =0.0099f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x31,y31);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x31 + (radius37 * cos(i *  twicePi / triangleamount)),
			    y31 + (radius37* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



	GLfloat x32=0.75f; GLfloat y32=0.84f; GLfloat radius38 =0.009999f; //Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x32,y32);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x32 + (radius38 * cos(i *  twicePi / triangleamount)),
			    y32 + (radius38* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

   glLoadIdentity();




   glLoadIdentity();





    GLfloat x33=-0.76f; GLfloat y33=0.85f; GLfloat radius39=0.0095f; //  Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x33,y33);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x33 + (radius39 * cos(i *  twicePi / triangleamount)),
			    y33 + (radius39* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();


	GLfloat x34=-0.74f; GLfloat y34=0.85f; GLfloat radius40 =0.0095f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x34,y34);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x34 + (radius40 * cos(i *  twicePi / triangleamount)),
			    y34 + (radius40* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




	GLfloat x35=-0.75f; GLfloat y35=0.86f; GLfloat radius41 =0.0099f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x35,y35);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x35 + (radius41 * cos(i *  twicePi / triangleamount)),
			    y35 + (radius41* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



	GLfloat x36=-0.75f; GLfloat y36=0.84f; GLfloat radius42 =0.009999f; //Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x36,y36);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x36 + (radius42 * cos(i *  twicePi / triangleamount)),
			    y36 + (radius42* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

   glLoadIdentity();




     glLoadIdentity();

    glTranslatef(-0.37,0.20,0);
    glScalef(.8,.8,0);





    GLfloat x37=-0.76f; GLfloat y37=0.85f; GLfloat radius43=0.0095f; //  Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x37,y37);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x37 + (radius43 * cos(i *  twicePi / triangleamount)),
			    y37 + (radius43* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();


	GLfloat x38=-0.74f; GLfloat y38=0.85f; GLfloat radius44 =0.0095f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x38,y38);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x38 + (radius44 * cos(i *  twicePi / triangleamount)),
			    y38 + (radius44* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




	GLfloat x39=-0.75f; GLfloat y39=0.86f; GLfloat radius45 =0.0099f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x39,y39);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x39 + (radius45 * cos(i *  twicePi / triangleamount)),
			    y39 + (radius45* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



	GLfloat x40=-0.75f; GLfloat y40=0.84f; GLfloat radius46 =0.009999f; //Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x40,y40);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x40 + (radius46 * cos(i *  twicePi / triangleamount)),
			    y40 + (radius46* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

   glLoadIdentity();











	GLfloat x7=0.93f; GLfloat y7=0.92f; GLfloat radius13 =0.06f;  // Circle for moon


	 triangleamount = 15; //# of triangles used to draw circle

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);



	glVertex2f(x7,y7);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x7 + (radius13 * cos(i *  twicePi / triangleamount)),
			    y7 + (radius13* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();


glBegin(GL_POLYGON); // polygon of lalbag

	glColor3ub(255, 153, 102);

    glVertex2f(-0.2f, 0.60f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(0.40f, 0.0f);
	glVertex2f(0.40f, 0.60f);
	glVertex2f(0.20f, 0.6f);
	glVertex2f(0.20f, 0.7f);
	glVertex2f(-0.20f, 0.7f);
	 glEnd();

	glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(255, 153, 102);

    glVertex2f(-0.40f, 0.60f);
    glVertex2f(-0.40f, 0.0f);
    glVertex2f(-0.20f, 0.0f);
    glVertex2f(-0.20f, 0.60f);

    glEnd();



    glLoadIdentity();

    glTranslatef(0.355,0.32,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj in right shift

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);


    glEnd();

    glLoadIdentity();


    glTranslatef(-0.355,0.32,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj in right shift

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);


    glEnd();

   glLoadIdentity();





    glBegin(GL_QUADS);// quard for lalbag right gumbuj

    glColor3ub(204, 102, 0);

    glVertex2f(0.32f, 0.6f);
    glVertex2f(0.32f, 0.70f);
    glVertex2f(0.39f, 0.70f);
    glVertex2f(0.39f, 0.6f);

    glEnd();



     glLoadIdentity();

   glTranslatef(-0.71,0.0,0);

    glBegin(GL_QUADS);// quard for lalbag right gumbuj

    glColor3ub(204, 102, 0);

    glVertex2f(0.32f, 0.6f);
    glVertex2f(0.32f, 0.70f);
    glVertex2f(0.39f, 0.70f);
    glVertex2f(0.39f, 0.6f);

    glEnd();




      glLoadIdentity();



   glBegin(GL_POLYGON); // polygon of lalbag main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();


    glTranslatef(-0.335,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of left door of lalbag

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();

      glLoadIdentity();


    glTranslatef(0.335,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of left door of lalbag

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



    glTranslatef(0.0,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of middle black door of lalbag

	glColor3ub(255, 255, 0);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();

    glTranslatef(-0.337,0.0,0);
    glScalef(.5,.5,0);


    glBegin(GL_POLYGON); // polygon of left black door of lalbag

	glColor3ub(255, 255, 0);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



     glTranslatef(0.337,0.0,0);
    glScalef(.5,.5,0);


    glBegin(GL_POLYGON); // polygon of right black door of lalbag

	glColor3ub(255, 255, 0);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



glBegin(GL_QUADS); // basline of lalbag red line

    glColor3ub(140, 140, 140);

    glVertex2f(-0.44f, 0.0f);
    glVertex2f(-0.44f, -0.06f);
    glVertex2f(0.44f, -0.06f);
    glVertex2f(0.44f, 0.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(255, 153, 102);  // 1st quard of diwan i am

    glVertex2f(0.5f, 0.3f);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.9f, 0.0f);
    glVertex2f(0.9f, 0.3f);

    glEnd();


     glBegin(GL_QUADS);
    glColor3ub(255, 153, 102);  // 2nd quard of diwan i am

    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.8f, 0.3f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.6f, 0.5f);

    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 153, 102);  // 3rd quard of diwan i am

    glVertex2f(0.56f, 0.5f);
    glVertex2f(0.84f, 0.5f);
    glVertex2f(0.84f, 0.52f);
    glVertex2f(0.56f, 0.52f);

    glEnd();

     glBegin(GL_POLYGON); // left gumbuj of diwan i am
	 glColor3ub(204, 102, 0);

     glVertex2f(0.56f, 0.52f);
    glVertex2f(0.58f, 0.52f);
    glVertex2f(0.6f, 0.54f);
    glVertex2f(0.62f, 0.56f);
    glVertex2f(0.64f, 0.58f);
    glVertex2f(0.66f, 0.56f);
    glVertex2f(0.68f, 0.54f);
    glVertex2f(0.7f, 0.52f);
     glVertex2f(0.72f,0.52f);

    glEnd();

    glBegin(GL_POLYGON); // middle gumbuj of diwan i am
    glColor3ub(204, 102, 0);

    glVertex2f(0.72f, 0.52f);
    glVertex2f(0.74f, 0.54f);
    glVertex2f(0.76f, 0.56f);
    glVertex2f(0.78f, 0.58f);
    glVertex2f(0.8f, 0.56f);
    glVertex2f(0.82f, 0.54f);
    glVertex2f(0.84f, 0.52f);

    glEnd();

    glBegin(GL_POLYGON); // right gumbuj of diwan i am
    glColor3ub(204, 102, 0);

    glVertex2f(0.64f, 0.52f);
    glVertex2f(0.66f, 0.56f);
    glVertex2f(0.68f, 0.6f);
    glVertex2f(0.72f, 0.6f);
    glVertex2f(0.74f, 0.6f);
    glVertex2f(0.76f, 0.56f);
    glVertex2f(0.78f, 0.52f);

    glEnd();

    glBegin(GL_QUADS); // basline of diwan i am  red line
    glColor3ub(140, 140, 140);

    glVertex2f(0.48f, 0.0f);
    glVertex2f(0.48f, -0.06f);
    glVertex2f(0.92f, -0.06f);
    glVertex2f(0.92f, 0.0f);

    glEnd();


     glLoadIdentity();

    glTranslatef(0.70,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();


   glLoadIdentity();

    glTranslatef(0.75,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am  door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

    glLoadIdentity();

    glTranslatef(0.65,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

     glLoadIdentity();

    glTranslatef(0.65,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();


     glLoadIdentity();

    glTranslatef(0.75,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();


    glLoadIdentity();

    glTranslatef(0.85,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();



    glLoadIdentity();

    glTranslatef(0.55,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();









    glBegin(GL_QUADS); // quard of mosque
    glColor3ub(255, 153, 102);

    glVertex2f(-0.56f, 0.0f);
    glVertex2f(-0.76f, 0.0f);
    glVertex2f(-0.76f, 0.4f);
    glVertex2f(-0.56f, 0.4f);

    glEnd();

    glBegin(GL_QUADS); // quard of mosque
    glColor3ub(255, 153, 102);

    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.62f, 0.4f);
    glVertex2f(-0.62f, 0.48f);
    glVertex2f(-0.7f, 0.48f);
    glEnd();

     glBegin(GL_QUADS); // basline of mosque red line

    glColor3ub(140, 140, 140);

    glVertex2f(-0.52f, 0.0f);
    glVertex2f(-0.52f, -0.06f);
    glVertex2f(-0.8f, -0.06f);
    glVertex2f(-0.8f, 0.0f);

    glEnd();

 glLoadIdentity();


  glTranslatef(-0.59,0.225,0);
    glScalef(.25,.25,0);

    glBegin(GL_POLYGON); // polygon of mosque right gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

 glLoadIdentity();

 glLoadIdentity();


  glTranslatef(-0.66,0.195,0);
    glScalef(.4,.4,0);

    glBegin(GL_POLYGON); // polygon of mosque middle gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

 glLoadIdentity();

 glTranslatef(-0.73,0.225,0);
    glScalef(.25,.25,0);

    glBegin(GL_POLYGON); // polygon of mosque left gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
    glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

    glLoadIdentity();

    glTranslatef(-0.66,0.0,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of mosque main door

	glColor3ub(255, 255, 0);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();

   glLoadIdentity();

    glTranslatef(0.70,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am  door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();


   glTranslatef(-0.73,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of mosque right door

	glColor3ub(255, 230, 242);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();

    glTranslatef(-0.59,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of mosque left door

	glColor3ub(255, 230, 242);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

    glBegin(GL_QUADS); // Waiking place for foura
    glColor3ub(230, 230, 230);
    glVertex2f(-0.2f, -0.06f);
    glVertex2f(-0.2f, -0.46f);
    glVertex2f(0.2f, -0.46f);
    glVertex2f(0.2f, -0.06f);

    glEnd();

     glBegin(GL_QUADS); // Waiking field  for people and tree in left side
    glColor3f(0, 1, 0);
    glVertex2f(-0.20f, -0.06f);
    glVertex2f(-0.20f, -0.46f);
    glVertex2f(-1.0f, -0.46f);
    glVertex2f(-1.0f, -0.06f);

    glEnd();

    glBegin(GL_QUADS); // Waiking field  for people and tree in right side
    glColor3f(0, 1, 0);
    glVertex2f(0.20f, -0.06f);
    glVertex2f(0.20f, -0.46f);
    glVertex2f(1.0f, -0.46f);
    glVertex2f(1.0f, -0.06f);

    glEnd();

    glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

   glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

   glLoadIdentity();

    glTranslatef(0.25,-0.0,0);
    glScalef(.99,.99,0);

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

    glLoadIdentity();


    glTranslatef(-0.25,-0.0,0);
    glScalef(.99,.99,0);

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.25,-0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(0.25,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.15,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.70f, -0.28f);
    glVertex2f(-0.70f, -0.46f);
    glVertex2f(-0.67f, -0.46f);
    glVertex2f(-0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.32f);
	glVertex2f(-0.72f, -0.32f);
    glVertex2f(-0.6851f, -0.20f);
	glEnd();

	/*glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.38f);
	glVertex2f(-0.72f, -0.38f);
    glVertex2f(-0.6851f, -0.19f);
	glEnd();*/

   glLoadIdentity();

   glTranslatef(0.11,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.70f, -0.28f);
    glVertex2f(-0.70f, -0.46f);
    glVertex2f(-0.67f, -0.46f);
    glVertex2f(-0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.32f);
	glVertex2f(-0.72f, -0.32f);
    glVertex2f(-0.6851f, -0.20f);
	glEnd();

  glLoadIdentity();

  glTranslatef(0.15,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.70f, -0.28f);
    glVertex2f(0.70f, -0.46f);
    glVertex2f(0.67f, -0.46f);
    glVertex2f(0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.32f);
	glVertex2f(0.72f, -0.32f);
    glVertex2f(0.6851f, -0.20f);
	glEnd();



   glLoadIdentity();

   glTranslatef(-0.11,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.70f, -0.28f);
    glVertex2f(0.70f, -0.46f);
    glVertex2f(0.67f, -0.46f);
    glVertex2f(0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.32f);
	glVertex2f(0.72f, -0.32f);
    glVertex2f(0.6851f, -0.20f);
	glEnd();

  glLoadIdentity();

    glBegin(GL_QUADS); //square water place for foura
    glColor3ub(102, 204, 255);
    glVertex2f(-0.06f, -0.08f);
    glVertex2f(-0.06f, -0.25f);
    glVertex2f(0.06f, -0.25f);
    glVertex2f(0.06f, -0.08f);

    glEnd();



   glBegin(GL_TRIANGLES); // Triangle of 1st foura
	glColor3f(0,0,0);

    glVertex2f(0.0f, -0.12f);
	glVertex2f(-0.02f, -0.18f);
    glVertex2f(0.02f, -0.18f);
	glEnd();








   glLineWidth(1.5);


	glBegin(GL_LINES);  //  Water of foura
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.13f);
    glVertex2f(-0.04f, -0.14f);

    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.12f);
    glVertex2f(-0.02f, -0.13f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.05f, -0.15f);
    glVertex2f(-0.05f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.05f, -0.19f);
    glVertex2f(-0.05f, -0.21f);

	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.15f);
    glVertex2f(-0.03f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.19f);
    glVertex2f(-0.03f, -0.21f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.13f);
    glVertex2f(0.04f, -0.14f);

    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f,-0.12f);
    glVertex2f(0.02f, -0.13f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, -0.15f);
    glVertex2f(0.05f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, -0.19f);
    glVertex2f(0.05f, -0.21f);

	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.15f);
    glVertex2f(0.03f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.19f);
    glVertex2f(0.03f, -0.21f);


	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.04f, -0.15f);
    glVertex2f(0.04f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.04f, -0.15f);
    glVertex2f(-0.04f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.04f, -0.19f);
    glVertex2f(0.04f, -0.21f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.04f, -0.19f);
    glVertex2f(-0.04f, -0.21f);

	glEnd();




   glBegin(GL_QUADS); // main gate left side
    glColor3ub(115, 115, 115);
    glVertex2f(-0.14f, -0.34f);//
    glVertex2f(-0.20f, -0.46f);//
    glVertex2f(-0.04f, -0.46f);
    glVertex2f(-0.04f, -0.34f);

    glEnd();

    glBegin(GL_QUADS); //main gate right side
    glColor3ub(115, 115, 115);
    glVertex2f(0.14f, -0.34f);
    glVertex2f(0.20f, -0.46f);
    glVertex2f(0.04f, -0.46f);
    glVertex2f(0.04f, -0.34f);

    glEnd();

    glBegin(GL_QUADS); // Main Road
    glColor3f(0, 0, 0);
    glVertex2f(-1.0f, -0.46f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.46f);

    glEnd();

   glLineWidth(4.5);

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.00f, -0.78f);
	glVertex2f(-0.9f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.00f, -0.78f);
	glVertex2f(0.9f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.78f);
	glVertex2f(0.4f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.78f);
	glVertex2f(0.0f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.78f);
	glVertex2f(-0.4f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.78f);
	glVertex2f(-0.8f, -0.78f);

	glEnd();



    glBegin(GL_QUADS); // Halogen lamp stand in road of right side
    glColor3f(1, 1, 1);
    glVertex2f(0.98f, -0.46f);
    glVertex2f(0.98f, -1.0f);
    glVertex2f(0.99f, -1.0f);
    glVertex2f(0.99f, -0.46f);

    glEnd();

    glBegin(GL_QUADS); // Halogen lamp in road of right side
    glColor3f(1, 1, 1);
    glVertex2f(0.98f, -0.46f);
    glVertex2f(0.98f, -0.48f);
    glVertex2f(0.94f, -0.48f);
    glVertex2f(0.94f, -0.46f);

    glEnd();

    glBegin(GL_QUADS); // Halogen lamp stand in road of left side
    glColor3f(1, 1, 1);
    glVertex2f(-0.98f, -0.46f);
    glVertex2f(-0.98f, -1.0f);
    glVertex2f(-0.99f, -1.0f);
    glVertex2f(-0.99f, -0.46f);

    glEnd();

    glBegin(GL_QUADS); // Halogen lamp stand in road of left side
    glColor3f(1, 1, 1);
    glVertex2f(-0.98f, -0.46f);
    glVertex2f(-0.98f, -0.48f);
    glVertex2f(-0.94f, -0.48f);
    glVertex2f(-0.94f, -0.46f);

    glEnd();



    GLfloat x14=0.96f; GLfloat y14=-0.48f; GLfloat radius20 =0.015f; //Halogen lamp circle in road of right side

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(77, 255, 255);

	glVertex2f(x14,y14);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x14 + (radius20 * cos(i *  twicePi / triangleamount)),
			    y14 + (radius20* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




    glBegin(GL_QUADS); // Halogen lamp is lighting in right side
    glColor3ub(255, 255, 0);
    glVertex2f(0.95f, -0.49f);
    glVertex2f(0.80f, -1.0f);//
    glVertex2f(0.97f, -1.0f);//
    glVertex2f(0.97f, -0.49f);

    glEnd();





     GLfloat x15=-0.96f; GLfloat y15=-0.48f; GLfloat radius21 =0.015f; //Halogen lamp circle in road of left side

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(77, 255, 255);

	glVertex2f(x15,y15);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x15 + (radius21 * cos(i *  twicePi / triangleamount)),
			    y15 + (radius21* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();


	glBegin(GL_QUADS); // Halogen lamp is lighting in left side
    glColor3ub(255, 255, 0);
    glVertex2f(-0.95f, -0.49f);
    glVertex2f(-0.80f, -1.0f);//
    glVertex2f(-0.97f, -1.0f);//
    glVertex2f(-0.97f, -0.49f);

    glEnd();






















   glPushMatrix();
   glTranslatef(position4,0,0);


    glBegin(GL_QUADS); // big track
     glColor3ub(102, 153, 204);
    glVertex2f(-0.74f, -0.6f);
    glVertex2f(-0.74f, -0.7f);
    glVertex2f(-0.97f, -0.7f);
    glVertex2f(-0.97f, -0.6f);

    glEnd();

    glBegin(GL_QUADS); // big track
	glColor3ub(255, 255, 128);
    glVertex2f(-0.76f, -0.5f);
	glVertex2f(-0.74f, -0.6f);
    glVertex2f(-0.82f, -0.6f);
    glVertex2f(-0.82f, -0.5f);

    glEnd();

     glBegin(GL_QUADS); // small 2nd 1st window
      glColor3ub(191, 191, 191);
     glVertex2f(-0.77f, -0.53f);
     glVertex2f(-0.77f, -0.58f);
     glVertex2f(-0.80f, -0.58f);
     glVertex2f(-0.80f, -0.53f);

    glEnd();

    GLfloat x12=-0.92f; GLfloat y12=-0.72f; GLfloat radius18 =0.04f;// While for big track

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x12,y12);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x12 + (radius18 * cos(i *  twicePi / triangleamount)),
			    y12 + (radius18* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x13=-0.78f; GLfloat y13=-0.72f; GLfloat radius19 =0.04f;  // While for big track

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x13,y13);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x13 + (radius19 * cos(i *  twicePi / triangleamount)),
			    y13 + (radius19* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

   glPopMatrix();



	glFlush();
}


void springnight_demo(int a)
{

glutDisplayFunc(springnight);

}

void springdayupdate(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, springdayupdate, 0);
}


void springdayupdate1(int value) {

    if(position1 >1.0)
        position1 = -1.0f;

    position1 += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(150, springdayupdate1, 0);
}





void springday() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


	 glBegin(GL_QUADS); // SKY in day
    glColor3ub(0, 153, 230);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();


   GLfloat x1=0.64f; GLfloat y1=0.74f; GLfloat radius4 =.06f; // Circle for Cloud
	int i;
	int triangleamount = 15; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(x1,y1);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x1 + (radius4 * cos(i *  twicePi / triangleamount)),
			    y1 + (radius4* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat p1=0.68f; GLfloat q1=0.8f; GLfloat radius5 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1, 1, 1);

	glVertex2f(p1,q1);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    p1 + (radius5 * cos(i *  twicePi / triangleamount)),
			    q1 + (radius5* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat a1=0.6f; GLfloat b1=0.84f; GLfloat radius6 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(a1,b1);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    a1 + (radius6 * cos(i *  twicePi / triangleamount)),
			    b1 + (radius6* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat m1=0.56f; GLfloat n1=0.78f; GLfloat radius7 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(m1,n1);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    m1+ (radius7 * cos(i *  twicePi / triangleamount)),
			    n1 + (radius7* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();


glLoadIdentity();

glTranslatef(0.37,0.31,0);
glScalef(.7,.7,0);

  GLfloat x2=0.64f; GLfloat y2=0.74f; GLfloat radius8 =.06f; // Circle for Cloud

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(x1,y1);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x1 + (radius4 * cos(i *  twicePi / triangleamount)),
			    y1 + (radius4* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x3=0.68f; GLfloat y3=0.8f; GLfloat radius9 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1, 1, 1);

	glVertex2f(x3,y3);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x3 + (radius5 * cos(i *  twicePi / triangleamount)),
			    y3 + (radius5* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x4=0.6f; GLfloat y4=0.84f; GLfloat radius10 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(x4,y4);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x4 + (radius6 * cos(i *  twicePi / triangleamount)),
			    y4 + (radius6* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x5=0.56f; GLfloat y5=0.78f; GLfloat radius11 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(x5,y5);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x5+ (radius7 * cos(i *  twicePi / triangleamount)),
			    y5 + (radius7* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



   glLoadIdentity();


    glTranslatef(-1.0,0.20,0);
    glScalef(.9,.9,0);




   GLfloat x41=0.64f; GLfloat y41=0.74f; GLfloat radius47 =.06f; // Circle for Cloud
	//int i;
	triangleamount = 15; //# of triangles used to draw circle

	//GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(x41,y41);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x41 + (radius47 * cos(i *  twicePi / triangleamount)),
			    y41 + (radius47* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x42=0.68f; GLfloat y42=0.8f; GLfloat radius48 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1, 1, 1);

	glVertex2f(x42,y42);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x42 + (radius47 * cos(i *  twicePi / triangleamount)),
			    y42 + (radius47* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x43=0.58f; GLfloat y43=0.82f; GLfloat radius49 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(x43,y43);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x43 + (radius49 * cos(i *  twicePi / triangleamount)),
			    y43 + (radius49* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat  x44=0.54f; GLfloat y44=0.76f; GLfloat radius50 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(x44,y44);

		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x44+ (radius50 * cos(i *  twicePi / triangleamount)),
			    y44 + (radius50* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();


  glLoadIdentity();

  //glTranslatef(-0.97,0.31,0);
   //glScalef(.7,.7,0);

  GLfloat x45=-0.74f; GLfloat y45=0.87f; GLfloat radius51 =.06f; // Circle for Cloud
//	int i;
	//int triangleamount = 15; //# of triangles used to draw circle

//	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(x45,y45);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x45 + (radius51 * cos(i *  twicePi / triangleamount)),
			    y45 + (radius51* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x46=-0.68f; GLfloat y46=0.8f; GLfloat radius52 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1, 1, 1);

	glVertex2f(x46,y46);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x46 + (radius52 * cos(i *  twicePi / triangleamount)),
			    y46 + (radius52* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x47=-0.62f; GLfloat y47=0.84f; GLfloat radius53 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(x47,y47);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x47 + (radius53 * cos(i *  twicePi / triangleamount)),
			    y47 + (radius53* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x48=-0.65f; GLfloat y48=0.90f; GLfloat radius54 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(x48,y48);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x48+ (radius54 * cos(i *  twicePi / triangleamount)),
			    y48 + (radius54* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();






  glLoadIdentity();


	GLfloat x6=-0.92f; GLfloat y6=0.92f; GLfloat radius12 =.06f; // Circle for Sun
	 triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,0,0);

	glVertex2f(x6,y6);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x6 + (radius12 * cos(i *  twicePi / triangleamount)),
			    y6 + (radius12* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();











glBegin(GL_POLYGON); // polygon of lalbag

	glColor3ub(255, 153, 102);

    glVertex2f(-0.2f, 0.60f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(0.40f, 0.0f);
	glVertex2f(0.40f, 0.60f);
	glVertex2f(0.20f, 0.6f);
	glVertex2f(0.20f, 0.7f);
	glVertex2f(-0.20f, 0.7f);
	 glEnd();

	glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(255, 153, 102);

    glVertex2f(-0.40f, 0.60f);
    glVertex2f(-0.40f, 0.0f);
    glVertex2f(-0.20f, 0.0f);
    glVertex2f(-0.20f, 0.60f);

    glEnd();



    glLoadIdentity();

    glTranslatef(0.355,0.32,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj in right shift

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);


    glEnd();

    glLoadIdentity();


    glTranslatef(-0.355,0.32,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj in right shift

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);


    glEnd();

   glLoadIdentity();





    glBegin(GL_QUADS);// quard for lalbag right gumbuj

    glColor3ub(204, 102, 0);

    glVertex2f(0.32f, 0.6f);
    glVertex2f(0.32f, 0.70f);
    glVertex2f(0.39f, 0.70f);
    glVertex2f(0.39f, 0.6f);

    glEnd();



     glLoadIdentity();

   glTranslatef(-0.71,0.0,0);

    glBegin(GL_QUADS);// quard for lalbag right gumbuj

    glColor3ub(204, 102, 0);

    glVertex2f(0.32f, 0.6f);
    glVertex2f(0.32f, 0.70f);
    glVertex2f(0.39f, 0.70f);
    glVertex2f(0.39f, 0.6f);

    glEnd();




      glLoadIdentity();



   glBegin(GL_POLYGON); // polygon of lalbag main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();


    glTranslatef(-0.335,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of left door of lalbag

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();

      glLoadIdentity();


    glTranslatef(0.335,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of left door of lalbag

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



    glTranslatef(0.0,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of middle black door of lalbag

	glColor3ub(77, 77, 77);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();

    glTranslatef(-0.337,0.0,0);
    glScalef(.5,.5,0);


    glBegin(GL_POLYGON); // polygon of left black door of lalbag

	glColor3ub(77, 77, 77);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



     glTranslatef(0.337,0.0,0);
    glScalef(.5,.5,0);


    glBegin(GL_POLYGON); // polygon of right black door of lalbag

	glColor3ub(77, 77, 77);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



glBegin(GL_QUADS); // basline of lalbag red line

    glColor3ub(140, 140, 140);

    glVertex2f(-0.44f, 0.0f);
    glVertex2f(-0.44f, -0.06f);
    glVertex2f(0.44f, -0.06f);
    glVertex2f(0.44f, 0.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(255, 153, 102);  // 1st quard of diwan i am

    glVertex2f(0.5f, 0.3f);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.9f, 0.0f);
    glVertex2f(0.9f, 0.3f);

    glEnd();


     glBegin(GL_QUADS);
    glColor3ub(255, 153, 102);  // 2nd quard of diwan i am

    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.8f, 0.3f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.6f, 0.5f);

    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 153, 102);  // 3rd quard of diwan i am

    glVertex2f(0.56f, 0.5f);
    glVertex2f(0.84f, 0.5f);
    glVertex2f(0.84f, 0.52f);
    glVertex2f(0.56f, 0.52f);

    glEnd();

     glBegin(GL_POLYGON); // left gumbuj of diwan i am
	 glColor3ub(204, 102, 0);

     glVertex2f(0.56f, 0.52f);
    glVertex2f(0.58f, 0.52f);
    glVertex2f(0.6f, 0.54f);
    glVertex2f(0.62f, 0.56f);
    glVertex2f(0.64f, 0.58f);
    glVertex2f(0.66f, 0.56f);
    glVertex2f(0.68f, 0.54f);
    glVertex2f(0.7f, 0.52f);
     glVertex2f(0.72f,0.52f);

    glEnd();

    glBegin(GL_POLYGON); // middle gumbuj of diwan i am
    glColor3ub(204, 102, 0);

    glVertex2f(0.72f, 0.52f);
    glVertex2f(0.74f, 0.54f);
    glVertex2f(0.76f, 0.56f);
    glVertex2f(0.78f, 0.58f);
    glVertex2f(0.8f, 0.56f);
    glVertex2f(0.82f, 0.54f);
    glVertex2f(0.84f, 0.52f);

    glEnd();

    glBegin(GL_POLYGON); // right gumbuj of diwan i am
    glColor3ub(204, 102, 0);

    glVertex2f(0.64f, 0.52f);
    glVertex2f(0.66f, 0.56f);
    glVertex2f(0.68f, 0.6f);
    glVertex2f(0.72f, 0.6f);
    glVertex2f(0.74f, 0.6f);
    glVertex2f(0.76f, 0.56f);
    glVertex2f(0.78f, 0.52f);

    glEnd();

    glBegin(GL_QUADS); // basline of diwan i am  red line
    glColor3ub(140, 140, 140);

    glVertex2f(0.48f, 0.0f);
    glVertex2f(0.48f, -0.06f);
    glVertex2f(0.92f, -0.06f);
    glVertex2f(0.92f, 0.0f);

    glEnd();


     glLoadIdentity();

    glTranslatef(0.70,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();


   glLoadIdentity();

    glTranslatef(0.75,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am  door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

    glLoadIdentity();

    glTranslatef(0.65,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

     glLoadIdentity();

    glTranslatef(0.65,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();


     glLoadIdentity();

    glTranslatef(0.75,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();


    glLoadIdentity();

    glTranslatef(0.85,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();



    glLoadIdentity();

    glTranslatef(0.55,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();









    glBegin(GL_QUADS); // quard of mosque
    glColor3ub(255, 153, 102);

    glVertex2f(-0.56f, 0.0f);
    glVertex2f(-0.76f, 0.0f);
    glVertex2f(-0.76f, 0.4f);
    glVertex2f(-0.56f, 0.4f);

    glEnd();

    glBegin(GL_QUADS); // quard of mosque
    glColor3ub(255, 153, 102);

    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.62f, 0.4f);
    glVertex2f(-0.62f, 0.48f);
    glVertex2f(-0.7f, 0.48f);
    glEnd();

     glBegin(GL_QUADS); // basline of mosque red line

    glColor3ub(140, 140, 140);

    glVertex2f(-0.52f, 0.0f);
    glVertex2f(-0.52f, -0.06f);
    glVertex2f(-0.8f, -0.06f);
    glVertex2f(-0.8f, 0.0f);

    glEnd();

 glLoadIdentity();


  glTranslatef(-0.59,0.225,0);
    glScalef(.25,.25,0);

    glBegin(GL_POLYGON); // polygon of mosque right gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

 glLoadIdentity();

 glLoadIdentity();


  glTranslatef(-0.66,0.195,0);
    glScalef(.4,.4,0);

    glBegin(GL_POLYGON); // polygon of mosque middle gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

 glLoadIdentity();

 glTranslatef(-0.73,0.225,0);
    glScalef(.25,.25,0);

    glBegin(GL_POLYGON); // polygon of mosque left gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
    glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

    glLoadIdentity();

    glTranslatef(-0.66,0.0,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of mosque main door

	glColor3ub(255, 230, 242);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();

   glLoadIdentity();

    glTranslatef(0.70,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am  door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();


   glTranslatef(-0.73,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of mosque right door

	glColor3ub(255, 230, 242);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();

    glTranslatef(-0.59,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of mosque left door

	glColor3ub(255, 230, 242);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

    glBegin(GL_QUADS); // Waiking place for foura
    glColor3ub(230, 230, 230);
    glVertex2f(-0.2f, -0.06f);
    glVertex2f(-0.2f, -0.46f);
    glVertex2f(0.2f, -0.46f);
    glVertex2f(0.2f, -0.06f);

    glEnd();

     glBegin(GL_QUADS); // Waiking field  for people and tree in left side
    glColor3f(0, 1, 0);
    glVertex2f(-0.20f, -0.06f);
    glVertex2f(-0.20f, -0.46f);
    glVertex2f(-1.0f, -0.46f);
    glVertex2f(-1.0f, -0.06f);

    glEnd();

    glBegin(GL_QUADS); // Waiking field  for people and tree in right side
    glColor3f(0, 1, 0);
    glVertex2f(0.20f, -0.06f);
    glVertex2f(0.20f, -0.46f);
    glVertex2f(1.0f, -0.46f);
    glVertex2f(1.0f, -0.06f);

    glEnd();

    glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

   glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

   glLoadIdentity();

    glTranslatef(0.25,-0.0,0);
    glScalef(.99,.99,0);

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

    glLoadIdentity();


    glTranslatef(-0.25,-0.0,0);
    glScalef(.99,.99,0);

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.25,-0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(0.25,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.15,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.70f, -0.28f);
    glVertex2f(-0.70f, -0.46f);
    glVertex2f(-0.67f, -0.46f);
    glVertex2f(-0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.32f);
	glVertex2f(-0.72f, -0.32f);
    glVertex2f(-0.6851f, -0.20f);
	glEnd();



   glLoadIdentity();

   glTranslatef(0.11,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.70f, -0.28f);
    glVertex2f(-0.70f, -0.46f);
    glVertex2f(-0.67f, -0.46f);
    glVertex2f(-0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.32f);
	glVertex2f(-0.72f, -0.32f);
    glVertex2f(-0.6851f, -0.20f);
	glEnd();

  glLoadIdentity();

  glTranslatef(0.15,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.70f, -0.28f);
    glVertex2f(0.70f, -0.46f);
    glVertex2f(0.67f, -0.46f);
    glVertex2f(0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.32f);
	glVertex2f(0.72f, -0.32f);
    glVertex2f(0.6851f, -0.20f);
	glEnd();



   glLoadIdentity();

   glTranslatef(-0.11,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.70f, -0.28f);
    glVertex2f(0.70f, -0.46f);
    glVertex2f(0.67f, -0.46f);
    glVertex2f(0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.32f);
	glVertex2f(0.72f, -0.32f);
    glVertex2f(0.6851f, -0.20f);
	glEnd();

  glLoadIdentity();

    glBegin(GL_QUADS); //square water place for foura
    glColor3ub(102, 204, 255);
    glVertex2f(-0.06f, -0.08f);
    glVertex2f(-0.06f, -0.25f);
    glVertex2f(0.06f, -0.25f);
    glVertex2f(0.06f, -0.08f);

    glEnd();



   glBegin(GL_TRIANGLES); // Triangle of 1st foura
	glColor3f(0,0,0);

    glVertex2f(0.0f, -0.12f);
	glVertex2f(-0.02f, -0.18f);
    glVertex2f(0.02f, -0.18f);
	glEnd();








   glLineWidth(1.5);


	glBegin(GL_LINES);  //  Water of foura
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.13f);
    glVertex2f(-0.04f, -0.14f);

    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.12f);
    glVertex2f(-0.02f, -0.13f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.05f, -0.15f);
    glVertex2f(-0.05f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.05f, -0.19f);
    glVertex2f(-0.05f, -0.21f);

	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.15f);
    glVertex2f(-0.03f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.19f);
    glVertex2f(-0.03f, -0.21f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.13f);
    glVertex2f(0.04f, -0.14f);

    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f,-0.12f);
    glVertex2f(0.02f, -0.13f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, -0.15f);
    glVertex2f(0.05f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, -0.19f);
    glVertex2f(0.05f, -0.21f);

	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.15f);
    glVertex2f(0.03f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.19f);
    glVertex2f(0.03f, -0.21f);


	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.04f, -0.15f);
    glVertex2f(0.04f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.04f, -0.15f);
    glVertex2f(-0.04f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.04f, -0.19f);
    glVertex2f(0.04f, -0.21f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.04f, -0.19f);
    glVertex2f(-0.04f, -0.21f);

	glEnd();




   glBegin(GL_QUADS); // main gate left side
    glColor3ub(115, 115, 115);
    glVertex2f(-0.14f, -0.34f);//
    glVertex2f(-0.20f, -0.46f);//
    glVertex2f(-0.04f, -0.46f);
    glVertex2f(-0.04f, -0.34f);

    glEnd();

    glBegin(GL_QUADS); //main gate right side
    glColor3ub(115, 115, 115);
    glVertex2f(0.14f, -0.34f);
    glVertex2f(0.20f, -0.46f);
    glVertex2f(0.04f, -0.46f);
    glVertex2f(0.04f, -0.34f);

    glEnd();

    glBegin(GL_QUADS); // Main Road
    glColor3f(0, 0, 0);
    glVertex2f(-1.0f, -0.46f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.46f);

    glEnd();

   glLineWidth(4.5);

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.00f, -0.78f);
	glVertex2f(-0.9f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.00f, -0.78f);
	glVertex2f(0.9f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.78f);
	glVertex2f(0.4f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.78f);
	glVertex2f(0.0f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.78f);
	glVertex2f(-0.4f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.78f);
	glVertex2f(-0.8f, -0.78f);

	glEnd();



    glBegin(GL_QUADS); // Halogen lamp stand in road of right side
    glColor3f(1, 1, 1);
    glVertex2f(0.98f, -0.46f);
    glVertex2f(0.98f, -1.0f);
    glVertex2f(0.99f, -1.0f);
    glVertex2f(0.99f, -0.46f);

    glEnd();

    glBegin(GL_QUADS); // Halogen lamp in road of right side
    glColor3f(1, 1, 1);
    glVertex2f(0.98f, -0.46f);
    glVertex2f(0.98f, -0.48f);
    glVertex2f(0.94f, -0.48f);
    glVertex2f(0.94f, -0.46f);

    glEnd();

    glBegin(GL_QUADS); // Halogen lamp stand in road of left side
    glColor3f(1, 1, 1);
    glVertex2f(-0.98f, -0.46f);
    glVertex2f(-0.98f, -1.0f);
    glVertex2f(-0.99f, -1.0f);
    glVertex2f(-0.99f, -0.46f);

    glEnd();




    GLfloat m14=0.96f; GLfloat n14=-0.48f; GLfloat radius82 =0.015f; //Halogen lamp circle in road of right side

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(77, 255, 255);

	glVertex2f(m14,n14);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    m14 + (radius82 * cos(i *  twicePi / triangleamount)),
			    n14 + (radius82* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



    glBegin(GL_QUADS); // Halogen lamp in road of left side
    glColor3f(1, 1, 1);
    glVertex2f(-0.98f, -0.46f);
    glVertex2f(-0.98f, -0.48f);
    glVertex2f(-0.94f, -0.48f);
    glVertex2f(-0.94f, -0.46f);

    glEnd();



     GLfloat p15=-0.96f; GLfloat q15=-0.48f; GLfloat radius83 =0.015f; //Halogen lamp circle in road of left side

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(77, 255, 255);

	glVertex2f(p15,q15);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    p15 + (radius83 * cos(i *  twicePi / triangleamount)),
			    q15 + (radius83* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();


     glPushMatrix();
   glTranslatef(position,0,0);

   glBegin(GL_QUADS); // Car in right side
	glColor3ub(0, 128, 128);
    glVertex2f(0.62f, -0.5f);//
	glVertex2f(0.57f, -0.60f);
    glVertex2f(0.83f, -0.60f);//

    glVertex2f(0.78f, -0.5f);//

    glEnd();

     glBegin(GL_QUADS);// Car in right side
     glColor3ub(0, 77, 77);
    glVertex2f(0.55f, -0.60f);
    glVertex2f(0.55f, -0.7f);
    glVertex2f(0.85f, -0.7f);
    glVertex2f(0.85f, -0.60f);

    glEnd();


  GLfloat x8=0.8f; GLfloat y8=-0.72f; GLfloat radius14 =0.04f; // Circle for while of big car

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x8,y8);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x8 + (radius14 * cos(i *  twicePi / triangleamount)),
			    y8 + (radius14* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x9=0.6f; GLfloat y9=-0.72f; GLfloat radius15 =0.04f; // Circle for while of big car

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x9,y9);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x9 + (radius15 * cos(i *  twicePi / triangleamount)),
			    y9 + (radius15* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

    glBegin(GL_QUADS); // 1st window
      glColor3ub(191, 191, 191);
     glVertex2f(0.62f, -0.53f);
     glVertex2f(0.62f, -0.58f);
     glVertex2f(0.65f, -0.58f);
     glVertex2f(0.65f, -0.53f);

    glEnd();

    glBegin(GL_QUADS); // 2nd window
    glColor3ub(191, 191, 191);
    glVertex2f(0.76f, -0.53f);
    glVertex2f(0.76f, -0.58f);
    glVertex2f(0.79f, -0.58f);
    glVertex2f(0.79f, -0.53f);

    glEnd();

     glLineWidth(1.5);


     glBegin(GL_LINES);// car line

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.7f, -0.6f);

      glEnd();

   glPopMatrix();

       glLoadIdentity();

    glPushMatrix();
   glTranslatef(position1,0,0);

    glTranslatef(-1.0,-0.4,0);
    glScalef(.8,.8,0);


    glBegin(GL_QUADS); // small 2nd Car in right side
	glColor3ub(102, 0, 0);
    glVertex2f(0.62f, -0.5f);//
	glVertex2f(0.57f, -0.60f);
    glVertex2f(0.83f, -0.60f);//

    glVertex2f(0.78f, -0.5f);//

    glEnd();

     glBegin(GL_QUADS);// small 2nd Car in right side
     glColor3ub(179, 0, 0);
    glVertex2f(0.55f, -0.60f);
    glVertex2f(0.55f, -0.7f);
    glVertex2f(0.85f, -0.7f);
    glVertex2f(0.85f, -0.60f);

    glEnd();


  GLfloat x10=0.8f; GLfloat y10=-0.72f; GLfloat radius16 =0.04f; // Circle for while of small car

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x10,y10);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x10 + (radius16 * cos(i *  twicePi / triangleamount)),
			    y10 + (radius16* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x11=0.6f; GLfloat y11=-0.72f; GLfloat radius17 =0.04f; //  Circle for while of small car

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x11,y11);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x11 + (radius17 * cos(i *  twicePi / triangleamount)),
			    y11 + (radius17* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

    glBegin(GL_QUADS); // small 2nd 1st window
      glColor3ub(191, 191, 191);
     glVertex2f(0.62f, -0.53f);
     glVertex2f(0.62f, -0.58f);
     glVertex2f(0.65f, -0.58f);
     glVertex2f(0.65f, -0.53f);

    glEnd();

    glBegin(GL_QUADS); //small 2nd 2nd window
    glColor3ub(191, 191, 191);
    glVertex2f(0.76f, -0.53f);
    glVertex2f(0.76f, -0.58f);
    glVertex2f(0.79f, -0.58f);
    glVertex2f(0.79f, -0.53f);

    glEnd();

     glLineWidth(1.5);


     glBegin(GL_LINES);//small 2nd car line

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.7f, -0.6f);

      glEnd();



   glLoadIdentity();
glPopMatrix();

glutTimerFunc(5000, springnight_demo,0);

	glFlush();
}


void springday_demo(int a)
{

glutDisplayFunc(springday);

}



void rainynightupdate2(int value) {

    if(position4 >1.0)
        position4 =- 1.0f;

    position4 += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(400, rainynightupdate2, 0);
}


void rainynightupdate5(int value) {

    if(position5 <-1.0)
        position5 = 1.0f;

    position5 -= speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, rainynightupdate5, 0);
}



void rainynight() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


	 glBegin(GL_QUADS); // SKY in night
    glColor3ub(0,0,0);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();







glBegin(GL_POLYGON); // polygon of lalbag

	glColor3ub(255, 153, 102);

    glVertex2f(-0.2f, 0.60f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(0.40f, 0.0f);
	glVertex2f(0.40f, 0.60f);
	glVertex2f(0.20f, 0.6f);
	glVertex2f(0.20f, 0.7f);
	glVertex2f(-0.20f, 0.7f);
	 glEnd();

	glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(255, 153, 102);

    glVertex2f(-0.40f, 0.60f);
    glVertex2f(-0.40f, 0.0f);
    glVertex2f(-0.20f, 0.0f);
    glVertex2f(-0.20f, 0.60f);

    glEnd();



    glLoadIdentity();

    glTranslatef(0.355,0.32,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj in right shift

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);


    glEnd();

    glLoadIdentity();


    glTranslatef(-0.355,0.32,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj in right shift

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);


    glEnd();

   glLoadIdentity();

   /* glLineWidth(4.5);

    glBegin(GL_LINES);// 4rth gumbuj line

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.39f, 0.7f);
	glVertex2f(0.39f, 0.6f);

    glEnd();


    glLoadIdentity();
    glTranslatef(-0.7,0.00,0);

    glLineWidth(4.5);

    glBegin(GL_LINES);//2nd gumbuj line

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.38f, 0.7f);
	glVertex2f(0.38f, 0.6f);

    glEnd();*/

  // glLoadIdentity();



    glBegin(GL_QUADS);// quard for lalbag right gumbuj

    glColor3ub(204, 102, 0);

    glVertex2f(0.32f, 0.6f);
    glVertex2f(0.32f, 0.70f);
    glVertex2f(0.39f, 0.70f);
    glVertex2f(0.39f, 0.6f);

    glEnd();



     glLoadIdentity();

   glTranslatef(-0.71,0.0,0);

    glBegin(GL_QUADS);// quard for lalbag right gumbuj

    glColor3ub(204, 102, 0);

    glVertex2f(0.32f, 0.6f);
    glVertex2f(0.32f, 0.70f);
    glVertex2f(0.39f, 0.70f);
    glVertex2f(0.39f, 0.6f);

    glEnd();




      glLoadIdentity();



   glBegin(GL_POLYGON); // polygon of lalbag main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();


    glTranslatef(-0.335,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of left door of lalbag

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();

      glLoadIdentity();


    glTranslatef(0.335,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of left door of lalbag

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



    glTranslatef(0.0,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of middle black door of lalbag

	glColor3ub(255, 255, 0);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();

    glTranslatef(-0.337,0.0,0);
    glScalef(.5,.5,0);


    glBegin(GL_POLYGON); // polygon of left black door of lalbag

	glColor3ub(255, 255, 0);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



     glTranslatef(0.337,0.0,0);
    glScalef(.5,.5,0);


    glBegin(GL_POLYGON); // polygon of right black door of lalbag

	glColor3ub(255, 255, 0);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



glBegin(GL_QUADS); // basline of lalbag red line

    glColor3ub(140, 140, 140);

    glVertex2f(-0.44f, 0.0f);
    glVertex2f(-0.44f, -0.06f);
    glVertex2f(0.44f, -0.06f);
    glVertex2f(0.44f, 0.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(255, 153, 102);  // 1st quard of diwan i am

    glVertex2f(0.5f, 0.3f);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.9f, 0.0f);
    glVertex2f(0.9f, 0.3f);

    glEnd();


     glBegin(GL_QUADS);
    glColor3ub(255, 153, 102);  // 2nd quard of diwan i am

    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.8f, 0.3f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.6f, 0.5f);

    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 153, 102);  // 3rd quard of diwan i am

    glVertex2f(0.56f, 0.5f);
    glVertex2f(0.84f, 0.5f);
    glVertex2f(0.84f, 0.52f);
    glVertex2f(0.56f, 0.52f);

    glEnd();

     glBegin(GL_POLYGON); // left gumbuj of diwan i am
	 glColor3ub(204, 102, 0);

     glVertex2f(0.56f, 0.52f);
    glVertex2f(0.58f, 0.52f);
    glVertex2f(0.6f, 0.54f);
    glVertex2f(0.62f, 0.56f);
    glVertex2f(0.64f, 0.58f);
    glVertex2f(0.66f, 0.56f);
    glVertex2f(0.68f, 0.54f);
    glVertex2f(0.7f, 0.52f);
     glVertex2f(0.72f,0.52f);

    glEnd();

    glBegin(GL_POLYGON); // middle gumbuj of diwan i am
    glColor3ub(204, 102, 0);

    glVertex2f(0.72f, 0.52f);
    glVertex2f(0.74f, 0.54f);
    glVertex2f(0.76f, 0.56f);
    glVertex2f(0.78f, 0.58f);
    glVertex2f(0.8f, 0.56f);
    glVertex2f(0.82f, 0.54f);
    glVertex2f(0.84f, 0.52f);

    glEnd();

    glBegin(GL_POLYGON); // right gumbuj of diwan i am
    glColor3ub(204, 102, 0);

    glVertex2f(0.64f, 0.52f);
    glVertex2f(0.66f, 0.56f);
    glVertex2f(0.68f, 0.6f);
    glVertex2f(0.72f, 0.6f);
    glVertex2f(0.74f, 0.6f);
    glVertex2f(0.76f, 0.56f);
    glVertex2f(0.78f, 0.52f);

    glEnd();

    glBegin(GL_QUADS); // basline of diwan i am  red line
    glColor3ub(140, 140, 140);

    glVertex2f(0.48f, 0.0f);
    glVertex2f(0.48f, -0.06f);
    glVertex2f(0.92f, -0.06f);
    glVertex2f(0.92f, 0.0f);

    glEnd();


     glLoadIdentity();

    glTranslatef(0.70,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();


   glLoadIdentity();

    glTranslatef(0.75,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am  door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

    glLoadIdentity();

    glTranslatef(0.65,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

     glLoadIdentity();

    glTranslatef(0.65,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();


     glLoadIdentity();

    glTranslatef(0.75,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();


    glLoadIdentity();

    glTranslatef(0.85,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();



    glLoadIdentity();

    glTranslatef(0.55,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();









    glBegin(GL_QUADS); // quard of mosque
    glColor3ub(255, 153, 102);

    glVertex2f(-0.56f, 0.0f);
    glVertex2f(-0.76f, 0.0f);
    glVertex2f(-0.76f, 0.4f);
    glVertex2f(-0.56f, 0.4f);

    glEnd();

    glBegin(GL_QUADS); // quard of mosque
    glColor3ub(255, 153, 102);

    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.62f, 0.4f);
    glVertex2f(-0.62f, 0.48f);
    glVertex2f(-0.7f, 0.48f);
    glEnd();

     glBegin(GL_QUADS); // basline of mosque red line

    glColor3ub(140, 140, 140);

    glVertex2f(-0.52f, 0.0f);
    glVertex2f(-0.52f, -0.06f);
    glVertex2f(-0.8f, -0.06f);
    glVertex2f(-0.8f, 0.0f);

    glEnd();

 glLoadIdentity();


  glTranslatef(-0.59,0.225,0);
    glScalef(.25,.25,0);

    glBegin(GL_POLYGON); // polygon of mosque right gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

 glLoadIdentity();

 glLoadIdentity();


  glTranslatef(-0.66,0.195,0);
    glScalef(.4,.4,0);

    glBegin(GL_POLYGON); // polygon of mosque middle gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

 glLoadIdentity();

 glTranslatef(-0.73,0.225,0);
    glScalef(.25,.25,0);

    glBegin(GL_POLYGON); // polygon of mosque left gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
    glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

    glLoadIdentity();

    glTranslatef(-0.66,0.0,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of mosque main door

	glColor3ub(255, 255, 0);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();

   glLoadIdentity();

    glTranslatef(0.70,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am  door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();


   glTranslatef(-0.73,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of mosque right door

	glColor3ub(255, 230, 242);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();

    glTranslatef(-0.59,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of mosque left door

	glColor3ub(255, 230, 242);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

    glBegin(GL_QUADS); // Waiking place for foura
    glColor3ub(230, 230, 230);
    glVertex2f(-0.2f, -0.06f);
    glVertex2f(-0.2f, -0.46f);
    glVertex2f(0.2f, -0.46f);
    glVertex2f(0.2f, -0.06f);

    glEnd();

     glBegin(GL_QUADS); // Waiking field  for people and tree in left side
    glColor3f(0, 1, 0);
    glVertex2f(-0.20f, -0.06f);
    glVertex2f(-0.20f, -0.46f);
    glVertex2f(-1.0f, -0.46f);
    glVertex2f(-1.0f, -0.06f);

    glEnd();

    glBegin(GL_QUADS); // Waiking field  for people and tree in right side
    glColor3f(0, 1, 0);
    glVertex2f(0.20f, -0.06f);
    glVertex2f(0.20f, -0.46f);
    glVertex2f(1.0f, -0.46f);
    glVertex2f(1.0f, -0.06f);

    glEnd();

    glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

   glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

   glLoadIdentity();

    glTranslatef(0.25,-0.0,0);
    glScalef(.99,.99,0);

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

    glLoadIdentity();


    glTranslatef(-0.25,-0.0,0);
    glScalef(.99,.99,0);

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.25,-0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(0.25,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.15,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.70f, -0.28f);
    glVertex2f(-0.70f, -0.46f);
    glVertex2f(-0.67f, -0.46f);
    glVertex2f(-0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.32f);
	glVertex2f(-0.72f, -0.32f);
    glVertex2f(-0.6851f, -0.20f);
	glEnd();

	/*glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.38f);
	glVertex2f(-0.72f, -0.38f);
    glVertex2f(-0.6851f, -0.19f);
	glEnd();*/

   glLoadIdentity();

   glTranslatef(0.11,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.70f, -0.28f);
    glVertex2f(-0.70f, -0.46f);
    glVertex2f(-0.67f, -0.46f);
    glVertex2f(-0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.32f);
	glVertex2f(-0.72f, -0.32f);
    glVertex2f(-0.6851f, -0.20f);
	glEnd();

  glLoadIdentity();

  glTranslatef(0.15,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.70f, -0.28f);
    glVertex2f(0.70f, -0.46f);
    glVertex2f(0.67f, -0.46f);
    glVertex2f(0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.32f);
	glVertex2f(0.72f, -0.32f);
    glVertex2f(0.6851f, -0.20f);
	glEnd();

	/*glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.38f);
	glVertex2f(-0.72f, -0.38f);
    glVertex2f(-0.6851f, -0.19f);
	glEnd();*/

   glLoadIdentity();

   glTranslatef(-0.11,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.70f, -0.28f);
    glVertex2f(0.70f, -0.46f);
    glVertex2f(0.67f, -0.46f);
    glVertex2f(0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.32f);
	glVertex2f(0.72f, -0.32f);
    glVertex2f(0.6851f, -0.20f);
	glEnd();

  glLoadIdentity();

    glBegin(GL_QUADS); //square water place for foura
    glColor3ub(102, 204, 255);
    glVertex2f(-0.06f, -0.08f);
    glVertex2f(-0.06f, -0.25f);
    glVertex2f(0.06f, -0.25f);
    glVertex2f(0.06f, -0.08f);

    glEnd();



   glBegin(GL_TRIANGLES); // Triangle of 1st foura
	glColor3f(0,0,0);

    glVertex2f(0.0f, -0.12f);
	glVertex2f(-0.02f, -0.18f);
    glVertex2f(0.02f, -0.18f);
	glEnd();








   glLineWidth(1.5);


	glBegin(GL_LINES);  //  Water of foura
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.13f);
    glVertex2f(-0.04f, -0.14f);

    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.12f);
    glVertex2f(-0.02f, -0.13f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.05f, -0.15f);
    glVertex2f(-0.05f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.05f, -0.19f);
    glVertex2f(-0.05f, -0.21f);

	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.15f);
    glVertex2f(-0.03f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.19f);
    glVertex2f(-0.03f, -0.21f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.13f);
    glVertex2f(0.04f, -0.14f);

    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f,-0.12f);
    glVertex2f(0.02f, -0.13f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, -0.15f);
    glVertex2f(0.05f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, -0.19f);
    glVertex2f(0.05f, -0.21f);

	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.15f);
    glVertex2f(0.03f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.19f);
    glVertex2f(0.03f, -0.21f);


	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.04f, -0.15f);
    glVertex2f(0.04f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.04f, -0.15f);
    glVertex2f(-0.04f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.04f, -0.19f);
    glVertex2f(0.04f, -0.21f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.04f, -0.19f);
    glVertex2f(-0.04f, -0.21f);

	glEnd();




   glBegin(GL_QUADS); // main gate left side
    glColor3ub(115, 115, 115);
    glVertex2f(-0.14f, -0.34f);//
    glVertex2f(-0.20f, -0.46f);//
    glVertex2f(-0.04f, -0.46f);
    glVertex2f(-0.04f, -0.34f);

    glEnd();

    glBegin(GL_QUADS); //main gate right side
    glColor3ub(115, 115, 115);
    glVertex2f(0.14f, -0.34f);
    glVertex2f(0.20f, -0.46f);
    glVertex2f(0.04f, -0.46f);
    glVertex2f(0.04f, -0.34f);

    glEnd();

    glBegin(GL_QUADS); // Main Road
    glColor3f(0, 0, 0);
    glVertex2f(-1.0f, -0.46f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.46f);

    glEnd();

   glLineWidth(4.5);

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.00f, -0.78f);
	glVertex2f(-0.9f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.00f, -0.78f);
	glVertex2f(0.9f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.78f);
	glVertex2f(0.4f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.78f);
	glVertex2f(0.0f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.78f);
	glVertex2f(-0.4f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.78f);
	glVertex2f(-0.8f, -0.78f);

	glEnd();



    glBegin(GL_QUADS); // Halogen lamp stand in road of right side
    glColor3f(1, 1, 1);
    glVertex2f(0.98f, -0.46f);
    glVertex2f(0.98f, -1.0f);
    glVertex2f(0.99f, -1.0f);
    glVertex2f(0.99f, -0.46f);

    glEnd();

    glBegin(GL_QUADS); // Halogen lamp in road of right side
    glColor3f(1, 1, 1);
    glVertex2f(0.98f, -0.46f);
    glVertex2f(0.98f, -0.48f);
    glVertex2f(0.94f, -0.48f);
    glVertex2f(0.94f, -0.46f);

    glEnd();

    glBegin(GL_QUADS); // Halogen lamp stand in road of left side
    glColor3f(1, 1, 1);
    glVertex2f(-0.98f, -0.46f);
    glVertex2f(-0.98f, -1.0f);
    glVertex2f(-0.99f, -1.0f);
    glVertex2f(-0.99f, -0.46f);

    glEnd();

    glBegin(GL_QUADS); // Halogen lamp stand in road of left side
    glColor3f(1, 1, 1);
    glVertex2f(-0.98f, -0.46f);
    glVertex2f(-0.98f, -0.48f);
    glVertex2f(-0.94f, -0.48f);
    glVertex2f(-0.94f, -0.46f);

    glEnd();



    GLfloat x14=0.96f; GLfloat y14=-0.48f; GLfloat radius20 =0.015f; //Halogen lamp circle in road of right side


    int i;
	int triangleamount = 15;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(77, 255, 255);

	glVertex2f(x14,y14);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x14 + (radius20 * cos(i *  twicePi / triangleamount)),
			    y14 + (radius20* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




    glBegin(GL_QUADS); // Halogen lamp is lighting in right side
    glColor3ub(255, 255, 0);
    glVertex2f(0.95f, -0.49f);
    glVertex2f(0.80f, -1.0f);//
    glVertex2f(0.97f, -1.0f);//
    glVertex2f(0.97f, -0.49f);

    glEnd();





     GLfloat x15=-0.96f; GLfloat y15=-0.48f; GLfloat radius21 =0.015f; //Halogen lamp circle in road of left side

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(77, 255, 255);

	glVertex2f(x15,y15);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x15 + (radius21 * cos(i *  twicePi / triangleamount)),
			    y15 + (radius21* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();


	glBegin(GL_QUADS); // Halogen lamp is lighting in left side
    glColor3ub(255, 255, 0);
    glVertex2f(-0.95f, -0.49f);
    glVertex2f(-0.80f, -1.0f);//
    glVertex2f(-0.97f, -1.0f);//
    glVertex2f(-0.97f, -0.49f);

    glEnd();




   glPushMatrix();
   glTranslatef(position4,0,0);


    glBegin(GL_QUADS); // big track
     glColor3ub(102, 153, 204);
    glVertex2f(-0.74f, -0.6f);
    glVertex2f(-0.74f, -0.7f);
    glVertex2f(-0.97f, -0.7f);
    glVertex2f(-0.97f, -0.6f);

    glEnd();

    glBegin(GL_QUADS); // big track
	glColor3ub(255, 255, 128);
    glVertex2f(-0.76f, -0.5f);
	glVertex2f(-0.74f, -0.6f);
    glVertex2f(-0.82f, -0.6f);
    glVertex2f(-0.82f, -0.5f);

    glEnd();

     glBegin(GL_QUADS); // small 2nd 1st window
      glColor3ub(191, 191, 191);
     glVertex2f(-0.77f, -0.53f);
     glVertex2f(-0.77f, -0.58f);
     glVertex2f(-0.80f, -0.58f);
     glVertex2f(-0.80f, -0.53f);

    glEnd();

    GLfloat x12=-0.92f; GLfloat y12=-0.72f; GLfloat radius18 =0.04f;// While for big track

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x12,y12);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x12 + (radius18 * cos(i *  twicePi / triangleamount)),
			    y12 + (radius18* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x13=-0.78f; GLfloat y13=-0.72f; GLfloat radius19 =0.04f;  // While for big track

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x13,y13);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x13 + (radius19 * cos(i *  twicePi / triangleamount)),
			    y13 + (radius19* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

glPopMatrix();






    glLineWidth(0.5);
	// Draw a Red 1x1 Square centered at origin
     glTranslatef(0.0f, 0.0f, 0.0f);
    glScalef(0.9, 0.9, 0);
    glPushMatrix();
    glTranslatef(position5,position5,0);

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, 0.9f);
	glVertex2f(-1.0f, 0.8f);
	glEnd();

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, 0.7f);
	glVertex2f(-1.0f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, 0.5f);
	glVertex2f(-1.0f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, 0.3f);
	glVertex2f(-1.0f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, 0.1f);
	glVertex2f(-1.0f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, -0.1f);
	glVertex2f(-1.0f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, -0.3f);
	glVertex2f(-1.0f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, -0.5);
	glVertex2f(-1.0f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, -0.7);
	glVertex2f(-1.0f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, 0.9f);
	glVertex2f(-0.9f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, 0.7f);
	glVertex2f(-0.9f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, 0.5f);
	glVertex2f(-0.9f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, 0.3f);
	glVertex2f(-0.9f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, 0.1f);
	glVertex2f(-0.9f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, -0.1f);
	glVertex2f(-0.9f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, -0.3f);
	glVertex2f(-0.9f, -0.4f);
	glEnd();


        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, -0.5f);
	glVertex2f(-0.9f, -0.6f);
	glEnd();


        glBegin(GL_LINES); //rain
 	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, -0.7f);
	glVertex2f(-0.9f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, 0.9f);
	glVertex2f(-0.8, 0.8f);
	glEnd();

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, 0.7f);
	glVertex2f(-0.8, 0.6f);
	glEnd();

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, 0.5f);
	glVertex2f(-0.8, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, 0.3f);
	glVertex2f(-0.8, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, 0.1f);
	glVertex2f(-0.8, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.8, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, -0.3f);
	glVertex2f(-0.8, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, -0.5f);
	glVertex2f(-0.8, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, -0.7f);
	glVertex2f(-0.8, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, 0.9f);
	glVertex2f(-0.7f, 0.8f);
	glEnd();

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, 0.7f);
	glVertex2f(-0.7f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, 0.5f);
	glVertex2f(-0.7f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, 0.3f);
	glVertex2f(-0.7f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, 0.1f);
	glVertex2f(-0.7f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, -0.1f);
	glVertex2f(-0.7f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, -0.3f);
	glVertex2f(-0.7f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, -0.5f);
	glVertex2f(-0.7f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, -0.7f);
	glVertex2f(-0.7f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, 0.9f);
	glVertex2f(-0.6f, 0.8f);
	glEnd();

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, 0.7f);
	glVertex2f(-0.6f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, 0.5f);
	glVertex2f(-0.6f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, 0.3f);
	glVertex2f(-0.6f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, 0.1f);
	glVertex2f(-0.6f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, -0.1f);
	glVertex2f(-0.6f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, -0.3f);
	glVertex2f(-0.6f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, -0.5f);
	glVertex2f(-0.6f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, -0.7f);
	glVertex2f(-0.6f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45f, 0.9f);
	glVertex2f(-0.5f, 0.8f);
	glEnd();

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45f, 0.7f);
	glVertex2f(-0.5f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45f, 0.5f);
	glVertex2f(-0.5f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45, 0.3f);
	glVertex2f(-0.5f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45f, 0.1f);
	glVertex2f(-0.5f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.5f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45f, -0.3f);
	glVertex2f(-0.5f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45f, -0.5f);
	glVertex2f(-0.5f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45f, -0.7f);
	glVertex2f(-0.5f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, 0.9f);
	glVertex2f(-0.4f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, 0.7f);
	glVertex2f(-0.4f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, 0.5f);
	glVertex2f(-0.4f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, 0.3f);
	glVertex2f(-0.4f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, 0.1f);
	glVertex2f(-0.4f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, -0.1f);
	glVertex2f(-0.4f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, -0.3f);
	glVertex2f(-0.4f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, -0.5f);
	glVertex2f(-0.4f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, -0.7f);
	glVertex2f(-0.4f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, 0.9f);
	glVertex2f(-0.3f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, 0.7f);
	glVertex2f(-0.3f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, 0.5f);
	glVertex2f(-0.3f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, 0.3f);
	glVertex2f(-0.3f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, 0.1);
	glVertex2f(-0.3f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, -0.1f);
	glVertex2f(-0.3f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, -0.3f);
	glVertex2f(-0.3f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, -0.5f);
	glVertex2f(-0.3f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, -0.7f);
	glVertex2f(-0.3f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, 0.9f);
	glVertex2f(-0.2f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, 0.7f);
	glVertex2f(-0.2f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, 0.5f);
	glVertex2f(-0.2f, 0.4f);
	glEnd();

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, 0.3f);
	glVertex2f(-0.2f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, 0.1f);
	glVertex2f(-0.2f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, -0.1f);
	glVertex2f(-0.2f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, -0.3);
	glVertex2f(-0.2f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, -0.5);
	glVertex2f(-0.2f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, -0.7f);
	glVertex2f(-0.2f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, 0.9f);
	glVertex2f(-0.1f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, 0.7f);
	glVertex2f(-0.1f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, 0.5f);
	glVertex2f(-0.1f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, 0.3f);
	glVertex2f(-0.1f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, 0.1f);
	glVertex2f(-0.1f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, -0.1f);
	glVertex2f(-0.1f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, -0.3f);
	glVertex2f(-0.1f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, -0.5);
	glVertex2f(-0.1f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, -0.7f);
	glVertex2f(-0.1f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, 0.9);
	glVertex2f(0.05f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, 0.7f);
	glVertex2f(0.05f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, 0.5f);
	glVertex2f(0.05f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, 0.3f);
	glVertex2f(0.05f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, 0.1f);
	glVertex2f(0.05f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, -0.1f);
	glVertex2f(0.05f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, -0.3f);
	glVertex2f(0.05f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, -0.5f);
	glVertex2f(0.05f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, -0.7f);
	glVertex2f(0.05f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, 0.9f);
	glVertex2f(0.15f, 0.8f);
	glEnd();

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, 0.7f);
	glVertex2f(0.15f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, 0.5f);
	glVertex2f(0.15f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, 0.3f);
	glVertex2f(0.15f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, 0.1f);
	glVertex2f(0.15f, 0.0);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.15f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, -0.3f);
	glVertex2f(0.15f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, -0.5f);
	glVertex2f(0.15f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, -0.7f);
	glVertex2f(0.15f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, 0.9f);
	glVertex2f(0.25f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, 0.7f);
	glVertex2f(0.25f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, 0.5f);
	glVertex2f(0.25f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, 0.3f);
	glVertex2f(0.25f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, 0.1f);
	glVertex2f(0.25f, 0.0);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, -0.1f);
	glVertex2f(0.25f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, -0.3f);
	glVertex2f(0.25f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, -0.5f);
	glVertex2f(0.25f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, -0.7f);
	glVertex2f(0.25f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, 0.9f);
	glVertex2f(0.35f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, 0.7f);
	glVertex2f(0.35f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, 0.5f);
	glVertex2f(0.35f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, 0.3f);
	glVertex2f(0.35f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, 0.1f);
	glVertex2f(0.35f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.35f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, -0.3f);
	glVertex2f(0.35f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, -0.5);
	glVertex2f(0.35f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, -0.7);
	glVertex2f(0.35f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, 0.9f);
	glVertex2f(0.45f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, 0.7f);
	glVertex2f(0.45f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(0.45f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, 0.3f);
	glVertex2f(0.45f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, 0.1f);
	glVertex2f(0.45f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, -0.1f);
	glVertex2f(0.45f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, -0.3f);
	glVertex2f(0.45f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, -0.5f);
	glVertex2f(0.45f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, -0.7f);
	glVertex2f(0.45f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, 0.9f);
	glVertex2f(0.55f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, 0.7f);
	glVertex2f(0.55f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, 0.5f);
	glVertex2f(0.55f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, 0.3f);
	glVertex2f(0.55f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, 0.1f);
	glVertex2f(0.55f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, -0.1f);
	glVertex2f(0.55f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, -0.3f);
	glVertex2f(0.55f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, -0.5f);
	glVertex2f(0.55f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, -0.7f);
	glVertex2f(0.55f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, 0.9);
	glVertex2f(0.65f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, 0.7f);
	glVertex2f(0.65f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, 0.5f);
	glVertex2f(0.65f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, 0.3);
	glVertex2f(0.65f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, 0.1f);
	glVertex2f(0.65f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.65f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, -0.3f);
	glVertex2f(0.65f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.65f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, -0.7f);
	glVertex2f(0.65f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, 0.9f);
	glVertex2f(0.75f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, 0.7f);
	glVertex2f(0.75f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, 0.5f);
	glVertex2f(0.75f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, 0.3f);
	glVertex2f(0.75f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, 0.1f);
	glVertex2f(0.75f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, -0.1f);
	glVertex2f(0.75f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, -0.3f);
	glVertex2f(0.75f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, -0.5f);
	glVertex2f(0.75f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, -0.7f);
	glVertex2f(0.75f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, 0.9f);
	glVertex2f(0.85f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, 0.7f);
	glVertex2f(0.85f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, 0.5f);
	glVertex2f(0.85f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, 0.3f);
	glVertex2f(0.85f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, 0.1f);
	glVertex2f(0.85f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, -0.1f);
	glVertex2f(0.85f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, -0.3f);
	glVertex2f(0.85f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, -0.5f);
	glVertex2f(0.85f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, -0.7f);
	glVertex2f(0.85f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, 0.9f);
	glVertex2f(0.95f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, 0.7f);
	glVertex2f(0.95f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, 0.5f);
	glVertex2f(0.95f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(0.95f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.95f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, -0.1f);
	glVertex2f(0.95f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(0.95f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, -0.5f);
	glVertex2f(0.95f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, -0.7f);
	glVertex2f(0.95f, -0.8f);
	glEnd();

	glPopMatrix();
    glLoadIdentity();


glutTimerFunc(5000, springday_demo,0);


	glFlush();
}


void rainynight_demo(int a)
{

glutDisplayFunc(rainynight);

}

void rainydayupdate(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, rainydayupdate, 0);
}


void rainydayupdate1(int value) {

    if(position1 >1.0)
        position1 = -1.0f;

    position1 += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(150, rainydayupdate1, 0);
}

void rainydayupdate3(int value) {

    if(position3 <-1.0)
        position3 = 1.0f;

    position3 -= speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(400, rainydayupdate3, 0);
}


void rainydayupdate5(int value) {

    if(position5 <-1.0)
        position5 = 1.0f;

    position5 -= speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, rainydayupdate5, 0);
}






void rainyday() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


	 glBegin(GL_QUADS); // SKY in rainy
    glColor3ub(217, 217, 217);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();



    GLfloat x6=-0.92f; GLfloat y6=0.92f; GLfloat radius12 =.06f; // Circle for Sun
	int i;
	int triangleamount = 15; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 133, 51);

	glVertex2f(x6,y6);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x6 + (radius12 * cos(i *  twicePi / triangleamount)),
			    y6 + (radius12* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();


     glPushMatrix();
   glTranslatef(position3,0,0);




   GLfloat x1=0.64f; GLfloat y1=0.74f; GLfloat radius4 =.06f; // Circle for Cloud
	//int i;
	 triangleamount = 15; //# of triangles used to draw circle

	//GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);

	glVertex2f(x1,y1);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x1 + (radius4 * cos(i *  twicePi / triangleamount)),
			    y1 + (radius4* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat p1=0.68f; GLfloat q1=0.8f; GLfloat radius5 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);

	glVertex2f(p1,q1);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    p1 + (radius5 * cos(i *  twicePi / triangleamount)),
			    q1 + (radius5* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat a1=0.6f; GLfloat b1=0.84f; GLfloat radius6 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);

	glVertex2f(a1,b1);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    a1 + (radius6 * cos(i *  twicePi / triangleamount)),
			    b1 + (radius6* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat m1=0.56f; GLfloat n1=0.78f; GLfloat radius7 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);

	glVertex2f(m1,n1);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    m1+ (radius7 * cos(i *  twicePi / triangleamount)),
			    n1 + (radius7* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();


   glPopMatrix();


   glLoadIdentity();

    glPushMatrix();
   glTranslatef(position3,0,0);

  glTranslatef(0.37,0.31,0);
  glScalef(.7,.7,0);

  GLfloat x2=0.64f; GLfloat y2=0.74f; GLfloat radius8 =.06f; // Circle for Cloud
//	int i;
	//int triangleamount = 15; //# of triangles used to draw circle

//	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);

	glVertex2f(x1,y1);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x1 + (radius4 * cos(i *  twicePi / triangleamount)),
			    y1 + (radius4* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x3=0.68f; GLfloat y3=0.8f; GLfloat radius9 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);

	glVertex2f(x3,y3);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x3 + (radius5 * cos(i *  twicePi / triangleamount)),
			    y3 + (radius5* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x4=0.6f; GLfloat y4=0.84f; GLfloat radius10 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);

	glVertex2f(x4,y4);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x4 + (radius6 * cos(i *  twicePi / triangleamount)),
			    y4 + (radius6* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x5=0.56f; GLfloat y5=0.78f; GLfloat radius11 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);

	glVertex2f(x5,y5);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x5+ (radius7 * cos(i *  twicePi / triangleamount)),
			    y5 + (radius7* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



	 glLoadIdentity();



	  glPushMatrix();
   glTranslatef(position3,0,0);


    glTranslatef(-1.0,0.20,0);
    glScalef(.9,.9,0);





   GLfloat a41=0.64f; GLfloat b41=0.74f; GLfloat radius55 =.06f; // Circle for Cloud
	//int i;
	triangleamount = 15; //# of triangles used to draw circle

	//GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);

	glVertex2f(a41,b41);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    a41 + (radius55 * cos(i *  twicePi / triangleamount)),
			    b41 + (radius55* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat a42=0.68f; GLfloat b42=0.8f; GLfloat radius56 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);

	glVertex2f(a42,b42);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    a42 + (radius56 * cos(i *  twicePi / triangleamount)),
			    b42 + (radius56* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat a43=0.58f; GLfloat b43=0.82f; GLfloat radius57 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);

	glVertex2f(a43,b43);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    a43 + (radius57 * cos(i *  twicePi / triangleamount)),
			    b43 + (radius57* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat  a44=0.54f; GLfloat b44=0.76f; GLfloat radius58 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);

	glVertex2f(a44,b44);

		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    a44+ (radius58 * cos(i *  twicePi / triangleamount)),
			    b44 + (radius58* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




      glLoadIdentity();



      glPushMatrix();
   glTranslatef(position3,0,0);






    //glLoadIdentity();

  //glTranslatef(-0.97,0.31,0);
   //glScalef(.7,.7,0);

  GLfloat a45=-0.74f; GLfloat b45=0.87f; GLfloat radius59 =.06f; // Circle for Cloud
//	int i;
	//int triangleamount = 15; //# of triangles used to draw circle

//	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);

	glVertex2f(a45,b45);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    a45 + (radius59 * cos(i *  twicePi / triangleamount)),
			    b45 + (radius59* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat a46=-0.68f; GLfloat b46=0.8f; GLfloat radius60 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);

	glVertex2f(a46,b46);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    a46 + (radius60 * cos(i *  twicePi / triangleamount)),
			    b46 + (radius60* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat a47=-0.62f; GLfloat b47=0.84f; GLfloat radius61 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);

	glVertex2f(a47,b47);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    a47 + (radius61 * cos(i *  twicePi / triangleamount)),
			    b47 + (radius61* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat a48=-0.65f; GLfloat b48=0.90f; GLfloat radius62 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);

	glVertex2f(a48,b48);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    a48+ (radius62 * cos(i *  twicePi / triangleamount)),
			    b48 + (radius62* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

  glPopMatrix();


   glLoadIdentity();




	//glPopMatrix();

	/*GLfloat x7=0.95f; GLfloat y7=0.92f; GLfloat radius13 =0.06f;  // Circle for moon

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(x7,y7);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x7 + (radius13 * cos(i *  twicePi / triangleamount)),
			    y7 + (radius13* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();*/


glBegin(GL_POLYGON); // polygon of lalbag

	glColor3ub(255, 153, 102);

    glVertex2f(-0.2f, 0.60f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(0.40f, 0.0f);
	glVertex2f(0.40f, 0.60f);
	glVertex2f(0.20f, 0.6f);
	glVertex2f(0.20f, 0.7f);
	glVertex2f(-0.20f, 0.7f);
	 glEnd();

	glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(255, 153, 102);

    glVertex2f(-0.40f, 0.60f);
    glVertex2f(-0.40f, 0.0f);
    glVertex2f(-0.20f, 0.0f);
    glVertex2f(-0.20f, 0.60f);

    glEnd();



    glLoadIdentity();

    glTranslatef(0.355,0.32,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj in right shift

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);


    glEnd();

    glLoadIdentity();


    glTranslatef(-0.355,0.32,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj in right shift

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);


    glEnd();

   glLoadIdentity();

   /* glLineWidth(4.5);

    glBegin(GL_LINES);// 4rth gumbuj line

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.39f, 0.7f);
	glVertex2f(0.39f, 0.6f);

    glEnd();


    glLoadIdentity();
    glTranslatef(-0.7,0.00,0);

    glLineWidth(4.5);

    glBegin(GL_LINES);//2nd gumbuj line

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.38f, 0.7f);
	glVertex2f(0.38f, 0.6f);

    glEnd();*/

  // glLoadIdentity();



    glBegin(GL_QUADS);// quard for lalbag right gumbuj

    glColor3ub(204, 102, 0);

    glVertex2f(0.32f, 0.6f);
    glVertex2f(0.32f, 0.70f);
    glVertex2f(0.39f, 0.70f);
    glVertex2f(0.39f, 0.6f);

    glEnd();



     glLoadIdentity();

   glTranslatef(-0.71,0.0,0);

    glBegin(GL_QUADS);// quard for lalbag right gumbuj

    glColor3ub(204, 102, 0);

    glVertex2f(0.32f, 0.6f);
    glVertex2f(0.32f, 0.70f);
    glVertex2f(0.39f, 0.70f);
    glVertex2f(0.39f, 0.6f);

    glEnd();




      glLoadIdentity();



   glBegin(GL_POLYGON); // polygon of lalbag main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();


    glTranslatef(-0.335,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of left door of lalbag

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();

      glLoadIdentity();


    glTranslatef(0.335,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of left door of lalbag

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



    glTranslatef(0.0,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of middle black door of lalbag

	glColor3ub(77, 77, 77);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();

    glTranslatef(-0.337,0.0,0);
    glScalef(.5,.5,0);


    glBegin(GL_POLYGON); // polygon of left black door of lalbag

	glColor3ub(77, 77, 77);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



     glTranslatef(0.337,0.0,0);
    glScalef(.5,.5,0);


    glBegin(GL_POLYGON); // polygon of right black door of lalbag

	glColor3ub(77, 77, 77);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



glBegin(GL_QUADS); // basline of lalbag red line

    glColor3ub(140, 140, 140);

    glVertex2f(-0.44f, 0.0f);
    glVertex2f(-0.44f, -0.06f);
    glVertex2f(0.44f, -0.06f);
    glVertex2f(0.44f, 0.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(255, 153, 102);  // 1st quard of diwan i am

    glVertex2f(0.5f, 0.3f);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.9f, 0.0f);
    glVertex2f(0.9f, 0.3f);

    glEnd();


     glBegin(GL_QUADS);
    glColor3ub(255, 153, 102);  // 2nd quard of diwan i am

    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.8f, 0.3f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.6f, 0.5f);

    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 153, 102);  // 3rd quard of diwan i am

    glVertex2f(0.56f, 0.5f);
    glVertex2f(0.84f, 0.5f);
    glVertex2f(0.84f, 0.52f);
    glVertex2f(0.56f, 0.52f);

    glEnd();

     glBegin(GL_POLYGON); // left gumbuj of diwan i am
	 glColor3ub(204, 102, 0);

     glVertex2f(0.56f, 0.52f);
    glVertex2f(0.58f, 0.52f);
    glVertex2f(0.6f, 0.54f);
    glVertex2f(0.62f, 0.56f);
    glVertex2f(0.64f, 0.58f);
    glVertex2f(0.66f, 0.56f);
    glVertex2f(0.68f, 0.54f);
    glVertex2f(0.7f, 0.52f);
     glVertex2f(0.72f,0.52f);

    glEnd();

    glBegin(GL_POLYGON); // middle gumbuj of diwan i am
    glColor3ub(204, 102, 0);

    glVertex2f(0.72f, 0.52f);
    glVertex2f(0.74f, 0.54f);
    glVertex2f(0.76f, 0.56f);
    glVertex2f(0.78f, 0.58f);
    glVertex2f(0.8f, 0.56f);
    glVertex2f(0.82f, 0.54f);
    glVertex2f(0.84f, 0.52f);

    glEnd();

    glBegin(GL_POLYGON); // right gumbuj of diwan i am
    glColor3ub(204, 102, 0);

    glVertex2f(0.64f, 0.52f);
    glVertex2f(0.66f, 0.56f);
    glVertex2f(0.68f, 0.6f);
    glVertex2f(0.72f, 0.6f);
    glVertex2f(0.74f, 0.6f);
    glVertex2f(0.76f, 0.56f);
    glVertex2f(0.78f, 0.52f);

    glEnd();

    glBegin(GL_QUADS); // basline of diwan i am  red line
    glColor3ub(140, 140, 140);

    glVertex2f(0.48f, 0.0f);
    glVertex2f(0.48f, -0.06f);
    glVertex2f(0.92f, -0.06f);
    glVertex2f(0.92f, 0.0f);

    glEnd();


     glLoadIdentity();

    glTranslatef(0.70,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();


   glLoadIdentity();

    glTranslatef(0.75,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am  door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

    glLoadIdentity();

    glTranslatef(0.65,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

     glLoadIdentity();

    glTranslatef(0.65,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();


     glLoadIdentity();

    glTranslatef(0.75,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();


    glLoadIdentity();

    glTranslatef(0.85,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();



    glLoadIdentity();

    glTranslatef(0.55,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();









    glBegin(GL_QUADS); // quard of mosque
    glColor3ub(255, 153, 102);

    glVertex2f(-0.56f, 0.0f);
    glVertex2f(-0.76f, 0.0f);
    glVertex2f(-0.76f, 0.4f);
    glVertex2f(-0.56f, 0.4f);

    glEnd();

    glBegin(GL_QUADS); // quard of mosque
    glColor3ub(255, 153, 102);

    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.62f, 0.4f);
    glVertex2f(-0.62f, 0.48f);
    glVertex2f(-0.7f, 0.48f);
    glEnd();

     glBegin(GL_QUADS); // basline of mosque red line

    glColor3ub(140, 140, 140);

    glVertex2f(-0.52f, 0.0f);
    glVertex2f(-0.52f, -0.06f);
    glVertex2f(-0.8f, -0.06f);
    glVertex2f(-0.8f, 0.0f);

    glEnd();

 glLoadIdentity();


  glTranslatef(-0.59,0.225,0);
    glScalef(.25,.25,0);

    glBegin(GL_POLYGON); // polygon of mosque right gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

 glLoadIdentity();

 glLoadIdentity();


  glTranslatef(-0.66,0.195,0);
    glScalef(.4,.4,0);

    glBegin(GL_POLYGON); // polygon of mosque middle gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

 glLoadIdentity();

 glTranslatef(-0.73,0.225,0);
    glScalef(.25,.25,0);

    glBegin(GL_POLYGON); // polygon of mosque left gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
    glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

    glLoadIdentity();

    glTranslatef(-0.66,0.0,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of mosque main door

	glColor3ub(255, 230, 242);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();

   glLoadIdentity();

    glTranslatef(0.70,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am  door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();


   glTranslatef(-0.73,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of mosque right door

	glColor3ub(255, 230, 242);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();

    glTranslatef(-0.59,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of mosque left door

	glColor3ub(255, 230, 242);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

    glBegin(GL_QUADS); // Waiking place for foura
    glColor3ub(230, 230, 230);
    glVertex2f(-0.2f, -0.06f);
    glVertex2f(-0.2f, -0.46f);
    glVertex2f(0.2f, -0.46f);
    glVertex2f(0.2f, -0.06f);

    glEnd();

     glBegin(GL_QUADS); // Waiking field  for people and tree in left side
    glColor3f(0, 1, 0);
    glVertex2f(-0.20f, -0.06f);
    glVertex2f(-0.20f, -0.46f);
    glVertex2f(-1.0f, -0.46f);
    glVertex2f(-1.0f, -0.06f);

    glEnd();

    glBegin(GL_QUADS); // Waiking field  for people and tree in right side
    glColor3f(0, 1, 0);
    glVertex2f(0.20f, -0.06f);
    glVertex2f(0.20f, -0.46f);
    glVertex2f(1.0f, -0.46f);
    glVertex2f(1.0f, -0.06f);

    glEnd();

    glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

   glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

   glLoadIdentity();

    glTranslatef(0.25,-0.0,0);
    glScalef(.99,.99,0);

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

    glLoadIdentity();


    glTranslatef(-0.25,-0.0,0);
    glScalef(.99,.99,0);

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.25,-0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(0.25,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.15,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.70f, -0.28f);
    glVertex2f(-0.70f, -0.46f);
    glVertex2f(-0.67f, -0.46f);
    glVertex2f(-0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.32f);
	glVertex2f(-0.72f, -0.32f);
    glVertex2f(-0.6851f, -0.20f);
	glEnd();

	/*glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.38f);
	glVertex2f(-0.72f, -0.38f);
    glVertex2f(-0.6851f, -0.19f);
	glEnd();*/

   glLoadIdentity();

   glTranslatef(0.11,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.70f, -0.28f);
    glVertex2f(-0.70f, -0.46f);
    glVertex2f(-0.67f, -0.46f);
    glVertex2f(-0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.32f);
	glVertex2f(-0.72f, -0.32f);
    glVertex2f(-0.6851f, -0.20f);
	glEnd();

  glLoadIdentity();

  glTranslatef(0.15,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.70f, -0.28f);
    glVertex2f(0.70f, -0.46f);
    glVertex2f(0.67f, -0.46f);
    glVertex2f(0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.32f);
	glVertex2f(0.72f, -0.32f);
    glVertex2f(0.6851f, -0.20f);
	glEnd();

	/*glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.38f);
	glVertex2f(-0.72f, -0.38f);
    glVertex2f(-0.6851f, -0.19f);
	glEnd();*/

   glLoadIdentity();

   glTranslatef(-0.11,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.70f, -0.28f);
    glVertex2f(0.70f, -0.46f);
    glVertex2f(0.67f, -0.46f);
    glVertex2f(0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.32f);
	glVertex2f(0.72f, -0.32f);
    glVertex2f(0.6851f, -0.20f);
	glEnd();

  glLoadIdentity();

    glBegin(GL_QUADS); //square water place for foura
    glColor3ub(102, 204, 255);
    glVertex2f(-0.06f, -0.08f);
    glVertex2f(-0.06f, -0.25f);
    glVertex2f(0.06f, -0.25f);
    glVertex2f(0.06f, -0.08f);

    glEnd();



   glBegin(GL_TRIANGLES); // Triangle of 1st foura
	glColor3f(0,0,0);

    glVertex2f(0.0f, -0.12f);
	glVertex2f(-0.02f, -0.18f);
    glVertex2f(0.02f, -0.18f);
	glEnd();








   glLineWidth(1.5);


	glBegin(GL_LINES);  //  Water of foura
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.13f);
    glVertex2f(-0.04f, -0.14f);

    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.12f);
    glVertex2f(-0.02f, -0.13f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.05f, -0.15f);
    glVertex2f(-0.05f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.05f, -0.19f);
    glVertex2f(-0.05f, -0.21f);

	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.15f);
    glVertex2f(-0.03f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.19f);
    glVertex2f(-0.03f, -0.21f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.13f);
    glVertex2f(0.04f, -0.14f);

    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f,-0.12f);
    glVertex2f(0.02f, -0.13f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, -0.15f);
    glVertex2f(0.05f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, -0.19f);
    glVertex2f(0.05f, -0.21f);

	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.15f);
    glVertex2f(0.03f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.19f);
    glVertex2f(0.03f, -0.21f);


	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.04f, -0.15f);
    glVertex2f(0.04f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.04f, -0.15f);
    glVertex2f(-0.04f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.04f, -0.19f);
    glVertex2f(0.04f, -0.21f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.04f, -0.19f);
    glVertex2f(-0.04f, -0.21f);

	glEnd();




   glBegin(GL_QUADS); // main gate left side
    glColor3ub(115, 115, 115);
    glVertex2f(-0.14f, -0.34f);//
    glVertex2f(-0.20f, -0.46f);//
    glVertex2f(-0.04f, -0.46f);
    glVertex2f(-0.04f, -0.34f);

    glEnd();

    glBegin(GL_QUADS); //main gate right side
    glColor3ub(115, 115, 115);
    glVertex2f(0.14f, -0.34f);
    glVertex2f(0.20f, -0.46f);
    glVertex2f(0.04f, -0.46f);
    glVertex2f(0.04f, -0.34f);

    glEnd();

    glBegin(GL_QUADS); // Main Road
    glColor3f(0, 0, 0);
    glVertex2f(-1.0f, -0.46f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.46f);

    glEnd();

   glLineWidth(4.5);

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.00f, -0.78f);
	glVertex2f(-0.9f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.00f, -0.78f);
	glVertex2f(0.9f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.78f);
	glVertex2f(0.4f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.78f);
	glVertex2f(0.0f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.78f);
	glVertex2f(-0.4f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.78f);
	glVertex2f(-0.8f, -0.78f);

	glEnd();



    glBegin(GL_QUADS); // Halogen lamp stand in road of right side
    glColor3f(1, 1, 1);
    glVertex2f(0.98f, -0.46f);
    glVertex2f(0.98f, -1.0f);
    glVertex2f(0.99f, -1.0f);
    glVertex2f(0.99f, -0.46f);

    glEnd();


     GLfloat c14=0.96f; GLfloat d14=-0.48f; GLfloat radius84 =0.015f; //Halogen lamp circle in road of right side

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(77, 255, 255);

	glVertex2f(c14,d14);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    c14 + (radius84 * cos(i *  twicePi / triangleamount)),
			    d14 + (radius84* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




	GLfloat p15=-0.96f; GLfloat q15=-0.48f; GLfloat radius85 =0.015f; //Halogen lamp circle in road of left side

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(77, 255, 255);

	glVertex2f(p15,q15);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    p15 + (radius85 * cos(i *  twicePi / triangleamount)),
			    q15 + (radius85* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



    glBegin(GL_QUADS); // Halogen lamp in road of right side
    glColor3f(1, 1, 1);
    glVertex2f(0.98f, -0.46f);
    glVertex2f(0.98f, -0.48f);
    glVertex2f(0.94f, -0.48f);
    glVertex2f(0.94f, -0.46f);

    glEnd();

    glBegin(GL_QUADS); // Halogen lamp stand in road of left side
    glColor3f(1, 1, 1);
    glVertex2f(-0.98f, -0.46f);
    glVertex2f(-0.98f, -1.0f);
    glVertex2f(-0.99f, -1.0f);
    glVertex2f(-0.99f, -0.46f);

    glEnd();

    glBegin(GL_QUADS); // Halogen lamp in road of left side
    glColor3f(1, 1, 1);
    glVertex2f(-0.98f, -0.46f);
    glVertex2f(-0.98f, -0.48f);
    glVertex2f(-0.94f, -0.48f);
    glVertex2f(-0.94f, -0.46f);

    glEnd();

     glPushMatrix();
   glTranslatef(position,0,0);

   glBegin(GL_QUADS); // Car in right side
	glColor3ub(0, 128, 128);
    glVertex2f(0.62f, -0.5f);//
	glVertex2f(0.57f, -0.60f);
    glVertex2f(0.83f, -0.60f);//

    glVertex2f(0.78f, -0.5f);//

    glEnd();

     glBegin(GL_QUADS);// Car in right side
     glColor3ub(0, 77, 77);
    glVertex2f(0.55f, -0.60f);
    glVertex2f(0.55f, -0.7f);
    glVertex2f(0.85f, -0.7f);
    glVertex2f(0.85f, -0.60f);

    glEnd();


  GLfloat x8=0.8f; GLfloat y8=-0.72f; GLfloat radius14 =0.04f; // Circle for while of big car

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x8,y8);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x8 + (radius14 * cos(i *  twicePi / triangleamount)),
			    y8 + (radius14* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x9=0.6f; GLfloat y9=-0.72f; GLfloat radius15 =0.04f; // Circle for while of big car

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x9,y9);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x9 + (radius15 * cos(i *  twicePi / triangleamount)),
			    y9 + (radius15* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

    glBegin(GL_QUADS); // 1st window
      glColor3ub(191, 191, 191);
     glVertex2f(0.62f, -0.53f);
     glVertex2f(0.62f, -0.58f);
     glVertex2f(0.65f, -0.58f);
     glVertex2f(0.65f, -0.53f);

    glEnd();

    glBegin(GL_QUADS); // 2nd window
    glColor3ub(191, 191, 191);
    glVertex2f(0.76f, -0.53f);
    glVertex2f(0.76f, -0.58f);
    glVertex2f(0.79f, -0.58f);
    glVertex2f(0.79f, -0.53f);

    glEnd();

     glLineWidth(1.5);


     glBegin(GL_LINES);// car line

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.7f, -0.6f);

      glEnd();

   glPopMatrix();

       glLoadIdentity();

    glPushMatrix();
   glTranslatef(position1,0,0);

    glTranslatef(-1.0,-0.4,0);
    glScalef(.8,.8,0);


       glBegin(GL_QUADS); // small 2nd Car in right side
	glColor3ub(102, 0, 0);
    glVertex2f(0.62f, -0.5f);//
	glVertex2f(0.57f, -0.60f);
    glVertex2f(0.83f, -0.60f);//

    glVertex2f(0.78f, -0.5f);//

    glEnd();

     glBegin(GL_QUADS);// small 2nd Car in right side
     glColor3ub(179, 0, 0);
    glVertex2f(0.55f, -0.60f);
    glVertex2f(0.55f, -0.7f);
    glVertex2f(0.85f, -0.7f);
    glVertex2f(0.85f, -0.60f);

    glEnd();


  GLfloat x10=0.8f; GLfloat y10=-0.72f; GLfloat radius16 =0.04f; // Circle for while of small car

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x10,y10);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x10 + (radius16 * cos(i *  twicePi / triangleamount)),
			    y10 + (radius16* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x11=0.6f; GLfloat y11=-0.72f; GLfloat radius17 =0.04f; //  Circle for while of small car

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x11,y11);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x11 + (radius17 * cos(i *  twicePi / triangleamount)),
			    y11 + (radius17* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

    glBegin(GL_QUADS); // small 2nd 1st window
      glColor3ub(191, 191, 191);
     glVertex2f(0.62f, -0.53f);
     glVertex2f(0.62f, -0.58f);
     glVertex2f(0.65f, -0.58f);
     glVertex2f(0.65f, -0.53f);

    glEnd();

    glBegin(GL_QUADS); //small 2nd 2nd window
    glColor3ub(191, 191, 191);
    glVertex2f(0.76f, -0.53f);
    glVertex2f(0.76f, -0.58f);
    glVertex2f(0.79f, -0.58f);
    glVertex2f(0.79f, -0.53f);

    glEnd();

     glLineWidth(1.5);


     glBegin(GL_LINES);//small 2nd car line

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.7f, -0.6f);

      glEnd();



   glLoadIdentity();
  glPopMatrix();



  glLineWidth(0.5);
	// Draw a Red 1x1 Square centered at origin
  glTranslatef(0.0f, 0.0f, 0.0f);
    glScalef(0.9, 0.9, 0);
    glPushMatrix();
    glTranslatef(position5,position5,0);





     glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, 0.9f);
	glVertex2f(-1.0f, 0.8f);
	glEnd();

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, 0.7f);
	glVertex2f(-1.0f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, 0.5f);
	glVertex2f(-1.0f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, 0.3f);
	glVertex2f(-1.0f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, 0.1f);
	glVertex2f(-1.0f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, -0.1f);
	glVertex2f(-1.0f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, -0.3f);
	glVertex2f(-1.0f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, -0.5);
	glVertex2f(-1.0f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.95f, -0.7);
	glVertex2f(-1.0f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, 0.9f);
	glVertex2f(-0.9f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, 0.7f);
	glVertex2f(-0.9f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, 0.5f);
	glVertex2f(-0.9f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, 0.3f);
	glVertex2f(-0.9f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, 0.1f);
	glVertex2f(-0.9f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, -0.1f);
	glVertex2f(-0.9f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, -0.3f);
	glVertex2f(-0.9f, -0.4f);
	glEnd();


        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, -0.5f);
	glVertex2f(-0.9f, -0.6f);
	glEnd();


        glBegin(GL_LINES); //rain
 	glColor3ub(255, 255, 255);
	glVertex2f(-0.85f, -0.7f);
	glVertex2f(-0.9f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, 0.9f);
	glVertex2f(-0.8, 0.8f);
	glEnd();

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, 0.7f);
	glVertex2f(-0.8, 0.6f);
	glEnd();

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, 0.5f);
	glVertex2f(-0.8, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, 0.3f);
	glVertex2f(-0.8, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, 0.1f);
	glVertex2f(-0.8, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.8, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, -0.3f);
	glVertex2f(-0.8, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, -0.5f);
	glVertex2f(-0.8, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.75f, -0.7f);
	glVertex2f(-0.8, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, 0.9f);
	glVertex2f(-0.7f, 0.8f);
	glEnd();

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, 0.7f);
	glVertex2f(-0.7f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, 0.5f);
	glVertex2f(-0.7f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, 0.3f);
	glVertex2f(-0.7f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, 0.1f);
	glVertex2f(-0.7f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, -0.1f);
	glVertex2f(-0.7f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, -0.3f);
	glVertex2f(-0.7f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, -0.5f);
	glVertex2f(-0.7f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.65f, -0.7f);
	glVertex2f(-0.7f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, 0.9f);
	glVertex2f(-0.6f, 0.8f);
	glEnd();

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, 0.7f);
	glVertex2f(-0.6f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, 0.5f);
	glVertex2f(-0.6f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, 0.3f);
	glVertex2f(-0.6f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, 0.1f);
	glVertex2f(-0.6f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, -0.1f);
	glVertex2f(-0.6f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, -0.3f);
	glVertex2f(-0.6f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, -0.5f);
	glVertex2f(-0.6f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.55f, -0.7f);
	glVertex2f(-0.6f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45f, 0.9f);
	glVertex2f(-0.5f, 0.8f);
	glEnd();

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45f, 0.7f);
	glVertex2f(-0.5f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45f, 0.5f);
	glVertex2f(-0.5f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45, 0.3f);
	glVertex2f(-0.5f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45f, 0.1f);
	glVertex2f(-0.5f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.5f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45f, -0.3f);
	glVertex2f(-0.5f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45f, -0.5f);
	glVertex2f(-0.5f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.45f, -0.7f);
	glVertex2f(-0.5f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, 0.9f);
	glVertex2f(-0.4f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, 0.7f);
	glVertex2f(-0.4f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, 0.5f);
	glVertex2f(-0.4f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, 0.3f);
	glVertex2f(-0.4f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, 0.1f);
	glVertex2f(-0.4f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, -0.1f);
	glVertex2f(-0.4f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, -0.3f);
	glVertex2f(-0.4f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, -0.5f);
	glVertex2f(-0.4f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.35f, -0.7f);
	glVertex2f(-0.4f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, 0.9f);
	glVertex2f(-0.3f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, 0.7f);
	glVertex2f(-0.3f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, 0.5f);
	glVertex2f(-0.3f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, 0.3f);
	glVertex2f(-0.3f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, 0.1);
	glVertex2f(-0.3f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, -0.1f);
	glVertex2f(-0.3f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, -0.3f);
	glVertex2f(-0.3f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, -0.5f);
	glVertex2f(-0.3f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.25f, -0.7f);
	glVertex2f(-0.3f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, 0.9f);
	glVertex2f(-0.2f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, 0.7f);
	glVertex2f(-0.2f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, 0.5f);
	glVertex2f(-0.2f, 0.4f);
	glEnd();

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, 0.3f);
	glVertex2f(-0.2f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, 0.1f);
	glVertex2f(-0.2f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, -0.1f);
	glVertex2f(-0.2f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, -0.3);
	glVertex2f(-0.2f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, -0.5);
	glVertex2f(-0.2f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.15f, -0.7f);
	glVertex2f(-0.2f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, 0.9f);
	glVertex2f(-0.1f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, 0.7f);
	glVertex2f(-0.1f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, 0.5f);
	glVertex2f(-0.1f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, 0.3f);
	glVertex2f(-0.1f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, 0.1f);
	glVertex2f(-0.1f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, -0.1f);
	glVertex2f(-0.1f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, -0.3f);
	glVertex2f(-0.1f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, -0.5);
	glVertex2f(-0.1f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, -0.7f);
	glVertex2f(-0.1f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, 0.9);
	glVertex2f(0.05f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, 0.7f);
	glVertex2f(0.05f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, 0.5f);
	glVertex2f(0.05f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, 0.3f);
	glVertex2f(0.05f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, 0.1f);
	glVertex2f(0.05f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, -0.1f);
	glVertex2f(0.05f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, -0.3f);
	glVertex2f(0.05f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, -0.5f);
	glVertex2f(0.05f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.1f, -0.7f);
	glVertex2f(0.05f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, 0.9f);
	glVertex2f(0.15f, 0.8f);
	glEnd();

        glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, 0.7f);
	glVertex2f(0.15f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, 0.5f);
	glVertex2f(0.15f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, 0.3f);
	glVertex2f(0.15f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, 0.1f);
	glVertex2f(0.15f, 0.0);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.15f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, -0.3f);
	glVertex2f(0.15f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, -0.5f);
	glVertex2f(0.15f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, -0.7f);
	glVertex2f(0.15f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, 0.9f);
	glVertex2f(0.25f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, 0.7f);
	glVertex2f(0.25f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, 0.5f);
	glVertex2f(0.25f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, 0.3f);
	glVertex2f(0.25f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, 0.1f);
	glVertex2f(0.25f, 0.0);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, -0.1f);
	glVertex2f(0.25f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, -0.3f);
	glVertex2f(0.25f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, -0.5f);
	glVertex2f(0.25f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.3f, -0.7f);
	glVertex2f(0.25f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, 0.9f);
	glVertex2f(0.35f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, 0.7f);
	glVertex2f(0.35f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, 0.5f);
	glVertex2f(0.35f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, 0.3f);
	glVertex2f(0.35f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, 0.1f);
	glVertex2f(0.35f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.35f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, -0.3f);
	glVertex2f(0.35f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, -0.5);
	glVertex2f(0.35f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, -0.7);
	glVertex2f(0.35f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, 0.9f);
	glVertex2f(0.45f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, 0.7f);
	glVertex2f(0.45f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(0.45f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, 0.3f);
	glVertex2f(0.45f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, 0.1f);
	glVertex2f(0.45f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, -0.1f);
	glVertex2f(0.45f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, -0.3f);
	glVertex2f(0.45f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, -0.5f);
	glVertex2f(0.45f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.5f, -0.7f);
	glVertex2f(0.45f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, 0.9f);
	glVertex2f(0.55f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, 0.7f);
	glVertex2f(0.55f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, 0.5f);
	glVertex2f(0.55f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, 0.3f);
	glVertex2f(0.55f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, 0.1f);
	glVertex2f(0.55f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, -0.1f);
	glVertex2f(0.55f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, -0.3f);
	glVertex2f(0.55f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, -0.5f);
	glVertex2f(0.55f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.6f, -0.7f);
	glVertex2f(0.55f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, 0.9);
	glVertex2f(0.65f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, 0.7f);
	glVertex2f(0.65f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, 0.5f);
	glVertex2f(0.65f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, 0.3);
	glVertex2f(0.65f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, 0.1f);
	glVertex2f(0.65f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.65f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, -0.3f);
	glVertex2f(0.65f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.65f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.7f, -0.7f);
	glVertex2f(0.65f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, 0.9f);
	glVertex2f(0.75f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, 0.7f);
	glVertex2f(0.75f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, 0.5f);
	glVertex2f(0.75f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, 0.3f);
	glVertex2f(0.75f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, 0.1f);
	glVertex2f(0.75f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, -0.1f);
	glVertex2f(0.75f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, -0.3f);
	glVertex2f(0.75f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, -0.5f);
	glVertex2f(0.75f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.8f, -0.7f);
	glVertex2f(0.75f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, 0.9f);
	glVertex2f(0.85f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, 0.7f);
	glVertex2f(0.85f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, 0.5f);
	glVertex2f(0.85f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, 0.3f);
	glVertex2f(0.85f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, 0.1f);
	glVertex2f(0.85f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, -0.1f);
	glVertex2f(0.85f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, -0.3f);
	glVertex2f(0.85f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, -0.5f);
	glVertex2f(0.85f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, -0.7f);
	glVertex2f(0.85f, -0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, 0.9f);
	glVertex2f(0.95f, 0.8f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, 0.7f);
	glVertex2f(0.95f, 0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, 0.5f);
	glVertex2f(0.95f, 0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(0.95f, 0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.95f, 0.0f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, -0.1f);
	glVertex2f(0.95f, -0.2f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(0.95f, -0.4f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, -0.5f);
	glVertex2f(0.95f, -0.6f);
	glEnd();

	glBegin(GL_LINES); //rain
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, -0.7f);
	glVertex2f(0.95f, -0.8f);
	glEnd();

	glPopMatrix();
    glLoadIdentity();

glutTimerFunc(5000, rainynight_demo,0);

	glFlush();
}


void rainyday_demo(int a)
{

glutDisplayFunc(rainyday);

}


void nightupdate2(int value) {

    if(position4 >1.0)
        position4 =- 1.0f;

    position4 += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(200, nightupdate2, 0);
}


void night() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


	 glBegin(GL_QUADS); // SKY in night
    glColor3ub(0,0,0);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();





    GLfloat x17=0.76f; GLfloat y17=0.85f; GLfloat radius23 =0.0099f; //  Star


	int i;
	int triangleamount = 15; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x17,y17);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x17 + (radius23 * cos(i *  twicePi / triangleamount)),
			    y17 + (radius23* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x18=0.74f; GLfloat y18=0.85f; GLfloat radius24 =0.0099f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x18,y18);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x18 + (radius24 * cos(i *  twicePi / triangleamount)),
			    y18 + (radius24* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




	GLfloat x19=0.75f; GLfloat y19=0.86f; GLfloat radius25 =0.0099f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x19,y19);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x19 + (radius25 * cos(i *  twicePi / triangleamount)),
			    y19 + (radius25* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



	GLfloat x20=0.75f; GLfloat y20=0.84f; GLfloat radius26 =0.009999f; //Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x20,y20);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x20 + (radius26 * cos(i *  twicePi / triangleamount)),
			    y20 + (radius26* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();







    glLoadIdentity();

    glTranslatef(-0.25,0.27,0);
    glScalef(.8,.8,0);





    GLfloat x21=0.76f; GLfloat y21=0.85f; GLfloat radius27 =0.0095f; //  Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x21,y21);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x21 + (radius27 * cos(i *  twicePi / triangleamount)),
			    y21 + (radius27* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x22=0.74f; GLfloat y22=0.85f; GLfloat radius28 =0.0095f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x22,y22);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x22 + (radius28 * cos(i *  twicePi / triangleamount)),
			    y22 + (radius28* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




	GLfloat x23=0.75f; GLfloat y23=0.86f; GLfloat radius29 =0.0099f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x23,y23);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x23 + (radius29 * cos(i *  twicePi / triangleamount)),
			    y23 + (radius29* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



	GLfloat x24=0.75f; GLfloat y24=0.84f; GLfloat radius30 =0.009999f; //Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x24,y24);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x24 + (radius30 * cos(i *  twicePi / triangleamount)),
			    y24 + (radius30* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



    glLoadIdentity();

    glLoadIdentity();

    glTranslatef(-0.65,0.25,0);
    glScalef(.8,.8,0);





    GLfloat x25=0.76f; GLfloat y25=0.85f; GLfloat radius31=0.0095f; //  Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x25,y25);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x25 + (radius31 * cos(i *  twicePi / triangleamount)),
			    y25 + (radius31* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x26=0.74f; GLfloat y26=0.85f; GLfloat radius32 =0.0095f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x26,y26);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x26 + (radius32 * cos(i *  twicePi / triangleamount)),
			    y26 + (radius32* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




	GLfloat x27=0.75f; GLfloat y27=0.86f; GLfloat radius33 =0.0099f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x27,y27);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x27 + (radius33 * cos(i *  twicePi / triangleamount)),
			    y27 + (radius33* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



	GLfloat x28=0.75f; GLfloat y28=0.84f; GLfloat radius34 =0.009999f; //Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x28,y28);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x28 + (radius34 * cos(i *  twicePi / triangleamount)),
			    y28 + (radius34* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

   glLoadIdentity();




    glLoadIdentity();

    glTranslatef(-0.80,0.20,0);
    glScalef(.8,.8,0);





    GLfloat x29=0.76f; GLfloat y29=0.85f; GLfloat radius35=0.0095f; //  Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x29,y29);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x29 + (radius35 * cos(i *  twicePi / triangleamount)),
			    y29 + (radius35* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x30=0.74f; GLfloat y30=0.85f; GLfloat radius36 =0.0095f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x30,y30);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x30 + (radius36 * cos(i *  twicePi / triangleamount)),
			    y30 + (radius36* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




	GLfloat x31=0.75f; GLfloat y31=0.86f; GLfloat radius37 =0.0099f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x31,y31);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x31 + (radius37 * cos(i *  twicePi / triangleamount)),
			    y31 + (radius37* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



	GLfloat x32=0.75f; GLfloat y32=0.84f; GLfloat radius38 =0.009999f; //Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x32,y32);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x32 + (radius38 * cos(i *  twicePi / triangleamount)),
			    y32 + (radius38* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

   glLoadIdentity();




   glLoadIdentity();





    GLfloat x33=-0.76f; GLfloat y33=0.85f; GLfloat radius39=0.0095f; //  Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x33,y33);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x33 + (radius39 * cos(i *  twicePi / triangleamount)),
			    y33 + (radius39* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();


	GLfloat x34=-0.74f; GLfloat y34=0.85f; GLfloat radius40 =0.0095f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x34,y34);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x34 + (radius40 * cos(i *  twicePi / triangleamount)),
			    y34 + (radius40* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




	GLfloat x35=-0.75f; GLfloat y35=0.86f; GLfloat radius41 =0.0099f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x35,y35);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x35 + (radius41 * cos(i *  twicePi / triangleamount)),
			    y35 + (radius41* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



	GLfloat x36=-0.75f; GLfloat y36=0.84f; GLfloat radius42 =0.009999f; //Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x36,y36);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x36 + (radius42 * cos(i *  twicePi / triangleamount)),
			    y36 + (radius42* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

   glLoadIdentity();




     glLoadIdentity();

    glTranslatef(-0.37,0.20,0);
    glScalef(.8,.8,0);





    GLfloat x37=-0.76f; GLfloat y37=0.85f; GLfloat radius43=0.0095f; //  Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x37,y37);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x37 + (radius43 * cos(i *  twicePi / triangleamount)),
			    y37 + (radius43* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();


	GLfloat x38=-0.74f; GLfloat y38=0.85f; GLfloat radius44 =0.0095f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x38,y38);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x38 + (radius44 * cos(i *  twicePi / triangleamount)),
			    y38 + (radius44* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




	GLfloat x39=-0.75f; GLfloat y39=0.86f; GLfloat radius45 =0.0099f; //Star

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x39,y39);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x39 + (radius45 * cos(i *  twicePi / triangleamount)),
			    y39 + (radius45* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



	GLfloat x40=-0.75f; GLfloat y40=0.84f; GLfloat radius46 =0.009999f; //Star
	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);

	glVertex2f(x40,y40);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x40 + (radius46 * cos(i *  twicePi / triangleamount)),
			    y40 + (radius46* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

   glLoadIdentity();











	GLfloat x7=0.93f; GLfloat y7=0.92f; GLfloat radius13 =0.06f;  // Circle for moon


	 triangleamount = 15; //# of triangles used to draw circle

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);



	glVertex2f(x7,y7);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x7 + (radius13 * cos(i *  twicePi / triangleamount)),
			    y7 + (radius13* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();


glBegin(GL_POLYGON); // polygon of lalbag

	glColor3ub(255, 153, 102);

    glVertex2f(-0.2f, 0.60f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(0.40f, 0.0f);
	glVertex2f(0.40f, 0.60f);
	glVertex2f(0.20f, 0.6f);
	glVertex2f(0.20f, 0.7f);
	glVertex2f(-0.20f, 0.7f);
	 glEnd();

	glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(255, 153, 102);

    glVertex2f(-0.40f, 0.60f);
    glVertex2f(-0.40f, 0.0f);
    glVertex2f(-0.20f, 0.0f);
    glVertex2f(-0.20f, 0.60f);

    glEnd();



    glLoadIdentity();

    glTranslatef(0.355,0.32,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj in right shift

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);


    glEnd();

    glLoadIdentity();


    glTranslatef(-0.355,0.32,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj in right shift

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);


    glEnd();

   glLoadIdentity();





    glBegin(GL_QUADS);// quard for lalbag right gumbuj

    glColor3ub(204, 102, 0);

    glVertex2f(0.32f, 0.6f);
    glVertex2f(0.32f, 0.70f);
    glVertex2f(0.39f, 0.70f);
    glVertex2f(0.39f, 0.6f);

    glEnd();



     glLoadIdentity();

   glTranslatef(-0.71,0.0,0);

    glBegin(GL_QUADS);// quard for lalbag right gumbuj

    glColor3ub(204, 102, 0);

    glVertex2f(0.32f, 0.6f);
    glVertex2f(0.32f, 0.70f);
    glVertex2f(0.39f, 0.70f);
    glVertex2f(0.39f, 0.6f);

    glEnd();




      glLoadIdentity();



   glBegin(GL_POLYGON); // polygon of lalbag main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();


    glTranslatef(-0.335,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of left door of lalbag

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();

      glLoadIdentity();


    glTranslatef(0.335,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of left door of lalbag

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



    glTranslatef(0.0,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of middle black door of lalbag

	glColor3ub(255, 255, 0);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();

    glTranslatef(-0.337,0.0,0);
    glScalef(.5,.5,0);


    glBegin(GL_POLYGON); // polygon of left black door of lalbag

	glColor3ub(255, 255, 0);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



     glTranslatef(0.337,0.0,0);
    glScalef(.5,.5,0);


    glBegin(GL_POLYGON); // polygon of right black door of lalbag

	glColor3ub(255, 255, 0);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



glBegin(GL_QUADS); // basline of lalbag red line

    glColor3ub(140, 140, 140);

    glVertex2f(-0.44f, 0.0f);
    glVertex2f(-0.44f, -0.06f);
    glVertex2f(0.44f, -0.06f);
    glVertex2f(0.44f, 0.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(255, 153, 102);  // 1st quard of diwan i am

    glVertex2f(0.5f, 0.3f);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.9f, 0.0f);
    glVertex2f(0.9f, 0.3f);

    glEnd();


     glBegin(GL_QUADS);
    glColor3ub(255, 153, 102);  // 2nd quard of diwan i am

    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.8f, 0.3f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.6f, 0.5f);

    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 153, 102);  // 3rd quard of diwan i am

    glVertex2f(0.56f, 0.5f);
    glVertex2f(0.84f, 0.5f);
    glVertex2f(0.84f, 0.52f);
    glVertex2f(0.56f, 0.52f);

    glEnd();

     glBegin(GL_POLYGON); // left gumbuj of diwan i am
	 glColor3ub(204, 102, 0);

     glVertex2f(0.56f, 0.52f);
    glVertex2f(0.58f, 0.52f);
    glVertex2f(0.6f, 0.54f);
    glVertex2f(0.62f, 0.56f);
    glVertex2f(0.64f, 0.58f);
    glVertex2f(0.66f, 0.56f);
    glVertex2f(0.68f, 0.54f);
    glVertex2f(0.7f, 0.52f);
     glVertex2f(0.72f,0.52f);

    glEnd();

    glBegin(GL_POLYGON); // middle gumbuj of diwan i am
    glColor3ub(204, 102, 0);

    glVertex2f(0.72f, 0.52f);
    glVertex2f(0.74f, 0.54f);
    glVertex2f(0.76f, 0.56f);
    glVertex2f(0.78f, 0.58f);
    glVertex2f(0.8f, 0.56f);
    glVertex2f(0.82f, 0.54f);
    glVertex2f(0.84f, 0.52f);

    glEnd();

    glBegin(GL_POLYGON); // right gumbuj of diwan i am
    glColor3ub(204, 102, 0);

    glVertex2f(0.64f, 0.52f);
    glVertex2f(0.66f, 0.56f);
    glVertex2f(0.68f, 0.6f);
    glVertex2f(0.72f, 0.6f);
    glVertex2f(0.74f, 0.6f);
    glVertex2f(0.76f, 0.56f);
    glVertex2f(0.78f, 0.52f);

    glEnd();

    glBegin(GL_QUADS); // basline of diwan i am  red line
    glColor3ub(140, 140, 140);

    glVertex2f(0.48f, 0.0f);
    glVertex2f(0.48f, -0.06f);
    glVertex2f(0.92f, -0.06f);
    glVertex2f(0.92f, 0.0f);

    glEnd();


     glLoadIdentity();

    glTranslatef(0.70,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();


   glLoadIdentity();

    glTranslatef(0.75,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am  door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

    glLoadIdentity();

    glTranslatef(0.65,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

     glLoadIdentity();

    glTranslatef(0.65,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();


     glLoadIdentity();

    glTranslatef(0.75,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();


    glLoadIdentity();

    glTranslatef(0.85,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();



    glLoadIdentity();

    glTranslatef(0.55,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();









    glBegin(GL_QUADS); // quard of mosque
    glColor3ub(255, 153, 102);

    glVertex2f(-0.56f, 0.0f);
    glVertex2f(-0.76f, 0.0f);
    glVertex2f(-0.76f, 0.4f);
    glVertex2f(-0.56f, 0.4f);

    glEnd();

    glBegin(GL_QUADS); // quard of mosque
    glColor3ub(255, 153, 102);

    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.62f, 0.4f);
    glVertex2f(-0.62f, 0.48f);
    glVertex2f(-0.7f, 0.48f);
    glEnd();

     glBegin(GL_QUADS); // basline of mosque red line

    glColor3ub(140, 140, 140);

    glVertex2f(-0.52f, 0.0f);
    glVertex2f(-0.52f, -0.06f);
    glVertex2f(-0.8f, -0.06f);
    glVertex2f(-0.8f, 0.0f);

    glEnd();

 glLoadIdentity();


  glTranslatef(-0.59,0.225,0);
    glScalef(.25,.25,0);

    glBegin(GL_POLYGON); // polygon of mosque right gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

 glLoadIdentity();

 glLoadIdentity();


  glTranslatef(-0.66,0.195,0);
    glScalef(.4,.4,0);

    glBegin(GL_POLYGON); // polygon of mosque middle gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

 glLoadIdentity();

 glTranslatef(-0.73,0.225,0);
    glScalef(.25,.25,0);

    glBegin(GL_POLYGON); // polygon of mosque left gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
    glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

    glLoadIdentity();

    glTranslatef(-0.66,0.0,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of mosque main door

	glColor3ub(255, 255, 0);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();

   glLoadIdentity();

    glTranslatef(0.70,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am  door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();


   glTranslatef(-0.73,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of mosque right door

	glColor3ub(255, 230, 242);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();

    glTranslatef(-0.59,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of mosque left door

	glColor3ub(255, 230, 242);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

    glBegin(GL_QUADS); // Waiking place for foura
    glColor3ub(230, 230, 230);
    glVertex2f(-0.2f, -0.06f);
    glVertex2f(-0.2f, -0.46f);
    glVertex2f(0.2f, -0.46f);
    glVertex2f(0.2f, -0.06f);

    glEnd();

     glBegin(GL_QUADS); // Waiking field  for people and tree in left side
    glColor3f(0, 1, 0);
    glVertex2f(-0.20f, -0.06f);
    glVertex2f(-0.20f, -0.46f);
    glVertex2f(-1.0f, -0.46f);
    glVertex2f(-1.0f, -0.06f);

    glEnd();

    glBegin(GL_QUADS); // Waiking field  for people and tree in right side
    glColor3f(0, 1, 0);
    glVertex2f(0.20f, -0.06f);
    glVertex2f(0.20f, -0.46f);
    glVertex2f(1.0f, -0.46f);
    glVertex2f(1.0f, -0.06f);

    glEnd();

    glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

   glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

   glLoadIdentity();

    glTranslatef(0.25,-0.0,0);
    glScalef(.99,.99,0);

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

    glLoadIdentity();


    glTranslatef(-0.25,-0.0,0);
    glScalef(.99,.99,0);

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.25,-0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(0.25,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.15,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.70f, -0.28f);
    glVertex2f(-0.70f, -0.46f);
    glVertex2f(-0.67f, -0.46f);
    glVertex2f(-0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.32f);
	glVertex2f(-0.72f, -0.32f);
    glVertex2f(-0.6851f, -0.20f);
	glEnd();

	/*glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.38f);
	glVertex2f(-0.72f, -0.38f);
    glVertex2f(-0.6851f, -0.19f);
	glEnd();*/

   glLoadIdentity();

   glTranslatef(0.11,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.70f, -0.28f);
    glVertex2f(-0.70f, -0.46f);
    glVertex2f(-0.67f, -0.46f);
    glVertex2f(-0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.32f);
	glVertex2f(-0.72f, -0.32f);
    glVertex2f(-0.6851f, -0.20f);
	glEnd();

  glLoadIdentity();

  glTranslatef(0.15,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.70f, -0.28f);
    glVertex2f(0.70f, -0.46f);
    glVertex2f(0.67f, -0.46f);
    glVertex2f(0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.32f);
	glVertex2f(0.72f, -0.32f);
    glVertex2f(0.6851f, -0.20f);
	glEnd();



   glLoadIdentity();

   glTranslatef(-0.11,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.70f, -0.28f);
    glVertex2f(0.70f, -0.46f);
    glVertex2f(0.67f, -0.46f);
    glVertex2f(0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.32f);
	glVertex2f(0.72f, -0.32f);
    glVertex2f(0.6851f, -0.20f);
	glEnd();

  glLoadIdentity();

    glBegin(GL_QUADS); //square water place for foura
    glColor3ub(102, 204, 255);
    glVertex2f(-0.06f, -0.08f);
    glVertex2f(-0.06f, -0.25f);
    glVertex2f(0.06f, -0.25f);
    glVertex2f(0.06f, -0.08f);

    glEnd();



   glBegin(GL_TRIANGLES); // Triangle of 1st foura
	glColor3f(0,0,0);

    glVertex2f(0.0f, -0.12f);
	glVertex2f(-0.02f, -0.18f);
    glVertex2f(0.02f, -0.18f);
	glEnd();








   glLineWidth(1.5);


	glBegin(GL_LINES);  //  Water of foura
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.13f);
    glVertex2f(-0.04f, -0.14f);

    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.12f);
    glVertex2f(-0.02f, -0.13f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.05f, -0.15f);
    glVertex2f(-0.05f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.05f, -0.19f);
    glVertex2f(-0.05f, -0.21f);

	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.15f);
    glVertex2f(-0.03f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.19f);
    glVertex2f(-0.03f, -0.21f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.13f);
    glVertex2f(0.04f, -0.14f);

    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f,-0.12f);
    glVertex2f(0.02f, -0.13f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, -0.15f);
    glVertex2f(0.05f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, -0.19f);
    glVertex2f(0.05f, -0.21f);

	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.15f);
    glVertex2f(0.03f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.19f);
    glVertex2f(0.03f, -0.21f);


	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.04f, -0.15f);
    glVertex2f(0.04f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.04f, -0.15f);
    glVertex2f(-0.04f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.04f, -0.19f);
    glVertex2f(0.04f, -0.21f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.04f, -0.19f);
    glVertex2f(-0.04f, -0.21f);

	glEnd();




   glBegin(GL_QUADS); // main gate left side
    glColor3ub(115, 115, 115);
    glVertex2f(-0.14f, -0.34f);//
    glVertex2f(-0.20f, -0.46f);//
    glVertex2f(-0.04f, -0.46f);
    glVertex2f(-0.04f, -0.34f);

    glEnd();

    glBegin(GL_QUADS); //main gate right side
    glColor3ub(115, 115, 115);
    glVertex2f(0.14f, -0.34f);
    glVertex2f(0.20f, -0.46f);
    glVertex2f(0.04f, -0.46f);
    glVertex2f(0.04f, -0.34f);

    glEnd();

    glBegin(GL_QUADS); // Main Road
    glColor3f(0, 0, 0);
    glVertex2f(-1.0f, -0.46f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.46f);

    glEnd();

   glLineWidth(4.5);

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.00f, -0.78f);
	glVertex2f(-0.9f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.00f, -0.78f);
	glVertex2f(0.9f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.78f);
	glVertex2f(0.4f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.78f);
	glVertex2f(0.0f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.78f);
	glVertex2f(-0.4f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.78f);
	glVertex2f(-0.8f, -0.78f);

	glEnd();



    glBegin(GL_QUADS); // Halogen lamp stand in road of right side
    glColor3f(1, 1, 1);
    glVertex2f(0.98f, -0.46f);
    glVertex2f(0.98f, -1.0f);
    glVertex2f(0.99f, -1.0f);
    glVertex2f(0.99f, -0.46f);

    glEnd();

    glBegin(GL_QUADS); // Halogen lamp in road of right side
    glColor3f(1, 1, 1);
    glVertex2f(0.98f, -0.46f);
    glVertex2f(0.98f, -0.48f);
    glVertex2f(0.94f, -0.48f);
    glVertex2f(0.94f, -0.46f);

    glEnd();

    glBegin(GL_QUADS); // Halogen lamp stand in road of left side
    glColor3f(1, 1, 1);
    glVertex2f(-0.98f, -0.46f);
    glVertex2f(-0.98f, -1.0f);
    glVertex2f(-0.99f, -1.0f);
    glVertex2f(-0.99f, -0.46f);

    glEnd();

    glBegin(GL_QUADS); // Halogen lamp stand in road of left side
    glColor3f(1, 1, 1);
    glVertex2f(-0.98f, -0.46f);
    glVertex2f(-0.98f, -0.48f);
    glVertex2f(-0.94f, -0.48f);
    glVertex2f(-0.94f, -0.46f);

    glEnd();



    GLfloat x14=0.96f; GLfloat y14=-0.48f; GLfloat radius20 =0.015f; //Halogen lamp circle in road of right side

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(77, 255, 255);

	glVertex2f(x14,y14);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x14 + (radius20 * cos(i *  twicePi / triangleamount)),
			    y14 + (radius20* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();




    glBegin(GL_QUADS); // Halogen lamp is lighting in right side
    glColor3ub(255, 255, 0);
    glVertex2f(0.95f, -0.49f);
    glVertex2f(0.80f, -1.0f);//
    glVertex2f(0.97f, -1.0f);//
    glVertex2f(0.97f, -0.49f);

    glEnd();





     GLfloat x15=-0.96f; GLfloat y15=-0.48f; GLfloat radius21 =0.015f; //Halogen lamp circle in road of left side

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(77, 255, 255);

	glVertex2f(x15,y15);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x15 + (radius21 * cos(i *  twicePi / triangleamount)),
			    y15 + (radius21* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();


	glBegin(GL_QUADS); // Halogen lamp is lighting in left side
    glColor3ub(255, 255, 0);
    glVertex2f(-0.95f, -0.49f);
    glVertex2f(-0.80f, -1.0f);//
    glVertex2f(-0.97f, -1.0f);//
    glVertex2f(-0.97f, -0.49f);

    glEnd();






















   glPushMatrix();
   glTranslatef(position4,0,0);


    glBegin(GL_QUADS); // big track
     glColor3ub(102, 153, 204);
    glVertex2f(-0.74f, -0.6f);
    glVertex2f(-0.74f, -0.7f);
    glVertex2f(-0.97f, -0.7f);
    glVertex2f(-0.97f, -0.6f);

    glEnd();

    glBegin(GL_QUADS); // big track
	glColor3ub(255, 255, 128);
    glVertex2f(-0.76f, -0.5f);
	glVertex2f(-0.74f, -0.6f);
    glVertex2f(-0.82f, -0.6f);
    glVertex2f(-0.82f, -0.5f);

    glEnd();

     glBegin(GL_QUADS); // small 2nd 1st window
      glColor3ub(191, 191, 191);
     glVertex2f(-0.77f, -0.53f);
     glVertex2f(-0.77f, -0.58f);
     glVertex2f(-0.80f, -0.58f);
     glVertex2f(-0.80f, -0.53f);

    glEnd();

    GLfloat x12=-0.92f; GLfloat y12=-0.72f; GLfloat radius18 =0.04f;// While for big track

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x12,y12);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x12 + (radius18 * cos(i *  twicePi / triangleamount)),
			    y12 + (radius18* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x13=-0.78f; GLfloat y13=-0.72f; GLfloat radius19 =0.04f;  // While for big track

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x13,y13);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x13 + (radius19 * cos(i *  twicePi / triangleamount)),
			    y13 + (radius19* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

   glPopMatrix();

glutTimerFunc(5000, rainyday_demo,0);

	glFlush();
}


void night_demo(int a)
{

glutDisplayFunc(night);

}


void summerdayupdate(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, summerdayupdate, 0);
}


void summerdayupdate1(int value) {

    if(position1 >1.0)
        position1 = -1.0f;

    position1 += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, summerdayupdate1, 0);
}





void summerday() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


	 glBegin(GL_QUADS); // SKY in day
    glColor3ub(179, 240, 255);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();


   GLfloat x1=0.64f; GLfloat y1=0.74f; GLfloat radius4 =.06f; // Circle for Cloud
	int i;
	int triangleamount = 15; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(x1,y1);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x1 + (radius4 * cos(i *  twicePi / triangleamount)),
			    y1 + (radius4* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat p1=0.68f; GLfloat q1=0.8f; GLfloat radius5 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1, 1, 1);

	glVertex2f(p1,q1);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    p1 + (radius5 * cos(i *  twicePi / triangleamount)),
			    q1 + (radius5* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat a1=0.6f; GLfloat b1=0.84f; GLfloat radius6 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(a1,b1);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    a1 + (radius6 * cos(i *  twicePi / triangleamount)),
			    b1 + (radius6* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat m1=0.56f; GLfloat n1=0.78f; GLfloat radius7 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(m1,n1);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    m1+ (radius7 * cos(i *  twicePi / triangleamount)),
			    n1 + (radius7* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();


glLoadIdentity();

glTranslatef(0.37,0.31,0);
glScalef(.7,.7,0);

  GLfloat x2=0.64f; GLfloat y2=0.74f; GLfloat radius8 =.06f; // Circle for Cloud
//	int i;
	//int triangleamount = 15; //# of triangles used to draw circle

//	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(x1,y1);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x1 + (radius4 * cos(i *  twicePi / triangleamount)),
			    y1 + (radius4* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x3=0.68f; GLfloat y3=0.8f; GLfloat radius9 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1, 1, 1);

	glVertex2f(x3,y3);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x3 + (radius5 * cos(i *  twicePi / triangleamount)),
			    y3 + (radius5* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x4=0.6f; GLfloat y4=0.84f; GLfloat radius10 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(x4,y4);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x4 + (radius6 * cos(i *  twicePi / triangleamount)),
			    y4 + (radius6* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x5=0.56f; GLfloat y5=0.78f; GLfloat radius11 =0.06f; // Circle for Cloud

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(x5,y5);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x5+ (radius7 * cos(i *  twicePi / triangleamount)),
			    y5 + (radius7* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



glLoadIdentity();


	GLfloat x6=-0.92f; GLfloat y6=0.92f; GLfloat radius12 =.06f; // Circle for Sun
	 triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,0,0);

	glVertex2f(x6,y6);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x6 + (radius12 * cos(i *  twicePi / triangleamount)),
			    y6 + (radius12* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	/*GLfloat x7=0.95f; GLfloat y7=0.92f; GLfloat radius13 =0.06f;  // Circle for moon

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1,1,1);

	glVertex2f(x7,y7);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x7 + (radius13 * cos(i *  twicePi / triangleamount)),
			    y7 + (radius13* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();*/


glBegin(GL_POLYGON); // polygon of lalbag

	glColor3ub(255, 153, 102);

    glVertex2f(-0.2f, 0.60f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(0.40f, 0.0f);
	glVertex2f(0.40f, 0.60f);
	glVertex2f(0.20f, 0.6f);
	glVertex2f(0.20f, 0.7f);
	glVertex2f(-0.20f, 0.7f);
	 glEnd();

	glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(255, 153, 102);

    glVertex2f(-0.40f, 0.60f);
    glVertex2f(-0.40f, 0.0f);
    glVertex2f(-0.20f, 0.0f);
    glVertex2f(-0.20f, 0.60f);

    glEnd();



    glLoadIdentity();

    glTranslatef(0.355,0.32,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj in right shift

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);


    glEnd();

    glLoadIdentity();


    glTranslatef(-0.355,0.32,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of lalbag middle gumbuj in right shift

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.92f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);


    glEnd();

   glLoadIdentity();

   /* glLineWidth(4.5);

    glBegin(GL_LINES);// 4rth gumbuj line

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.39f, 0.7f);
	glVertex2f(0.39f, 0.6f);

    glEnd();


    glLoadIdentity();
    glTranslatef(-0.7,0.00,0);

    glLineWidth(4.5);

    glBegin(GL_LINES);//2nd gumbuj line

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.38f, 0.7f);
	glVertex2f(0.38f, 0.6f);

    glEnd();*/

  // glLoadIdentity();



    glBegin(GL_QUADS);// quard for lalbag right gumbuj

    glColor3ub(204, 102, 0);

    glVertex2f(0.32f, 0.6f);
    glVertex2f(0.32f, 0.70f);
    glVertex2f(0.39f, 0.70f);
    glVertex2f(0.39f, 0.6f);

    glEnd();



     glLoadIdentity();

   glTranslatef(-0.71,0.0,0);

    glBegin(GL_QUADS);// quard for lalbag right gumbuj

    glColor3ub(204, 102, 0);

    glVertex2f(0.32f, 0.6f);
    glVertex2f(0.32f, 0.70f);
    glVertex2f(0.39f, 0.70f);
    glVertex2f(0.39f, 0.6f);

    glEnd();




      glLoadIdentity();



   glBegin(GL_POLYGON); // polygon of lalbag main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();


    glTranslatef(-0.335,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of left door of lalbag

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();

      glLoadIdentity();


    glTranslatef(0.335,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of left door of lalbag

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



    glTranslatef(0.0,0.0,0);
    glScalef(.7,.7,0);


    glBegin(GL_POLYGON); // polygon of middle black door of lalbag

	glColor3ub(77, 77, 77);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();

    glTranslatef(-0.337,0.0,0);
    glScalef(.5,.5,0);


    glBegin(GL_POLYGON); // polygon of left black door of lalbag

	glColor3ub(77, 77, 77);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



     glTranslatef(0.337,0.0,0);
    glScalef(.5,.5,0);


    glBegin(GL_POLYGON); // polygon of right black door of lalbag

	glColor3ub(77, 77, 77);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();


     glLoadIdentity();



glBegin(GL_QUADS); // basline of lalbag red line

    glColor3ub(140, 140, 140);

    glVertex2f(-0.44f, 0.0f);
    glVertex2f(-0.44f, -0.06f);
    glVertex2f(0.44f, -0.06f);
    glVertex2f(0.44f, 0.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(255, 153, 102);  // 1st quard of diwan i am

    glVertex2f(0.5f, 0.3f);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.9f, 0.0f);
    glVertex2f(0.9f, 0.3f);

    glEnd();


     glBegin(GL_QUADS);
    glColor3ub(255, 153, 102);  // 2nd quard of diwan i am

    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.8f, 0.3f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.6f, 0.5f);

    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 153, 102);  // 3rd quard of diwan i am

    glVertex2f(0.56f, 0.5f);
    glVertex2f(0.84f, 0.5f);
    glVertex2f(0.84f, 0.52f);
    glVertex2f(0.56f, 0.52f);

    glEnd();

     glBegin(GL_POLYGON); // left gumbuj of diwan i am
	 glColor3ub(204, 102, 0);

     glVertex2f(0.56f, 0.52f);
    glVertex2f(0.58f, 0.52f);
    glVertex2f(0.6f, 0.54f);
    glVertex2f(0.62f, 0.56f);
    glVertex2f(0.64f, 0.58f);
    glVertex2f(0.66f, 0.56f);
    glVertex2f(0.68f, 0.54f);
    glVertex2f(0.7f, 0.52f);
     glVertex2f(0.72f,0.52f);

    glEnd();

    glBegin(GL_POLYGON); // middle gumbuj of diwan i am
    glColor3ub(204, 102, 0);

    glVertex2f(0.72f, 0.52f);
    glVertex2f(0.74f, 0.54f);
    glVertex2f(0.76f, 0.56f);
    glVertex2f(0.78f, 0.58f);
    glVertex2f(0.8f, 0.56f);
    glVertex2f(0.82f, 0.54f);
    glVertex2f(0.84f, 0.52f);

    glEnd();

    glBegin(GL_POLYGON); // right gumbuj of diwan i am
    glColor3ub(204, 102, 0);

    glVertex2f(0.64f, 0.52f);
    glVertex2f(0.66f, 0.56f);
    glVertex2f(0.68f, 0.6f);
    glVertex2f(0.72f, 0.6f);
    glVertex2f(0.74f, 0.6f);
    glVertex2f(0.76f, 0.56f);
    glVertex2f(0.78f, 0.52f);

    glEnd();

    glBegin(GL_QUADS); // basline of diwan i am  red line
    glColor3ub(140, 140, 140);

    glVertex2f(0.48f, 0.0f);
    glVertex2f(0.48f, -0.06f);
    glVertex2f(0.92f, -0.06f);
    glVertex2f(0.92f, 0.0f);

    glEnd();


     glLoadIdentity();

    glTranslatef(0.70,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();


   glLoadIdentity();

    glTranslatef(0.75,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am  door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

    glLoadIdentity();

    glTranslatef(0.65,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

     glLoadIdentity();

    glTranslatef(0.65,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();


     glLoadIdentity();

    glTranslatef(0.75,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();


    glLoadIdentity();

    glTranslatef(0.85,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();



    glLoadIdentity();

    glTranslatef(0.55,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am main door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();









    glBegin(GL_QUADS); // quard of mosque
    glColor3ub(255, 153, 102);

    glVertex2f(-0.56f, 0.0f);
    glVertex2f(-0.76f, 0.0f);
    glVertex2f(-0.76f, 0.4f);
    glVertex2f(-0.56f, 0.4f);

    glEnd();

    glBegin(GL_QUADS); // quard of mosque
    glColor3ub(255, 153, 102);

    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.62f, 0.4f);
    glVertex2f(-0.62f, 0.48f);
    glVertex2f(-0.7f, 0.48f);
    glEnd();

     glBegin(GL_QUADS); // basline of mosque red line

    glColor3ub(140, 140, 140);

    glVertex2f(-0.52f, 0.0f);
    glVertex2f(-0.52f, -0.06f);
    glVertex2f(-0.8f, -0.06f);
    glVertex2f(-0.8f, 0.0f);

    glEnd();

 glLoadIdentity();


  glTranslatef(-0.59,0.225,0);
    glScalef(.25,.25,0);

    glBegin(GL_POLYGON); // polygon of mosque right gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

 glLoadIdentity();

 glLoadIdentity();


  glTranslatef(-0.66,0.195,0);
    glScalef(.4,.4,0);

    glBegin(GL_POLYGON); // polygon of mosque middle gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
     glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

 glLoadIdentity();

 glTranslatef(-0.73,0.225,0);
    glScalef(.25,.25,0);

    glBegin(GL_POLYGON); // polygon of mosque left gumbuj

	glColor3ub(204, 102, 0);

    glVertex2f(-0.1f, 0.7f);//
	glVertex2f(0.1f, 0.7f);//
	glVertex2f(0.08f, 0.82f);
    glVertex2f(0.05f, 0.84f);
    glVertex2f(0.0f, 0.93f);//
    glVertex2f(-0.05f, 0.84f);
    glVertex2f(-0.08f, 0.82f);

    glEnd();

    glLoadIdentity();

    glTranslatef(-0.66,0.0,0);
    glScalef(.5,.5,0);

    glBegin(GL_POLYGON); // polygon of mosque main door

	glColor3ub(255, 230, 242);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();

   glLoadIdentity();

    glTranslatef(0.70,0.3,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of diwan i am  door

	glColor3ub(255, 230, 230);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.39f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();


   glTranslatef(-0.73,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of mosque right door

	glColor3ub(255, 230, 242);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

   glLoadIdentity();

    glTranslatef(-0.59,0.0,0);
    glScalef(.3,.3,0);

    glBegin(GL_POLYGON); // polygon of mosque left door

	glColor3ub(255, 230, 242);

    glVertex2f(-0.08f, 0.0f);//
	glVertex2f(0.08f, 0.0f);//
	glVertex2f(0.08f, 0.16f);//
    glVertex2f(0.06f, 0.26f);//
    glVertex2f(0.02f, 0.36f);
    glVertex2f(0.00f, 0.38f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.08f, 0.16f);//
    glEnd();

    glLoadIdentity();

    glBegin(GL_QUADS); // Waiking place for foura
    glColor3ub(230, 230, 230);
    glVertex2f(-0.2f, -0.06f);
    glVertex2f(-0.2f, -0.46f);
    glVertex2f(0.2f, -0.46f);
    glVertex2f(0.2f, -0.06f);

    glEnd();

     glBegin(GL_QUADS); // Waiking field  for people and tree in left side
    glColor3f(0, 1, 0);
    glVertex2f(-0.20f, -0.06f);
    glVertex2f(-0.20f, -0.46f);
    glVertex2f(-1.0f, -0.46f);
    glVertex2f(-1.0f, -0.06f);

    glEnd();

    glBegin(GL_QUADS); // Waiking field  for people and tree in right side
    glColor3f(0, 1, 0);
    glVertex2f(0.20f, -0.06f);
    glVertex2f(0.20f, -0.46f);
    glVertex2f(1.0f, -0.46f);
    glVertex2f(1.0f, -0.06f);

    glEnd();

    glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

   glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

   glLoadIdentity();

    glTranslatef(0.25,-0.0,0);
    glScalef(.99,.99,0);

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

    glLoadIdentity();


    glTranslatef(-0.25,-0.0,0);
    glScalef(.99,.99,0);

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.69f, -0.36f);
    glVertex2f(0.69f, -0.46f);
    glVertex2f(0.68f, -0.46f);
    glVertex2f(0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.36f);
	glVertex2f(0.72f, -0.36f);
    glVertex2f(0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.25,-0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(0.25,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.69f, -0.36f);
    glVertex2f(-0.69f, -0.46f);
    glVertex2f(-0.68f, -0.46f);
    glVertex2f(-0.68f, -0.36f);

    glEnd();

    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.36f);
	glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.6851f, -0.28f);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.15,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.70f, -0.28f);
    glVertex2f(-0.70f, -0.46f);
    glVertex2f(-0.67f, -0.46f);
    glVertex2f(-0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.32f);
	glVertex2f(-0.72f, -0.32f);
    glVertex2f(-0.6851f, -0.20f);
	glEnd();

	/*glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.38f);
	glVertex2f(-0.72f, -0.38f);
    glVertex2f(-0.6851f, -0.19f);
	glEnd();*/

   glLoadIdentity();

   glTranslatef(0.11,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(-0.70f, -0.28f);
    glVertex2f(-0.70f, -0.46f);
    glVertex2f(-0.67f, -0.46f);
    glVertex2f(-0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.32f);
	glVertex2f(-0.72f, -0.32f);
    glVertex2f(-0.6851f, -0.20f);
	glEnd();

  glLoadIdentity();

  glTranslatef(0.15,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.70f, -0.28f);
    glVertex2f(0.70f, -0.46f);
    glVertex2f(0.67f, -0.46f);
    glVertex2f(0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.32f);
	glVertex2f(0.72f, -0.32f);
    glVertex2f(0.6851f, -0.20f);
	glEnd();

	/*glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.38f);
	glVertex2f(-0.72f, -0.38f);
    glVertex2f(-0.6851f, -0.19f);
	glEnd();*/

   glLoadIdentity();

   glTranslatef(-0.11,0.0,0);
    glScalef(.99,.99,0);


	glBegin(GL_QUADS); //  stand of  tree in  right side
    glColor3ub(179, 89, 0);
    glVertex2f(0.70f, -0.28f);
    glVertex2f(0.70f, -0.46f);
    glVertex2f(0.67f, -0.46f);
    glVertex2f(0.67f, -0.28f);

    glEnd();


    glBegin(GL_TRIANGLES); // Triangle of  tree in  right side
	glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.32f);
	glVertex2f(0.72f, -0.32f);
    glVertex2f(0.6851f, -0.20f);
	glEnd();

  glLoadIdentity();

    glBegin(GL_QUADS); //square water place for foura
    glColor3ub(102, 204, 255);
    glVertex2f(-0.06f, -0.08f);
    glVertex2f(-0.06f, -0.25f);
    glVertex2f(0.06f, -0.25f);
    glVertex2f(0.06f, -0.08f);

    glEnd();



   glBegin(GL_TRIANGLES); // Triangle of 1st foura
	glColor3f(0,0,0);

    glVertex2f(0.0f, -0.12f);
	glVertex2f(-0.02f, -0.18f);
    glVertex2f(0.02f, -0.18f);
	glEnd();








   glLineWidth(1.5);


	glBegin(GL_LINES);  //  Water of foura
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.13f);
    glVertex2f(-0.04f, -0.14f);

    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.12f);
    glVertex2f(-0.02f, -0.13f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.05f, -0.15f);
    glVertex2f(-0.05f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.05f, -0.19f);
    glVertex2f(-0.05f, -0.21f);

	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.15f);
    glVertex2f(-0.03f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, -0.19f);
    glVertex2f(-0.03f, -0.21f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.13f);
    glVertex2f(0.04f, -0.14f);

    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f,-0.12f);
    glVertex2f(0.02f, -0.13f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, -0.15f);
    glVertex2f(0.05f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, -0.19f);
    glVertex2f(0.05f, -0.21f);

	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.15f);
    glVertex2f(0.03f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.03f, -0.19f);
    glVertex2f(0.03f, -0.21f);


	glEnd();

	 glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.04f, -0.15f);
    glVertex2f(0.04f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.04f, -0.15f);
    glVertex2f(-0.04f, -0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.04f, -0.19f);
    glVertex2f(0.04f, -0.21f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.04f, -0.19f);
    glVertex2f(-0.04f, -0.21f);

	glEnd();




   glBegin(GL_QUADS); // main gate left side
    glColor3ub(115, 115, 115);
    glVertex2f(-0.14f, -0.34f);//
    glVertex2f(-0.20f, -0.46f);//
    glVertex2f(-0.04f, -0.46f);
    glVertex2f(-0.04f, -0.34f);

    glEnd();

    glBegin(GL_QUADS); //main gate right side
    glColor3ub(115, 115, 115);
    glVertex2f(0.14f, -0.34f);
    glVertex2f(0.20f, -0.46f);
    glVertex2f(0.04f, -0.46f);
    glVertex2f(0.04f, -0.34f);

    glEnd();

    glBegin(GL_QUADS); // Main Road
    glColor3f(0, 0, 0);
    glVertex2f(-1.0f, -0.46f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.46f);

    glEnd();

   glLineWidth(4.5);

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.00f, -0.78f);
	glVertex2f(-0.9f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.00f, -0.78f);
	glVertex2f(0.9f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.78f);
	glVertex2f(0.4f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.78f);
	glVertex2f(0.0f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.78f);
	glVertex2f(-0.4f, -0.78f);

	glEnd();

	glBegin(GL_LINES);              // Line for road
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.78f);
	glVertex2f(-0.8f, -0.78f);

	glEnd();



    glBegin(GL_QUADS); // Halogen lamp stand in road of right side
    glColor3f(1, 1, 1);
    glVertex2f(0.98f, -0.46f);
    glVertex2f(0.98f, -1.0f);
    glVertex2f(0.99f, -1.0f);
    glVertex2f(0.99f, -0.46f);

    glEnd();

    glBegin(GL_QUADS); // Halogen lamp in road of right side
    glColor3f(1, 1, 1);
    glVertex2f(0.98f, -0.46f);
    glVertex2f(0.98f, -0.48f);
    glVertex2f(0.94f, -0.48f);
    glVertex2f(0.94f, -0.46f);

    glEnd();

    glBegin(GL_QUADS); // Halogen lamp stand in road of left side
    glColor3f(1, 1, 1);
    glVertex2f(-0.98f, -0.46f);
    glVertex2f(-0.98f, -1.0f);
    glVertex2f(-0.99f, -1.0f);
    glVertex2f(-0.99f, -0.46f);

    glEnd();



    GLfloat a14=0.96f; GLfloat b14=-0.48f; GLfloat radius80 =0.015f; //Halogen lamp circle in road of right side

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(77, 255, 255);

	glVertex2f(a14,b14);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    a14 + (radius80 * cos(i *  twicePi / triangleamount)),
			    b14 + (radius80* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();


    glBegin(GL_QUADS); // Halogen lamp in road of left side
    glColor3f(1, 1, 1);
    glVertex2f(-0.98f, -0.46f);
    glVertex2f(-0.98f, -0.48f);
    glVertex2f(-0.94f, -0.48f);
    glVertex2f(-0.94f, -0.46f);

    glEnd();





     GLfloat a15=-0.96f; GLfloat b15=-0.48f; GLfloat radius81 =0.015f; //Halogen lamp circle in road of left side

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(77, 255, 255);

	glVertex2f(a15,b15);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    a15 + (radius81 * cos(i *  twicePi / triangleamount)),
			    b15 + (radius81* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();



     glPushMatrix();
   glTranslatef(position,0,0);

   glBegin(GL_QUADS); // Car in right side
	glColor3ub(0, 128, 128);
    glVertex2f(0.62f, -0.5f);//
	glVertex2f(0.57f, -0.60f);
    glVertex2f(0.83f, -0.60f);//

    glVertex2f(0.78f, -0.5f);//

    glEnd();

     glBegin(GL_QUADS);// Car in right side
     glColor3ub(0, 77, 77);
    glVertex2f(0.55f, -0.60f);
    glVertex2f(0.55f, -0.7f);
    glVertex2f(0.85f, -0.7f);
    glVertex2f(0.85f, -0.60f);

    glEnd();


  GLfloat x8=0.8f; GLfloat y8=-0.72f; GLfloat radius14 =0.04f; // Circle for while of big car

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x8,y8);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x8 + (radius14 * cos(i *  twicePi / triangleamount)),
			    y8 + (radius14* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x9=0.6f; GLfloat y9=-0.72f; GLfloat radius15 =0.04f; // Circle for while of big car

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x9,y9);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x9 + (radius15 * cos(i *  twicePi / triangleamount)),
			    y9 + (radius15* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

    glBegin(GL_QUADS); // 1st window
      glColor3ub(191, 191, 191);
     glVertex2f(0.62f, -0.53f);
     glVertex2f(0.62f, -0.58f);
     glVertex2f(0.65f, -0.58f);
     glVertex2f(0.65f, -0.53f);

    glEnd();

    glBegin(GL_QUADS); // 2nd window
    glColor3ub(191, 191, 191);
    glVertex2f(0.76f, -0.53f);
    glVertex2f(0.76f, -0.58f);
    glVertex2f(0.79f, -0.58f);
    glVertex2f(0.79f, -0.53f);

    glEnd();

     glLineWidth(1.5);


     glBegin(GL_LINES);// car line

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.7f, -0.6f);

      glEnd();

   glPopMatrix();

       glLoadIdentity();

    glPushMatrix();
   glTranslatef(position1,0,0);

    glTranslatef(-1.0,-0.4,0);
    glScalef(.8,.8,0);


    glBegin(GL_QUADS); // small 2nd Car in right side
	glColor3ub(102, 0, 0);
    glVertex2f(0.62f, -0.5f);//
	glVertex2f(0.57f, -0.60f);
    glVertex2f(0.83f, -0.60f);//

    glVertex2f(0.78f, -0.5f);//

    glEnd();

     glBegin(GL_QUADS);// small 2nd Car in right side
     glColor3ub(179, 0, 0);
    glVertex2f(0.55f, -0.60f);
    glVertex2f(0.55f, -0.7f);
    glVertex2f(0.85f, -0.7f);
    glVertex2f(0.85f, -0.60f);

    glEnd();


  GLfloat x10=0.8f; GLfloat y10=-0.72f; GLfloat radius16 =0.04f; // Circle for while of small car

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x10,y10);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x10 + (radius16 * cos(i *  twicePi / triangleamount)),
			    y10 + (radius16* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

	GLfloat x11=0.6f; GLfloat y11=-0.72f; GLfloat radius17 =0.04f; //  Circle for while of small car

	triangleamount = 15;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(64, 64, 64);

	glVertex2f(x11,y11);
		for(i = 0; i <= triangleamount;i++) {
			glVertex2f(
			    x11 + (radius17 * cos(i *  twicePi / triangleamount)),
			    y11 + (radius17* sin(i * twicePi / triangleamount))
			);
		}
	glEnd();

    glBegin(GL_QUADS); // small 2nd 1st window
      glColor3ub(191, 191, 191);
     glVertex2f(0.62f, -0.53f);
     glVertex2f(0.62f, -0.58f);
     glVertex2f(0.65f, -0.58f);
     glVertex2f(0.65f, -0.53f);

    glEnd();

    glBegin(GL_QUADS); //small 2nd 2nd window
    glColor3ub(191, 191, 191);
    glVertex2f(0.76f, -0.53f);
    glVertex2f(0.76f, -0.58f);
    glVertex2f(0.79f, -0.58f);
    glVertex2f(0.79f, -0.53f);

    glEnd();

     glLineWidth(1.5);


     glBegin(GL_LINES);//small 2nd car line

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.7f, -0.6f);

      glEnd();



   glLoadIdentity();
  glPopMatrix();

   glutTimerFunc(5000, night_demo,0);

	glFlush();
}



void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {

case 'd':
    glutDisplayFunc(summerday);
 break;

	}
	glutPostRedisplay();
}


void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed += 0.1f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed -= 0.1f;
			}
	glutPostRedisplay();}



int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("Lalbag Kella"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height


	 glutKeyboardFunc(handleKeypress);

	 glutMouseFunc(handleMouse);

     glutDisplayFunc(summerday); // Register display callback handler for window re-paint

	  glutTimerFunc(100, summerdayupdate, 0);
	  glutTimerFunc(100, summerdayupdate1, 0);
	  glutTimerFunc(100, nightupdate2, 0);
	  glutTimerFunc(100, rainydayupdate, 0);
	  glutTimerFunc(100, rainydayupdate1, 0);
	  glutTimerFunc(100, rainydayupdate3, 0);
	  glutTimerFunc(100, rainydayupdate5, 0);
	  glutTimerFunc(400, rainynightupdate2, 0); //Big track
	  glutTimerFunc(100, rainynightupdate5, 0);
	  glutTimerFunc(100, springdayupdate, 0);
	  glutTimerFunc(100, springdayupdate1, 0);
	  glutTimerFunc(400, springnightupdate2, 0);
	   //screen();//Enable it for using gluortho2d function

	//glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}



