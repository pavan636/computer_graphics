#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void drawAst();
void drawStar();
int r1 = 2500;
int r2 = 1700;
int c[4], n = 3;
int my = -150;
int tkn = 0;
float ani, anj, mm;
float q, r, s, kl, kk;
void init()
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glShadeModel(GL_FLAT);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-5000, 5000, -5000, 5000);
    //glEnable(GL_MAP1_VERTEX_3);
    glFlush();
}

void delaypacket()
{
    int i, j;
    for (i = 0; i < 850; i++)
        ;
}
// TO PRINT THE CHARACTER ON THE DISPLAY
void writeP(int x, int y, char* buffer1)
{
    int i;
    glRasterPos2f(x, y);
    for (i = 0; buffer1[i] != '\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, buffer1[i]);
}



void anaphase()
{
    int cnt = 1600; float temp1 = 0.2, temp2 = 0.5, tem = temp1;
    float i = ani + 90, j = anj;
    glColor3f(0, 0, 0);
    glBegin(GL_POINTS);
    glVertex2f(500 + i, 500 + j);
    glVertex2f(-600 + ani, 800 + anj);
    //glVertex2f(1000+)
    glEnd();
    glFlush();
    //this is to remove extra part of 3rd chrmosome that appears
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(1000 + mm + 800, 1000 + anj);
    glVertex2f(800 + mm + 800, 1400 + anj);
    glVertex2f(1200 + mm + 800, 1400 + anj);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(1000 + mm + 800, 1000 + j);
    glVertex2f(800 + mm + 800, 600 + j);
    glVertex2f(1200 + mm + 800, 600 + j);
    glEnd();
    // glColor3f(1,1,0);
    glBegin(GL_POINTS);
    glVertex2f(1000 + mm + 800, 1000 + anj);
    glVertex2f(1000 + mm + 800, 1000 + j - 450);
    glEnd();
    glFlush();
    glColor3f(1, 1, 1);
    char buffer1[20] = "Asters are formed";
    writeP(2500, 1000, buffer1);
    glFlush();
    //glColor3f(0,0,0);

    char buffer2[200] = "Chromatin network gets condensed,to form chromosomes,which moves towards the equitorial plane";

    writeP(-3000, -3000, buffer2);
    glFlush();
    char buffer3[100] = "Chromosomes are split along the centromere and they move towards the respective poles";
    glColor3f(0, 0, 0);
    writeP(-3000, -2700, buffer3);
    glFlush();
    while (cnt > 0)
    {
        glColor3f(0, 0, 1);
        //glPointSize(30);
        glBegin(GL_POLYGON);
        glVertex2f(500 + i, 500 + anj);
        glVertex2f(300 + i, 900 + anj);
        glVertex2f(700 + i, 900 + anj);
        glEnd();


        glColor3f(0, 0, 1);
        glBegin(GL_POLYGON);
        glVertex2f(-600 + ani, 800 + anj);
        glVertex2f(-400 + ani, 1200 + anj);
        glVertex2f(-800 + ani, 1200 + anj);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(-600 + i - 90 + tem, 800 + j);
        glVertex2f(-400 + i - 90 + tem, 400 + j);
        glVertex2f(-800 + i - 90 + tem, 400 + j);
        glEnd();
        glColor3f(1, 1, 0);
        glPointSize(5);
        glBegin(GL_POINTS);
        glVertex2f(-600 + i - 90 + tem, 800 + j);
        glVertex2f(-600 + ani, 800 + anj);
        glEnd();
        glFlush();

        //delaypacket();


        glColor3f(0, 0, 1);
        glBegin(GL_POLYGON);
        glVertex2f(500 + i, 500 + j);
        glVertex2f(300 + i, 100 + j);
        glVertex2f(700 + i, 100 + j);
        glEnd();

        glColor3f(1.0, 1.0, 0.0);
        glPointSize(5);
        glBegin(GL_POINTS);
        glVertex2f(500 + i, 500 + anj);
        glEnd();
        glPointSize(5);
        glBegin(GL_POINTS);
        glVertex2f(500 + i, 500 + j);
        glEnd();
        glFlush();
        glColor3f(0, 0, 1);
        glBegin(GL_POLYGON);
        glVertex2f(1000 + mm + 800, 1000 + anj);
        glVertex2f(800 + mm + 800, 1400 + anj);
        glVertex2f(1200 + mm + 800, 1400 + anj);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(1000 + mm + 800, 1000 + j - 450);
        glVertex2f(800 + mm + 800, 600 + j - 450);
        glVertex2f(1200 + mm + 800, 600 + j - 450);
        glEnd();
        glColor3f(1, 1, 0);
        glBegin(GL_POINTS);
        glVertex2f(1000 + mm + 800, 1000 + anj);
        glVertex2f(1000 + mm + 800, 1000 + j - 450);
        glEnd();
        glFlush();



        delaypacket();


        //to mask one of the aster
        glColor3f(0, 0, 0);
        glBegin(GL_POINTS);
        glVertex2f(kk + 200, kl - 180);
        glEnd();
        //glPointSize(30);
        glBegin(GL_POLYGON);
        glVertex2f(500 + i, 500 + anj);
        glVertex2f(300 + i, 900 + anj);
        glVertex2f(700 + i, 900 + anj);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(500 + i, 500 + j);
        glVertex2f(300 + i, 100 + j);
        glVertex2f(700 + i, 100 + j);
        glEnd();

        //glColor3f(1.0,1.0,0.0);
        glPointSize(5);
        glBegin(GL_POINTS);
        glVertex2f(500 + i, 500 + anj);
        glEnd();
        glPointSize(5);
        glBegin(GL_POINTS);
        glVertex2f(500 + i, 500 + j);
        glEnd();
        glFlush();

        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(-600 + ani, 800 + anj);
        glVertex2f(-400 + ani, 1200 + anj);
        glVertex2f(-800 + ani, 1200 + anj);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(-600 + i - 90 + tem, 800 + j);
        glVertex2f(-400 + i - 90 + tem, 400 + j);
        glVertex2f(-800 + i - 90 + tem, 400 + j);
        glEnd();
        //glColor3f(1,1,0);
        glPointSize(5);
        glBegin(GL_POINTS);
        glVertex2f(-600 + i - 90 + tem, 800 + j);
        glVertex2f(-600 + ani, 800 + anj);
        glEnd();

        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(1000 + mm + 800, 1000 + anj);
        glVertex2f(800 + mm + 800, 1400 + anj);
        glVertex2f(1200 + mm + 800, 1400 + anj);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(1000 + mm + 800, 1000 + j - 450);
        glVertex2f(800 + mm + 800, 600 + j - 450);
        glVertex2f(1200 + mm + 800, 600 + j - 450);
        glEnd();
        //glColor3f(1,1,0);
        glBegin(GL_POINTS);
        glVertex2f(1000 + mm + 800, 1000 + anj);
        glVertex2f(1000 + mm + 800, 1000 + j - 450);
        glEnd();
        glFlush();


        if (cnt % 300 == 0)
        {
            glColor3f(1, 1, 1);
            glPointSize(5);
            glBegin(GL_POINTS);
            glVertex2f(500 + i, 700 + j);
            glEnd();
            glBegin(GL_POINTS);
            glVertex2f(-600 + i - 90 + tem, 1000 + j);
            glVertex2f(-600 + ani, 600 + anj);
            glEnd();
            glBegin(GL_POINTS);
            glVertex2f(500 + i, 300 + anj);
            glVertex2f(1000 + mm + 800, 800 + anj);
            glVertex2f(1000 + mm + 800, 1200 + j - 450);
            glEnd();
            glFlush();
        }

        glFlush();
        tem += temp1;
        ani += temp1;
        anj += temp2;
        j -= temp2;
        mm -= temp2;
        cnt--;

    }

    //drawing final separated chromosomes
    glColor3f(0, 0, 1);
    //glPointSize(30);
    glBegin(GL_POLYGON);
    glVertex2f(500 + i, 500 + anj);
    glVertex2f(300 + i, 900 + anj);
    glVertex2f(700 + i, 900 + anj);
    glEnd();


    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(-600 + ani, 800 + anj);
    glVertex2f(-400 + ani, 1200 + anj);
    glVertex2f(-800 + ani, 1200 + anj);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-600 + i - 90 + tem, 800 + j);
    glVertex2f(-400 + i - 90 + tem, 400 + j);
    glVertex2f(-800 + i - 90 + tem, 400 + j);
    glEnd();
    glColor3f(1, 1, 0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2f(-600 + i - 90 + tem, 800 + j);
    glVertex2f(-600 + ani, 800 + anj);
    glEnd();
    glFlush();

    //delaypacket();


    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(500 + i, 500 + j);
    glVertex2f(300 + i, 100 + j);
    glVertex2f(700 + i, 100 + j);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2f(500 + i, 500 + anj);
    glEnd();
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2f(500 + i, 500 + j);
    glEnd();
    glFlush();
    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(1000 + mm + 800, 1000 + anj);
    glVertex2f(800 + mm + 800, 1400 + anj);
    glVertex2f(1200 + mm + 800, 1400 + anj);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(1000 + mm + 800, 1000 + j - 450);
    glVertex2f(800 + mm + 800, 600 + j - 450);
    glVertex2f(1200 + mm + 800, 600 + j - 450);
    glEnd();
    glColor3f(1, 1, 0);
    glBegin(GL_POINTS);
    glVertex2f(1000 + mm + 800, 1000 + anj);
    glVertex2f(1000 + mm + 800, 1000 + j - 450);
    glEnd();
    glFlush();
    glColor3f(1, 1, 1);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2f(500 + i, 700 + j);
    glEnd();
    glBegin(GL_POINTS);
    glVertex2f(-600 + i - 90 + tem, 1000 + j);
    glVertex2f(-600 + ani, 600 + anj);
    glEnd();
    glBegin(GL_POINTS);
    glVertex2f(500 + i, 300 + anj);
    glVertex2f(1000 + mm + 800, 800 + anj);
    glVertex2f(1000 + mm + 800, 1200 + j - 450);
    glEnd();
    glFlush();


}

void extra(int l, int m)
{
    float a = 300 + l, b = 800 + l, c;
    float i = l, j = m, temp1 = 0.3, temp2 = 0.5;
    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(-600 + i, 800 + j);
    glVertex2f(-400 + i, 1200 + j);
    glVertex2f(-800 + i, 1200 + j);
    glVertex2f(-400 + i, 400 + j);
    glVertex2f(-800 + i, 400 + j);
    glEnd();
    glColor3f(1, 1, 0);
    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex2f(-600 + i, 800 + j);
    glEnd();
    glFlush();
    while (a > r && b < s)
    {
        glColor3f(0, 0, 1);
        glPointSize(30);
        glBegin(GL_POLYGON);
        glVertex2f(500 + i, 500 + j);
        glVertex2f(300 + i, 900 + j);
        glVertex2f(700 + i, 900 + j);
        glVertex2f(300 + i, 100 + j);
        glVertex2f(700 + i, 100 + j);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(1000 - i, 1000 + j);
        glVertex2f(800 - i, 1400 + j);
        glVertex2f(1200 - i, 1400 + j);
        glVertex2f(800 - i, 600 + j);
        glVertex2f(1200 - i, 600 + j);
        glEnd();
        glColor3f(1.0, 1.0, 0.0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(500 + i, 500 + j);
        glEnd();
        glBegin(GL_POINTS);
        glVertex2f(1000 - i, 1000 + j);
        glEnd();
        glFlush();

        delaypacket();
        glColor3f(0, 0, 0);
        glPointSize(30);
        glBegin(GL_POLYGON);
        glVertex2f(500 + i, 500 + j);
        glVertex2f(300 + i, 900 + j);
        glVertex2f(700 + i, 900 + j);
        glVertex2f(300 + i, 100 + j);
        glVertex2f(700 + i, 100 + j);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(1000 - i, 1000 + j);
        glVertex2f(800 - i, 1400 + j);
        glVertex2f(1200 - i, 1400 + j);
        glVertex2f(800 - i, 600 + j);
        glVertex2f(1200 - i, 600 + j);
        glEnd();
        //glColor3f(1.0,1.0,0.0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(500 + i, 500 + j);
        glEnd();
        glBegin(GL_POINTS);
        glVertex2f(1000 - i, 1000 + j);
        glEnd();
        glFlush();
        a -= temp1;
        b -= temp1;
        i -= temp1;
    }
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-600 + l, 800 + m);
    glVertex2f(-400 + l, 1200 + m);
    glVertex2f(-800 + l, 1200 + m);
    glVertex2f(-400 + l, 400 + m);
    glVertex2f(-800 + l, 400 + m);
    glEnd();
    //glColor3f(1,1,0);
    glBegin(GL_POINTS);
    glVertex2f(-600 + l, 800 + m);
    glEnd();
    glFlush();
    while (a > r)
    {
        glColor3f(0, 0, 1);
        glPointSize(30);
        glBegin(GL_POLYGON);
        glVertex2f(500 + i, 500 + j);
        glVertex2f(300 + i, 900 + j);
        glVertex2f(700 + i, 900 + j);
        glVertex2f(300 + i, 100 + j);
        glVertex2f(700 + i, 100 + j);
        glEnd();
        glColor3f(1.0, 1.0, 0.0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(500 + i, 500 + j);
        glEnd();

        delaypacket();

        glColor3f(0, 0, 0);
        glPointSize(30);
        glBegin(GL_POLYGON);
        glVertex2f(500 + i, 500 + j);
        glVertex2f(300 + i, 900 + j);
        glVertex2f(700 + i, 900 + j);
        glVertex2f(300 + i, 100 + j);
        glVertex2f(700 + i, 100 + j);
        glEnd();
        //glColor3f(1.0,1.0,0.0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(500 + i, 500 + j);
        glEnd();
        a -= temp1;
        i -= temp1;
    }

    glColor3f(0, 0, 1);
    glPointSize(30);
    glBegin(GL_POLYGON);
    glVertex2f(500 + i, 500 + j);
    glVertex2f(300 + i, 900 + j);
    glVertex2f(700 + i, 900 + j);
    glVertex2f(300 + i, 100 + j);
    glVertex2f(700 + i, 100 + j);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(1000 - i, 1000 + j);
    glVertex2f(800 - i, 1400 + j);
    glVertex2f(1200 - i, 1400 + j);
    glVertex2f(800 - i, 600 + j);
    glVertex2f(1200 - i, 600 + j);
    glEnd();
    glColor3f(1.0, 1.0, 0.0);
    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex2f(500 + i, 500 + j);
    glEnd();
    glBegin(GL_POINTS);
    glVertex2f(1000 - i, 1000 + j);
    glEnd();
    glFlush();
    mm = i;
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-600 + i, 800 + j);
    glVertex2f(-400 + i, 1200 + j);
    glVertex2f(-800 + i, 1200 + j);
    glVertex2f(-400 + i, 400 + j);
    glVertex2f(-800 + i, 400 + j);
    glEnd();
    //glColor3f(1,1,0);
    glBegin(GL_POINTS);
    glVertex2f(-600 + i, 800 + j);
    glEnd();
    glFlush();
    int cnt = 800;
    while (cnt > 0)
    {
        glColor3f(0, 0, 1);
        glBegin(GL_POLYGON);
        glVertex2f(-600 + i, 800 + j);
        glVertex2f(-400 + i, 1200 + j);
        glVertex2f(-800 + i, 1200 + j);
        glVertex2f(-400 + i, 400 + j);
        glVertex2f(-800 + i, 400 + j);
        glEnd();
        glColor3f(0, 0, 1);
        //glPointSize(30);
        glBegin(GL_POLYGON);
        glVertex2f(500 + i, 500 + j);
        glVertex2f(300 + i, 900 + j);
        glVertex2f(700 + i, 900 + j);
        glVertex2f(300 + i, 100 + j);
        glVertex2f(700 + i, 100 + j);
        glEnd();
        glColor3f(1, 1, 0);
        glBegin(GL_POINTS);
        glVertex2f(-600 + i, 800 + j);
        glEnd();
        glColor3f(1.0, 1.0, 0.0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(500 + i, 500 + j);
        glEnd();
        glFlush();
        delaypacket();
        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(-600 + i, 800 + j);
        glVertex2f(-400 + i, 1200 + j);
        glVertex2f(-800 + i, 1200 + j);
        glVertex2f(-400 + i, 400 + j);
        glVertex2f(-800 + i, 400 + j);
        glEnd();
        //glColor3f(1,1,0);
        glBegin(GL_POINTS);
        glVertex2f(-600 + i, 800 + j);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(500 + i, 500 + j);
        glVertex2f(300 + i, 900 + j);
        glVertex2f(700 + i, 900 + j);
        glVertex2f(300 + i, 100 + j);
        glVertex2f(700 + i, 100 + j);
        glEnd();
        //glColor3f(1.0,1.0,0.0);
        glPointSize(10);
        glBegin(GL_POINTS);
        glVertex2f(500 + i, 500 + j);
        glEnd();
        glFlush();
        cnt--;
        i -= temp1;
        l -= temp1;
    }

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(500 + i, 500 + j);
    glVertex2f(300 + i, 900 + j);
    glVertex2f(700 + i, 900 + j);
    glVertex2f(300 + i, 100 + j);
    glVertex2f(700 + i, 100 + j);
    glEnd();
    glColor3f(1.0, 1.0, 0.0);
    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex2f(500 + i, 500 + j);
    glEnd();
    cnt = 300;
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-600 + i, 800 + j);
    glVertex2f(-400 + i, 1200 + j);
    glVertex2f(-800 + i, 1200 + j);
    glVertex2f(-400 + i, 400 + j);
    glVertex2f(-800 + i, 400 + j);
    glEnd();
    //glColor3f(1,1,0);
    glBegin(GL_POINTS);
    glVertex2f(-600 + i, 800 + j);
    glEnd();
    glFlush();
    while (cnt > 0)
    {
        glColor3f(0, 0, 1);
        glBegin(GL_POLYGON);
        glVertex2f(-600 + i, 800 + j);
        glVertex2f(-400 + i, 1200 + j);
        glVertex2f(-800 + i, 1200 + j);
        glVertex2f(-400 + i, 400 + j);
        glVertex2f(-800 + i, 400 + j);
        glEnd();
        glColor3f(1, 1, 0);
        glBegin(GL_POINTS);
        glVertex2f(-600 + i, 800 + j);
        glEnd();
        glFlush();
        delaypacket();
        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(-600 + i, 800 + j);
        glVertex2f(-400 + i, 1200 + j);
        glVertex2f(-800 + i, 1200 + j);
        glVertex2f(-400 + i, 400 + j);
        glVertex2f(-800 + i, 400 + j);
        glEnd();
        //glColor3f(1,1,0);
        glBegin(GL_POINTS);
        glVertex2f(-600 + i, 800 + j);
        glEnd();
        glFlush();
        i -= temp1;
        cnt--;
    }
    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(-600 + i, 800 + j);
    glVertex2f(-400 + i, 1200 + j);
    glVertex2f(-800 + i, 1200 + j);
    glVertex2f(-400 + i, 400 + j);
    glVertex2f(-800 + i, 400 + j);
    glEnd();
    glColor3f(1, 1, 0);
    glBegin(GL_POINTS);
    glVertex2f(-600 + i, 800 + j);
    glEnd();
    glFlush();
    ani = i, anj = j;
}

void moved()
{
    float a, b, c;
    float i, j, temp1 = 0.3, temp2 = 0.5;
    i = 400; j = 400;
    a = 500;
    b = 1000;
    c = 800;
    glColor3f(1, 1, 1);
    char buffer1[200] = "It consists of a nuclear membrane,a nucleolus and a thread like Chromatin network";
    writeP(-3000, -3000, buffer1);
    glFlush();
    char buffer[60] = "Nuclear membrane disappears,nucleolous disintegrates.";
    writeP(-1500, -3300, buffer);
    glFlush();
    char buffer2[200] = "Chromatin network gets condensed,to form chromosomes,which moves towards the equitorial plane";
    glColor3f(0, 0, 0);
    writeP(-3000, -3000, buffer2);
    glFlush();
    while (a > my || b > my || c > my)
        //for(i=400,j=400;i>-50,j>-50;i=i-temp1,j=j-temp2)
    {
        //printf("%f\t%f\n",a,b);
        if (a > my && b > my && c > my)
        {
            glColor3f(0, 0, 1);
            glPointSize(30);
            glBegin(GL_POLYGON);
            glVertex2f(500 + i, 500 + j);
            glVertex2f(300 + i, 900 + j);
            glVertex2f(700 + i, 900 + j);
            glVertex2f(300 + i, 100 + j);
            glVertex2f(700 + i, 100 + j);
            glEnd();
            glBegin(GL_POLYGON);
            glVertex2f(1000 + i, 1000 + j);
            glVertex2f(800 + i, 1400 + j);
            glVertex2f(1200 + i, 1400 + j);
            glVertex2f(800 + i, 600 + j);
            glVertex2f(1200 + i, 600 + j);
            glEnd();
            glColor3f(1.0, 1.0, 0.0);
            glPointSize(10);
            glBegin(GL_POINTS);
            glVertex2f(500 + i, 500 + j);
            glEnd();
            glBegin(GL_POINTS);
            glVertex2f(1000 + i, 1000 + j);
            glEnd();
            glFlush();
            glColor3f(0, 0, 1);
            glBegin(GL_POLYGON);
            glVertex2f(-600 + i, 800 + j);
            glVertex2f(-400 + i, 1200 + j);
            glVertex2f(-800 + i, 1200 + j);
            glVertex2f(-400 + i, 400 + j);
            glVertex2f(-800 + i, 400 + j);
            glEnd();
            glColor3f(1, 1, 0);
            glPointSize(10);
            glBegin(GL_POINTS);
            glVertex2f(-600 + i, 800 + j);
            glEnd();
            glFlush();

            delaypacket();

            glColor3f(0, 0, 0);
            glPointSize(30);
            glBegin(GL_POLYGON);
            glVertex2f(500 + i, 500 + j);
            glVertex2f(300 + i, 900 + j);
            glVertex2f(700 + i, 900 + j);
            glVertex2f(300 + i, 100 + j);
            glVertex2f(700 + i, 100 + j);
            glEnd();
            glBegin(GL_POLYGON);
            glVertex2f(1000 + i, 1000 + j);
            glVertex2f(800 + i, 1400 + j);
            glVertex2f(1200 + i, 1400 + j);
            glVertex2f(800 + i, 600 + j);
            glVertex2f(1200 + i, 600 + j);
            glEnd();
            glPointSize(10);
            glBegin(GL_POINTS);
            glVertex2f(500 + i, 500 + j);
            glEnd();
            glBegin(GL_POINTS);
            glVertex2f(1000 + i, 1000 + j);
            glEnd();
            glColor3f(0, 0, 0);
            glBegin(GL_POLYGON);
            glVertex2f(-600 + i, 800 + j);
            glVertex2f(-400 + i, 1200 + j);
            glVertex2f(-800 + i, 1200 + j);
            glVertex2f(-400 + i, 400 + j);
            glVertex2f(-800 + i, 400 + j);
            glEnd();
            //glColor3f(1,1,0);
            glPointSize(10);
            glBegin(GL_POINTS);
            glVertex2f(-600 + i, 800 + j);
            glEnd();
            glFlush();
        }
        else if (a > my)
        {
            glColor3f(0, 0, 1);
            //glPointSize(30);
            glBegin(GL_POLYGON);
            glVertex2f(500 + i, 500 + j);
            glVertex2f(300 + i, 900 + j);
            glVertex2f(700 + i, 900 + j);
            glVertex2f(300 + i, 100 + j);
            glVertex2f(700 + i, 100 + j);
            glEnd();
            glColor3f(1.0, 1.0, 0.0);
            glPointSize(10);
            glBegin(GL_POINTS);
            glVertex2f(500 + i, 500 + j);
            glEnd();
            glColor3f(0, 0, 1);
            glBegin(GL_POLYGON);
            glVertex2f(-600 + i, 800 + j);
            glVertex2f(-400 + i, 1200 + j);
            glVertex2f(-800 + i, 1200 + j);
            glVertex2f(-400 + i, 400 + j);
            glVertex2f(-800 + i, 400 + j);
            glEnd();
            glColor3f(1, 1, 0);
            glBegin(GL_POINTS);
            glVertex2f(-600 + i, 800 + j);
            glEnd();
            glFlush();
            glColor3f(0, 0, 1);
            //glPointSize(30);
            glBegin(GL_POLYGON);
            glVertex2f(1000 + i, 1000 + my);
            glVertex2f(800 + i, 1400 + my);
            glVertex2f(1200 + i, 1400 + my);
            glVertex2f(800 + i, 600 + my);
            glVertex2f(1200 + i, 600 + my);
            glEnd();

            glColor3f(1.0, 1.0, 0.0);
            glPointSize(10);
            glBegin(GL_POINTS);
            glVertex2f(1000 + i, 1000 + my);
            glEnd();
            glFlush();

            delaypacket();

            glColor3f(0, 0, 0);
            //glPointSize(30);
            glBegin(GL_POLYGON);
            glVertex2f(500 + i, 500 + j);
            glVertex2f(300 + i, 900 + j);
            glVertex2f(700 + i, 900 + j);
            glVertex2f(300 + i, 100 + j);
            glVertex2f(700 + i, 100 + j);
            glEnd();
            //glColor3f(1.0,1.0,0.0);
            glPointSize(10);
            glBegin(GL_POINTS);
            glVertex2f(500 + i, 500 + j);
            glEnd();
            //glColor3f(0,0,1);
            glBegin(GL_POLYGON);
            glVertex2f(-600 + i, 800 + j);
            glVertex2f(-400 + i, 1200 + j);
            glVertex2f(-800 + i, 1200 + j);
            glVertex2f(-400 + i, 400 + j);
            glVertex2f(-800 + i, 400 + j);
            glEnd();
            //glColor3f(1,1,0);
            glBegin(GL_POINTS);
            glVertex2f(-600 + i, 800 + j);
            glEnd();
            glFlush();
            //glColor3f(0,0,1);
            //glPointSize(30);
            glBegin(GL_POLYGON);
            glVertex2f(1000 + i, 1000 + my);
            glVertex2f(800 + i, 1400 + my);
            glVertex2f(1200 + i, 1400 + my);
            glVertex2f(800 + i, 600 + my);
            glVertex2f(1200 + i, 600 + my);
            glEnd();

            //glColor3f(1.0,1.0,0.0);
            glPointSize(10);
            glBegin(GL_POINTS);
            glVertex2f(1000 + i, 1000 + my);
            glEnd();
        }
        else if (b > my)
        {
            glColor3f(0, 0, 1);
            glPointSize(30);
            glBegin(GL_POLYGON);
            glVertex2f(1000 + i, 1000 + j);
            glVertex2f(800 + i, 1400 + j);
            glVertex2f(1200 + i, 1400 + j);
            glVertex2f(800 + i, 600 + j);
            glVertex2f(1200 + i, 600 + j);
            glEnd();

            glColor3f(1.0, 1.0, 0.0);
            glPointSize(10);
            glBegin(GL_POINTS);
            glVertex2f(1000 + i, 1000 + j);
            glEnd();
            glColor3f(0, 0, 1);
            glBegin(GL_POLYGON);
            glVertex2f(-600 + i, 800 + j);
            glVertex2f(-400 + i, 1200 + j);
            glVertex2f(-800 + i, 1200 + j);
            glVertex2f(-400 + i, 400 + j);
            glVertex2f(-800 + i, 400 + j);
            glEnd();
            glColor3f(1, 1, 0);
            glBegin(GL_POINTS);
            glVertex2f(-600 + i, 800 + j);
            glEnd();
            glFlush();
            glColor3f(0, 0, 1);
            glBegin(GL_POLYGON);
            glVertex2f(500 + i, 500 + my);
            glVertex2f(300 + i, 900 + my);
            glVertex2f(700 + i, 900 + my);
            glVertex2f(300 + i, 100 + my);
            glVertex2f(700 + i, 100 + my);
            glEnd();
            glColor3f(1.0, 1.0, 0.0);
            glPointSize(10);
            glBegin(GL_POINTS);
            glVertex2f(500 + i, 500 + my);
            glEnd();
            glFlush();
            delaypacket();
            glColor3f(0, 0, 0);
            glBegin(GL_POLYGON);
            glVertex2f(-600 + i, 800 + j);
            glVertex2f(-400 + i, 1200 + j);
            glVertex2f(-800 + i, 1200 + j);
            glVertex2f(-400 + i, 400 + j);
            glVertex2f(-800 + i, 400 + j);
            glEnd();
            //glColor3f(1,1,0);
            glBegin(GL_POINTS);
            glVertex2f(-600 + i, 800 + j);
            glEnd();
            glFlush();
            glColor3f(0, 0, 0);
            glPointSize(30);
            glBegin(GL_POLYGON);
            glVertex2f(1000 + i, 1000 + j);
            glVertex2f(800 + i, 1400 + j);
            glVertex2f(1200 + i, 1400 + j);
            glVertex2f(800 + i, 600 + j);
            glVertex2f(1200 + i, 600 + j);
            glEnd();

            //glColor3f(1.0,1.0,0.0);
            glPointSize(10);
            glBegin(GL_POINTS);
            glVertex2f(1000 + i, 1000 + j);
            glEnd();

            glBegin(GL_POLYGON);
            glVertex2f(500 + i, 500 + my);
            glVertex2f(300 + i, 900 + my);
            glVertex2f(700 + i, 900 + my);
            glVertex2f(300 + i, 100 + my);
            glVertex2f(700 + i, 100 + my);
            glEnd();
            glColor3f(0.0, 0.0, 0.0);
            glPointSize(10);
            glBegin(GL_POINTS);
            glVertex2f(500 + i, 500 + my);
            glEnd();

        }
        glFlush();
        i = i - temp1;
        j = j - temp2;
        a -= temp2;
        b -= temp2;
        c -= temp2;
    }

    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(500 + i, 500 + j);
    glVertex2f(300 + i, 900 + j);
    glVertex2f(700 + i, 900 + j);
    glVertex2f(300 + i, 100 + j);
    glVertex2f(700 + i, 100 + j);
    glEnd();
    //glColor3f(1,1,0);
    glBegin(GL_POINTS);
    glVertex2f(500 + i, 500 + j);
    glEnd();
    glFlush();
    //glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2f(1000 + i, 1000 + j);
    glVertex2f(800 + i, 1400 + j);
    glVertex2f(1200 + i, 1400 + j);
    glVertex2f(800 + i, 600 + j);
    glVertex2f(1200 + i, 600 + j);
    glEnd();
    //mm=i;
    glColor3f(1, 1, 0);
    glBegin(GL_POINTS);
    //glVertex2f(1000+i,1000+j);
    glEnd();
    glFlush();
    /* glColor3f(0,0,1);
        glBegin(GL_POLYGON);
            glVertex2f(-600+i,800+j);
            glVertex2f(-400+i,1200+j);
            glVertex2f(-800+i,1200+j);
            glVertex2f(-400+i,400+j);
            glVertex2f(-800+i,400+j);
        glEnd();
         glColor3f(1,1,0);
         glBegin(GL_POINTS);
        glVertex2f(-600+i,800+j);
    glEnd();
    glFlush();*/
    drawAst();
    drawStar();
    glColor3f(0, 0, 0);
    glBegin(GL_POINTS);
    glPointSize(50);
    glVertex2f(1000 + i, 1000 + j);
    glEnd();
    glFlush();
    extra(i, j);
}

void drawAst()
{
    int h;
    glColor3f(1, 1, 1);
    glPointSize(5);
    int cnt = 0;
    int x = -400, y = 1700;
    while (cnt < 5)
    {
        glBegin(GL_POINTS);
        glVertex2f(x, y);
        glEnd();
        glFlush();
        x -= 200;
        y -= 180;
        cnt++;
    }
    q = x;
    //kl=y;
    x = -400, y = -1700;
    cnt = 0;
    while (cnt < 6)
    {
        glBegin(GL_POINTS);
        glVertex2f(x, y);
        glEnd();
        glFlush();
        x -= 200;
        y += 180;
        cnt++;
    }
    kk = x;
    kl = y;
    //printf("q= %f x= %f\n",q,x);
    cnt = 0;
    x = -100, y = 1500;
    while (cnt < 5)
    {
        glBegin(GL_POINTS);
        glVertex2f(x, y);
        glEnd();
        glFlush();
        //x-=200;
        y -= 260;
        cnt++;
    }
    r = x;
    cnt = 0;
    x = -100, y = -1500;
    while (cnt < 4)
    {
        glBegin(GL_POINTS);
        glVertex2f(x, y);
        glEnd();
        glFlush();
        //x-=200;
        y += 260;
        cnt++;
    }
    x = 200, y = 1700, cnt = 0;
    while (cnt < 6)
    {
        glBegin(GL_POINTS);
        glVertex2f(x, y);
        glEnd();
        glFlush();
        x += 200;
        y -= 180;
        cnt++;
    }
    s = x;
    x = 200, y = -1700, cnt = 0;
    while (cnt < 7)
    {
        glBegin(GL_POINTS);
        glVertex2f(x, y);
        glEnd();
        glFlush();
        x += 200;
        y += 180;
        cnt++;
    }
    glColor3f(0, 0, 0);
    char buffer1[20] = "Asters are formed";
    writeP(2500, 1000, buffer1);
    glFlush();

}

void drawStar()
{
    glColor3f(1, 1, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-300, 1800);
    glVertex2f(-100, 2000);
    glVertex2f(100, 1800);
    glVertex2f(-100, 1600);
    glEnd();
    glFlush();
    glBegin(GL_POLYGON);
    glVertex2f(-300, -1800);
    glVertex2f(-100, -2000);
    glVertex2f(100, -1800);
    glVertex2f(-100, -1600);
    glEnd();
    glFlush();
}

void drawpixel2(int x, int y)
{
    //glColor3f(1.0,0.0,0.0);
    glBegin(GL_POINTS);
    glVertex2f(x, y);
    glEnd();
    glFlush();
}

//to draw circle in the prophase
void circlepoint2(int x, int y)
{
    glColor3f(1, 1, 1);
    drawpixel2(x, y);
    glColor3f(0, 0, 0);
    drawpixel2(y, x);
    //draw_rect();
    glColor3f(0, 0, 0);
    drawpixel2(-x, y);
    glColor3f(1, 1, 1);
    drawpixel2(-y, x);
    glColor3f(0, 0, 0);
    drawpixel2(-x, -y);
    glColor3f(1, 1, 1);
    drawpixel2(-y, -x);
    glColor3f(1, 1, 1);
    //draw_rect();
    drawpixel2(x, -y);
    glColor3f(0, 0, 0);
    drawpixel2(y, -x);
}
void circlepoint3(int x, int y)
{
    glColor3f(0, 0, 0);
    drawpixel2(x, y);
    drawpixel2(y, x);
    drawpixel2(-x, y);
    drawpixel2(-y, x);
    drawpixel2(-x, -y);
    drawpixel2(-y, -x);
    drawpixel2(x, -y);
    drawpixel2(y, -x);
}
//to draw circle in the prophase
void drawcircle2()
{
    int x, y;
    x = 0;
    y = r2;
    double d = (5.0 / 4.0) - r2;
    circlepoint2(x, y);
    while (y > x)
    {
        if (d < 0)
        {
            d = d + 2 * x + 3;
            x = x + 1;
        }
        else
        {
            d = d + 2 *(x - y) + 5;
            x = x + 1;
            y = y - 1;
        }
        circlepoint2(x, y);
    }
}
void drawcircle3()
{
    int x, y;
    x = 0;
    y = r2;
    double d = (5.0 / 4.0) - r2;
    circlepoint2(x, y);
    while (y > x)
    {
        if (d < 0)
        {
            d = d + 2 * x + 3;
            x = x + 1;
        }
        else
        {
            d = d + 2 * (x - y) + 5;
            x = x + 1;
            y = y - 1;
        }
        circlepoint3(x, y);
    }
}

void drawpoint2()
{

    glPointSize(15);
    glBegin(GL_POINTS);
    glVertex2f(0, 1000);
    glEnd();
    glFlush();
}
void drawrect()
{
    glColor3f(1, 1, 1);
    glPointSize(30);
    glBegin(GL_POINTS);
    glVertex2f(100, 3500);
    glVertex2f(100, -3500);
    glEnd();
    glFlush();
}

void bezierCoefficients()
{
    int k, i;
    for (k = 0; k <= n; k++)
    {
        c[k] = 1;
        for (i = n; i >= k + 1; i--)
            c[k] *= i;
        for (i = n - k; i >= 2; i--)
            c[k] /= i;

    }
}
void draw(int cp[][2])
{
    float x, y, u, blend;
    int k;
    //glColor3f(1.0,0.0,0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_STRIP);
    for (u = 0; u < 1.0; u += 0.01)
    {
        x = 0; y = 0;
        for (k = 0; k < 4; k++)
        {
            blend = c[k] * pow(u, k) * pow(1- u, n- k);
            x += cp[k][0] * blend;
            y += cp[k][1] * blend;
        }
        glVertex2f(x, y);
    }
    glEnd();
    glFlush();
    glutPostRedisplay();
}


void crv()
{
    int cc[4][2] = { {-200,1300},{0,1200},{200,1500},{300,1750} };
    int cc1[4][2] = { {-200,1700},{0,1500},{200,1200},{300,1300} };
    int cc2[4][2] = { {-400,1500},{100,1100},{300,1200},{200,1500} };
    int cc3[4][2] = { {-200,-1300},{0,-1200},{200,-1500},{300,-1750} };
    int cc4[4][2] = { {-200,-1700},{0,-1500},{200,-1200},{300,-1300} };
    int cc5[4][2] = { {-400,-1500},{100,-1100},{300,-1200},{200,-1500} };

    bezierCoefficients();
    //call to draw curve
    draw(cc);
    draw(cc1);
    draw(cc2);
    draw(cc3);
    draw(cc4);
    draw(cc5);
}
void telophase()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 0);
    gluDisk(gluNewQuadric(), 0.0, 2500, 20, 1);
    glFlush();
    glColor3f(1, 0, 0);
    char buffer1[50] = "TELOPHASE";
    writeP(-500, 3000, buffer1);
    glFlush();
    float theta;
    for (int i = 0; i < 30; i++)
    {
        theta = i * 3.14 / 180;
        glColor3f(1, 1, 1);
        glEnable(GL_LINE_SMOOTH);
        glLineWidth(10);
        glBegin(GL_LINE_STRIP);
        glVertex2f(0 + 500 * cos(theta), 1500 + 500 * sin(theta));
    }
    glEnd();
    glFlush();
    for (int i = 60; i < 90; i++)
    {
        theta = i * 3.14 / 180;
        glColor3f(1, 1, 1);
        glEnable(GL_LINE_SMOOTH);
        glLineWidth(10);
        glBegin(GL_LINE_STRIP);
        glVertex2f(0 + 500 * cos(theta), 1500 + 500 * sin(theta));
    }
    glEnd();
    glFlush();
    for (int i = 120; i < 150; i++)
    {
        theta = i * 3.14 / 180;
        glColor3f(1, 1, 1);
        glEnable(GL_LINE_SMOOTH);
        glLineWidth(10);
        glBegin(GL_LINE_STRIP);
        glVertex2f(0 + 500 * cos(theta), 1500 + 500 * sin(theta));
    }
    glEnd();
    glFlush();
    for (int i = 180; i < 210; i++)
    {
        theta = i * 3.14 / 180;
        glColor3f(1, 1, 1);
        glEnable(GL_LINE_SMOOTH);
        glLineWidth(10);
        glBegin(GL_LINE_STRIP);
        glVertex2f(0 + 500 * cos(theta), 1500 + 500 * sin(theta));
    }
    glEnd();
    glFlush();
    for (int i = 240; i < 270; i++)
    {
        theta = i * 3.14 / 180;
        glColor3f(1, 1, 1);
        glEnable(GL_LINE_SMOOTH);
        glLineWidth(10);
        glBegin(GL_LINE_STRIP);
        glVertex2f(0 + 500 * cos(theta), 1500 + 500 * sin(theta));
    }
    glEnd();
    glFlush();
    for (int i = 300; i < 330; i++)
    {
        theta = i * 3.14 / 180;
        glColor3f(1, 1, 1);
        glEnable(GL_LINE_SMOOTH);
        glLineWidth(10);
        glBegin(GL_LINE_STRIP);
        glVertex2f(0 + 500 * cos(theta), 1500 + 500 * sin(theta));
    }
    glEnd();
    glFlush();
    //float x=theta;
    for (int i = 0; i < 30; i++)
    {
        theta = i * 3.14 / 180;
        glColor3f(1, 1, 1);
        glEnable(GL_LINE_SMOOTH);
        glLineWidth(10);
        glBegin(GL_LINE_STRIP);
        glVertex2f(0 + 500 * cos(theta), -1500 + 500 * sin(theta));
    }
    glEnd();
    glFlush();
    for (int i = 60; i < 90; i++)
    {
        theta = i * 3.14 / 180;
        glColor3f(1, 1, 1);
        glEnable(GL_LINE_SMOOTH);
        glLineWidth(10);
        glBegin(GL_LINE_STRIP);
        glVertex2f(0 + 500 * cos(theta), -1500 + 500 * sin(theta));
    }
    glEnd();
    glFlush();
    for (int i = 120; i < 150; i++)
    {
        theta = i * 3.14 / 180;
        glColor3f(1, 1, 1);
        glEnable(GL_LINE_SMOOTH);
        glLineWidth(10);
        glBegin(GL_LINE_STRIP);
        glVertex2f(0 + 500 * cos(theta), -1500 + 500 * sin(theta));
    }
    glEnd();
    glFlush();
    for (int i = 180; i < 210; i++)
    {
        theta = i * 3.14 / 180;
        glColor3f(1, 1, 1);
        glEnable(GL_LINE_SMOOTH);
        glLineWidth(10);
        glBegin(GL_LINE_STRIP);
        glVertex2f(0 + 500 * cos(theta), -1500 + 500 * sin(theta));
    }
    glEnd();
    glFlush();
    for (int i = 240; i < 270; i++)
    {
        theta = i * 3.14 / 180;
        glColor3f(1, 1, 1);
        glEnable(GL_LINE_SMOOTH);
        glLineWidth(10);
        glBegin(GL_LINE_STRIP);
        glVertex2f(0 + 500 * cos(theta), -1500 + 500 * sin(theta));
    }
    glEnd();
    glFlush();
    for (int i = 300; i < 330; i++)
    {
        theta = i * 3.14 / 180;
        glColor3f(1, 1, 1);
        glEnable(GL_LINE_SMOOTH);
        glLineWidth(10);
        glBegin(GL_LINE_STRIP);
        glVertex2f(0 + 500 * cos(theta), -1500 + 500 * sin(theta));
    }
    glEnd();
    glFlush();
}
void point()
{
    glColor3f(1, 1, 1);
    glPointSize(7);
    glBegin(GL_POINTS);
    glVertex2f(-200, 1800);
    glVertex2f(-200, -1800);
    glEnd();
    glFlush();
}



void curve()
{
    int cp[4][2] = { {-1010,-810},{-100,200},{200,50},{-300,-300} };
    int cp1[4][2] = { {-220,20},{140,300},{1000,1000},{500,-800} };
    int cp2[4][2] = { {-1030,-30},{300,100},{200,200},{-300,00} };
    int cp3[4][2] = { {-1600,300},{200,100},{1050,1000},{-1630,400} };
    int cp4[4][2] = { {250,100},{20,50},{-100,200},{300,-200} };
    bezierCoefficients();
    //call to draw curve
    draw(cp);
    draw(cp1);
    draw(cp2);
    draw(cp3);
    draw(cp4);
}


void keyboard(unsigned char key, int x, int y)
{

    tkn = 1;



    if (key == 'p' || key == 'P')
    {
        glColor3f(0, 0, 0);
        gluDisk(gluNewQuadric(), 0.0, r1, 20, 1);
        glFlush();
        glColor3f(1, 1, 1);
        char buffer10[50] = "TELOPHASE";
        writeP(-500, 3000, buffer10);
        glFlush();
        char buffer1[100] = "PROPHASE";
        glColor3f(1, 0, 0);
        writeP(-500, 3500, buffer1);
        glColor3f(0, 0, 0);
        char buffer2[200] = "It consists of a nuclear membrane,a nucleolus and a thread like Chromatin network";
        writeP(-3000, -3000, buffer2);
        glFlush();
        drawcircle2();
        glColor3f(1.0, 1.0, 1.0);
        drawpoint2();
        glColor3f(1, 1, 0);
        curve();
        glFlush();
    }
    if (key == 'm' || key == 'M')
    {
        glColor3f(1, 1, 1);
        char buffer11[50] = "TELOPHASE";
        writeP(-500, 3000, buffer11);
        glFlush();
        glColor3f(1, 1, 1);
        char buffer2[50] = "PROPHASE";
        writeP(-500, 3500, buffer2);
        glFlush();
        glColor3f(1, 0, 0);
        char buffer1[50] = "METAPHASE";
        writeP(-500, 3000, buffer1);
        glFlush();
        glColor3f(1, 1, 1);
        char buffer3[200] = "It consists of a nuclear membrane,a nucleolus and a thread like Chromatin network";
        writeP(-3000, -3000, buffer3);
        glFlush();
        glColor3f(0, 0, 0);
        char buffer[60] = "Nuclear membrane disappears,nucleolous disintegrates.";
        writeP(-1500, -3300, buffer);
        glFlush();
        drawcircle3();
        glColor3f(0.0, 0.0, 0.0);
        drawpoint2();
        drawrect();
        glColor3f(0, 0, 0);
        curve();
        //drawtri();
        moved();
        //move(1000,1000,800,1400,1200,1400,800,600,1200,600);
    }
    if (key == 'a' || key == 'A')
    {
       char buffer1[50] = "METAPHASE";
       glColor3f(1, 1, 1);
        writeP(-500, 3000, buffer1);
        glColor3f(1, 0, 0);
        char buffer2[50] = "ANAPHASE";
        writeP(-500, 3000, buffer2);
        glFlush();
        anaphase();
    }
    if (key == 't' || key == 'T')
    {
       
        telophase();
        glColor3f(1, 0, 0);
        glFlush();
        glColor3f(0, 0, 0);
        glFlush();
        point();
        glColor3f(1, 1, 0);
        crv();
    }
    if (key == 'q' || key == 'Q')
    {
        exit(0);
    }

}
void name()
{
    glColor3f(1, 0, 0);
    char buffer2[100] = "RNS Institute of Technology";
    writeP(-1100, 2500, buffer2);
    glColor3f(1, 0, 0);
    char buffer3[50] = "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
    writeP(-2400, 2000, buffer3);
    glColor3f(1, 0, 0);
    char buffer4[50] = "A MINI PROJECT ON";
    writeP(-1000, 1500, buffer4);
    glColor3f(0, 1, 0.3);
    char buffer10[50] = "MITOSIS";
    writeP(-600, 1000, buffer10);
    glColor3f(1, 0, 0);
    char buffer5[50] = "BY";
    writeP(-4000, -2000, buffer5);
    glColor3f(0.5, 0, 1);
    char buffer6[50] = "Jayanth Kumar M [1RN18CS405]";
    writeP(-4000, -2500, buffer6);
    glColor3f(0.5, 0, 1);
    char buffer7[50] = "Pavan kumar B[1RN18CS408]";
    writeP(-4000, -3000, buffer7);
    glColor3f(1, 0, 0);
    char buffer8[50] = "UNDER THE GUIDANCE OF";
    writeP(1000, -2500, buffer8);
    glColor3f(0.8, 0, 0.5);
    char buffer9[50] = "MRs.S MAMATHA JAJUR";
    writeP(1100, -3000, buffer9);
}

void display() 
{
    if (tkn == 0) 
    {
        name();
    }
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(5000, 5000);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Mitosis");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
