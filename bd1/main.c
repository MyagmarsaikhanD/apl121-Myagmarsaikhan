#include <stdio.h>
int main() {
    int runType, runner;
    int hours, minutes, seconds;
    int totalSeconds;
    int time1 = 0, time2 = 0, time3 = 0;
    int rank1 = 1, rank2 = 2, rank3 = 3;
    int temp, tempRank;
    int km, split, paceMin, paceSec;
    double distance, speed, pace;

    printf("=== MARATHON PACE CALCULATOR ===\n");
    printf("1. 5 km Run\n");
    printf("2. 10 km Run\n");
    printf("3. Half Marathon (21.0975 km)\n");
    printf("4. Full Marathon (42.195 km)\n");
    // Running type validation
    do {
        printf("Select running type (1-4): ");
        scanf("%d", &runType);

        if (runType < 1 || runType > 4) {
            printf("Invalid choice!\n");
        }
    } while (runType < 1 || runType > 4);
    // Select running distance
    switch (runType) {
        case 1:
            distance = 5;
            break;
        case 2:
            distance = 10;
            break;
        case 3:
            distance = 21.0975;
            break;
        default:
            distance = 42.195;
    }
    printf("\nDistance: %.4f km\n", distance);
    // Three runners
    for (runner = 1; runner <= 3; runner++) {
        printf("\n=== Runner %d ===\n", runner);
        // Validate time
        do {
            printf("Hours: ");
            scanf("%d", &hours);
            printf("Minutes: ");
            scanf("%d", &minutes);
            printf("Seconds: ");
            scanf("%d", &seconds);
            totalSeconds = hours * 3600
                         + minutes * 60
                         + seconds;
            if (hours < 0 || hours > 23 ||
                minutes < 0 || minutes > 59 ||
                seconds < 0 || seconds > 59 ||
                totalSeconds <= 0) {
                printf("Invalid time. Try again!\n");
            }
        } while (hours < 0 || hours > 23 ||
                 minutes < 0 || minutes > 59 ||
                 seconds < 0 || seconds > 59 ||
                 totalSeconds <= 0);
        // Save runner time
        if (runner == 1) {
            time1 = totalSeconds;
        } else if (runner == 2) {
            time2 = totalSeconds;
        } else {
            time3 = totalSeconds;
        }
        // Average speed and pace
        speed = distance * 3600 / totalSeconds;
        pace = totalSeconds / distance;
        paceMin = (int)(pace / 60);
        paceSec = (int)(pace + 0.5) % 60;
        printf("Average speed: %.2f km/h\n", speed);
        printf("Average pace: %d:%02d min/km\n",
               paceMin, paceSec);
        // Every 5 km table
        printf("\n%-12s %-12s\n", "Distance", "Time");
        for (km = 5; km <= distance; km += 5) {
            split = (int)(totalSeconds * km / distance + 0.5);
            printf("%-8d km  %02d:%02d:%02d\n",
                   km,
                   split / 3600,
                   (split % 3600) / 60,
                   split % 60);
        }
        // Final distance for half/full marathon
        if (runType == 3 || runType == 4) {
            printf("%.4f km  %02d:%02d:%02d\n",
                   distance,
                   totalSeconds / 3600,
                   (totalSeconds % 3600) / 60,
                   totalSeconds % 60);
        }
    }
    // Sort three runners (ascending time)
    if (time1 > time2) {
        temp = time1;
        time1 = time2;
        time2 = temp;
        tempRank = rank1;
        rank1 = rank2;
        rank2 = tempRank;
    }
    if (time2 > time3) {
        temp = time2;
        time2 = time3;
        time3 = temp;
        tempRank = rank2;
        rank2 = rank3;
        rank3 = tempRank;
    }
    if (time1 > time2) {
        temp = time1;
        time1 = time2;
        time2 = temp;

        tempRank = rank1;
        rank1 = rank2;
        rank2 = tempRank;
    }
    // Final ranking
    printf("\n=== FINAL RANKING ===\n");
    printf("1. Runner %d - %02d:%02d:%02d\n",
           rank1, time1 / 3600,
           (time1 % 3600) / 60, time1 % 60);

    printf("2. Runner %d - %02d:%02d:%02d\n",
           rank2, time2 / 3600,
           (time2 % 3600) / 60, time2 % 60);

    printf("3. Runner %d - %02d:%02d:%02d\n",
           rank3, time3 / 3600,
           (time3 % 3600) / 60, time3 % 60);

    printf("\nWinner: Runner %d\n", rank1);

    return 0;
}
