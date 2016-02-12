/* xml/_interface.h
 *
 * This file contains generated code. Do not modify!
 */

#if BUILDING_XML && defined _MSC_VER
#define XML_DLL_EXPORTED __declspec(dllexport)
#elif BUILDING_XML
#define XML_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define XML_EXPORT __declspec(dllimport)
#else
#define XML_EXPORT
#endif

