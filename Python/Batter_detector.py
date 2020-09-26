import psutil
import pyttsx3


chikki = pyttsx3.init('sapi5')
voices = chikki.getProperty('voices')
chikki.setProperty('voice', voices[1].id)


def speak(audio):
    chikki.say(audio)
    chikki.runAndWait()

battery = psutil.sensors_battery()
percent = str(battery.percent)

print("Your Device Has Been running On " + percent + "% Battery!!")

speak("Your Device Has Been running On " + percent + "% Battery!!")


