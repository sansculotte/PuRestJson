/*
Author:
Thomas Mayer <thomas@residuum.org>

Copyright (c) 2011-2013 Thomas Mayer

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

*/

#include "m_pd.h"

#define PUREST_JSON_VERSION "0.15.0"
#define PUREST_JSON_VERSION_MAJOR 0
#define PUREST_JSON_VERSION_MINOR 15
#define PUREST_JSON_VERSION_PATCH 0

#define REQUEST_TYPE_LEN 7

#ifdef _WIN32
	#define APIEXPORT __declspec(dllexport)
	#define APICALL __cdecl
	#define MYERROR(...) post(__VA_ARGS__)
	#define NEEDS_CERT_PATH 1
#else 
	#define APIEXPORT
	#define APICALL
	#define MYERROR(...) error(__VA_ARGS__)
#endif

/* [rest] */
APIEXPORT void APICALL rest_setup(void);

/* [oauth] */
APIEXPORT void APICALL oauth_setup(void);

/* [json-encode] */
APIEXPORT void APICALL setup_json0x2dencode(void);

/* [json-decode] */
APIEXPORT void APICALL setup_json0x2ddecode(void);

/* [urlparams] */
APIEXPORT void APICALL urlparams_setup(void);

/* general */ 
APIEXPORT void APICALL purest_json_setup(void);
