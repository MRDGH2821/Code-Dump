# Division:C  Roll no.:42
# To print calander of a month
import calendar  # This module has all general calendar related functions
# TextCalendar class is invoked from the module calendar
cal = calendar.TextCalendar(calendar.SUNDAY)
a = int(input("Enter Year:"))  # user inputs year
print(cal.formatyear(a))  # formatyear() prints the calendar of the given year
