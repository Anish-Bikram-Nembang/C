#include <stdio.h>
#include <stdint.h>
#include <string.h>

uint32_t hash_function(const unsigned char* str);
typedef struct{
    char name[50];
    int age;
}person;
int main() {
    int n, index, age;
    printf("Enter number of people:");
    scanf("%d", &n);
    person people[n + 10];
    char key[50];
    for (int i = 0; i < n; i ++) {
        printf("Enter your name: ");
        while(getchar() != '\n');
        fgets(key, sizeof(key), stdin);
        key[strcspn(key, "\n")] = '\0';
        printf("Enter your age: ");
        scanf("%d", &age);
        index = hash_function(key) % (n + 10);
        strcpy(people[index].name, key);
        people[index].age = age;
    }
    char target[50];
    printf("Whose age to look for? ");
    while(getchar() != '\n');
    fgets(target, sizeof(target), stdin);
    target[strcspn(target, "\n")] = '\0';
    index = hash_function(target) % (n + 10);
    printf("%d\n", people[index].age);
    return 0;
}
//DJB2 hash
uint32_t hash_function(const unsigned char* str) {
    uint32_t hash = 5381;
    int c;
    while((c = *str++))
        hash = ((hash << 5) + hash) + c;
    return hash;
}

