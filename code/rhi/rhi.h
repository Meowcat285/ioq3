#ifndef __RHI_H
#define __RHI_H

// Forward declarations
typedef struct RHI_Device RHI_Device;
typedef struct RHI_CommandList RHI_CommandList;
typedef struct RHI_Texture RHI_Texture;
typedef struct RHI_Buffer RHI_Buffer;

// RHI_Init creates a new device for the given backend
RHI_Device* RHI_Init(const char* backend, void* rimp);

// RHI_Shutdown destroys the device
void RHI_Shutdown(RHI_Device* device);

#endif // __RHI_H
