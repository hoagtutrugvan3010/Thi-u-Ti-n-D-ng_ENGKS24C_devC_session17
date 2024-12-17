#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int len = strlen(str);
    char* start = str;
    char* end = str + len - 1;
    char temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int countWords(char* str) {
    int count = 0, inWord = 0;

    while (*str) {
        if (*str != ' ' && *str != '\t' && *str != '\n') {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
        str++;
    }
    return count;
}
void toUpperCase(char* str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') { 
            *str = *str - 32;            
        }
        str++;
    }
}
void concatenateStrings(char* dest, char* src) {
    while (*dest) dest++; 
    while (*src) {
        *dest = *src; 
        dest++;
        src++;
    }
    *dest = '\0'; 
}

int main() {
    char str1[1000] = ""; 
    char str2[1000] = ""; 
    char temp[1000];      
    int choice;          
    int isInput = 0;     

    do {
        printf("\n=== MENU ===\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Nhap vao chuoi khac va them chuoi do vao chuoi ban dau\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1: {
                printf("Nhap vao chuoi: ");
                gets(str1);
                isInput = 1;
                break;
            }
            case 2: {
                if (!isInput) {
                    printf("Ban chua nhap chuoi. Vui long nhap chuoi truoc!\n");
                } else {
                    strcpy(temp, str1); 
                    reverseString(temp);
                    printf("Chuoi dao nguoc la: %s\n", temp);
                }
                break;
            }
            case 3: {
                if (!isInput) {
                    printf("Ban chua nhap chuoi. Vui long nhap chuoi truoc!\n");
                } else {
                    int words = countWords(str1);
                    printf("So luong tu trong chuoi: %d\n", words);
                }
                break;
            }
            case 4: {
                if (!isInput) {
                    printf("Ban chua nhap chuoi. Vui long nhap chuoi truoc!\n");
                } else {
                    printf("Nhap vao chuoi khac: ");
                    gets(str2);
                    int len1 = strlen(str1);
                    int len2 = strlen(str2);

                    if (len1 > len2) {
                        printf("Chuoi moi ngan hon chuoi ban dau.\n");
                    } else if (len1 < len2) {
                        printf("Chuoi moi dai hon chuoi ban dau.\n");
                    } else {
                        printf("Hai chuoi co do dai bang nhau.\n");
                    }
                }
                break;
            }
            case 5: {
                if (!isInput) {
                    printf("Ban chua nhap chuoi. Vui long nhap chuoi truoc!\n");
                } else {
                    toUpperCase(str1);
                    printf("Chuoi sau khi in hoa tat ca chu cai: %s\n", str1);
                }
                break;
            }
            case 6: {
                if (!isInput) {
                    printf("Ban chua nhap chuoi. Vui long nhap chuoi truoc!\n");
                } else {
                    printf("Nhap vao chuoi khac: ");
                    gets(str2);
                    concatenateStrings(str1, str2);
                    printf("Chuoi sau khi noi: %s\n", str1);
                }
                break;
            }
            case 7: {
                printf("Thoat chuong trinh. Hen gap lai!\n");
                break;
            }
            default: {
                printf("Lua chon khong hop le. Vui long thu lai!\n");
                break;
            }
        }
    } while (choice != 7); 

    return 0;
}

