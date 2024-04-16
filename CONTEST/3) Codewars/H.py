def week_day(n):
    week_days = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]
    day_index = (n-1) % 7
    return week_days[day_index]

n = int(input())

print(week_day(n))
