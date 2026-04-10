#include <cstdio>
#include <cstring>
#include "Car.h"
#include "SportsCar.h"

int main()
{
    int speed, gear;
    char name[40];
    char turboStr[10];   // on/off 저장

    printf("Car 정보 입력 (speed name gear): ");
    scanf_s("%d %s %d", &speed, name, 40, &gear);
    Car c1(speed, name, gear);

    printf("SportsCar 정보 입력 (speed name gear turbo(on/off)): ");
    scanf_s("%d %s %d %s", &speed, name, 40, &gear, turboStr, 10);

    SportsCar c2(speed, name, gear);

    int turbo = 0;
    if (strcmp(turboStr, "on") == 0) {
        turbo = 1;
    }
    else if (strcmp(turboStr, "off") == 0) {
        turbo = 0;
    }
    else {
        printf("입력 오류: on 또는 off만 입력하세요\n");
        return 0;
    }

    c2.setTurbo(turbo);

    c1.speedUp();
    c2.speedUp();

    c1.display();
    c2.display();

    return 0;
}