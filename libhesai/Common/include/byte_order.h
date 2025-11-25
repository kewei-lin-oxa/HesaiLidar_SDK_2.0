#ifndef HESAI_BYTE_ORDER_H
#define HESAI_BYTE_ORDER_H

#ifdef __APPLE__
#include <arpa/inet.h> // For htonl
#define htobe32(x) htonl(x)
// Add other byte swap definitions if needed later, e.g. for 16-bit or 64-bit
#endif // __APPLE__

#endif // HESAI_BYTE_ORDER_H
