import psutil

battery = psutil.sensors_battery()
percent = str(battery.percent)

print("Your Device Has Been running On " + percent + "% Battery!!")

