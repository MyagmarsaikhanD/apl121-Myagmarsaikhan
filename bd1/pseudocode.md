FUNCTION CalculateSpeed(distance, totalSeconds)
    DECLARE speed AS Real

    speed ← distance * 3600 / totalSeconds

    OUTPUT "Average speed: ", speed, " km/h"
END FUNCTION
BEGIN MAIN
    DECLARE runType, runner AS Integer
    DECLARE hours, minutes, seconds AS Integer
    DECLARE totalSeconds AS Integer
    DECLARE time1, time2, time3 AS Integer
    DECLARE rank1, rank2, rank3 AS Integer
    DECLARE temp, tempRank AS Integer
    DECLARE km, split AS Integer
    DECLARE paceMin, paceSec AS Integer
    DECLARE distance, pace AS Real

    time1 ← 0
    time2 ← 0
    time3 ← 0

    rank1 ← 1
    rank2 ← 2
    rank3 ← 3

    OUTPUT "MARATHON PACE CALCULATOR"
    OUTPUT "1. 5 km Run"
    OUTPUT "2. 10 km Run"
    OUTPUT "3. Half Marathon (21.0975 km)"
    OUTPUT "4. Full Marathon (42.195 km)"

    DO
        OUTPUT "Select running type (1-4): "
        INPUT runType

        IF runType < 1 OR runType > 4 THEN
            OUTPUT "Invalid choice!"
        END IF

    WHILE runType < 1 OR runType > 4


    SWITCH runType
        CASE 1:
            distance ← 5
        CASE 2:
            distance ← 10
        CASE 3:
            distance ← 21.0975
        DEFAULT:
            distance ← 42.195
    END SWITCH

    OUTPUT "Distance: ", distance, " km"

    FOR runner ← 1 TO 3

        OUTPUT "Runner ", runner
        DO
            OUTPUT "Hours: "
            INPUT hours

            OUTPUT "Minutes: "
            INPUT minutes

            OUTPUT "Seconds: "
            INPUT seconds
            totalSeconds ← hours * 3600
                           + minutes * 60
                           + seconds

            IF hours < 0 OR hours > 23 OR
               minutes < 0 OR minutes > 59 OR
               seconds < 0 OR seconds > 59 OR
               totalSeconds <= 0 THEN

                OUTPUT "Invalid time. Try again!"
            END IF

        WHILE hours < 0 OR hours > 23 OR
              minutes < 0 OR minutes > 59 OR
              seconds < 0 OR seconds > 59 OR
              totalSeconds <= 0
        IF runner = 1 THEN
            time1 ← totalSeconds
        ELSE IF runner = 2 THEN
            time2 ← totalSeconds
        ELSE
            time3 ← totalSeconds
        END IF
        CALL CalculateSpeed(distance, totalSeconds)
        pace ← totalSeconds / distance

        split ← ROUND(pace)
        paceMin ← split DIV 60
        paceSec ← split MOD 60

        OUTPUT "Average pace: ",
               paceMin, ":", paceSec, " min/km"
        OUTPUT "Distance       Time"

        FOR km ← 5 TO distance STEP 5
            split ← ROUND(totalSeconds * km / distance)
            OUTPUT km, " km ",
                   split DIV 3600, ":",
                   (split MOD 3600) DIV 60, ":",
                   split MOD 60
        END FOR
        IF runType = 3 OR runType = 4 THEN
            OUTPUT distance, " km ",
                   totalSeconds DIV 3600, ":",
                   (totalSeconds MOD 3600) DIV 60, ":",
                   totalSeconds MOD 60
        END IF
    END FOR
    // Sort runners by finishing time
    IF time1 > time2 THEN
        temp ← time1
        time1 ← time2
        time2 ← temp

        tempRank ← rank1
        rank1 ← rank2
        rank2 ← tempRank
    END IF
    IF time2 > time3 THEN
        temp ← time2
        time2 ← time3
        time3 ← temp

        tempRank ← rank2
        rank2 ← rank3
        rank3 ← tempRank
    END IF
    IF time1 > time2 THEN
        temp ← time1
        time1 ← time2
        time2 ← temp

        tempRank ← rank1
        rank1 ← rank2
        rank2 ← tempRank
    END IF
    OUTPUT "FINAL RANKING"

    OUTPUT "1. Runner ", rank1, " - ",
           time1 DIV 3600, ":",
           (time1 MOD 3600) DIV 60, ":",
           time1 MOD 60

    OUTPUT "2. Runner ", rank2, " - ",
           time2 DIV 3600, ":",
           (time2 MOD 3600) DIV 60, ":",
           time2 MOD 60

    OUTPUT "3. Runner ", rank3, " - ",
           time3 DIV 3600, ":",
           (time3 MOD 3600) DIV 60, ":",
           time3 MOD 60
    OUTPUT "Winner: Runner ", rank1
END MAIN
