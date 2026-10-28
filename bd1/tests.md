Test 1: 5 km

Input:
Run type: 1
Runner 1: 0 30 0
Runner 2: 0 25 0
Runner 3: 0 35 0
Result:

Runner 1
Average speed: 10.00 km/h
Average pace: 6:00 km/h
Distance    Time
5 km        00:30:00

Runner 2
Average speed: 12.00 km/h
Average pace: 5:00 km/h
Distance    Time
5 km        00:25:00

Runner 3 
Average speed: 8.57 km/h
Average pace: 7:00 km/h
Distance    Time
5 km        00:35:00

1. Runner 2 - 00:25:00
2. Runner 1 - 00:30:00
3. Runner 3 - 00:35:00
Winner: Runner 2



Test 2: 10 km

Input:
Run type: 2
Runner 1: 1 10 0
Runner 2: 1 0 0
Runner 3: 0 50 0

Result:

Runner 1
Average speed: 8.57 km/h
Average pace: 7:00 min/km
Distance    Time
5 km        00:35:00
10 km       01:10:00

Runner 2
Average speed: 10.00 km/h
Average pace: 6:00 min/km
Distance    Time
5 km        00:30:00
10 km       01:00:00

Runner 3
Average speed: 12.00 km/h
Average pace: 5:00 min/km
Distance    Time
5 km        00:25:00
10 km       00:50:00

1. Runner 3 - 00:50:00
2. Runner 2 - 01:00:00
3. Runner 1 - 01:10:00
Winner: Runner 3

Test 3: Half Marathon

Input:
Run type: 3
Runner 1: 2 0 0
Runner 2: 1 45 0
Runner 3: 2 15 0

Result:

Runner 1
Average speed: 10.55 km/h
Average pace: 5:41 min/km
Distance    Time
5 km        00:28:26
10 km       00:56:52
15 km       01:25:19
20 km       01:53:45
21.0975 km  02:00:00

Runner 2
Average speed: 12.06 km/h
Average pace: 4:59 min/km
Distance    Time
5 km        00:24:53
10 km       00:49:46
15 km       01:14:39
20 km       01:39:32
21.0975 km  01:45:00

Runner 3
Average speed: 9.38 km/h
Average pace: 6:24 min/km
Distance    Time
5 km        00:31:59
10 km       01:03:59
15 km       01:35:58
20 km       02:07:58
21.0975 km  02:15:00

1. Runner 2 - 01:45:00
2. Runner 1 - 02:00:00
3. Runner 3 - 02:15:00
Winner: Runner 2

Test 4: Full Marathon

Input:
Run type: 4
Runner 1: 4 0 0
Runner 2: 3 30 0
Runner 3: 5 0 0

Result:

Runner 1
Average speed: 10.55 km/h
Average pace: 5:41 min/km
Distance    Time
5 km        00:28:26
10 km       00:56:52
15 km       01:25:19
20 km       01:53:45
25 km       02:22:11
30 km       02:50:37
35 km       03:19:03
40 km       03:47:30
42.1950 km  04:00:00

Runner 2
Average speed: 12.06 km/h
Average pace: 4:59 min/km
Distance    Time
5 km        00:24:53
10 km       00:49:46
15 km       01:14:39
20 km       01:39:32
25 km       02:04:25
30 km       02:29:18
35 km       02:54:11
40 km       03:19:04
42.1950 km  03:30:00

Runner 3
Average speed: 8.44 km/h
Average pace: 7:07 min/km
Distance    Time
5 km        00:35:33
10 km       01:11:06
15 km       01:46:39
20 km       02:22:12
25 km       02:57:45
30 km       03:33:18
35 km       04:08:51
40 km       04:44:24
42.1950 km  05:00:00

1. Runner 2 - 03:30:00
2. Runner 1 - 04:00:00
3. Runner 3 - 05:00:00
Winner: Runner 2

Test 5: Invalid Input

Input:
Run type: 5

Result:
Invalid choice!
Select running type (1-4):

Input:
Run type: 1

Runner 1
Hours: -1
Minutes: 30
Seconds: 0

Result:
Invalid time. Try again!

Input:
Hours: 0
Minutes: 65
Seconds: 0

Result:
Invalid time. Try again!

Input:
Hours: 0
Minutes: 25
Seconds: 0

Result:
Runner 1
Average speed: 12.00 km/h
Average pace: 5:00 min/km
Distance    Time
5 km        00:25:00

Input:
Runner 2: 0 30 0
Runner 3: 0 35 0

Result:
Runner 2
Average speed: 10.00 km/h
Average pace: 6:00 min/km
Distance    Time
5 km        00:30:00

Runner 3
Average speed: 8.57 km/h
Average pace: 7:00 min/km
Distance    Time
5 km        00:35:00

1. Runner 1 - 00:25:00
2. Runner 2 - 00:30:00
3. Runner 3 - 00:35:00
Winner: Runner 1
