#ifndef _DOWNLOAD_H_
#define _DOWNLOAD_H_

#define AMS_URL     "https://api.github.com/repos/Vampitech/NeXT/releases"

int downloadFile(const char *url, const char *output, int api_mode);

#endif
