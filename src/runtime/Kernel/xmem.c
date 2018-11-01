#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "xmem.h"


typedef struct MEMORYBLOCK {
  struct MEMORYBLOCK *next;
  char   memory[BLOCKSIZE];
} MemoryBlock;

int MemoryPosition;


MemoryBlock *EmptyBlock;
MemoryBlock *WorkingBlock;
MemoryBlock *FullBlock;
int MemoryPosition = BLOCKSIZE; /* Start with no block */

void *xmalloc(int size)
{
  void *new;
  if(MemoryPosition+size > BLOCKSIZE) {
    if(!EmptyBlock) {
      if(0==(EmptyBlock = (MemoryBlock *)malloc(sizeof(MemoryBlock)))) {
        fprintf(stderr,"Out of memory in xmalloc in profile.c\n");
        exit(-1);
      } else {
        EmptyBlock->next = 0;
      }
    }
    WorkingBlock = EmptyBlock;
    EmptyBlock = EmptyBlock->next;
    MemoryPosition = 0;
  }
  new = &WorkingBlock->memory[MemoryPosition];
  MemoryPosition += size;
  return new;
}

void xfree(void)
{
  MemoryBlock *mb;

  if(0 != (mb = FullBlock)) {
    while(mb->next)
      mb = mb->next;
    mb->next = EmptyBlock;
    EmptyBlock = FullBlock;
    FullBlock = 0;
  }
  if(WorkingBlock) {
    WorkingBlock->next = EmptyBlock;
    EmptyBlock = WorkingBlock;
    WorkingBlock = 0;
  }
  MemoryPosition = BLOCKSIZE;
}
