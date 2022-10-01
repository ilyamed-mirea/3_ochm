#include <clocale>
#include <cmath>

double f(double x) {
    return x*x*x + 8*x + 10;
    //pow(x,3) - долго
}

int main() {
    setlocale(LC_ALL,"Russian");

    double xStart = -2.0, xEnd = -1.0, xCenter, xCenterPrev,fCenter; // Отрезок локализация
    double epsilon = 0.001; // 0.001_

    //пункт 1 - Опускаем

    //пункт 2

    if (f(xStart) *f(xEnd) > 0) {
        printf("Работма метода дихотомии не гарантирована \n");
        return -1;
    }

    int flag = 1, i = 1;
    while(flag) {
        //пункт 3
        xCenterPrev = xCenter; // if i >= 2
        xCenter = (xStart + xEnd) / 2.0;
        fCenter = f(xCenter);

        //пункт 4
        if (f(xStart)*fCenter < 0)
            xEnd = xCenter;
        else if (fCenter*(f(xEnd))<0)
            xStart=xCenter;
        else {
            printf("Что-то пошло не так! См. строку 34 \n");
            return -2;
        }

        //пункт 5
        if (fabs(fCenter)<epsilon)
            flag = 0;
        if (i>=2)
            if (fabs(xCenter-xCenterPrev)<epsilon)

        printf("номер итерации: %d\n", xCenter);
        printf("Знчаение корня: %.4f\n", xCenter);
        printf("Знчаение функции: %.4f\n", fCenter);
        i+=1;
        printf("\n");
    }

    return 0;
}
