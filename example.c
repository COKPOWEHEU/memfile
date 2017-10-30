#include <stdio.h>
#include "memfile.h"

int main(int argc, char **argv){
  struct memfile_t pf;
  char res;
  res = memfile_create("mapped_file.txt", MEMFILE_READWRITE | MEMFILE_FASTREWRITE, 100, &pf);
  if(res != MEMFILE_OK){
    printf("some error\n"); return 1;
  }

  sprintf(pf.data, "test\n");
  
  memfile_close(&pf);
}
