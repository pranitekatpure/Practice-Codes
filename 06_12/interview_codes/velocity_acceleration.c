
#include<stdio.h>

float acceleration(float initial_vel, float final_vel, float time)
{
    float acceleration;
    if (time > 0)
    {
        acceleration = (final_vel - initial_vel)/time;
    }
    else
    {
        printf("Time can not be negative");
        return;
    }
    return acceleration;
}

int main(void)
{
    float initial_vel, final_vel, time = 1;
    printf("Enter the value of INITIAL VELOCITY\t");
    scanf("%d", &initial_vel);
    printf("Enter the value of FINAL VELOCITY\t");
    scanf("%d", &final_vel);
    int acc = acceleration(initial_vel, final_vel, time);
    printf("Acceleration is:%f\t", acc);
    return 0;
}

