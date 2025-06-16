# Credit Card Validator

This is a simple C++ console application that validates credit card numbers using the Luhn algorithm and identifies the card type (Visa, Mastercard, American Express, etc.) based on the first digit.

## Features

- **Validates credit card numbers** using the Luhn algorithm.
- **Detects card type** (Visa, Mastercard, American Express, Discover, Airlines, or Unknown).
- **User-friendly prompts** for repeated testing.
- **Input validation** for non-digit characters.

## How to Use

1. **Compile the code** using a C++ compiler:
    ```sh
    g++ creditcardvalidator.cpp -o creditcardvalidator
    ```

2. **Run the program**:
    ```sh
    ./creditcardvalidator
    ```

3. **Follow the prompts**:
    - Enter your credit card number when asked.
    - The program will tell you if the card is valid and display its type.
    - You can choose to test another card or exit.

## Example Output

```
Hello Enter Your Your Card Number: 4111111111111111
The Credit Card Is Valid
The Card Type Is: VISA

Would You Like To Test Again?
1. Yes
2. No
 Enter option: 2

Thank You For Validating Your Credit Card Let's Hope You Got The Best Experience.
Exiting Program...
```

## Card Type Detection

- **1**: Airlines
- **2**: Mastercard
- **3**: American Express
- **4**: VISA
- **5**: Mastercard
- **6**: Discover
- **Other**: Unknown

## Notes

- The program only checks the first digit for card type, which is a simplification.
- The Luhn algorithm is used for validation.
- Input is checked for non-digit characters.

---

**Author:** _Boitumelo_
