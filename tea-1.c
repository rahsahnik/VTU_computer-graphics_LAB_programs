#include<GL/glut.h>
void obj(double tx,double ty,double tz,double sx,double sy,double sz)
{
   glRotated(50,0,1,0);
   glRotated(10,-1,0,0);
   glRotated(11.7,0,0,-1);
   glTranslated(tx,ty,tz);
   glScaled(sx,sy,sz);
   glutSolidCube(1);
   glLoadIdentity();

}
void display()
{
  glViewport(0,0,700,700);
  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
   
    obj(0,0,0.5,1,1,0.04);//right wall
    obj(0,-0.5,0,1,0.04,1);//base wall
    obj(-0.5,0,0,0.04,1,1);//left wall

       obj(0,-0.3,0,0.02,0.2,0.02);//inner leg
       obj(0,-0.3,-0.4,.02,.2,0.02);//left leg
       obj(0.4,-0.3,0,.02,.2,0.02);//right leg
       obj(0.4,-0.3,-0.4,.02,.2,0.02);//front leg
       
      obj(0.2,-0.18,-0.2,0.6,0.02,0.6);//table top
   
        glRotated(50,0,1,0);//pot position
        glRotated(10,-1,0,0);//''
        glRotated(11.7,0,0,-1);//''

       glTranslated(0.3,-0.1,-0.3);//pot 
       glutSolidTeapot(0.09);
       glFlush();
       glLoadIdentity();
        
}
int main(int argc,char **argv)
{       
      
 		float ambient[]={1,0,0,0};
        float light_pos[]={25,80,2,3};
        glutInit(&argc,argv);
        glutInitWindowSize(700,700);
        glutCreateWindow("sece");
        glutDisplayFunc(display);
        glEnable(GL_LIGHTING);
        glEnable(GL_LIGHT0);
        glMaterialfv(GL_FRONT,GL_AMBIENT,ambient);
        glLightfv(GL_LIGHT0,GL_POSITION,light_pos);
        glEnable(GL_DEPTH_TEST);
        glutMainLoop();
        return 0;
}
