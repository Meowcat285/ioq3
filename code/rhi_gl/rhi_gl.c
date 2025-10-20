#include "../qcommon/q_shared.h"
#include "../renderercommon/tr_public.h"
#include "../rhi/rhi.h"
#include <stdlib.h>
#include <string.h>

struct RHI_Device {
    const char* backendName;
    refimport_t* ri;
};

RHI_Device* RHI_Init(const char* backend, void* rimp) {
    if (strcmp(backend, "opengl") != 0) {
        return NULL;
    }

    RHI_Device* device = (RHI_Device*)malloc(sizeof(RHI_Device));
    if (!device) {
        return NULL;
    }

    device->backendName = "OpenGL";
    device->ri = (refimport_t*)rimp;
    device->ri->Printf(PRINT_ALL, "RHI: Initialized OpenGL backend.\n");

    return device;
}

void RHI_Shutdown(RHI_Device* device) {
    if (device) {
        device->ri->Printf(PRINT_ALL, "RHI: Shutdown %s backend.\n", device->backendName);
        free(device);
    }
}
