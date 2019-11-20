_Pragma("once")

#define DBGDUMP(...) \
{ \
    printf("%s\n%s,%d\n", __FILE__, __func__, __LINE__); \
    printf(__VA_ARGS__); \
}