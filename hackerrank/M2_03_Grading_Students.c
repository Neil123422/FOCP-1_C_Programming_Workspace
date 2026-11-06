/* HackerRank - Grading Students
 * Submit: only the gradingStudents() function (HackerRank supplies main and I/O).
 */
#include <stdio.h>
#include <stdlib.h>

int* gradingStudents(int grades_count, int* grades, int* result_count) {
    *result_count = grades_count;
    int* result = (int*)malloc(grades_count * sizeof(int));
    for (int i = 0; i < grades_count; i++) {
        int g = grades[i];
        if (g >= 38 && g % 5 > 2)
            g += 5 - g % 5;      /* round up to next multiple of 5 */
        result[i] = g;
    }
    return result;
}

/* ---------- LOCAL TEST ONLY (VS Code): delete everything below this line when submitting to the online judge ---------- */
int main(void) {
    int n;
    scanf("%d", &n);
    int* grades = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &grades[i]);
    int count;
    int* res = gradingStudents(n, grades, &count);
    for (int i = 0; i < count; i++) printf("%d\n", res[i]);
    free(grades);
    free(res);
    return 0;
}
