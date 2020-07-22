import pyttsx3
import datetime
import speech_recognition as sr
import wikipedia
import webbrowser

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[1].id)


def speak(audio):
    engine.say(audio)
    engine.runAndWait()  # Without this command, speech will not be audible to us.


def takeCommand():
    # It takes microphone input from the user and returns string output

    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        r.pause_threshold = 1
        audio = r.listen(source)
    try:
        print("Recognizing...")
        query = r.recognize_google(audio, language='en-in')  # Using google for voice recognition.
        print(f"User said: {query}\n")  # User query will be printed.

    except Exception as e:
        print(e)
        print("Say that again please...")  # Say that again will be printed in case of improper voice
        return "None"  # None string will be returned
    return query


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

    speak("I am Jarvis Sir. Please tell me how may I help you")


if __name__ == "__main__":
    wishme()

    while True:

        querys = takeCommand().lower()

        if 'wikipedia' or 'look for' in querys:  # if wikipedia found in the query then this block will be executed
            speak('Searching Wikipedia...')
            querys = querys.replace("wikipedia", "")
            querys = querys.replace("look for", "")
            results = wikipedia.summary(querys, sentences=5)
            results = results.replace(".", ".\n")
            speak("According to Wikipedia")
            print(results)
            speak(results)

        elif 'youtube' in querys:
            querys = querys.replace("youtube", "")
            querys = querys.replace(" ", "+")
            webbrowser.open("https://www.youtube.com/results?search_query="+querys)

        elif 'google' in querys:
            querys = querys.replace("google", "")
            querys = querys.replace(" ", "+")
            webbrowser.open("https://www.google.com/search?q="+querys)
