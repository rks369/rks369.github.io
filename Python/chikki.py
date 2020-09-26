import pyttsx3
import datetime
import pywhatkit as kitty
import speech_recognition as kan
import wikipedia
import webbrowser
import psutil

chikki = pyttsx3.init('sapi5')
voices = chikki.getProperty('voices')
chikki.setProperty('voice', voices[1].id)


def speak(audio):
    chikki.say(audio)
    chikki.runAndWait()  # Without this command, speech will not be audible to us.


def takeCommand():
    # It takes microphone input from the user and returns string output

    sun = kan.Recognizer()
    with kan.Microphone() as source:
        print("Listening...")
        sun.pause_threshold = 1
        audio = sun.listen(source)
    try:
        print("Recognizing...")
        command = sun.recognize_google(audio, language='en-in')  # Using google for voice recognition.
        print("User said: "+ command)  # User query will be printed.

    except Exception as e:
        print(e)
        print("Say that again please...")  # Say that again will be printed in case of improper voice
        return "None"  # None string will be returned
    return command


def wishme():
    hour = int(datetime.datetime.now().hour)
    if 0 <= hour < 12:
        speak("Good Morning!")
    elif 12 <= hour < 18:
        speak("Good Afternoon!")
    elif 18 <= hour <= 22:
        speak("Good Evening!")
    else:
        speak("Good Night!")

    speak("I am chikki Sir. Please tell me how may I help you")


if __name__ == "__main__":
    wishme()

    while True:

        commandline = takeCommand().lower()

        if 'wikipedia' in commandline:
            speak('Searching Wikipedia...')
            commandline = commandline.replace("wikipedia", "")
            results = wikipedia.summary(commandline, sentences=5)
            results = results.replace(".", ".\n")
            speak("According to Wikipedia")
            print(results)
            speak(results)

        elif 'play' in commandline:
            commandline = commandline.replace("youtube", "")
            commandline = commandline.replace(" ", "+")
            kitty.playonyt(commandline)

        elif 'google' in commandline:
            commandline = commandline.replace("google", "")
            commandline = commandline.replace(" ", "+")
            webbrowser.open("https://www.google.com/search?q=" + commandline)
        elif 'battery' in commandline:
            battery = psutil.sensors_battery()
            percent = str(battery.percent)
            speak("Your Device Has Been running On " + percent + "% Battery!!")

