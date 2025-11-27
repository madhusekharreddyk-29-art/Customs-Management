#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "customs_records.dat"

struct CustomsRecord {
    int itemID;
    char itemName[50];
    float itemValue;
    float dutyPercent;
    float dutyAmount;
};

/* Function prototypes */
void addRecord();
void viewRecords();
void searchRecord();
float calculateDuty(float value, float percent);

int main() {
    int choice;

    while (1) {
        printf("\n=====================================\n");
        printf("       CUSTOMS MANAGEMENT SYSTEM      \n");
        printf("=====================================\n");
        printf("1. Add New Record\n");
        printf("2. View All Records\n");
        printf("3. Search Record by Item ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addRecord(); break;
            case 2: viewRecords(); break;
            case 3: searchRecord(); break;
            case 4: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

/* Calculate customs duty */
float calculateDuty(float value, float percent) {
    return (value * percent) / 100.0;
}

/* Add a record */
void addRecord() {
    FILE *fp = fopen(FILE_NAME, "ab");
    if (!fp) {
        printf("Error opening file!\n");
        return;
    }

    struct CustomsRecord rec;

    printf("Enter Item ID: ");
    scanf("%d", &rec.itemID);

    printf("Enter Item Name: ");
    scanf("%s", rec.itemName);

    printf("Enter Item Value: ");
    scanf("%f", &rec.itemValue);

    printf("Enter Duty Percent: ");
    scanf("%f", &rec.dutyPercent);

    rec.dutyAmount = calculateDuty(rec.itemValue, rec.dutyPercent);

    fwrite(&rec, sizeof(rec), 1, fp);
    fclose(fp);

    printf("Record added successfully!\n");
}

/* View all records */
void viewRecords() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (!fp) {
        printf("No records found!\n");
        return;
    }

    struct CustomsRecord rec;

    printf("\n---- ALL CUSTOMS RECORDS ----\n");
    while (fread(&rec, sizeof(rec), 1, fp)) {
        printf("\nItem ID       : %d", rec.itemID);
        printf("\nItem Name     : %s", rec.itemName);
        printf("\nItem Value    : %.2f", rec.itemValue);
        printf("\nDuty Percent  : %.2f%%", rec.dutyPercent);
        printf("\nDuty Amount   : %.2f\n", rec.dutyAmount);
    }
    fclose(fp);
}

/* Search record by ID */
void searchRecord() {
    int id, found = 0;

    FILE *fp = fopen(FILE_NAME, "rb");
    if (!fp) {
        printf("No records found!\n");
        return;
    }

    printf("Enter Item ID to search: ");
    scanf("%d", &id);

    struct CustomsRecord rec;

    while (fread(&rec, sizeof(rec), 1, fp)) {
        if (rec.itemID == id) {
            printf("\nRecord Found:\n");
            printf("Item ID       : %d\n", rec.itemID);
            printf("Item Name     : %s\n", rec.itemName);
            printf("Item Value    : %.2f\n", rec.itemValue);
            printf("Duty Percent  : %.2f%%\n", rec.dutyPercent);
            printf("Duty Amount   : %.2f\n", rec.dutyAmount);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Record not found!\n");

    fclose(fp);
}
