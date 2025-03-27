
#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);

int	main(void)
{
	rush(2, 2);
	return (0);
}



/* edge case test


#include <stdio.h>

int main(void)
{
    printf("=== Testing Edge Cases for rush(x, y) ===\n");

    // Smallest possible grid
    printf("\nTest 1: rush(1, 1)\n");
    rush(1, 1);

    // Zero size (should output nothing)
    printf("\nTest 2: rush(0, 0)\n");
    rush(0, 0);

    printf("\nTest 3: rush(1, 0)\n");
    rush(1, 0);

    printf("\nTest 4: rush(0, 1)\n");
    rush(0, 1);

    // Single row
    printf("\nTest 5: rush(5, 1)\n");
    rush(5, 1);

    // Single column
    printf("\nTest 6: rush(1, 5)\n");
    rush(1, 5);

    // Smallest non-trivial rectangle
    printf("\nTest 7: rush(2, 1)\n");
    rush(2, 1);

    printf("\nTest 8: rush(1, 2)\n");
    rush(1, 2);

    // Border cases
    printf("\nTest 9: rush(2, 2)\n");
    rush(2, 2);

    printf("\nTest 10: rush(3, 3)\n");
    rush(3, 3);

    printf("\nTest 11: rush(3, 2)\n");
    rush(3, 2);

    printf("\nTest 12: rush(2, 3)\n");
    rush(2, 3);

    // Large grids (performance testing)
    printf("\nTest 13: rush(10, 10)\n");
    rush(10, 10);

    printf("\nTest 14: rush(100, 1)\n");
    rush(100, 1);

    printf("\nTest 15: rush(1, 100)\n");
    rush(1, 100);

    // Invalid inputs (should handle gracefully)
    printf("\nTest 16: rush(-5, 3)\n");
    rush(-5, 3);

    printf("\nTest 17: rush(3, -5)\n");
    rush(3, -5);

    printf("\nTest 18: rush(-3, -3)\n");
    rush(-3, -3);

    printf("\n=== All tests completed ===\n");

    return 0;
}
 */
