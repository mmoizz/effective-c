// Chapter 10

static int i; // explicit internal linkage (only to file scope entities)
extern void foo(int j) // explicit external linkage
{
    // j has no linkage as it is a function parameter
} 

int main()
{
    // Elements can have external, internal, or no linkage
    // External - Identifiers refer to the same entity
    // Interal - Identifiers refer to different entities
    // No - Identifiers refer to unique entities
}