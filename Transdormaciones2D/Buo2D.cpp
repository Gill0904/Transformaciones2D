//#include<iostream>
//#include <GL/glut.h>
//using namespace std;
//int EjeMaxX = 800, EjeMaxY = 600, invert = 0;
//const int nodito = 147;
//const  double  pi = 3.14159265358979323846;
//double Red = 1, Green = 1, Blue = 1;
//
//
//int Original[nodito][3] = { { 336, 232, 1 },{ 353, 247, 1 },{ 360, 245, 1 },{ 370, 250, 1 },{ 373, 248, 1 },{ 378, 245, 1 },{ 386, 249, 1 },{ 397, 241, 1 },{ 406, 231, 1 },{ 406, 247, 1 },{ 404, 253, 1 },{ 397, 241, 1 },{ 404, 253, 1 },{ 412, 286, 1 },{ 426, 298, 1 },{ 433, 318, 1 },{ 432, 343, 1 },{ 443, 359, 1 },{ 436, 360, 1 },{ 441, 366, 1 },{ 441, 373, 1 },{ 435, 371, 1 },{ 438, 377, 1 },{ 438, 388, 1 },{ 411, 372, 1 },{ 405, 372, 1 },{ 393, 372, 1 },{ 393, 380, 1 },{ 382, 378, 1 },{ 376, 389, 1 },{ 383, 386, 1 },{ 404, 387, 1 },{ 406, 392, 1 },{ 413, 380, 1 },{ 400, 380, 1 },{ 405, 372, 1 },{ 396, 371, 1 },{ 373, 370, 1 },{ 344, 344, 1 },{ 333, 316, 1 },{ 331, 291, 1 },{ 332, 268, 1 },{ 338, 255, 1 },{ 334, 239, 1 },{ 335, 232, 1 },{ 344, 243, 1 },{ 335, 239, 1 },{ 335, 244, 1 },{ 344, 244, 1 },{ 338, 255, 1 },{ 348, 259, 1 },{ 344, 243, 1 },{ 354, 248, 1 },{ 347, 257, 1 },{ 367, 282, 1 },{ 354, 248, 1 },{ 360, 245, 1 },{ 370, 299, 1 },{ 378, 245, 1 },{ 386, 249, 1 },{ 373, 282, 1 },{ 395, 255, 1 },{ 397, 241, 1 },{ 406, 245, 1 },{ 397, 241, 1 },{ 404, 253, 1 },{ 396, 285, 1 },{ 393, 287, 1 },{ 386, 277, 1 },{ 394, 263, 1 },{ 404, 252, 1 },{ 373, 283, 1 },{ 373, 284, 1 },{ 387, 277, 1 },{ 389, 289, 1 },{ 386, 290, 1 },{ 387, 277, 1 },{ 395, 285, 1 },{ 370, 299, 1 },{ 343, 287, 1 },{ 337, 254, 1 },{ 367, 283, 1 },{ 367, 284, 1 },{ 354, 277, 1 },{ 348, 266, 1 },{ 354, 277, 1 },{ 343, 287, 1 },{ 347, 289, 1 },{ 354, 278, 1 },{ 351, 290, 1 },{ 354, 278, 1 },{ 354, 291, 1 },{ 370, 299, 1 },{ 355, 315, 1 },{ 331, 291, 1 },{ 333, 316, 1 },{ 336, 296, 1 },{ 341, 301, 1 },{ 333, 316, 1 },{ 345, 306, 1 },{ 350, 310, 1 },{ 333, 316, 1 },{ 355, 315, 1 },{ 370, 299, 1 },{ 386, 317, 1 },{ 412, 286, 1 },{ 404, 318, 1 },{ 433, 319, 1 },{ 405, 315, 1 },{ 406, 310, 1 },{ 433, 318, 1 },{ 407, 306, 1 },{ 408, 301, 1 },{ 433, 319, 1 },{ 409, 295, 1 },{ 411, 289, 1 },{ 433, 319, 1 },{ 432, 343, 1 },{ 404, 319, 1 },{ 407, 347, 1 },{ 432, 343, 1 },{ 443, 359, 1 },{ 407, 347, 1 },{ 437, 361, 1 },{ 407, 347, 1 },{ 441, 373, 1 },{ 434, 371, 1 },{ 407, 347, 1 },{ 438, 388, 1 },{ 411, 372, 1 },{ 407, 347, 1 },{ 381, 343, 1 },{ 396, 371, 1 },{ 362, 345, 1 },{ 373, 370, 1 },{ 344, 344, 1 },{ 362, 345, 1 },{ 380, 353, 1 },{ 381, 343, 1 },{ 370, 335, 1 },{ 362, 345, 1 },{ 355, 315, 1 },{ 344, 344, 1 },{ 355, 316, 1 },{ 386, 318, 1 },{ 381, 343, 1 },{ 403, 318 } };
//
//
//double TheMatriz[nodito][3] = { { 336, 232, 1 },{ 353, 247, 1 },{ 360, 245, 1 },{ 370, 250, 1 },{ 373, 248, 1 },{ 378, 245, 1 },{ 386, 249, 1 },{ 397, 241, 1 },{ 406, 231, 1 },{ 406, 247, 1 },{ 404, 253, 1 },{ 397, 241, 1 },{ 404, 253, 1 },{ 412, 286, 1 },{ 426, 298, 1 },{ 433, 318, 1 },{ 432, 343, 1 },{ 443, 359, 1 },{ 436, 360, 1 },{ 441, 366, 1 },{ 441, 373, 1 },{ 435, 371, 1 },{ 438, 377, 1 },{ 438, 388, 1 },{ 411, 372, 1 },{ 405, 372, 1 },{ 393, 372, 1 },{ 393, 380, 1 },{ 382, 378, 1 },{ 376, 389, 1 },{ 383, 386, 1 },{ 404, 387, 1 },{ 406, 392, 1 },{ 413, 380, 1 },{ 400, 380, 1 },{ 405, 372, 1 },{ 396, 371, 1 },{ 373, 370, 1 },{ 344, 344, 1 },{ 333, 316, 1 },{ 331, 291, 1 },{ 332, 268, 1 },{ 338, 255, 1 },{ 334, 239, 1 },{ 335, 232, 1 },{ 344, 243, 1 },{ 335, 239, 1 },{ 335, 244, 1 },{ 344, 244, 1 },{ 338, 255, 1 },{ 348, 259, 1 },{ 344, 243, 1 },{ 354, 248, 1 },{ 347, 257, 1 },{ 367, 282, 1 },{ 354, 248, 1 },{ 360, 245, 1 },{ 370, 299, 1 },{ 378, 245, 1 },{ 386, 249, 1 },{ 373, 282, 1 },{ 395, 255, 1 },{ 397, 241, 1 },{ 406, 245, 1 },{ 397, 241, 1 },{ 404, 253, 1 },{ 396, 285, 1 },{ 393, 287, 1 },{ 386, 277, 1 },{ 394, 263, 1 },{ 404, 252, 1 },{ 373, 283, 1 },{ 373, 284, 1 },{ 387, 277, 1 },{ 389, 289, 1 },{ 386, 290, 1 },{ 387, 277, 1 },{ 395, 285, 1 },{ 370, 299, 1 },{ 343, 287, 1 },{ 337, 254, 1 },{ 367, 283, 1 },{ 367, 284, 1 },{ 354, 277, 1 },{ 348, 266, 1 },{ 354, 277, 1 },{ 343, 287, 1 },{ 347, 289, 1 },{ 354, 278, 1 },{ 351, 290, 1 },{ 354, 278, 1 },{ 354, 291, 1 },{ 370, 299, 1 },{ 355, 315, 1 },{ 331, 291, 1 },{ 333, 316, 1 },{ 336, 296, 1 },{ 341, 301, 1 },{ 333, 316, 1 },{ 345, 306, 1 },{ 350, 310, 1 },{ 333, 316, 1 },{ 355, 315, 1 },{ 370, 299, 1 },{ 386, 317, 1 },{ 412, 286, 1 },{ 404, 318, 1 },{ 433, 319, 1 },{ 405, 315, 1 },{ 406, 310, 1 },{ 433, 318, 1 },{ 407, 306, 1 },{ 408, 301, 1 },{ 433, 319, 1 },{ 409, 295, 1 },{ 411, 289, 1 },{ 433, 319, 1 },{ 432, 343, 1 },{ 404, 319, 1 },{ 407, 347, 1 },{ 432, 343, 1 },{ 443, 359, 1 },{ 407, 347, 1 },{ 437, 361, 1 },{ 407, 347, 1 },{ 441, 373, 1 },{ 434, 371, 1 },{ 407, 347, 1 },{ 438, 388, 1 },{ 411, 372, 1 },{ 407, 347, 1 },{ 381, 343, 1 },{ 396, 371, 1 },{ 362, 345, 1 },{ 373, 370, 1 },{ 344, 344, 1 },{ 362, 345, 1 },{ 380, 353, 1 },{ 381, 343, 1 },{ 370, 335, 1 },{ 362, 345, 1 },{ 355, 315, 1 },{ 344, 344, 1 },{ 355, 316, 1 },{ 386, 318, 1 },{ 381, 343, 1 },{ 403, 318 } };
//
//void pintaM() {
//
//    for (int i = 0; i < nodito - 2; i++) {
//
//        if (Red >= 0)
//            Red -= 0.05;
//        else
//            if (Blue >= 0)
//                Blue -= 0.05;
//            else
//                if (Green >= 0)
//                    Green -= 0.05;
//                else
//                {
//                    Red = 1; Blue = 1; Green = 1;
//                }
//        glBegin(GL_LINES);
//        glVertex2f(TheMatriz[i][0], TheMatriz[i][1]);
//        //glColor3f(1, Green, 0); //amarillo
//        glColor3f(0.5, 0, 1); //azul
//             //glColor3f(1, 0, 1);
//        glVertex2f(TheMatriz[i + 1][0], TheMatriz[i + 1][1]);
//        //glColor3f(Red, Green, Blue);
//        glColor3f(1, 1, 1);
//        glEnd();
//
//    }
//    //Red = 1; Green = 1; Blue = 1; //color fijo
//    glFlush();
//}
//
//
//void doctproduct(double mat1[][3], double conf[3][3], int num) {
//    for (int i = 0; i < num; i++)
//        for (int t = 0; t < 3; t++)
//            mat1[i][t] = (mat1[i][0] * conf[0][t]) + mat1[i][1] * conf[1][t] + mat1[i][2] * conf[2][t];
//
//    glutDisplayFunc(pintaM);
//}
//
//
//void rotation(int kind) {
//    /* como solucion al problema de achicamiento tras la rotacion con angulos grandes la solucion encontrada fue usar
//    angulos muy peque�os pero realizar el proceso muchas veces
//    */
//    double A = 1, B = 0, D = 0, E = 1, G = 0, H = 0;
//    double angle = 0.1;
//
//    if (kind == 2)
//        angle = -angle;
//
//    A = cos(angle * pi / 180);
//    B = sin(angle * pi / 180);
//    D = -B;
//    E = A;
//    G = TheMatriz[3][0] * (1 - A) + TheMatriz[3][1] * B;
//    H = TheMatriz[3][1] * (1 - A) - TheMatriz[3][0] * B;
//    double Tranformate[3][3] = { { A, B, 0 },{ D, E, 0 },{ G, H, 1 } };
//    doctproduct(TheMatriz, Tranformate, nodito);
//}
//
//
//
//
//void AgenciaT(unsigned char Key, int x, int y) {
//    double A = 1, B = 0, D = 0, E = 1, G = 0, H = 0;
//
//    if (Key == 'p' || Key == 'P')
//    {
//        for (int i = 0; i < nodito; i++)
//            for (int u = 0; u < 2; u++)
//                TheMatriz[i][u] = Original[i][u];
//    }
//
//    if (Key == 'c' || Key == 'C')
//    {
//        if (invert == 0)
//            invert = 1;
//        else {
//            invert = 0;
//        }
//    }
//    if (Key == 'w')
//    {
//        if (invert == 0)
//        {
//            A = 1.1;
//            E = A;
//            G = (TheMatriz[0][0] * (1 - A));
//            H = (TheMatriz[0][1] * (1 - E)) + (H - 5);
//        }
//
//        if (invert == 1)
//        {
//
//            A = 0.9;
//            E = A;
//            G = (TheMatriz[0][0] * (1 - A));
//            H = (TheMatriz[0][1] * (1 - E)) + (H - 5);
//        }
//
//    }
//
//
//    if (Key == 's')
//    {
//        if (invert == 0)
//        {
//            A = 1.1;
//            E = A;
//            G = (TheMatriz[0][0] * (1 - A));
//            H = (TheMatriz[0][1] * (1 - E)) + (H + 5);
//        }
//
//        if (invert == 1)
//        {
//
//            A = 0.9;
//            E = A;
//            G = (TheMatriz[0][0] * (1 - A));
//            H = (TheMatriz[0][1] * (1 - E)) + (H + 5);
//        }
//
//
//    }
//
//
//    if (Key == 'a')
//    {
//
//        if (invert == 0)
//        {
//            A = 1.1;
//            E = A;
//            G = (TheMatriz[0][0] * (1 - A)) + (G - 5);
//            H = (TheMatriz[0][1] * (1 - E));
//        }
//
//        if (invert == 1)
//        {
//
//            A = 0.9;
//            E = A;
//            G = (TheMatriz[0][0] * (1 - A)) + (G - 5);
//            H = (TheMatriz[0][1] * (1 - E));
//        }
//
//
//    }
//
//
//
//    if (Key == 'd')
//    {
//        if (invert == 0)
//        {
//            A = 1.1;
//            E = A;
//            G = (TheMatriz[0][0] * (1 - A)) + (G + 5);
//            H = (TheMatriz[0][1] * (1 - E));
//        }
//
//        if (invert == 1)
//        {
//
//            A = 0.9;
//            E = A;
//            G = (TheMatriz[0][0] * (1 - A)) + (G + 5);
//            H = (TheMatriz[0][1] * (1 - E));
//        }
//
//    }
//
//
//
//
//    if (Key == 'W')
//    {
//
//        if (invert == 0)
//            for (int u = 0; u < 100; u++)
//                rotation(1);
//
//
//        if (invert == 1)
//            for (int u = 0; u < 100; u++)
//                rotation(2);
//        H -= 5;
//    }
//
//
//
//    if (Key == 'S')
//    {
//        if (invert == 0)
//            for (int u = 0; u < 100; u++)
//                rotation(1);
//
//
//        if (invert == 1)
//            for (int u = 0; u < 100; u++)
//                rotation(2);
//
//        H += 5;
//    }
//
//
//
//
//
//    if (Key == 'A')
//    {
//        if (invert == 0)
//            for (int u = 0; u < 100; u++)
//                rotation(1);
//
//
//        if (invert == 1)
//            for (int u = 0; u < 100; u++)
//                rotation(2);
//
//        G -= 5;
//    }
//
//
//
//    if (Key == 'D')
//    {
//        if (invert == 0)
//            for (int u = 0; u < 100; u++)
//                rotation(1);
//
//
//        if (invert == 1)
//            for (int u = 0; u < 100; u++)
//                rotation(2);
//        G += 5;
//    }
//
//    if (Key == 'i' || Key == 'I')
//        H -= 5;
//
//
//    if (Key == 'k' || Key == 'K')
//        H += 5;
//
//
//    if (Key == 'j' || Key == 'J')
//        G -= 5;
//
//
//    if (Key == 'l' || Key == 'L')
//        G += 5;
//
//    if (Key == 43) {
//        A = 1.1;
//        G = TheMatriz[0][0] * (1 - A);
//        E = A;
//        H = TheMatriz[0][1] * (1 - E);
//    }
//
//    if (Key == 45)
//    {
//        A = 0.9;
//        G = TheMatriz[0][0] * (1 - A);
//        E = A;
//        H = TheMatriz[0][1] * (1 - E);
//    }
//
//    if (Key == 'u' || Key == 'U')
//    {
//
//        for (int u = 0; u < 100; u++)
//            rotation(1);
//    }
//
//    if (Key == 'o' || Key == 'O')
//        for (int u = 0; u < 100; u++)
//            rotation(2);
//
//    double Tranformate[3][3] = { { A, B, 0 },{ D, E, 0 },{ G, H, 1 } };
//    doctproduct(TheMatriz, Tranformate, nodito);
//    glClear(GL_COLOR_BUFFER_BIT);
//    glutPostRedisplay();
//}
//
//void window_Setting()
//{
//    glClearColor(0, 0, 0, 1);
//    glClear(GL_COLOR_BUFFER_BIT);
//    glPointSize(3);
//    glOrtho(0, EjeMaxX, EjeMaxY, 0, -1, 1); //coordenadas del plano
//
//}
//
//int main(int argc, char** argv)
//{
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
//    glutInitWindowSize(EjeMaxX, EjeMaxY);
//    glutInitWindowPosition(450, 0);
//    glutCreateWindow(" figure ");
//    window_Setting();
//    glutDisplayFunc(pintaM);
//    glutKeyboardFunc(AgenciaT);
//
//
//    glutMainLoop();
//    return 0;
//}