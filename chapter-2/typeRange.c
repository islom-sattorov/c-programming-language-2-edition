#include <float.h>
#include <limits.h>
#include <stdio.h>

int main() {
  // ================= CHAR =================
  printf("=== CHAR ===\n");
  printf("CHAR_BIT: %d\n", CHAR_BIT);
  printf("CHAR_MAX: %d\tCHAR_MIN: %d\n", CHAR_MAX, CHAR_MIN);
  printf("SCHAR_MAX: %d\tSCHAR_MIN: %d\n", SCHAR_MAX, SCHAR_MIN);
  printf("UCHAR_MAX: %u\n\n", UCHAR_MAX);

  // ================= SHORT =================
  printf("=== SHORT ===\n");
  printf("SHRT_MAX: %d\tSHRT_MIN: %d\n", SHRT_MAX, SHRT_MIN);
  printf("USHRT_MAX: %u\n\n", USHRT_MAX);

  // ================= INT =================
  printf("=== INT ===\n");
  printf("INT_MAX: %d\tINT_MIN: %d\n", INT_MAX, INT_MIN);
  printf("UINT_MAX: %u\n\n", UINT_MAX);

  // ================= LONG =================
  printf("=== LONG ===\n");
  printf("LONG_MAX: %ld\tLONG_MIN: %ld\n", LONG_MAX, LONG_MIN);
  printf("ULONG_MAX: %lu\n\n", ULONG_MAX);

  // ================= LONG LONG =================
  printf("=== LONG LONG ===\n");
  printf("LLONG_MAX: %lld\tLLONG_MIN: %lld\n", LLONG_MAX, LLONG_MIN);
  printf("ULLONG_MAX: %llu\n\n", ULLONG_MAX);

  // ================= SYSTEM CONSTANTS =================
  printf("=== SYSTEM CONSTANTS ===\n");
  printf("FILENAME_MAX: %d\n", FILENAME_MAX);
  printf("FOPEN_MAX: %d\n", FOPEN_MAX);
  printf("MB_LEN_MAX: %d\n\n", MB_LEN_MAX);

  // ================= FLOAT =================
  printf("=== FLOAT ===\n");
  printf("FLT_MAX: %e\tFLT_MIN: %e\n", FLT_MAX, FLT_MIN);
  printf("FLT_DIG: %d\tFLT_EPSILON: %e\n", FLT_DIG, FLT_EPSILON);
  printf("FLT_MAX_EXP: %d\tFLT_MIN_EXP: %d\n", FLT_MAX_EXP, FLT_MIN_EXP);
  printf("FLT_MAX_10_EXP: %d\tFLT_MIN_10_EXP: %d\n\n", FLT_MAX_10_EXP,
         FLT_MIN_10_EXP);

  // ================= DOUBLE =================
  printf("=== DOUBLE ===\n");
  printf("DBL_MAX: %e\tDBL_MIN: %e\n", DBL_MAX, DBL_MIN);
  printf("DBL_DIG: %d\tDBL_EPSILON: %e\n", DBL_DIG, DBL_EPSILON);
  printf("DBL_MAX_EXP: %d\tDBL_MIN_EXP: %d\n", DBL_MAX_EXP, DBL_MIN_EXP);
  printf("DBL_MAX_10_EXP: %d\tDBL_MIN_10_EXP: %d\n\n", DBL_MAX_10_EXP,
         DBL_MIN_10_EXP);

  // ================= LONG DOUBLE =================
  printf("=== LONG DOUBLE ===\n");
  printf("LDBL_MAX: %Le\tLDBL_MIN: %Le\n", LDBL_MAX, LDBL_MIN);
  printf("LDBL_DIG: %d\tLDBL_EPSILON: %Le\n", LDBL_DIG, LDBL_EPSILON);
  printf("LDBL_MAX_EXP: %d\tLDBL_MIN_EXP: %d\n", LDBL_MAX_EXP, LDBL_MIN_EXP);
  printf("LDBL_MAX_10_EXP: %d\tLDBL_MIN_10_EXP: %d\n", LDBL_MAX_10_EXP,
         LDBL_MIN_10_EXP);

  return 0;
}
