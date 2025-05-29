/*
📦 MISSION 01 — Declaration and Initialization

Objective:
Create a program that demonstrates the declaration and initialization of various variable types:
int, float, double, and char array (string). Each section includes embedded documentation.

Imperial Theme: The inquisitor enters their data for archival in the Great Cogitator of Terra.

*/

#include <stdio.h>

int main() {
    // 🔢 Integer: Used for whole numbers
    int intNum;

    // 🌊 Float: Real numbers with decimal points (less precision)
    float floatNum;

    // 💎 Double: Like float, but with more precision (takes more memory)
    double doubleNum;

    // 🔤 Char array: Used to store strings (sequences of characters)
    char name[50];

    // 🧠 Lore Dump — Understanding Types
    printf("🔎 DATA TYPE MANUAL:\n\n");

    printf("🧮 int – Whole numbers (e.g., 42, -7, 0).\n");
    printf("🌊 float – Decimal numbers with limited precision (e.g., 3.14, -2.71).\n");
    printf("💎 double – Decimal numbers with double the precision of float.\n");
    printf("🔤 char[] – Sequence of characters (a string like 'Aquila').\n\n");

    // 🛂 Begin Data Collection
    printf("⚠️  IMPERIAL CENSUS INITIATED ⚠️\n");
    printf("Enter your name as Inquisitor: ");
    scanf(" %[^\n]", name); // Reads a full line (up to newline)

    printf("Enter your age: ");
    scanf("%d", &intNum); // Reads integer

    printf("Enter your height in meters (e.g., 1.75): ");
    scanf("%f", &floatNum); // Reads float

    printf("Enter your weight in kilograms (e.g., 70.5): ");
    scanf("%lf", &doubleNum); // Reads double

    // 🧾 Final Report
    printf("\n📜 IMPERIAL RECORD COMPLETED\n");
    printf("🧾 Name: %s — Registered as candidate for the service of the Throne.\n", name);
    printf("📅 Age: %d — Will be reduced by 1 year upon indoctrination.\n", intNum);
    printf("📏 Height: %.2f meters — Deemed irrelevant.\n", floatNum);
    printf("⚖️  Weight: %.2lf kg — Subject to reduction due to rations.\n", doubleNum);

    return 0;
}
