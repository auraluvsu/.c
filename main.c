#include "stdint.h"
#include "stdio.h"

typedef uint_fast8_t u8;
typedef uint_fast16_t u16;
typedef uint_fast32_t u32;
typedef uint_fast64_t u64;

typedef int_fast8_t i8;
typedef int_fast16_t i16;
typedef int_fast32_t i32;
typedef int_fast64_t i64;

typedef unsigned char byte;

typedef struct {
    const char* data;
    u64 len;
} string;

int main(void) {
    string foo;
    printf("Hello\n");
    return 0;
}
