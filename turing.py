print("Simple Turing Test Chatbot")
print("Type 'exit' to stop the program")

while True:

    user_input = input("\nAsk something: ").lower()

    if "exit" in user_input:
        print("AI: Goodbye!")
        break

    elif "hello" in user_input or "hi" in user_input:
        print("AI: Hello! Nice to talk with you.")

    elif "name" in user_input:
        print("AI: I am a simple AI chatbot.")

    elif "weather" in user_input:
        print("AI: The weather seems pleasant today.")

    elif "how are you" in user_input:
        print("AI: I am functioning perfectly!")

    else:
        print("AI: Sorry, I don't understand that yet.")