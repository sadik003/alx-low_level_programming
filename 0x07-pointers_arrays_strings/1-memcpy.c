/*
 * _memcpy - this function copy from one memory area to another
 * @dest: destination memory area
 * @scr: memory address to copy from
 * @n: data to be copied
 *
 * Return:dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                dest[i] = src[i];
        }
        return (dest);
}

