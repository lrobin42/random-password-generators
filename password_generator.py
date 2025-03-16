import string
from random import randint
from typing import Literal, LiteralString

def generate_random_password(
    capital_letters=True, numbers=True, symbols=True, password_length=25) -> LiteralString:
    capital_chars: LiteralString = string.ascii_uppercase
    lowercase_chars: LiteralString = string.ascii_lowercase
    number_chars = "0123456789"
    symbol_chars = "!@#$%^&*()_+=-\\|]{}'\",<.?>;:"
    password: Literal[""] = ""

    password_characters: LiteralString = lowercase_chars
    if capital_letters:
        password_characters += capital_chars

    if numbers:
        password_characters += number_chars

    if symbols:
        password_characters += symbol_chars

    for i in range(password_length):
        password += password_characters[randint(0, len(password_characters))]

    return password
