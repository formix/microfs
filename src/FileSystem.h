#ifndef FILE_SYSTEM_H
#define FILE_SYSYEM_H

#include <stdlib.h>
#include <stdio.h>
#include "Addressing.h"
#include "BlockSize.h"


struct FileSystem {
	uint8_t version;
	Addressing addressing;
	BlockSize blockSize;
};


#endif
