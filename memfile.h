#ifndef __MEMFILE_H__
#define __MEMFILE_H__

#define MEMFILE_READ      0x01
#define MEMFILE_WRITE     0x02
#define MEMFILE_READWRITE (MEMFILE_READ | MEMFILE_WRITE)
#define MEMFILE_REWRITE   0x04

#define MEMFILE_OK    0
#define MEMFILE_EFILE 1
#define MEMFILE_EMEM  2
#define MEMFILE_EINP  3

struct memfile_t{
  void *intdata; // зависит от ОС
  void *data;    //область памяти, в которую отображается файл
};

char memfile_create(const char filename[], unsigned char flags, unsigned long size, struct memfile_t *res);
void memfile_close(struct memfile_t *mem);

#endif