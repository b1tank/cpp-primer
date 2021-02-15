int main() {
    int i = 0;

    double *dp = &i; // invalid due to mismatched types
    int *ip = i; // invalid
    int *p = &i; // valid
    return 0;
}
