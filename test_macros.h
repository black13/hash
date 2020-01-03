#define START_TEST(x)  int x() { int rc = 1;
#define END_TEST return rc; }
#define fail_unless(c,m) if (! (c)) { printf("* failed: %s at %s:%d\n", (m), __FILE__, __LINE__); rc = 0; }
#define fail_unless2(c,m,f,...) if (! (c)) { printf("* failed: %s at %s:%d " f "\n", (m), __FILE__, __LINE__, __VA_ARGS__); rc = 0; }
#define ok(c,m) if ((c)) { printf("ok %d - %s\n", _testnum++, m); } else { printf("failed %d - %s\n", _testnum++, m); }