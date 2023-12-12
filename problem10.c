/**
    Cricket match run rate & required rate
*/
#include <stdio.h>

// Error Program
int main(void)
{
    int first_ing_run, second_ing_run, ball_played, ball;
    double current_rr, required_rr;

    printf("Enter first ing run (0 < run <= 1000):  ");
    scanf("%d", &first_ing_run);
    printf("Enter second ing run (1 <= run <= first ing run):  ");
    scanf("%d", &second_ing_run);
    printf("Enter Ball hands to second ing. (0 < ball < 300):  ");
    scanf("%d", &ball);

    ball_played = 300 - ball;                                           // ODI = 50 over, 50*6 = 300 ball
    current_rr = 1.0 * ((second_ing_run / ball_played) * 6);
    required_rr = 1.0 * ((double)((first_ing_run - second_ing_run + 1) / ball) * 6);

    printf("Current Run Rate: %lf Required Run Rate: %0.2lf\n", current_rr, required_rr);


    return 0;
}
