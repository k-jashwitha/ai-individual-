import random
import string

# Generate CAPTCHA (letters + numbers)
generated_captcha = ""

for i in range(5):
    if random.randint(0,1) == 0:
        generated_captcha += random.choice(string.ascii_uppercase)  # letter
    else:
        generated_captcha += random.choice(string.digits)           # digit

print("Generated CAPTCHA:", generated_captcha)

attempt = 0

while attempt < 3:

    user_input = input("Enter the CAPTCHA: ")

    if user_input == generated_captcha:
        print("Access Granted! You are verified as human.")
        break
    else:
        print("Incorrect CAPTCHA. Try again.")
        attempt += 1

if attempt == 3:
    print("Access Blocked! Too many incorrect attempts.")