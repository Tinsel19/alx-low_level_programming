#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
size_t listint_len(const listint_t *h)
{
const listint_t *cursor = h;
size_t count = 0;
while (cursor != NULL)
{
count += 1;
cursor = cursor->next;
}
return (count);
}
