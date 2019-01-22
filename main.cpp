
#include<windows.h>
#include<GL/glut.h>
#include<math.h>


void timer(int);
void river();
void feild();
void house();
void sun();
void sky();
void cloud();
void tree();
void hay();
void smtree();
///void bird();


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    sky();
    sun();
    smtree();
    feild();
    river();
    cloud();
    tree();
    hay();
    house();
    //bird();


    glutSwapBuffers();
    ///glFlush ();

}

void init(void)
{
    glClearColor(1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,81.0,0.0,39.0,0,50); //graph matrix

   PlaySound("Oniket_Prantor.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);


    glutInitDisplayMode (GLUT_RGB | GL_DOUBLE );
    glutInitWindowSize (1000, 550); //display size
    glutInitWindowPosition (10, 10);
    glutCreateWindow ("project");
    init ();
    glutDisplayFunc(display);
    glutTimerFunc(0,timer,0);  ///timer() function will be called from hare
    glutMainLoop();
    //PlaySound(TEXT("Oniket_Prantor.wav"), NULL, SND_SYNC);
    return 0;
}

void river()
{
    ///river
    glBegin(GL_POLYGON);
     glColor3f (0.639, 0.807,.976);


     glVertex2f (23.5,14);
     glVertex2f (30,13);
     glVertex2f (35,12);
     glVertex2f (40,11);
     glVertex2f (45,10);
     glVertex2f (62,4.5);
     glVertex2f (60,4);
     glVertex2f (71,1);

     glColor3f (1.0, 1.0,1.0);
     glVertex2f (1,1);

     glColor3f (0.639, 0.807,.976);
     glVertex2f (1,19);
     glVertex2f (5,19);
     glVertex2f (11,18.5);
     glVertex2f (15,17.5);

     glVertex2f (35,15.5);
     glVertex2f (30,15);

    glEnd();

///bank

    glBegin(GL_POLYGON);
     glColor3f (.478, .317,.09);

     glVertex2f (60,4.4);
     glVertex2f (55,6);
     glVertex2f (45,9);
     glVertex2f (35,11.5);
     glVertex2f (30,12);
     glVertex2f (25,13);

     glVertex2f (23.5,14);
     glVertex2f (30,13);
     glVertex2f (35,12);
     glVertex2f (40,11);
     glVertex2f (45,10);
     glVertex2f (62,4.5);
     glVertex2f (60,4);
     glVertex2f (71,1);

     glVertex2f (69,1);
     glVertex2f (59,3.8);


     glEnd();

     ///bank2

     glBegin(GL_LINES);
     GLfloat thickness=6;
     glLineWidth(thickness);

     glVertex2f (1,19);
     glVertex2f (5,19);

     glVertex2f (5,19);
     glVertex2f (11,18.5);

     glVertex2f (11,18.5);
     glVertex2f (15,17.5);

     glVertex2f (15,17.5);
      glVertex2f (35,15.5);

     glVertex2f (35,15.5);
     glVertex2f (30,15);

     glEnd();

}

void feild()
{
    ///feild
    glBegin(GL_POLYGON);

     glColor3f (1.0, 0.807,.0);
     glVertex2f (35,15.5);

     glColor3f (0.0, 0.807,.0);
     glVertex2f (1,19);
     glVertex2f(80,17);
     glVertex2f(80,1);

     glColor3f (1.0, 0.807,.0);
     glVertex2f (71,1);
     glVertex2f (23.5,14);
     //glVertex2f (15,17.5);

    glEnd();
}
void house()
{
    ///house1

    glBegin(GL_POLYGON);       ///wall
     glColor3f (.9, .9,.5);
     glVertex2f (49.7,19.1);
     glVertex2f (46,21.1);
     glVertex2f (43.1,19);
     glVertex2f (43,17.05);
     glVertex2f (49.65,17.05);
     glEnd();

     glBegin(GL_POLYGON);       ///wall
     glColor3f (.9, .9,.5);
     glVertex2f (43.1,19);
     glVertex2f (43,17.05);
     glVertex2f (36.4,17.8);
     glVertex2f (36.4,19.5);
     glEnd();


     glBegin(GL_LINES);
     glColor3f(0.0, 0.0, 0.0);

     glVertex2f (43.1,19);
     glVertex2f (43,17.05);

     glVertex2f (36.4,17.8);
     glVertex2f (36.4,19.5);
     glEnd();


    glBegin(GL_POLYGON);        ///shed
     glColor3f (.478, .317,.0);

     glVertex2f (35.5,19.5);
     glVertex2f (38.5,21.2);

     glColor3f (.8, 0.807,.0);
     glVertex2f (42,21.5);

     glColor3f (.478, .317,.0);
     glVertex2f (47,21.5);
     glVertex2f (43,19);
     glEnd();

      glBegin(GL_POLYGON);
     glColor3f (.478, .32,.0);
     glVertex2f (46.9,21.5);
     glVertex2f (50.4,19.6);
     glVertex2f (49.7,19.1);
     glVertex2f (46,21.1);
     glEnd();

     glBegin(GL_POLYGON);           ///door
     glColor3f (.2, .2,.2);
     glVertex2f (45.85,17);
     glVertex2f (47.3,17.05);
     glVertex2f (47.3,19);
     glVertex2f (45.85,19);
     glEnd();

     glBegin(GL_POLYGON);           ///window right
     glColor3f (.2, .2,.2);
     glVertex2f (40.5,18.5);
     glVertex2f (42,18.45);
     glVertex2f (42,19.05);
     glVertex2f (40.5,19.2);
     glEnd();

    glBegin(GL_POLYGON);           ///window right
     glColor3f (.2, .2,.2);
     glVertex2f (37.5,18.6);
     glVertex2f (39,18.5);
     glVertex2f (39,19.3);
     glVertex2f (37.5,19.4);
     glEnd();

     ///house2
     glBegin(GL_POLYGON);  ///wall
     glColor3f (.9, .9,.5);
     glVertex2f (52.5,20.5);
     glVertex2f (49.4,18.5);
     glVertex2f (49.4,17);
     glVertex2f (56,16.9);
     glVertex2f (56,18.3);
     glEnd();

     glBegin(GL_POLYGON);  ///wall
     glColor3f (.9, .9,.5);
     glVertex2f (62.2,18.35);
     glVertex2f (62.25, 17.05);
     glVertex2f (56,16.9);
     glVertex2f (56,18.35);
     glEnd();

     glBegin(GL_POLYGON); ///shed
     glColor3f (.478, .4,.0);

     glVertex2f (52,20.8);
     glVertex2f (57,20.84);
     glVertex2f (59.4,20.9);
     glVertex2f (63,18.4);
     glVertex2f (56,18.3);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f (.478, .4,.0);
     glVertex2f (52,20.8);
     glVertex2f (52.5,20.5);
     glVertex2f (49.4,18.5);
     glVertex2f (48,18.7);
     glEnd();





     glBegin(GL_LINES);
     glColor3f(0.0, 0.0, 0.0);
     glVertex2f (49.4,18.5);
     glVertex2f (49.4,17);
     glEnd();

     glBegin(GL_LINES);
     glColor3f(0.0, 0.0, 0.0);
     glVertex2f (56,16.9);
     glVertex2f (56,18.3);
     glEnd();

     glBegin(GL_LINES);
     glColor3f(0.0, 0.0, 0.0);
     glVertex2f (62.2,18.35);
     glVertex2f (62.25, 17.05);
     glEnd();

     glBegin(GL_POLYGON);  ///door
     glColor3f (.2, .2,.2);
     glVertex2f (51.5,16.95);
     glVertex2f (53,16.95);
     glVertex2f (53,18.6);
     glVertex2f (51.5,18.6);
     glEnd();



}
float y_position = 17;
float x=-10;
float xa=10;
void sun()
{
    glBegin(GL_POLYGON);
     glColor3f (1.0, 1.0, 0.7);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(6+3.2*cos(3.14159*i/180),y_position+2.8*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();
}
void cloud()
{
    ///cloud 1
    glBegin(GL_POLYGON);          ///left circle 1
     glColor3f (1.0, 1.0, 0.9);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(x+4*cos(3.14159*i/180),30+1.5*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

        glBegin(GL_POLYGON);          ///left circle 1
     //glColor3f (.7, .7, 0.7);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f((x+8)+4*cos(3.14159*i/180),30+1.5*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

        glBegin(GL_POLYGON);          ///left circle 1
        //glColor3f (.7, .7, 0.7);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f((x+4)+3*cos(3.14159*i/180),30+2*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

                glBegin(GL_POLYGON);          ///left circle 1
     //glColor3f (.7, .7, 0.7);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f((x+4)+3.7*cos(3.14159*i/180),31.5+2*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

        ///cloud 2

        glBegin(GL_POLYGON);          ///left circle 1
     glColor3f (1.0, 1.0, 0.9);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(xa+4*cos(3.14159*i/180),35+1.5*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

        glBegin(GL_POLYGON);          ///left circle 1
     //glColor3f (.7, .7, 0.7);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f((xa+8)+4*cos(3.14159*i/180),35+1.5*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

        glBegin(GL_POLYGON);          ///left circle 1
        //glColor3f (.7, .7, 0.7);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f((xa+4)+3*cos(3.14159*i/180),35+2*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

                glBegin(GL_POLYGON);          ///left circle 1
     //glColor3f (.7, .7, 0.7);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f((xa+4)+3.8*cos(3.14159*i/180),37+2*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

}
void sky()
{
    glBegin(GL_POLYGON);

    glColor3f (0.739, 0.907,1.0);
    glVertex2f(80,17);

    glColor3f (0.9, 0.907,1.0);
     glVertex2f (80,39);

     glColor3f (0.739, 0.907,1.0);
     glVertex2f(1,39);

     glColor3f (0.91, 0.907,1.0);
     glVertex2f (1,19);

     glEnd();
}



void tree()
{
    glBegin(GL_POLYGON);        ///trunk

glColor3f (.478, .317,.09);
    glVertex2f(60.5,22.2);
     glVertex2f (60,23);
     glVertex2f(59,24.1);
     glVertex2f (58.5,23.9);
     glVertex2f (60,21);
     glVertex2f (60.1,20.2);
     glVertex2f (62,19);
     glVertex2f (62.1,22);
     glVertex2f (62,25);
     glVertex2f (61,25);
     glVertex2f (60.9,23);

     glEnd();

     glBegin(GL_POLYGON);
     glColor3f (.478, .317,.09);
    glVertex2f(62,21.7);
     glVertex2f (64.2,24.1);
     glVertex2f(64,24.5);
     glVertex2f (62,23);
     glEnd();

     ///leafs
     glBegin(GL_POLYGON);  ///triangle
     glColor3f (.0, .8,.0);
    glVertex2f(55,24);
     glVertex2f (69,25);
     glVertex2f(61,32);
     glEnd();

      glBegin(GL_POLYGON);          ///right circle 1
     glColor3f (.0, .8, 0.0);
        for(int i=0;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(66+3.5*cos(3.14159*i/180),26+2.5*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

        glBegin(GL_POLYGON);          ///left circle 1
     glColor3f (.0, .8, 0.0);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(57+3.5*cos(3.14159*i/180),26+2.5*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

        glBegin(GL_POLYGON);          ///small
     glColor3f (.0, .8, 0.0);
        for(int i=0;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(64+2.2*cos(3.14159*i/180),30+1.9*sin(3.14159*i/180));       //main point + radius
        }

         for(int i=0;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(59+2.2*cos(3.14159*i/180),30+1.9*sin(3.14159*i/180));       //main point + radius
        }
        glColor3f (.0, .8, 0.15);

         for(int i=0;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(61.5+2.2*cos(3.14159*i/180),31+1.9*sin(3.14159*i/180));       //main point + radius
        }

         for(int i=0;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(66.5+2*cos(3.14159*i/180),28+1.9*sin(3.14159*i/180));       //main point + radius
        }

         for(int i=0;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(57+2*cos(3.14159*i/180),28+1.9*sin(3.14159*i/180));       //main point + radius
        }
                                                                                 //3.14159*i/180   convert degree to radian
        glEnd();

        glBegin(GL_LINES);          ///curve Lines
     glColor3f (.0, .1, .0);
        for(int i=200;i<290;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(57+3.4*cos(3.14159*i/180),26.5+2.4*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

        glBegin(GL_LINES);          ///curve Lines
     glColor3f (.0, .1, .0);
        for(int i=60;i<120;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(61.5+2.5*cos(3.14159*i/180),29+2.6*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

        glBegin(GL_LINES);          ///curve Lines
     glColor3f (.0, .1, .0);
        for(int i=245;i<320;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(65+3.4*cos(3.14159*i/180),26.5+2.4*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

         glBegin(GL_LINES);          ///curve Lines
     glColor3f (.0, .1, .0);
        for(int i=285;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(64.6+3.4*cos(3.14159*i/180),28.5+2.4*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();



}
void hay()
{
    glBegin(GL_POLYGON);   ///stick
        glColor3f (.478, .317,.09);

        glVertex2d(64.5,21.3);
        glVertex2d(64.3,22.35);
        glVertex2d(64.8,22.35);
        glVertex2d(65.1,21.3);

        glEnd();

    glBegin(GL_POLYGON);        ///up
     glColor3f (.91, 0.65,.0);
        for(int i=1;i<180;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(64.7+3.2*cos(3.14159*i/180),18.5+3*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian

        glEnd();

        glBegin(GL_POLYGON);        ///bottom
        glColor3f (.91, 0.65,.0);
        glVertex2d(67.9,18.6);
        glVertex2d(67.9,17.5);

        glColor3f (.91, 0.55,.0);
        glVertex2d(68.2,16.8);
        glVertex2d(66.7,16.3);
        glVertex2d(63.5,16.5);

        glColor3f (.91, 0.65,.0);
        glVertex2f (62.25, 17.05);
        glVertex2d(61.4,17);
        glVertex2d(61.3,18.6);

        glEnd();

         glBegin(GL_LINES);        ///Lines

     glColor3f (.0, 0.1,.0);
        for(int i=1;i<75;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(64.7+3.1*cos(3.14159*i/180),18.5+2.9*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

}

void smtree()
{
    glBegin(GL_POLYGON);          /// 1
     glColor3f (.0, .7, 0.0);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(10+6*cos(3.14159*i/180),19+1*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();
}
void bird()
{
      glBegin(GL_POLYGON);   ///stick
        glColor3f (.0, .3,.09);
        glVertex2d(23,6.6);
        glVertex2d(21,8);
        glVertex2d(23,5);
        glVertex2d(27,3);
        glVertex2d(30,3);
        glVertex2d(27,4);
    glEnd();

}

void timer(int)
{
    glutPostRedisplay();                        ///for  call display function again
    glutTimerFunc(1000/60,timer,0);             ///in one second 60 frame, timer function will call again and again, 0 for no parametre

    if(y_position<42)
    {
         y_position += .018;

    }

    else if(y_position>=42)
    {
        y_position = 17;
    }

    if(x<80)
         {
             x += .021;
         }
    if(x>=80)
         {
             x=-10;
         }
    if(xa<90)
         {
             xa += .022;
         }
    if(xa>=90)
         {
             xa=-10;
         }


}

