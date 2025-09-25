---
# 🧪 Experiment 9 :- Pointer basics
📘 README: Programming Experiment – Pointers in C

---

🔢 Q1. Addition & Subtraction Using Pointers
✅ Aim

To perform addition and subtraction of two numbers using pointers in C.

📚 Theory

Pointers store the address of variables. You can access and manipulate values indirectly using dereferencing (*ptr). Performing arithmetic on values pointed by pointers is the same as performing it directly.

📐 Syntax
int a = 5, b = 3;
int *p1 = &a, *p2 = &b;
int sum = *p1 + *p2;
int diff = *p1 - *p2;

🧠 Logic

Declare two integers.

Create pointers pointing to their addresses.

Use dereferencing to perform arithmetic.

💻 Code
```cpp
#include <stdio.h>

int main() {
    int a, b;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    int sum = *p1 + *p2;
    int diff = *p1 - *p2;

    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", diff);

    return 0;
}
```

📌 Conclusion

Successfully used pointers to perform addition and subtraction of two numbers.

---

🔠 Q2. Code for String Using Pointer
✅ Aim

To manipulate and print a string using character pointers.

📚 Theory

In C, strings are arrays of characters ending with a null character (\0). A pointer can be used to iterate through each character of the string.

📐 Syntax
char *ptr = str;
while (*ptr != '\0') {
    printf("%c", *ptr);
    ptr++;
}

🧠 Logic

Declare a character array (string).

Use a pointer to traverse the string using a loop.

💻 Code
```cpp
#include <stdio.h>

int main() {
    char str[100];
    char *ptr;

    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str;

    printf("String using pointer: ");
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }

    printf("\n");
    return 0;
}
```

📌 Conclusion

Successfully printed a string using character pointer traversal.

---

🔁 Q3. Reversing an Array Using Pointers
✅ Aim

To reverse an array using pointers in C.

📚 Theory

An array can be accessed using pointers by incrementing and decrementing the base address. Swapping elements via pointers allows in-place reversal.

📐 Syntax
*(ptr + i)  // Access ith element using pointer

🧠 Logic

Use two pointers: one at the start and one at the end.

Swap values while moving the pointers toward each other.

💻 Code
```cpp
#include <stdio.h>

void reverse(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[100], n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverse(arr, n);

    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
```

📌 Conclusion

Successfully reversed an array using pointer manipulation.
