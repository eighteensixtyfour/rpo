#include <stdio.h>

int main() {
    int h, m;
    printf("h m: "); scanf("%d %d", &h, &m);
    if (h < 0 || h > 23 || m < 0 || m > 59) {
        printf("fuck off\n");
        return 0;
    }
    h = h > 11 ? h - 12 : h;
    printf("%d %d\n", h, m);
    int turns = h * 60 + m; // how many times minute arrow turned
    float angle_h = turns * 0.5; //angle between h and 00:00 (aka OY)
    float angle_m = (turns * 6) % 360; //angle between m and 00:00 (aka OY)
    float angle_hm = angle_h - angle_m;
    angle_hm = angle_hm > 0 ? angle_hm : -angle_hm;
    printf("angle (OY;h) = %.1f\n", angle_h);
    printf("angle (OY;m) = %.0f\n", angle_m);
    printf("angle (h;m) = %.1f\n", angle_hm);
    return 0;
}
